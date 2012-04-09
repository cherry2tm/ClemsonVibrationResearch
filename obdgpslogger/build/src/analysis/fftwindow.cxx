// generated by Fast Light User Interface Designer (fluid) version 1.0300

#include "/home/anthony/ClemsonVibrationResearch/obdgpslogger/build/src/analysis/fftwindow.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <FL/Fl_File_Chooser.H>
#ifndef max
#define max(a,b) ((a)>(b)?(a):(b))
#endif

void FFTOBD::cb_Open_i(Fl_Menu_*, void*) {
  Fl_File_Chooser f(".",
	"OBDGPS Logfiles (*.db)\tAll Files (*)",
	Fl_File_Chooser::SINGLE, "Choose OBD GPS Logfile" );
f.show();
while(f.shown()) {
	Fl::check();
}
if(0 >= f.count())
	return;

if(0 != opendb(f.value())) {
	// Error
};
}
void FFTOBD::cb_Open(Fl_Menu_* o, void* v) {
  ((FFTOBD*)(o->parent()->parent()->user_data()))->cb_Open_i(o,v);
}

void FFTOBD::cb_Open1_i(Fl_Menu_*, void*) {
  Fl_File_Chooser f(".",
	"Single Column data (*.csv)\tAll Files (*)",
	Fl_File_Chooser::SINGLE, "Choose CSV file" );
f.show();
while(f.shown()) {
	Fl::check();
}
if(0 >= f.count())
	return;

if(0 != opencsv(f.value())) {
	// Error
};
}
void FFTOBD::cb_Open1(Fl_Menu_* o, void* v) {
  ((FFTOBD*)(o->parent()->parent()->user_data()))->cb_Open1_i(o,v);
}

void FFTOBD::cb_Save_i(Fl_Menu_*, void*) {
  Fl_File_Chooser f(".",
	"Single Column data (*.csv)\tAll Files (*)",
	Fl_File_Chooser::CREATE, "Save As..." );
f.show();
while(f.shown()) {
	Fl::check();
}
if(0 >= f.count())
	return;

if(0 != savedata(f.value())) {
	// Error
};
}
void FFTOBD::cb_Save(Fl_Menu_* o, void* v) {
  ((FFTOBD*)(o->parent()->parent()->user_data()))->cb_Save_i(o,v);
}

void FFTOBD::cb_Quit_i(Fl_Menu_*, void*) {
  mainwindow->hide();
}
void FFTOBD::cb_Quit(Fl_Menu_* o, void* v) {
  ((FFTOBD*)(o->parent()->parent()->user_data()))->cb_Quit_i(o,v);
}

Fl_Menu_Item FFTOBD::menu_[] = {
 {"&File", 0,  0, 0, 64, FL_NORMAL_LABEL, 0, 14, 0},
 {"&Open DB", 0,  (Fl_Callback*)FFTOBD::cb_Open, 0, 0, FL_NORMAL_LABEL, 0, 14, 0},
 {"Open CSV", 0,  (Fl_Callback*)FFTOBD::cb_Open1, 0, 0, FL_NORMAL_LABEL, 0, 14, 0},
 {"&Save", 0,  (Fl_Callback*)FFTOBD::cb_Save, 0, 0, FL_NORMAL_LABEL, 0, 14, 0},
 {"&Quit", 0,  (Fl_Callback*)FFTOBD::cb_Quit, 0, 0, FL_NORMAL_LABEL, 0, 14, 0},
 {0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0}
};

void FFTOBD::cb_columnchoice_i(Fl_Input_Choice* o, void*) {
  printf("Chose %s\n", o->value());
loaddata();
}
void FFTOBD::cb_columnchoice(Fl_Input_Choice* o, void* v) {
  ((FFTOBD*)(o->parent()->parent()->user_data()))->cb_columnchoice_i(o,v);
}

void FFTOBD::cb_tripchoice_i(Fl_Input_Choice* o, void*) {
  printf("Chose trip %s\n", o->value());
loaddata();
}
void FFTOBD::cb_tripchoice(Fl_Input_Choice* o, void* v) {
  ((FFTOBD*)(o->parent()->parent()->user_data()))->cb_tripchoice_i(o,v);
}

void FFTOBD::cb_bendcurveslider_i(Fl_Value_Slider*, void*) {
  thereandbackagain();
renderplotdata();
}
void FFTOBD::cb_bendcurveslider(Fl_Value_Slider* o, void* v) {
  ((FFTOBD*)(o->parent()->parent()->user_data()))->cb_bendcurveslider_i(o,v);
}

void FFTOBD::cb_rad_min_i(Fl_Value_Slider*, void*) {
  thereandbackagain();
renderplotdata();
}
void FFTOBD::cb_rad_min(Fl_Value_Slider* o, void* v) {
  ((FFTOBD*)(o->parent()->parent()->user_data()))->cb_rad_min_i(o,v);
}

void FFTOBD::cb_rad_max_i(Fl_Value_Slider*, void*) {
  thereandbackagain();
renderplotdata();
}
void FFTOBD::cb_rad_max(Fl_Value_Slider* o, void* v) {
  ((FFTOBD*)(o->parent()->parent()->user_data()))->cb_rad_max_i(o,v);
}

void FFTOBD::cb_freq_min_i(Fl_Value_Slider*, void*) {
  thereandbackagain();
renderplotdata();
}
void FFTOBD::cb_freq_min(Fl_Value_Slider* o, void* v) {
  ((FFTOBD*)(o->parent()->parent()->user_data()))->cb_freq_min_i(o,v);
}

void FFTOBD::cb_freq_max_i(Fl_Value_Slider*, void*) {
  thereandbackagain();
renderplotdata();
}
void FFTOBD::cb_freq_max(Fl_Value_Slider* o, void* v) {
  ((FFTOBD*)(o->parent()->parent()->user_data()))->cb_freq_max_i(o,v);
}

void FFTOBD::cb_Reset_i(Fl_Button*, void*) {
  resetsliders();
}
void FFTOBD::cb_Reset(Fl_Button* o, void* v) {
  ((FFTOBD*)(o->parent()->parent()->user_data()))->cb_Reset_i(o,v);
}

void FFTOBD::cb_graphstart_i(Fl_Value_Slider*, void*) {
  renderplotdata();
}
void FFTOBD::cb_graphstart(Fl_Value_Slider* o, void* v) {
  ((FFTOBD*)(o->parent()->parent()->user_data()))->cb_graphstart_i(o,v);
}

void FFTOBD::cb_graphend_i(Fl_Value_Slider*, void*) {
  renderplotdata();
}
void FFTOBD::cb_graphend(Fl_Value_Slider* o, void* v) {
  ((FFTOBD*)(o->parent()->parent()->user_data()))->cb_graphend_i(o,v);
}

void FFTOBD::cb_showrawdata_i(Fl_Check_Button*, void*) {
  renderplotdata();
}
void FFTOBD::cb_showrawdata(Fl_Check_Button* o, void* v) {
  ((FFTOBD*)(o->parent()->parent()->user_data()))->cb_showrawdata_i(o,v);
}

FFTOBD::FFTOBD() {
  { mainwindow = new Fl_Double_Window(810, 645, "FFTOBD");
    mainwindow->user_data((void*)(this));
    { Fl_Group* o = new Fl_Group(0, -5, 815, 655);
      { Fl_Menu_Bar* o = new Fl_Menu_Bar(0, 0, 815, 25);
        o->menu(menu_);
      } // Fl_Menu_Bar* o
      { chart_ymax = new Fl_Value_Output(760, 30, 45, 20);
        chart_ymax->labelsize(8);
        chart_ymax->textsize(8);
      } // Fl_Value_Output* chart_ymax
      { chart_ymin = new Fl_Value_Output(760, 450, 45, 20);
        chart_ymin->labelsize(8);
        chart_ymin->textsize(8);
      } // Fl_Value_Output* chart_ymin
      { chart_xmax = new Fl_Value_Output(750, 475, 45, 20);
        chart_xmax->labelsize(8);
        chart_xmax->textsize(8);
      } // Fl_Value_Output* chart_xmax
      { chart_xmin = new Fl_Value_Output(5, 475, 45, 20);
        chart_xmin->labelsize(8);
        chart_xmin->textsize(8);
      } // Fl_Value_Output* chart_xmin
      { Fl_Chart* o = fftchart_raw = new Fl_Chart(5, 25, 800, 490);
        fftchart_raw->box(FL_NO_BOX);
        fftchart_raw->color(FL_BACKGROUND_COLOR);
        fftchart_raw->selection_color(FL_BACKGROUND_COLOR);
        fftchart_raw->labeltype(FL_NORMAL_LABEL);
        fftchart_raw->labelfont(0);
        fftchart_raw->labelsize(14);
        fftchart_raw->labelcolor(FL_FOREGROUND_COLOR);
        fftchart_raw->align(Fl_Align(FL_ALIGN_CENTER));
        fftchart_raw->when(FL_WHEN_RELEASE);
        Fl_Group::current()->resizable(fftchart_raw);
        o->type(FL_LINE_CHART);
      } // Fl_Chart* fftchart_raw
      { Fl_Chart* o = fftchart = new Fl_Chart(5, 25, 800, 490);
        fftchart->box(FL_NO_BOX);
        fftchart->color(FL_BACKGROUND_COLOR);
        fftchart->selection_color(FL_BACKGROUND_COLOR);
        fftchart->labeltype(FL_NORMAL_LABEL);
        fftchart->labelfont(0);
        fftchart->labelsize(14);
        fftchart->labelcolor(FL_FOREGROUND_COLOR);
        fftchart->align(Fl_Align(FL_ALIGN_CENTER));
        fftchart->when(FL_WHEN_RELEASE);
        o->type(FL_LINE_CHART);
      } // Fl_Chart* fftchart
      { columnchoice = new Fl_Input_Choice(60, 550, 140, 20, "DB Column");
        columnchoice->labelsize(10);
        columnchoice->textsize(10);
        columnchoice->callback((Fl_Callback*)cb_columnchoice);
        columnchoice->when(FL_WHEN_CHANGED);
        columnchoice->deactivate();
      } // Fl_Input_Choice* columnchoice
      { tripchoice = new Fl_Input_Choice(60, 585, 140, 20, "Trip");
        tripchoice->labelsize(10);
        tripchoice->textsize(10);
        tripchoice->callback((Fl_Callback*)cb_tripchoice);
        tripchoice->when(FL_WHEN_CHANGED);
        tripchoice->deactivate();
      } // Fl_Input_Choice* tripchoice
      { bendcurveslider = new Fl_Value_Slider(50, 615, 165, 20, "Nonlinear Granularity");
        bendcurveslider->type(5);
        bendcurveslider->labelsize(10);
        bendcurveslider->minimum(0.1);
        bendcurveslider->maximum(10);
        bendcurveslider->step(0.1);
        bendcurveslider->value(2);
        bendcurveslider->callback((Fl_Callback*)cb_bendcurveslider);
      } // Fl_Value_Slider* bendcurveslider
      { rad_min = new Fl_Value_Slider(505, 550, 280, 20, "Amplitude Min");
        rad_min->type(5);
        rad_min->labelsize(10);
        rad_min->step(0.0001);
        rad_min->callback((Fl_Callback*)cb_rad_min);
      } // Fl_Value_Slider* rad_min
      { rad_max = new Fl_Value_Slider(505, 585, 280, 20, "Amplitude Max");
        rad_max->type(5);
        rad_max->labelsize(10);
        rad_max->step(0.0001);
        rad_max->value(1);
        rad_max->callback((Fl_Callback*)cb_rad_max);
      } // Fl_Value_Slider* rad_max
      { freq_min = new Fl_Value_Slider(210, 550, 280, 20, "Frequency Min");
        freq_min->type(5);
        freq_min->labelsize(10);
        freq_min->step(0.0001);
        freq_min->callback((Fl_Callback*)cb_freq_min);
      } // Fl_Value_Slider* freq_min
      { freq_max = new Fl_Value_Slider(210, 585, 280, 20, "Frequency Max");
        freq_max->type(5);
        freq_max->labelsize(10);
        freq_max->step(0.0001);
        freq_max->value(1);
        freq_max->callback((Fl_Callback*)cb_freq_max);
      } // Fl_Value_Slider* freq_max
      { Fl_Button* o = new Fl_Button(415, 614, 145, 20, "Reset Options");
        o->labelsize(10);
        o->callback((Fl_Callback*)cb_Reset);
      } // Fl_Button* o
      { graphstart = new Fl_Value_Slider(65, 519, 310, 20, "Graph Start");
        graphstart->type(5);
        graphstart->labelsize(10);
        graphstart->callback((Fl_Callback*)cb_graphstart);
        graphstart->align(Fl_Align(FL_ALIGN_LEFT));
      } // Fl_Value_Slider* graphstart
      { graphend = new Fl_Value_Slider(440, 519, 310, 20, "Graph End");
        graphend->type(5);
        graphend->labelsize(10);
        graphend->value(1);
        graphend->callback((Fl_Callback*)cb_graphend);
        graphend->align(Fl_Align(FL_ALIGN_RIGHT));
      } // Fl_Value_Slider* graphend
      { showrawdata = new Fl_Check_Button(655, 620, 100, 15, "Show Raw Data");
        showrawdata->down_box(FL_DOWN_BOX);
        showrawdata->value(1);
        showrawdata->labelsize(11);
        showrawdata->callback((Fl_Callback*)cb_showrawdata);
      } // Fl_Check_Button* showrawdata
      o->end();
      Fl_Group::current()->resizable(o);
    } // Fl_Group* o
    mainwindow->end();
  } // Fl_Double_Window* mainwindow
  loadfftwwisdom();
  
  plans_prepared = 0;
  
  db = NULL;
  
  rawdata = NULL;
  plotdata = NULL;
  transformeddata = NULL;
  dataitems = 0;
  
  resetsliders();
}

FFTOBD::~FFTOBD() {
  closedb();
  freedata();
  
  savefftwwisdom();
}

void FFTOBD::show(int argc, char **argv) {
  mainwindow->show(argc,argv);
}

void FFTOBD::show() {
  mainwindow->show();
}

int FFTOBD::opendb(const char *dbfilename) {
  if(NULL != db) {
  	closedb();
  }
  
  resetsliders();
  
  int rc;
  rc = sqlite3_open_v2(dbfilename, &db, SQLITE_OPEN_READONLY, NULL);
  
  if(SQLITE_OK != rc) {
  	fprintf(stderr, "Can't open database %s: %s\n", dbfilename, sqlite3_errmsg(db));
  	sqlite3_close(db);
  	return 1;
  }
  
  
  populatechoices();
  
  
  loaddata();
  
  return 0;
}

int FFTOBD::opencsv(const char *csvfilename) {
  FILE *csvfile = fopen(csvfilename, "r");
  if(NULL == csvfile) {
  	perror(csvfilename);
  	return 1;
  }
  
  if(NULL != db) {
  	closedb();
  }
  
  resetsliders();
  
  int rc;
  rc = sqlite3_open(":memory:", &db);
  
  if(SQLITE_OK != rc) {
  	fprintf(stderr, "Can't create memory database: %s\n", sqlite3_errmsg(db));
  	sqlite3_close(db);
  	return 1;
  }
  
  
  char line[4096];
  if(NULL == fgets(line, sizeof(line), csvfile)) {
  	fprintf(stderr, "Couldn't get data from csv file\n");
  	return 1;
  }
  
  int columncount = 0;
  
  // Just assume we'll have this many columns at most
  char *columns[128];
  const char delim[] = ",\t\n\r";
  
  char *tok = strtok(line, delim);
  
  while(NULL != tok && columncount < sizeof(columns)/sizeof(columns[0])) {
  	columns[columncount] = strdup(tok);
  	printf("Found column %i: %s\n", columncount, tok);
  	columncount++;
  	tok = strtok(NULL, delim);
  }
  
  
  
  char obd_create_sql[4096] = "CREATE TABLE obd (";
  
  int i;
  for(i=0;i<columncount;i++) {
  	char oneitem[64];
  	snprintf(oneitem, sizeof(oneitem), "\"%s\" REAL", columns[i]);
  	strncat(obd_create_sql, oneitem, sizeof(obd_create_sql) - strlen(obd_create_sql));
  	if(i<columncount-1) {
  		strncat(obd_create_sql, ", ", sizeof(obd_create_sql) - strlen(obd_create_sql));
  	}
  }
  
  strncat(obd_create_sql, ")", sizeof(obd_create_sql) - strlen(obd_create_sql));
  
  printf("Create statment: \n%s\n", obd_create_sql);
  
  for(i=0;i<columncount;i++) {
  	free(columns[i]);
  }
  
  char *errmsg;
  rc = sqlite3_exec(db, obd_create_sql, NULL, NULL, &errmsg);
  
  if(SQLITE_OK != rc) {
  	fprintf(stderr, "Error creating table \"%s\" (%i): %s\n", obd_create_sql, rc, errmsg);
  	sqlite3_free(errmsg);
  }
  
  sqlite3_stmt *stmt;
  
  char insert_sql[4096] = "INSERT INTO obd VALUES (";
  for(i=0;i<columncount;i++) {
  	strncat(insert_sql, "?", sizeof(insert_sql) - strlen(insert_sql));
  	if(i<columncount-1) {
  		strncat(insert_sql, ",", sizeof(insert_sql) - strlen(insert_sql));
  	}
  }
  strncat(insert_sql, ")", sizeof(insert_sql) - strlen(insert_sql));
  
  const char *dbend;
  
  rc = sqlite3_prepare_v2(db, insert_sql, -1, &stmt, &dbend);
  
  if(SQLITE_OK != rc) {
  	fprintf(stderr, "Error preparing insert stmt \"%s\" (%i): %s\n", insert_sql, rc, sqlite3_errmsg(db));
  	return 1;
  }
  
  printf("prepared \"%s\"\n", insert_sql);
  
  while(NULL != fgets(line, sizeof(line), csvfile)) {
  	int curr_col = 1;
  
  	tok = strtok(line, delim);
  	
  	while(NULL != tok) {
  		// SQLite coerces types.
  		// Instead of sscanf'ing the tokens, put them into the REAL column
  		//   as text. If SQLite can coerce them, then it does. If not, it
  		//   stores them as text.
  		// When we re-export, we ask for the textual values. Either it coerces them back
  		//   or it gives us the raw text we put in
  	//	float item;
  	//	if(0 < sscanf(tok, "%f", &item)) {
  	//		sqlite3_bind_double(stmt, curr_col, item);
  	//	}
  		sqlite3_bind_text(stmt, curr_col, tok, strlen(tok), NULL);
  		curr_col++;
  		tok = strtok(NULL, delim);
  	}
  	rc = sqlite3_step(stmt);
  	sqlite3_reset(stmt);
  	sqlite3_clear_bindings(stmt);
  
  }
  
  fclose(csvfile);
  
  
  populatechoices();
  
  
  loaddata();
  
  return 0;
}

int FFTOBD::savedata(const char *filename) {
  if(NULL == db || 0 == dataitems || NULL == plotdata) {
  	return 1;
  }
  
  sqlite3_stmt *stmt;
  
  int rc;
  const char *dbend;
  
  rc = sqlite3_prepare_v2(db, "SELECT * FROM obd", -1, &stmt, &dbend);
  
  if(SQLITE_OK != rc) {
  	fprintf(stderr, "Couldn't prepare SELECT * stmt (%i): %s\n", rc, sqlite3_errmsg(db));
  	return 1;
  }
  
  if(SQLITE_ROW != sqlite3_step(stmt)) {
  	fprintf(stderr, "No rows returned by stmt\n");
  	return 1;
  }
  
  FILE *f = fopen(filename, "w");
  if(NULL == f) {
  	perror(filename);
  	return 1;
  }
  
  
  int i;
  for(i=0;i<sqlite3_column_count(stmt);i++) {
  	fprintf(f, "%s,", sqlite3_column_name(stmt, i));
  }
  
  sqlite3_reset(stmt); // Otherwise we lose the first row
  
  fprintf(f, "Original %s,Filtered %s,,Frequency,%f,%f,,Amplitude,%f,%f,,Power,%f\n",
  	columnchoice->value(), columnchoice->value(),
  	freq_min->value(), freq_max->value(),
  	rad_min->value(), rad_max->value(),
  	bendcurveslider->value()
  	);
  	
  for(i=0; i<dataitems; i++) {
  	if(SQLITE_ROW == sqlite3_step(stmt)) {
  		int j;
  		for(j=0;j<sqlite3_column_count(stmt);j++) {
  			// Let sqlite coerce the values into text
  			fprintf(f, "%s,", sqlite3_column_text(stmt, j));
  		}
  	}
  	
  	fprintf(f, "%f,%f\n", rawdata[i][0], plotdata[i][0]);
  }
  
  fclose(f);
  
  sqlite3_finalize(stmt);
  
  return 0;
}

void FFTOBD::closedb() {
  if(NULL != db) {
  	sqlite3_close(db);
  	db = NULL;
  }
  
  populatechoices();
}

int FFTOBD::loaddata() {
  if(NULL == db) {
  	fprintf(stderr, "Can't populate data without an open database\n");
  	return 1;
  }
  
  freedata();
  
  sqlite3_stmt *stmt;
  
  const char sql_with_trip[] = "SELECT (%s) FROM obd "
  	"LEFT JOIN trip ON obd.time>trip.start AND obd.time<trip.end "
  	"WHERE trip.tripid=%s";
  
  const char sql[] = "SELECT (%s) FROM obd";
  
  char actual_sql[256];
  
  if(!tripchoice->active() || 0 == strcmp("All", tripchoice->value())) {
  	snprintf(actual_sql, sizeof(actual_sql), sql, columnchoice->value());
  } else {
  	snprintf(actual_sql, sizeof(actual_sql), sql_with_trip, columnchoice->value(), tripchoice->value());
  }
  
  int rc;
  const char *dbend;
  
  rc = sqlite3_prepare_v2(db, actual_sql, -1, &stmt, &dbend);
  if(SQLITE_OK != rc) {
  	fprintf(stderr, "Couldn't prepare statement \"%s\" (%i): %s\n", actual_sql, rc, sqlite3_errmsg(db));
  	return 1;
  } else {
  	printf("SQL: %s\n", actual_sql);
  }
  
  int rowcount = 0;
  while(SQLITE_ROW == sqlite3_step(stmt)) {
  	rowcount++;
  }
  
  sqlite3_reset(stmt);
  
  allocatedata(rowcount);
  
  rowcount = 0;
  while(SQLITE_ROW == sqlite3_step(stmt)) {
  	rawdata[rowcount][0] = sqlite3_column_double(stmt, 0);
  	rowcount++;
  }
  
  prepareplans();
  
  memcpy(plotdata, rawdata, sizeof(fftw_complex) * rowcount);
  
  renderplotdata();
  
  sqlite3_finalize(stmt);
  
  return 0;
}

void FFTOBD::freedata() {
  if(NULL != rawdata) {
  	fftw_free(rawdata);
  }
  
  if(NULL != plotdata) {
  	fftw_free(plotdata);
  }
  
  if(NULL != transformeddata) {
  	fftw_free(transformeddata);
  }
  
  plotdata = NULL;
  rawdata = NULL;
  transformeddata = NULL;
  dataitems = 0;
}

void FFTOBD::allocatedata(int numitems) {
  freedata();
  
  dataitems = numitems;
  
  int bufsize = sizeof(fftw_complex) * numitems;
  
  rawdata = (fftw_complex *)fftw_malloc(bufsize);
  plotdata = (fftw_complex *)fftw_malloc(bufsize);
  transformeddata = (fftw_complex *)fftw_malloc(bufsize);
  
  memset(rawdata, 0, bufsize);
  memset(plotdata, 0, bufsize);
  memset(transformeddata, 0, bufsize);
}

void FFTOBD::renderplotdata() {
  if(NULL == db || NULL == rawdata || NULL == plotdata || dataitems == 0) {
  	return;
  }
  
  fftchart->clear();
  fftchart_raw->clear();
  
  int i;
  
  int x_min = (int)(dataitems * graphstart->value());
  int x_max = (int)(dataitems * graphend->value());
  
  double datamin = plotdata[x_min][0];
  double datamax = plotdata[x_min][0];
  
  for(i=x_min; i<x_max; i++) {
  	double p = plotdata[i][0];
  	fftchart->add(p);
  
  	if(p > datamax) datamax = p;
  	if(p < datamin) datamin = p;
  	
  	double q = rawdata[i][0];
  	
  	// Still look at it, so the scale doesn't twitch when clicking and unclicking the checkbox
  	if(showrawdata->value()) {
  		fftchart_raw->add(q, NULL, FL_RED);
  	}
  	
  	if(q > datamax) datamax = q;
  	if(q < datamin) datamin = q;
  }
  
  fftchart->bounds(datamin, datamax);
  fftchart_raw->bounds(datamin, datamax);
  
  chart_ymax->value(datamax);
  chart_ymin->value(datamin);
  chart_xmax->value(x_max);
  chart_xmin->value(x_min);
  
  Fl::redraw();
}

void FFTOBD::loadfftwwisdom() {
  FILE *wisdom;
  wisdom = fopen("fftwwisdom", "r");
  if(NULL != wisdom) {
  	fftw_import_wisdom_from_file(wisdom);
  	printf("Wisdom imported\n");
  	fclose(wisdom);
  }
}

void FFTOBD::savefftwwisdom() {
  FILE *wisdom;
  wisdom = fopen("fftwwisdom", "w");
  if(NULL != wisdom) {
  	fftw_export_wisdom_to_file(wisdom);
  	printf("Wisdom exported\n");
  	fclose(wisdom);
  }
}

void FFTOBD::destroyplans() {
  if(plans_prepared) {
  	fftw_destroy_plan(ff_forward);
  	fftw_destroy_plan(ff_backward);
  	plans_prepared = 0;
  }
}

void FFTOBD::prepareplans() {
  if(plans_prepared) {
  	destroyplans();
  }
  
  printf("About to prepare plans. This can take some time\n");
  
  ff_forward = fftw_plan_dft_1d(dataitems, rawdata, transformeddata, FFTW_FORWARD, FFTW_ESTIMATE);
  ff_backward = fftw_plan_dft_1d(dataitems, transformeddata, plotdata, FFTW_BACKWARD, FFTW_ESTIMATE);
  
  plans_prepared = 1;
}

void FFTOBD::thereandbackagain() {
  if(!plans_prepared) return;
  
  fftw_execute(ff_forward);
  
  // Filter the data here
  int i;
  
  // Do this in two sweeps.
  
  // First sweep, get the min and max along each axis
  // Second sweep, purge the data
  
  // double data_i_min, data_i_max; // Imaginary min and max of data
  // double data_r_min, data_r_max; // Real min and max of data
  double data_rad_min2, data_rad_max2; // Min and max radius sq'd of data
  
  // effectively bend the cutoff curve to be more sensiotive at the bottom
  const float bendcurve = bendcurveslider->value();
  
  /*
  data_i_min = data_i_max = transformeddata[0][1];
  data_r_min = data_r_max = transformeddata[0][0];
  */
  data_rad_min2 = data_rad_max2 = transformeddata[0][1] * transformeddata[0][1] +
  			transformeddata[0][0] * transformeddata[0][0];
  
  for(i=1; i<dataitems; i++) {
  /*
  	if(data_i_max < transformeddata[i][1]) data_i_max = transformeddata[i][1];
  	if(data_i_min > transformeddata[i][1]) data_i_min = transformeddata[i][1];
  
  	if(data_r_max < transformeddata[i][0]) data_r_max = transformeddata[i][0];
  	if(data_r_min > transformeddata[i][0]) data_r_min = transformeddata[i][0];
  
  */
  
  	double radsquared = (transformeddata[i][1] * transformeddata[i][1])
  		+ (transformeddata[i][0] * transformeddata[i][0]);
  	if(data_rad_max2 < radsquared) data_rad_max2 = radsquared;
  	if(data_rad_min2 > radsquared) data_rad_min2 = radsquared;
  }
  /*
  printf("R: %f,%f\nI: %f,%f\nQ: %f,%f\n",
  	data_r_min, data_r_max,
  	data_i_min, data_i_max,
  	data_rad_min2, data_rad_max2);
  */
  
  int fstart = (int)(dataitems*pow(freq_min->value(),bendcurve));
  for(i=1; i<fstart; i++) {
  	transformeddata[i][0] = transformeddata[i][1] = 0;
  }
  
  int fend = (int)(dataitems*pow(freq_max->value(),bendcurve));
  for(i=dataitems-1; i>fend; i--) {
  	transformeddata[i][0] = transformeddata[i][1] = 0;
  }
  
  /*
  double i_mincutoff = pow(i_min->value(),bendcurve) * max(fabs(data_i_max), fabs(data_i_min));
  double i_maxcutoff = pow(i_max->value(),bendcurve) * max(fabs(data_i_max), fabs(data_i_min));
  
  double r_mincutoff = pow(r_min->value(),bendcurve) * max(fabs(data_r_max), fabs(data_r_min));
  double r_maxcutoff = pow(r_max->value(),bendcurve) * max(fabs(data_r_max), fabs(data_r_min));
  */
  
  double rad_mincutoff = pow(rad_min->value(),bendcurve) * max(fabs(data_rad_max2), fabs(data_rad_min2));
  double rad_maxcutoff = pow(rad_max->value(),bendcurve) * max(fabs(data_rad_max2), fabs(data_rad_min2));
  
  for(i=1; i<dataitems; i++) {
  	double radsquared = transformeddata[i][1] * transformeddata[i][1] +
  			transformeddata[i][0] * transformeddata[i][0];
  	if(radsquared > rad_maxcutoff) {
  		transformeddata[i][0] = transformeddata[i][1] = 0;
  	}
  	if(radsquared < rad_mincutoff) {
  		transformeddata[i][0] = transformeddata[i][1] = 0;
  	}
  	
  /*	if(fabs(transformeddata[i][1]) > i_maxcutoff) {
  		transformeddata[i][0] = transformeddata[i][1] = 0;
  	}
  	if(fabs(transformeddata[i][1]) < i_mincutoff) {
  		transformeddata[i][0] = transformeddata[i][1] = 0;
  	}
  
  	if(fabs(transformeddata[i][0]) > r_maxcutoff) {
  		transformeddata[i][0] = transformeddata[i][1] = 0;
  	}
  	if(fabs(transformeddata[i][0]) < r_mincutoff) {
  		transformeddata[i][0] = transformeddata[i][1] = 0;
  	}
  */
  }
  
  fftw_execute(ff_backward);
  
  // Artifact of dft: the output is scaled by the size of the array 
  float divisor = (float)dataitems;
  for(i=0; i<dataitems; i++) {
  	plotdata[i][0] /= divisor;
  	plotdata[i][1] /= divisor;
  }
}

void FFTOBD::resetsliders() {
  rad_max->value(1.0);
  rad_min->value(0.0);
  
  freq_max->value(1.0);
  freq_min->value(0.0);
  
  graphend->value(1.0);
  graphstart->value(0.0);
  
  bendcurveslider->value(2.0);
  
  showrawdata->value(1);
  
  thereandbackagain();
  renderplotdata();
}

int FFTOBD::populatechoices() {
  columnchoice->clear();
  
  tripchoice->clear();
  
  tripchoice->add("All");
  tripchoice->value(0);
  
  columnchoice->deactivate();
  tripchoice->deactivate();
  
  if(NULL == db) {
  	return 1;
  }
  
  columnchoice->activate();
  
  int rc;
  
  sqlite3_stmt *pragma_stmt; // The stmt for gathering table_info
  const char *dbend; // ignored handle for sqlite
  
  rc = sqlite3_prepare_v2(db, "PRAGMA table_info(obd)", -1, &pragma_stmt, &dbend);
  
  if(SQLITE_OK != rc) {
  	fprintf(stderr, "Couldn't get table info in database (%i): %s\n", rc, sqlite3_errmsg(db));
  	return 1;
  }
  
  while(SQLITE_ROW == sqlite3_step(pragma_stmt)) {
  	const char *columnname = (const char *)sqlite3_column_text(pragma_stmt, 1);
  
  	char n[64];
  	snprintf(n, sizeof(n), "\"%s\"", columnname);
  	columnchoice->add(n);
  }
  
  sqlite3_finalize(pragma_stmt);
  
  columnchoice->value(0);
  
  
  rc = sqlite3_prepare_v2(db, "SELECT tripid FROM trip", -1, &pragma_stmt, &dbend);
  
  if(SQLITE_OK != rc) {
  	fprintf(stderr, "Couldn't get trips in database (%i): %s\n", rc, sqlite3_errmsg(db));
  	return 1;
  }
  
  while(SQLITE_ROW == sqlite3_step(pragma_stmt)) {
  	const char *tripid = (const char *)sqlite3_column_text(pragma_stmt, 0);
  	tripchoice->add(tripid);
  }
  
  sqlite3_finalize(pragma_stmt);
  
  tripchoice->activate();
  
  return 0;
}
