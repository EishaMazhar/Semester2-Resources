using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Data.SqlClient;
using Uni;

namespace University_Management_System
{
    public partial class StdReg : Form
    {
        string sql = "";
        //SqlCommand com=new SqlCommand();
        connection_query dim = new connection_query();

        public StdReg()
        {
            InitializeComponent();
        }
        private void logger(string msg)
        {

            textBox1.Text += DateTime.Now.ToShortTimeString() + ": " + msg + "\r\n";
            textBox1.SelectionStart = textBox1.Text.Length;
            textBox1.ScrollToCaret();
            textBox1.Refresh();

        }


        public void GetComboCountry()
        {

            DataTable dt = dim.RetrieveData("Select CountryId, CountryName From Country ");




            comboCountry.DataSource = dt;
            comboCountry.DisplayMember = "CountryName";
            comboCountry.ValueMember = "CountryId";
            comboCountry.SelectedItem = null;
            comboCountry.Text = "---Select Country Name--";



        }

        public void CountryToCityRelation()
        {
            int cardTypeId = 0;
            if (comboCountry.SelectedIndex >= 0)
            {
                int.TryParse(comboCountry.SelectedValue.ToString(), out cardTypeId);
            }

            DataTable dt = dim.RetrieveData("select CityId,CityName from City where CountryId= '" + cardTypeId + "'");

            comboCity.DataSource = dt;
            comboCity.DisplayMember = "CityName";
            comboCity.ValueMember = "CityId";


        }


        public void Getstd()
        {
            DataTable dt = dim.RetrieveData("Select StdId, FName, Father,Email,Cnic,DOB,Country,City,Semister,Religion,Martial,Phone From StdRegistration ");
            dataGridView1.DataSource = dt;



        }






        public void InsertStdData()
        {



            if (string.IsNullOrEmpty(txtFname.Text))
            {
                MessageBox.Show("You Must InPut First Name");
                return;
            }







            sql = "insert into StdRegistration(FName,Father,Email,Cnic,DOB,Country,City,Semister,Religion,Martial,Phone,DateTime) values";
            sql += " ('" + txtFname.Text + "','" + txtFather.Text + "','" + txtEmail.Text + "','" + txtCnic.Text + "' , '" + txtDob.Text + "','" + comboCountry.Text + "' , '" + comboCity.Text + "' , '" + comboSemister.SelectedItem + "','" + comboReligion.SelectedItem + "','" + comboMartial.SelectedItem + "','" + txtPhone.Text + "',GetDate())";

            if (dim.ExecuteCommand(sql) > 0)
            {
                this.logger("Data file processed successfully!");

                txtFname.Clear();
                txtDob.Clear();
                txtEmail.Clear();
                txtPhone.Clear();
                txtCnic.Clear();
                comboCity.SelectedIndex = -1;
                txtFather.Clear();
                comboCountry.SelectedIndex = -1;
                comboMartial.SelectedIndex = -1;
                comboReligion.SelectedIndex = -1;
                comboCity.SelectedIndex = -1;
                Getstd();


            }
            else
            {

                this.logger("Error Found!");

            }






        }


        public void UpdatData()
        {



            sql = "Update  StdRegistration  set FName='" + txtFname.Text + "',Father='" + txtFather.Text + "',Email='" + txtEmail.Text + "',Cnic='" + txtCnic.Text + "',Country='" + comboCountry.Text + "',City='" + comboCity.Text + "',Semister='" + comboSemister.Text + "',Religion='" + comboSemister.Text + "',Martial='" + comboMartial.Text + "',Phone='" + txtPhone.Text + "' where StdId='" + txtStdID.Text + "'";




            if (dim.ExecuteCommand(sql) > 0)
            {
                this.logger("Data file processed Updated successfully!");
                txtDob.Clear();
                txtEmail.Clear();
                txtPhone.Clear();
                comboCity.SelectedIndex = -1;
                txtFather.Clear();
                comboCountry.SelectedIndex = -1;
                comboMartial.SelectedIndex = -1;
                comboReligion.SelectedIndex = -1;
                comboCity.SelectedIndex = -1;

            }
            else
            {
                this.logger("Error Found!");
            }

        }




        public void DeleteData()
        {



            sql = "Delete From  StdRegistration where StdId=" + dataGridView1.CurrentRow.Cells[0].Value.ToString();

            if (dim.ExecuteCommand(sql) > 0)
            {
                this.logger("Data file processed Deleted successfully!");
                txtDob.Clear();
                txtEmail.Clear();
                txtPhone.Clear();
                comboCity.SelectedIndex = -1;
                txtFather.Clear();
                comboCountry.SelectedIndex = -1;
                comboMartial.SelectedIndex = -1;
                comboReligion.SelectedIndex = -1;
                comboCity.SelectedIndex = -1;
                txtCnic.Clear();

            }
            else
            {


                this.logger("Error Found!");

            }
        }

        private void button1_Click(object sender, EventArgs e)
        {


            InsertStdData();
            Getstd();
        }

        private void StdReg_Load(object sender, EventArgs e)
        {

            comboSemister.SelectedItem = null;


            comboSemister.Text = "---Select Semester---";
            comboReligion.SelectedItem = null;


            comboReligion.Text = "---Select Religion---";

            comboMartial.SelectedItem = null;


            comboMartial.Text = "---Select Marital---";




            GetComboCountry();
            Getstd();
        }

        private void comboCountry_SelectedIndexChanged(object sender, EventArgs e)
        {
            CountryToCityRelation();
        }

        private void dataGridView1_CellClick(object sender, DataGridViewCellEventArgs e)
        {

            txtStdID.Text = dataGridView1.Rows[e.RowIndex].Cells[0].Value.ToString();


            txtFname.Text = dataGridView1.Rows[e.RowIndex].Cells[1].Value.ToString();

            // txtMiddle.Text = dataGridView1.Rows[e.RowIndex].Cells[2].Value.ToString();

            //txtLast.Text = dataGridView1.Rows[e.RowIndex].Cells[3].Value.ToString();


            txtFather.Text = dataGridView1.Rows[e.RowIndex].Cells[2].Value.ToString();

            txtEmail.Text = dataGridView1.Rows[e.RowIndex].Cells[3].Value.ToString();

            txtCnic.Text = dataGridView1.Rows[e.RowIndex].Cells[4].Value.ToString();
            txtDob.Text = dataGridView1.Rows[e.RowIndex].Cells[5].Value.ToString();




            comboCountry.Text = dataGridView1.Rows[e.RowIndex].Cells[6].Value.ToString();

            comboCity.Text = dataGridView1.Rows[e.RowIndex].Cells[7].Value.ToString();

            comboSemister.Text = dataGridView1.Rows[e.RowIndex].Cells[8].Value.ToString();


            comboReligion.Text = dataGridView1.Rows[e.RowIndex].Cells[9].Value.ToString();
            comboMartial.Text = dataGridView1.Rows[e.RowIndex].Cells[10].Value.ToString();



            txtPhone.Text = dataGridView1.Rows[e.RowIndex].Cells[11].Value.ToString();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            UpdatData();
            Getstd();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            DeleteData();
            Getstd();
        }

        private void txtStdID_TextChanged(object sender, EventArgs e)
        {

        }

        private void txtFname_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void comboMartial_SelectedIndexChanged(object sender, EventArgs e)
        {

        }
    }
}
