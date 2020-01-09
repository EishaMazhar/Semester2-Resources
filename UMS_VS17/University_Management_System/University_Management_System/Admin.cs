using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Data.SqlClient;


namespace LoginPag
{
    public partial class Admin :Form
    {
        string sql = "";
        
        SqlConnection con = new SqlConnection();

        SqlCommand com = new SqlCommand();
        public Admin()
        {
            InitializeComponent();
        }

        private void Admin_Load(object sender, EventArgs e)
        {
            
           // con.ConnectionString = @"Data Source=HAFIZ-PC\SQLEXPRESS;Initial Catalog=UniverData;Integrated Security=True";
            GeComboForGride();
           
            GetDeptCombo();

            label3.Visible = false;

            label4.Visible = false;

            label5.Visible = false;
            label6.Visible = false;
            label7.Visible = false;
            comboDept.Visible = false;

            txtName.Visible = false;
            txtJoinDate.Visible = false;
            txtSalary.Visible = false;
            txtDesig.Visible = false;

            button5.Visible = false;
            button6.Visible = false;


            label2.Visible = false;
            textBox1.Visible = false;
            button3.Visible = false;
            button4.Visible = false;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            label2.Visible = true;
            textBox1.Visible = true;
            button3.Visible = true;
            button4.Visible = true;
        }

        private void button3_Click(object sender, EventArgs e)
        {

            label2.Visible = false;
            textBox1.Visible = false;
            button3.Visible = false;
            button4.Visible = false;
            
        }

        public void GetDeptCombo() {

            SqlConnection con = new SqlConnection(@"Data Source=HAFIZ-PC\SQLEXPRESS;Initial Catalog=UniversityData;Integrated Security=True");
            con.Open();

           
        sql="select DeptId,DeptName from Departments ";
        SqlCommand cmd = new SqlCommand(sql,con);

        SqlDataAdapter da = new SqlDataAdapter(com);
        DataTable dt = new DataTable();
             da.Fill(dt);

            comboDept.ValueMember = "DeptId";
            comboDept.DisplayMember = "DeptName";
            comboDept.SelectedItem = null;
            comboDept.Text = "---Select Departments---";
        
        
        }



        public void GeComboForGride()
        {

            SqlConnection con = new SqlConnection(@"Data Source=HAFIZ-PC\SQLEXPRESS;Initial Catalog=UniversityData;Integrated Security=True");
            con.Open();


            string sql = "select DeptId,DeptName from Departments";
            com = new SqlCommand(sql, con);

            SqlDataAdapter sda = new SqlDataAdapter(com);

            DataTable dt = new DataTable();
           sda.Fill(dt);
            comboBox1.DataSource = dt;
            comboBox1.ValueMember = "DeptId";
            comboBox1.DisplayMember = "DeptName";
            comboBox1.SelectedItem = null;
            comboBox1.Text = "---Select Departments---";


        }



        public void DepartDataSave() {

            SqlConnection con = new SqlConnection(@"Data Source=HAFIZ-PC\SQLEXPRESS;Initial Catalog=UniversityData;Integrated Security=True");
            con.Open();

           // sql = "select * from Departments";
           //SqlCommand cmd = new SqlCommand(sql, con);
           // DataTable dt = new DataTable();
           // dt.Load(cmd.ExecuteReader());
           // DataRow[] dr = dt.Select("DeptName='" + textBox1.Text + "'");
           // if (dr.Length >= 0)
           // {
           //     MessageBox.Show("This Depart Name Is Already Exist plz use auther Depart Name");
           //     textBox1.Text = "";
           //     return ;

           // }
            
            
            SqlCommand com = new SqlCommand("insert into Departments(DeptName) values ('" + textBox1.Text + "')", con);

            if (com.ExecuteNonQuery() > 0)
            {

                MessageBox.Show("Your Information has be send!");
                GetDeptCombo();
                textBox1.Clear();


                con.Close();
            
            }

           
          
        
        
        }
        public void UpdateData()
        {
            SqlConnection con = new SqlConnection(@"Data Source=HAFIZ-PC\SQLEXPRESS;Initial Catalog=UniversityData;Integrated Security=True");
            con.Open();
            sql = "Update Employees set EmpName='" + txtEmpName.Text + "',Desigination='" + txtdes.Text + "',JoiningDate='" + txtdate.Text + "',Salary='" + txtsal.Text + "' where EmployeeId='" + txtEmpId.Text + "'";
            SqlCommand cmd = new SqlCommand(sql,con);
            if (com.ExecuteNonQuery() > 0)
            {
                MessageBox.Show("Your Employee Data Has been Submitted!");
                GeComboForGride();
                con.Close();
                comboDept.SelectedIndex = -1;
                txtDesig.Clear();
                txtJoinDate.Clear();
                txtSalary.Clear();
                txtName.Clear();

            }
            else
            {

                MessageBox.Show("Error Found!");


            }
        }


        public void EmployeeDatasave() {

            SqlConnection con = new SqlConnection(@"Data Source=HAFIZ-PC\SQLEXPRESS;Initial Catalog=UniversityData;Integrated Security=True");
            con.Open();

            int cardTypeId = 0;
            if (comboDept.SelectedIndex >= 0)
            {
                int.TryParse(comboDept.SelectedValue.ToString(), out cardTypeId);
            }
            com = new SqlCommand("Insert into Employees (EmpName,Desigination,JoiningDate,Salary,DeptId) values ('" + txtName.Text + "','" + txtDesig.Text + "','" + txtJoinDate.Text + "','" + txtSalary.Text + "','" + cardTypeId + "')", con);


            if (com.ExecuteNonQuery() > 0)
            {
                MessageBox.Show("Your Employee Data Has been Submitted!");
                GeComboForGride();
                con.Close();
                comboDept.SelectedIndex = -1;
                txtDesig.Clear();
                txtJoinDate.Clear();
                txtSalary.Clear();
                txtName.Clear();

            }

            else
            {

                MessageBox.Show("Error Found");

            }

          
        
        }

        public void JoinWithComBoGride() {




            SqlConnection con = new SqlConnection(@"Data Source=HAFIZ-PC\SQLEXPRESS;Initial Catalog=UniversityData;Integrated Security=True");
            con.Open();

            int cardTypeId = 0;
            if (comboBox1.SelectedIndex >= 0)
            {
                int.TryParse(comboBox1.SelectedValue.ToString(), out cardTypeId);
            }

            com = new SqlCommand("SELECT em.EmployeeId,d.DeptName,em.EmpName,em.Desigination,em.JoiningDate,em.Salary  FROM Employees em " +
                  " INNER JOIN Departments d  ON em.DeptId =d.DeptId " +
                  "where em.DeptId='" + cardTypeId + "'", con);
            SqlDataAdapter da = new SqlDataAdapter(com);
            DataTable dt = new DataTable();
            da.Fill(dt);
            if (dt.Rows.Count > 0)
            {
                dataGridView1.DataSource = dt;
            }
        
        
        }


        public void DeleteData() {
            SqlConnection con = new SqlConnection(@"Data Source=HAFIZ-PC\SQLEXPRESS;Initial Catalog=UniversityData;Integrated Security=True");
            con.Open();
            sql = "Delete From Employees where EmployeeId= "+dataGridView1.CurrentRow.Cells[0].Value.ToString();
            SqlCommand cmd = new SqlCommand(sql,con);
            if (com.ExecuteNonQuery() > 0)
            {
                MessageBox.Show("Your Employee Data Has been Deleted!");
                GeComboForGride();
                con.Close();
                comboDept.SelectedIndex = -1;
                txtDesig.Clear();
                txtJoinDate.Clear();
                txtSalary.Clear();
                txtName.Clear();

            }

        
        
        
        
        }





        private void button2_Click(object sender, EventArgs e)
        {
            label3.Visible = true;

            label4.Visible = true;

            label5.Visible = true;
            label6.Visible = true;
            label7.Visible = true;
            comboDept.Visible = true;

            txtName.Visible = true;
            txtJoinDate.Visible = true;
            txtSalary.Visible = true;
            txtDesig.Visible = true;

            button5.Visible = true;
            button6.Visible = true;


        }

        private void button6_Click(object sender, EventArgs e)
        {

            label3.Visible = false;

            label4.Visible = false;

            label5.Visible = false;
            label6.Visible = false;
            label7.Visible = false;
            comboDept.Visible = false;

            txtName.Visible = false;
            txtJoinDate.Visible = false;
            txtSalary.Visible = false;
            txtDesig.Visible = false;

            button5.Visible = false;
            button6.Visible = false;
        }

        private void dataGridView1_CellClick(object sender, DataGridViewCellEventArgs e)
        {

            txtEmpId.Text = dataGridView1.Rows[e.RowIndex].Cells[0].Value.ToString();

            txtDptName.Text = dataGridView1.Rows[e.RowIndex].Cells[1].Value.ToString();

            txtEmpName.Text = dataGridView1.Rows[e.RowIndex].Cells[2].Value.ToString();
            txtdes.Text = dataGridView1.Rows[e.RowIndex].Cells[3].Value.ToString();
            txtdate.Text = dataGridView1.Rows[e.RowIndex].Cells[4].Value.ToString();
            txtsal.Text = dataGridView1.Rows[e.RowIndex].Cells[5].Value.ToString();

        }


        private void button4_Click(object sender, EventArgs e)
        {
            DepartDataSave();

        
        }

        private void button5_Click(object sender, EventArgs e)
        {
            EmployeeDatasave();
                
           

        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            JoinWithComBoGride();
        }
       


        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void button8_Click(object sender, EventArgs e)
        {
            UpdateData();
            GeComboForGride();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void button9_Click(object sender, EventArgs e)
        {
            SqlConnection con = new SqlConnection(@"Data Source=.;Initial Catalog=UniverData;Integrated Security=True");

            con.Open();

            com = new SqlCommand("select * from Employees where EmployeeId like '%"+textBox2.Text+"'  ",con);

            SqlDataAdapter sda = new SqlDataAdapter(com);
            DataTable dt = new DataTable();
            sda.Fill(dt);
            if (dt.Rows.Count > 0)
            {
                dataGridView1.DataSource = dt;


            }
            else {
                MessageBox.Show("Not Founding In Database!");
                textBox2.Clear(); 
            }
        }

        private void button7_Click(object sender, EventArgs e)
        {
            DeleteData();
            GeComboForGride();
        }

       

    }
}



