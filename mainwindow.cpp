#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "can_sal.h"
#include "inventory.h"
#include "savep_sal.h"
#include "sav_sale.h"
#include "open_day.h"
#include "close_day.h"
#include "activ_sg.h"
#include "desact_sg.h"
#include "disallp.h"
#include "new_prod.h"
#include "byperished.h"
#include "byform.h"
#include "broken_p.h"
#include "mag_invent.h"
#include "sav_cred.h"
#include "sale_history.h"
#include "const_replen.h"
#include "del_prod.h"
#include "quant_mag.h"
#include "quant_ray.h"
#include "new_provider.h"
#include "provider_list.h"
#include "sell_price.h"
#include "buy_price.h"
#include "del_replen.h"
#include "print_rec.h"
#include "print_ticket.h"
#include "pass_cmd.h"
#include "inv_n_stock.h"
#include "database.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Product Manager");
    QWidget *centralarea = new QWidget;
    setCentralWidget(centralarea);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOuvrir_une_nouvelle_journ_e_triggered()
{
    Open_day *opd = new Open_day();
    opd->exec();
}

void MainWindow::on_actionFermer_une_nouvelle_journ_e_triggered()
{
    Close_day *cld = new Close_day();
    cld->exec();
}


void MainWindow::on_actionActiver_une_semaine_de_garde_triggered()
{
    Activ_sg *sg = new Activ_sg();
    sg->exec();
}

void MainWindow::on_actionD_sactiver_une_semaine_de_garde_triggered()
{
    Desact_sg *dsg = new Desact_sg();
    dsg->exec();
}

void MainWindow::on_actionAnnuler_une_vente_triggered()
{
    Can_sal *can = new Can_sal();
    can->exec();
}

void MainWindow::on_actionAfficher_tous_les_produits_triggered()
{
    Disallp *alp = new Disallp();
    alp->exec();
}

void MainWindow::on_actionpar_date_de_p_remption_triggered()
{
    Byperished *perish = new Byperished();
    perish->exec();
}

void MainWindow::on_action_Affich_les_produits_cass_s_triggered()
{
    Broken_p *brk = new Broken_p();
    brk->exec();
}

void MainWindow::on_actionEnregistrer_une_vente_triggered()
{
    Sav_sale *sv = new Sav_sale();
    sv->exec();
}

void MainWindow::on_actionEnregistrer_une_vente_priv_e_triggered()
{
    Savep_sal *svp = new Savep_sal();
    svp->exec();
}

void MainWindow::on_actionEnregistrer_une_vente_cr_dit_triggered()
{
    Sav_cred *svc = new Sav_cred();
    svc->exec();
}


void MainWindow::on_actionpar_forme_pharmaceutique_triggered()
{
    Byform *bf = new Byform();
    bf->exec();
}

void MainWindow::on_actionInventaire_en_salle_de_vente_2_triggered()
{
    Inventory *inv = new Inventory();
    inv->exec();
}

void MainWindow::on_actionHistorique_des_ventes_triggered()
{
    Sale_history *sh = new Sale_history();
    sh->exec();
}

void MainWindow::on_actionSupprimer_un_produit_triggered()
{
    Del_prod *del = new Del_prod();
    del->exec();
}

void MainWindow::on_action_quantit_au_magasin_triggered()
{
    Quant_mag  *qm = new Quant_mag();
    qm->exec();
}

void MainWindow::on_actionquantit_en_rayon_triggered()
{
    Quant_ray *qr = new Quant_ray();
    qr->exec();
}

void MainWindow::on_action_par_prix_de_vente_triggered()
{
    Sell_price *sp = new Sell_price();
    sp->exec();
}

void MainWindow::on_actionpar_prix_d_achat_triggered()
{
    Buy_price *bp = new Buy_price();
    bp->exec();
}

void MainWindow::on_actionAjout_d_un_produit_triggered()
{
    New_prod *np = new New_prod();
    np->exec();
}

void MainWindow::on_actionInventaire_du_stock_entier_triggered()
{
    Inv_n_stock *ins = new Inv_n_stock();
    ins->exec();
}

void MainWindow::on_actionImprimer_un_re_u_triggered()
{
    Print_rec *pr = new Print_rec();
    pr->exec();
}

void MainWindow::on_action_Imprimer_un_ticket_de_caisse_triggered()
{
    Print_ticket *pt = new Print_ticket();
    pt->exec();
}

void MainWindow::on_actionInventaire_du_magasin_triggered()
{
    Mag_invent *mag = new Mag_invent();
    mag->exec();
}

void MainWindow::on_action_Supprimer_une_liste_triggered()
{
    Del_replen *dr = new Del_replen();
    dr->exec();
}

void MainWindow::on_action_Constituer_une_liste_triggered()
{
    Const_replen *cr = new Const_replen();
    cr->exec();
}

void MainWindow::on_action_Quitter_GeP_triggered()
{
    QObject::connect(ui->action_Quitter_GeP,SIGNAL(triggered()),qApp,SLOT(quit()));
}

void MainWindow::on_actionListe_de_fournisseurs_triggered()
{
    Provider_list *pl = new Provider_list();
    pl->exec();
}

void MainWindow::on_actionNouveau_fournisseur_2__triggered()
{
    New_provider *npv = new New_provider();
    npv->exec();
}

void MainWindow::on_actionConnection_la_base_triggered()
{
    Database *bd = new Database();
    bd->exec();

}
