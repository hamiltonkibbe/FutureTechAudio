/*
 *  testFIR.h
 *  Test
 *
 *  Created by Hamilton Kibbe on 4/28/13.
 *  Copyright 2013 HTK Audio. All rights reserved.
 *
 */

#ifndef TESTFIR_H
#define TESTFIR_H

unsigned
testFIRFilterAgainstMatlab(void);

unsigned
testFIRFilterBlockSize(void);

unsigned 
runFIRFilterTests(void);

static const float MatlabFilter[22] = 
{
    -0.0018443873850628734,
    -0.0065792468376457691,
    -0.013309495523571968,
    -0.018774356693029404,
    -0.017523109912872314,
    -0.0038088480941951275,
    0.025527413934469223,
    0.068517640233039856,
    0.11734573543071747,
    0.16021603345870972,
    0.18532848358154297,
    0.18532848358154297,
    0.16021603345870972,
    0.11734573543071747,
    0.068517640233039856,
    0.025527413934469223,
    -0.0038088480941951275,
    -0.017523109912872314,
    -0.018774356693029404,
    -0.013309495523571968,
    -0.0065792468376457691,
    -0.0018443873850628734
};


static const float MatlabLowpassOutput[100] = 
{
    0, -0.00034560373751446605, -0.0019117922056466341, -0.0059042051434516907,
    -0.013205422088503838, -0.023322334513068199, -0.033326748758554459,
    -0.037367187440395355, -0.027244947850704193, 0.0058308583684265614,
    0.068721584975719452, 0.16390492022037506, 0.2880089282989502,
    0.43193158507347107, 0.58254122734069824, 0.72535300254821777,
    0.84725207090377808, 0.93842333555221558,0.99306684732437134,
    1.0090122222900391, 0.98671919107437134, 0.9282383918762207,
    0.83652853965759277, 0.71518415212631226, 0.56850415468215942,
    0.40168452262878418, 0.22063513100147247, 0.031769569963216782,
    -0.15822148323059082, -0.34260740876197815, -0.51485627889633179,
    -0.66886615753173828, -0.79918116331100464, -0.90118467807769775,
    -0.97126328945159912, -1.006934642791748, -1.006934642791748,
    -0.97126328945159912, -0.90118473768234253, -0.79918110370635986,
    -0.66886609792709351, -0.51485633850097656, -0.34260737895965576,
    -0.15822146832942963, 0.031769577413797379, 0.22063511610031128,
    0.40168458223342896, 0.5685042142868042, 0.71518427133560181,
    0.83652853965759277, 0.92823827266693115, 0.98706477880477905,
    1.0109243392944336, 0.99897086620330811, 0.95162868499755859,
    0.87057435512542725, 0.75867974758148193, 0.61990845203399658,
    0.45917654037475586, 0.28217807412147522, 0.095183342695236206,
    -0.095183342695236206, -0.28217807412147522, -0.45917651057243347,
    -0.61990845203399658, -0.75867974758148193, -0.87057441473007202,
    -0.95162880420684814, -0.99897104501724243, -1.0109241008758545,
    -0.98706477880477905, -0.9282383918762207, -0.83652853965759277,
    -0.71518415212631226, -0.56850415468215942, -0.40168452262878418,
    -0.22063513100147247, -0.031769569963216782, 0.15822148323059082,
    0.34260740876197815, 0.51485627889633179, 0.66886615753173828,
    0.79918116331100464, 0.90118467807769775, 0.97126328945159912,
    1.006934642791748, 1.006934642791748, 0.97126328945159912,
    0.90118473768234253, 0.79918110370635986, 0.66886609792709351,
    0.51485633850097656, 0.34260737895965576, 0.15822146832942963,
    -0.03176957368850708, -0.22063511610031128, -0.40168458223342896,
    -0.5685042142868042, -0.71518427133560181, -0.83652853965759277
};

#endif
