using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Data.SqlClient;
using University_Management_System;

using Uni;
namespace LoginPag
{
    public partial class Admin : Form
    {
        string sql = "";
        DataTable dt = new DataTable();
        connection_query dim = new connection_query();



        public Admin()
        {
            InitializeComponent();
        }

        private void Admin_Load(object sender, EventArgs e)
        {







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

        public void GetDeptCombo()
        {





            DataTable dt = dim.RetrieveData("select DeptId,DeptName from Departments");


            comboDept.DataSource = dt;
            comboDept.ValueMember = "DeptId";
            comboDept.DisplayMember = "DeptName";
            comboDept.SelectedItem = null;
            comboDept.Text = "---Select Department---";

        }



        public void GeComboForGride()
        {






            DataTable dt = dim.RetrieveData("select DeptId,DeptName from Departments");

            comboBox1.DataSource = dt;
            comboBox1.ValueMember = "DeptId";
            comboBox1.DisplayMember = "DeptName";
            comboBox1.SelectedItem = null;
            comboBox1.Text = "---Select Departments---";


        }



        public void DepartDataSave()
        {



            sql = "insert into Departments(DeptName) values ('" + textBox1.Text + "')";

            if (dim.ExecuteCommand(sql) > 0)
            {

                MessageBox.Show("Your Information has be send!");
                GetDeptCombo();
                textBox1.Clear();




            }


        }






        public void EmployeeDatasave()
        {


            int cardTypeId = 0;
            if (comboDept.SelectedIndex >= 0)
            {
                int.TryParse(comboDept.SelectedValue.ToString(), out cardTypeId);
            }
            sql = "Insert into Employees (EmpName,Desigination,JoiningDate,Salary,DeptId) values ('" + txtName.Text + "','" + txtDesig.Text + "','" + txtJoinDate.Text + "','" + txtSalary.Text + "','" + cardTypeId + "')";


            if (dim.ExecuteCommand(sql) > 0)
            {
                MessageBox.Show("Your Employee Data Has been Submitted!");
                GeComboForGride();

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

        public void JoinWithComBoGride()
        {



            int cardTypeId = 0;
            if (comboBox1.SelectedIndex >= 0)
            {
                int.TryParse(comboBox1.SelectedValue.ToString(), out cardTypeId);
            }

            DataTable dt = dim.RetrieveData("SELECT em.EmployeeId,d.DeptName,em.EmpName,em.Desigination,em.JoiningDate,em.Salary  FROM Employees em " +
                  " INNER JOIN Departments d  ON em.DeptId =d.DeptId " +
                  "where em.DeptId='" + cardTypeId + "'");

            if (dt.Rows.Count > 0)
            {
                dataGridView1.DataSource = dt;
            }


        }



        public void SerachData()
        {




            DataTable dt = dim.RetrieveData("select * from Employees where EmployeeId like '%" + textBox2.Text + "'  ");


            if (dt.Rows.Count > 0)
            {
                dataGridView1.DataSource = dt;


            }
            else
            {
                MessageBox.Show("Not Found In Database!");
                textBox2.Clear();
            }


        }
        private void button9_Click(object sender, EventArgs e)
        {
            SerachData();

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

            GeComboForGride();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }



        private void button7_Click(object sender, EventArgs e)
        {

            GeComboForGride();
        }



    }
}



