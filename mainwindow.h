#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QFormLayout>
#include "open_day.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_actionOuvrir_une_nouvelle_journ_e_triggered();

    void on_actionFermer_une_nouvelle_journ_e_triggered();

    void on_actionActiver_une_semaine_de_garde_triggered();

    void on_actionD_sactiver_une_semaine_de_garde_triggered();

    void on_actionAnnuler_une_vente_triggered();

    void on_actionAfficher_tous_les_produits_triggered();

    void on_actionpar_date_de_p_remption_triggered();

    void on_action_Affich_les_produits_cass_s_triggered();

    void on_actionEnregistrer_une_vente_triggered();

    void on_actionEnregistrer_une_vente_priv_e_triggered();

    void on_actionEnregistrer_une_vente_cr_dit_triggered();

    void on_actionpar_forme_pharmaceutique_triggered();

    void on_actionInventaire_en_salle_de_vente_2_triggered();

    void on_actionHistorique_des_ventes_triggered();

    void on_actionSupprimer_un_produit_triggered();

    void on_action_quantit_au_magasin_triggered();

    void on_actionquantit_en_rayon_triggered();

    void on_action_par_prix_de_vente_triggered();

    void on_actionpar_prix_d_achat_triggered();

    void on_actionAjout_d_un_produit_triggered();

    void on_actionInventaire_du_stock_entier_triggered();

    void on_actionImprimer_un_re_u_triggered();

    void on_action_Imprimer_un_ticket_de_caisse_triggered();

    void on_actionInventaire_du_magasin_triggered();

    void on_action_Supprimer_une_liste_triggered();

    void on_action_Constituer_une_liste_triggered();

    void on_action_Quitter_GeP_triggered();

    void on_actionListe_de_fournisseurs_triggered();

    void on_actionNouveau_fournisseur_2__triggered();   

    void on_actionConnection_la_base_triggered();

private:
    Ui::MainWindow *ui;
    QMenu *vente, *produit, *approvis;
    QAction *quit, *save_sale, *savep_sale, *can_sale, *view_sale, *inv_rsale;

};

#endif // MAINWINDOW_H
