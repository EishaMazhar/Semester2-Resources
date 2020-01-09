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
    public partial class Form1 : Form
    {
        SqlConnection con = new SqlConnection();
       
        SqlCommand cmd = new SqlCommand();
        
        public Form1()
        {
            InitializeComponent();
        }

        private void panel1_Paint(object sender, PaintEventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }


        public void LoginData() {


            con.Open();
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


            cmd = new SqlCommand("select count(*) from Login where UserName='" + UserName.Text + "' and Pasword='" + password.Text + "'", con);

            SqlDataAdapter sda = new SqlDataAdapter(cmd);

            DataTable dt = new DataTable();
            sda.Fill(dt);

            if (dt.Rows[0][0].ToString() == "1")
            {
                UniPannel ad = new UniPannel();
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
            SignUp sgup = new SignUp();
            sgup.Show();

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            con.ConnectionString = @"Data Source=.;Initial Catalog=UniversityManagement;Integrated Security=True";

            
        }
    }
}
