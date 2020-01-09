using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using University_Management_System;
using Uni;

namespace LoginPag
{
    public partial class UniPannel : Form
    {
        connection_query dim = new connection_query();
        public UniPannel(string UserEmail)
        {
            InitializeComponent();
            DataTable dt = dim.RetrieveData("Select UserName From Login Where UserName='" + UserEmail + "'");
            if(dt.Rows.Count>0){
            
            lblUser.Text=dt.Rows[0]["UserName"].ToString();
            }
        }

        private void partsToolStripMenuItem_Click(object sender, EventArgs e)
        {

        }

        private void semisterToolStripMenuItem_Click(object sender, EventArgs e)
        {

        }

        private void Admin_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            Admin ad = new Admin();

            ad.Show();
        }

        private void button2_Click(object sender, EventArgs e)
        {
                    StdReg sr = new StdReg();

            sr.Show();
            

        }

        private void button3_Click(object sender, EventArgs e)
        {
            Deparments ss = new Deparments();
            ss.Show();

        }

        private void button4_Click(object sender, EventArgs e)
        {
            Batches btch = new Batches();
            btch.Show();
        }

        private void button5_Click(object sender, EventArgs e)
        {
            Semisters sem = new Semisters();
            sem.Show();
        }

        private void button6_Click(object sender, EventArgs e)
        {
            Courses cr = new Courses();
            cr.Show();
        }
    }
}