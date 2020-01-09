using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace LoginPag
{
    public partial class SignUp : Form
    {
        public SignUp()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if(string.IsNullOrEmpty(txtName.Text)){
                MessageBox.Show("Plz Input Your Name!");
            
            }
            
            if(txtPassword.Text!=txtCinFrm.Text){

                MessageBox.Show("Your Password And CnFrm are not Matching!");
                txtCinFrm.Clear();
            
            
            }
        }

        private void SignUp_Load(object sender, EventArgs e)
        {
            button1.Enabled = false;
        }

        private void radiobtnActive_CheckedChanged(object sender, EventArgs e)
        {
            if(radiobtnActive.Checked==true){
                button1.Enabled = true;
            
            
            }
        }
    }
}
