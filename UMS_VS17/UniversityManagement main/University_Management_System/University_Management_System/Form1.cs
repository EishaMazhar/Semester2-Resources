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
    public partial class Form1 : Form
    {
        
        DataTable dt = new DataTable();
        connection_query dim = new connection_query();
       
        
        public Form1()
        {
            InitializeComponent();
        }



        public void LoginData() {


           
            if (string.IsNullOrEmpty(UserName.Text))
            {
                MessageBox.Show("Input Your Username");
                return;
            }
            if (string.IsNullOrEmpty(password.Text))
            {
                MessageBox.Show("Input Your Password");
                return;
            }


           DataTable dt=dim.RetrieveData("select count(*) from Login where UserName='" + UserName.Text + "' and Password='" + password.Text + "'");

           

            if (dt.Rows[0][0].ToString() == "1")
            {
                string UserEmail = UserName.Text;
                UniPannel ad = new UniPannel(UserEmail);
                ad.Show();
                

            }



            else
            {

                MessageBox.Show("Invalid User and password! Plz fill signUp Form:");



                UserName.Clear();
                password.Clear();

            }
        
        
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void UserName_TextChanged(object sender, EventArgs e)
        {
            lblUser.Text = UserName.Text;
        }

        private void LoginButton_Click(object sender, EventArgs e)
        {
            LoginData();

          
        }

        private void CancelButton_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void button1_Click(object sender, EventArgs e)
        {

            this.Hide();
    //        SignUp sgup = new SignUp();
       //     sgup.Show();

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            //con.ConnectionString = @"Data Source=EISHA\SQLEXPRESS;Initial Catalog=UniversityData;Integrated Security=True";
            //con.ConnectionString = @"Data Source=.;Initial Catalog=UniverData;Integrated Security=True";

            
        }
       
        private void panel1_Paint(object sender, PaintEventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
