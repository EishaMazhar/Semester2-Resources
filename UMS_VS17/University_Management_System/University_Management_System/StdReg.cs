using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace University_Management_System
{
    public partial class StdReg : Form
    {
        string sql="";
        SqlCommand com=new SqlCommand();
        connection_query dim = new connection_query();
        
        public StdReg()
        {
            InitializeComponent();
        }
        // private void logger(string msg)
        //{

        //    textlogger.Text += DateTime.Now.ToShortTimeString() + ": " + msg + "\r\n";
        //    textlogger.SelectionStart = textlogger.Text.Length;
        //    textlogger.ScrollToCaret();
        //    textlogger.Refresh();

        //}


        public void GetComboCountry()
        {
            
               DataTable  dt= dim.RetrieveData("Select CountryId, CountryName From Country ");
             
              

               
                    comboCountry.DataSource = dt;
                    comboCountry.DisplayMember = "CountryName";
                    comboCountry.ValueMember = "CountryId";
                    comboCountry.SelectedItem = null;
                    comboCountry.Text = "---Select Country Name";
          
                
            
        }

        public void CountryToCityRelation()
        {
            int cardTypeId = 0;
            if (comboCountry.SelectedIndex >= 0)
            {
                int.TryParse(comboCountry.SelectedValue.ToString(), out cardTypeId);
            }
           
            DataTable dt =dim.RetrieveData ("select CityId,CityName from City where CountryId= '" + cardTypeId+ "'");
            
            comboCity.DataSource = dt;
            comboCity.DisplayMember = "CityName";
            comboCity.ValueMember = "CityId";
            

        }


        public void Getstd()
        {
            DataTable dt = dim.RetrieveData("Select * From StdRegistration ");
            dataGridView1.DataSource = dt;
         


        }




        public void GetComboSemister()
        {
            DataTable dt = dim.RetrieveData("Select SemisterId,SemisterName From Country ");
            comboCountry.DataSource = dt;
            comboCountry.DisplayMember = "SemisterName";
            comboCountry.ValueMember = "SemisterId";
            comboCountry.SelectedItem = null;
            comboCountry.Text = "---Select Semister Name";


        }


        public void InsertStdData() {

               

                   


                        //SqlConnection con = new SqlConnection();
                        //con.Open();
                        //sql = "Select  * from StdRegistration";
                        //SqlCommand cmdCnic = new SqlCommand(sql, conn);
                        //DataTable dtCnic = new DataTable();
                        //dtCnic.Load(cmdCnic.ExecuteReader());
                        //DataRow[] dr = dtCnic.Select("Cnic = '"+txtCnic.Text+"'");
                        //if (dr.Length > 0)
                        //{
                        //    MessageBox.Show("This Cnic Name Is Already Exists");
                        //    return;
                        //}



                        sql = "insert into StdRegistration(FName, MidName, Lname,Father,Email,Cnic,Country,City,Semister,Religion,Martial,Phone,DateTime) values";
                        sql += " ('" + txtFname.Text + "', '" + txtMiddle.Text + "', '" + txtLast.Text + "','" + txtFather.Text + "','" + txtEmail.Text + "','" + txtCnic.Text + "' , '" + comboCountry.Text + "' , '" + comboCity.Text + "' , '" + comboSemister.SelectedItem + "','" + comboReligion.SelectedItem + "','" + comboMartial.SelectedValue + "','" + txtPhone.Text + "',GetDate())";
                     
                      if (dim.ExecuteCommand(sql) > 0)
                      {
                          MessageBox.Show("succ");
                      
                      
                      }
                      else
                      {

                          MessageBox.Show("Error");

                      }

                    
                
            

           
        }


        public void UpdatData()
        {



            sql = "Update  StdRegistration  set FName='" + txtFname.Text + "', MidName='" + txtMiddle.Text + "', Lname='" + txtLast.Text + "',Father='" + txtFather.Text + "',Email='" + txtEmail.Text + "',Cnic='" + txtCnic.Text + "',Country='" + comboCountry.Text + "',City='" + comboCity.Text + "',Semister='" + comboSemister.Text + "',Religion='" + comboSemister.Text + "',Martial='" + comboMartial.Text + "',Phone='" + txtPhone.Text + "' where StdId='" + txtStdID.Text + "'";




            if (dim.ExecuteCommand(sql) > 0)
            {
                MessageBox.Show("Your Data Has been Updated!");


            }
            else
            {
                MessageBox.Show("Error Found!");
            }

        }


        public void DeleteData()
        {



            sql = "Delete From  StdRegistration where StdId=" + dataGridView1.CurrentRow.Cells[0].Value.ToString();
            
            if (dim.ExecuteCommand(sql) > 0)
            {
                MessageBox.Show("Your Data Has been Deleted!");


            }
            else
            {


                MessageBox.Show("Error Found!");

            }
        }
        
        private void button1_Click(object sender, EventArgs e)
        {
            InsertStdData();
            Getstd();
        }

        private void StdReg_Load(object sender, EventArgs e)
        {
            GetComboCountry();
            Getstd();
        }

        private void comboCountry_SelectedIndexChanged(object sender, EventArgs e)
        {
            CountryToCityRelation(); ;
        }

        private void dataGridView1_CellClick(object sender, DataGridViewCellEventArgs e)
        {

            txtStdID.Text = dataGridView1.Rows[e.RowIndex].Cells[0].Value.ToString();


            txtFname.Text = dataGridView1.Rows[e.RowIndex].Cells[1].Value.ToString();

            txtMiddle.Text = dataGridView1.Rows[e.RowIndex].Cells[2].Value.ToString();

            txtLast.Text = dataGridView1.Rows[e.RowIndex].Cells[3].Value.ToString();


            txtFather.Text = dataGridView1.Rows[e.RowIndex].Cells[4].Value.ToString();

            txtEmail.Text = dataGridView1.Rows[e.RowIndex].Cells[5].Value.ToString();

            txtCnic.Text = dataGridView1.Rows[e.RowIndex].Cells[6].Value.ToString();

            txtDob.Text = dataGridView1.Rows[e.RowIndex].Cells[7].Value.ToString();

            comboCountry.Text = dataGridView1.Rows[e.RowIndex].Cells[8].Value.ToString();

            comboCity.Text = dataGridView1.Rows[e.RowIndex].Cells[9].Value.ToString();

            comboSemister.Text = dataGridView1.Rows[e.RowIndex].Cells[10].Value.ToString();

            comboMartial.Text = dataGridView1.Rows[e.RowIndex].Cells[11].Value.ToString();

            txtCnic.Text = dataGridView1.Rows[e.RowIndex].Cells[12].Value.ToString();

            txtPhone.Text = dataGridView1.Rows[e.RowIndex].Cells[10].Value.ToString();
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
    }
}
