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
        public UniPannel()
        {
            InitializeComponent();
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
            PannelInfo jj = new PannelInfo();

            jj.Show();

        }
    }
}