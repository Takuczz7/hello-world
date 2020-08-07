

CMAKE_MINIMUM_REQUIRED( VERSION 3.3 FATAL_ERROR )
PROJECT( CTViewer )

#----------------------------------------------------------------------------------
FIND_PACKAGE( VTK REQUIRED )
FIND_PACKAGE( Qt5Widgets REQUIRED )

INCLUDE( ${VTK_USE_FILE} )



#----------------------------------------------------------------------------------
SET( PROJECT_SRCS
    main.cpp
    ProjectMainWindow.cpp
    )

SET( PROJECT_UIS
    CTViewer.ui
)

SET( PROJECT_MOC_HDRS
  ProjectMainWindow.h
)

#----------------------------------------------------------------------------------
QT5_WRAP_UI( PROJECT_UIS_H 
             ${PROJECT_UIS}
           )

QT5_WRAP_CPP( PROJECT_MOC_SRCS 
              ${PROJECT_MOC_HDRS}
            )

#----------------------------------------------------------------------------------
INCLUDE_DIRECTORIES( ${PROJECT_SOURCE_DIR} 
                     ${CMAKE_CURRENT_BINARY_DIR} 
                     ${VTK_DIR} 
                   )

ADD_EXECUTABLE( CTViewer  
                ${PROJECT_SRCS} 
                ${PROJECT_UIS_H} 
                ${PROJECT_MOC_SRCS} 
                ${PROJECT_MOC_HDRS}
              )

TARGET_LINK_LIBRARIES ( CTViewer 
  ${VTK_LIBRARIES}
  ${Qt5Widgets_LIBRARIES} 
  )

