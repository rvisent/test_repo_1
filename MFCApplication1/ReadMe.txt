================================================================================
    LIBRERIA MFC: cenni preliminari sul progetto MFCApplication1
===============================================================================

La Creazione guidata applicazione ha creato questa applicazione MFCApplication1. Tale applicazione illustra le nozioni fondamentali sull'utilizzo delle classi MFC (Microsoft Foundation Class) e costituisce un punto di partenza per la scrittura dell'applicazione.

Questo file contiene un riepilogo del contenuto di ciascun file che fa parte
dell'applicazione MFCApplication1.

MFCApplication1.vcxproj
    File di progetto principale per i progetti VC++ generati tramite una Creazione guidata applicazione. Contiene informazioni sulla versione di Visual C++ che ha generato il file e informazioni sulle piattaforme, le configurazioni e le caratteristiche del progetto selezionate con la Creazione guidata applicazione.

MFCApplication1.vcxproj.filters
    File dei filtri per i progetti VC++ generati tramite una Creazione guidata applicazione. Contiene informazioni sull'associazione tra i file del progetto e i filtri. Tale associazione viene utilizzata nell'IDE per la visualizzazione di raggruppamenti di file con estensioni simili in un nodo specifico, ad esempio: i file con estensione cpp sono associati al filtro "File di origine".

MFCApplication1.h
    File di intestazione principale per l'applicazione.
    Include altre intestazioni specifiche del progetto, ad esempio resource.h, e dichiara la classe di applicazione CMFCApplication1App.

MFCApplication1.cpp
    File di origine principale dell'applicazione contenente la classe di applicazione CMFCApplication1App.

MFCApplication1.rc
    Elenco di tutte le risorse Microsoft Windows utilizzate dal programma. Include le icone, le bitmap e i cursori memorizzati nella sottodirectory RES. Questo file può essere modificato direttamente in Microsoft Visual C++. Le risorse del progetto sono in 1040.

res\MFCApplication1.ico
    File di icona utilizzato come icona dell'applicazione. Tale icona è inclusa dal file di risorse principale MFCApplication1.rc.

res\MFCApplication1.rc2
    File contenente le risorse che non vengono modificate da Microsoft Visual C++. Inserire in questo file tutte le risorse non modificabili dall'editor di risorse.

/////////////////////////////////////////////////////////////////////////////

Per la finestra cornice principale:
    Il progetto include un'interfaccia MFC standard.

MainFrm.h, MainFrm.cpp
    Tali file contengono la classe di frame CMainFrame, che è derivata da
    CFrameWnd e controlla tutte le funzionalità di frame SDI.

res\Toolbar.bmp
    Questo file di bitmap viene utilizzato per creare immagini affiancate per la barra degli strumenti.
    La barra di stato e la barra degli strumenti iniziali vengono costruite nella classe CMainFrame. Modificare questa bitmap della barra degli strumenti utilizzando l'editor delle risorse e aggiornare l'array IDR_MAINFRAME TOOLBAR in MFCApplication1.rc per aggiungere i pulsanti della barra degli strumenti.
/////////////////////////////////////////////////////////////////////////////



/////////////////////////////////////////////////////////////////////////////

Altre funzionalità:

Controlli ActiveX
    L'applicazione include il supporto per utilizzare i controlli ActiveX.

/////////////////////////////////////////////////////////////////////////////

Altri file standard:

StdAfx.h, StdAfx.cpp
    Tali file vengono utilizzati per generare il file di intestazione precompilato MFCApplication1.pch e il file dei tipi precompilato StdAfx.obj.

Resource.h
    File di intestazione standard che definisce i nuovi ID risorse. Tale file viene letto e aggiornato da Microsoft Visual C++.

MFCApplication1.manifest
	I file manifesto dell'applicazione vengono utilizzati da Windows XP per descrivere una dipendenza delle applicazioni da specifiche versioni di assembly side-by-side. Tali informazioni vengono utilizzate dal caricatore per caricare l'assembly appropriato dalla cache degli assembly o privatamente dall'applicazione. Il manifesto dell'applicazione può essere incluso per la ridistribuzione come file manifest esterno installato nella stessa cartella dell'eseguibile dell'applicazione o incluso nell'eseguibile sotto forma di risorsa.
/////////////////////////////////////////////////////////////////////////////

Altre note:

La Creazione guidata applicazione utilizza "TODO:" per indicare le parti del codice sorgente da aggiungere o personalizzare.

Se l'applicazione utilizza MFC in una DLL condivisa, sarà necessario ridistribuire le DLL MFC. Se l'applicazione è un una lingua diversa da quella stabilita dalle impostazioni locali del sistema operativo, sarà inoltre necessario ridistribuire le corrispondenti risorse localizzate mfc110XXX.DLL.
Per ulteriori informazioni su entrambi gli argomenti, vedere la sezione relativa alla ridistribuzione delle applicazioni Visual C++ nella documentazione MSDN.

/////////////////////////////////////////////////////////////////////////////
