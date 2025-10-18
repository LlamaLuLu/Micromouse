    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 3;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.simstruct
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 51;
            section.data(51)  = dumData; %prealloc

                    ;% rtP.LowPassFilterDiscreteorContinuous3_K
                    section.data(1).logicalSrcIdx = 1;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.LowPassFilterDiscreteorContinuous4_K
                    section.data(2).logicalSrcIdx = 2;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.LowPassFilterDiscreteorContinuous5_K
                    section.data(3).logicalSrcIdx = 3;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.LowPassFilterDiscreteorContinuous3_T
                    section.data(4).logicalSrcIdx = 4;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.LowPassFilterDiscreteorContinuous4_T
                    section.data(5).logicalSrcIdx = 5;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.LowPassFilterDiscreteorContinuous5_T
                    section.data(6).logicalSrcIdx = 6;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.CompareToConstant_const
                    section.data(7).logicalSrcIdx = 7;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.CompareToConstant_const_izdv1scwad
                    section.data(8).logicalSrcIdx = 8;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.CompareToConstant_const_a4stry1zs4
                    section.data(9).logicalSrcIdx = 9;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.mmdistancesensors_debug
                    section.data(10).logicalSrcIdx = 10;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.LowPassFilterDiscreteorContinuous3_init_option
                    section.data(11).logicalSrcIdx = 11;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.LowPassFilterDiscreteorContinuous4_init_option
                    section.data(12).logicalSrcIdx = 12;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.LowPassFilterDiscreteorContinuous5_init_option
                    section.data(13).logicalSrcIdx = 13;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.mmrobotpose_theta0
                    section.data(14).logicalSrcIdx = 14;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.mmwheelencoders_ticsperrev
                    section.data(15).logicalSrcIdx = 15;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.mmsimplerobot_x0
                    section.data(16).logicalSrcIdx = 16;
                    section.data(16).dtTransOffset = 15;

                    ;% rtP.mmsimplerobot_y0
                    section.data(17).logicalSrcIdx = 17;
                    section.data(17).dtTransOffset = 16;

                    ;% rtP.Out1_Y0
                    section.data(18).logicalSrcIdx = 18;
                    section.data(18).dtTransOffset = 17;

                    ;% rtP.Constant_Value
                    section.data(19).logicalSrcIdx = 19;
                    section.data(19).dtTransOffset = 18;

                    ;% rtP.Constant_Value_ofajz0vmqk
                    section.data(20).logicalSrcIdx = 20;
                    section.data(20).dtTransOffset = 19;

                    ;% rtP.Constant_Value_iweutw4dc2
                    section.data(21).logicalSrcIdx = 21;
                    section.data(21).dtTransOffset = 20;

                    ;% rtP.Integrator_gainval
                    section.data(22).logicalSrcIdx = 22;
                    section.data(22).dtTransOffset = 21;

                    ;% rtP.Integrator_UpperSat
                    section.data(23).logicalSrcIdx = 23;
                    section.data(23).dtTransOffset = 22;

                    ;% rtP.Integrator_LowerSat
                    section.data(24).logicalSrcIdx = 24;
                    section.data(24).dtTransOffset = 23;

                    ;% rtP.Saturation_UpperSat
                    section.data(25).logicalSrcIdx = 25;
                    section.data(25).dtTransOffset = 24;

                    ;% rtP.Saturation_LowerSat
                    section.data(26).logicalSrcIdx = 26;
                    section.data(26).dtTransOffset = 25;

                    ;% rtP.Integrator_gainval_pmkfkwu0cc
                    section.data(27).logicalSrcIdx = 27;
                    section.data(27).dtTransOffset = 26;

                    ;% rtP.Integrator_UpperSat_kzv3sf2wkn
                    section.data(28).logicalSrcIdx = 28;
                    section.data(28).dtTransOffset = 27;

                    ;% rtP.Integrator_LowerSat_et0vhzjblr
                    section.data(29).logicalSrcIdx = 29;
                    section.data(29).dtTransOffset = 28;

                    ;% rtP.Saturation_UpperSat_lqq4s3fwjp
                    section.data(30).logicalSrcIdx = 30;
                    section.data(30).dtTransOffset = 29;

                    ;% rtP.Saturation_LowerSat_az2le0w5qs
                    section.data(31).logicalSrcIdx = 31;
                    section.data(31).dtTransOffset = 30;

                    ;% rtP.Integrator_gainval_oyqv0ladld
                    section.data(32).logicalSrcIdx = 32;
                    section.data(32).dtTransOffset = 31;

                    ;% rtP.Integrator_UpperSat_fgmadlykzp
                    section.data(33).logicalSrcIdx = 33;
                    section.data(33).dtTransOffset = 32;

                    ;% rtP.Integrator_LowerSat_kbaak3f5xe
                    section.data(34).logicalSrcIdx = 34;
                    section.data(34).dtTransOffset = 33;

                    ;% rtP.Saturation_UpperSat_my3br2vs03
                    section.data(35).logicalSrcIdx = 35;
                    section.data(35).dtTransOffset = 34;

                    ;% rtP.Saturation_LowerSat_awul2wab42
                    section.data(36).logicalSrcIdx = 36;
                    section.data(36).dtTransOffset = 35;

                    ;% rtP.Integrator1_IC
                    section.data(37).logicalSrcIdx = 37;
                    section.data(37).dtTransOffset = 36;

                    ;% rtP.Integrator1_IC_kg1uujsnot
                    section.data(38).logicalSrcIdx = 38;
                    section.data(38).dtTransOffset = 37;

                    ;% rtP.Integrator_IC
                    section.data(39).logicalSrcIdx = 39;
                    section.data(39).dtTransOffset = 38;

                    ;% rtP.Gain4_Gain
                    section.data(40).logicalSrcIdx = 40;
                    section.data(40).dtTransOffset = 39;

                    ;% rtP.errormargin_Gain
                    section.data(41).logicalSrcIdx = 41;
                    section.data(41).dtTransOffset = 40;

                    ;% rtP.distanceconverter_Gain
                    section.data(42).logicalSrcIdx = 42;
                    section.data(42).dtTransOffset = 41;

                    ;% rtP.Gain_Gain
                    section.data(43).logicalSrcIdx = 43;
                    section.data(43).dtTransOffset = 42;

                    ;% rtP.Gain1_Gain
                    section.data(44).logicalSrcIdx = 44;
                    section.data(44).dtTransOffset = 43;

                    ;% rtP.Integrator_IC_ngb3lucrsz
                    section.data(45).logicalSrcIdx = 45;
                    section.data(45).dtTransOffset = 44;

                    ;% rtP.Constant_Value_e2dunptcm0
                    section.data(46).logicalSrcIdx = 46;
                    section.data(46).dtTransOffset = 45;

                    ;% rtP.Constant_Value_e5jcotvvny
                    section.data(47).logicalSrcIdx = 47;
                    section.data(47).dtTransOffset = 46;

                    ;% rtP.Constant1_Value
                    section.data(48).logicalSrcIdx = 48;
                    section.data(48).dtTransOffset = 47;

                    ;% rtP.Constant_Value_lr4ms5o4l0
                    section.data(49).logicalSrcIdx = 49;
                    section.data(49).dtTransOffset = 50;

                    ;% rtP.Constant1_Value_ddcl5gh2ak
                    section.data(50).logicalSrcIdx = 50;
                    section.data(50).dtTransOffset = 51;

                    ;% rtP.Constant2_Value
                    section.data(51).logicalSrcIdx = 51;
                    section.data(51).dtTransOffset = 52;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtP.OLED_STRING1_String
                    section.data(1).logicalSrcIdx = 52;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.OLED_STRING2_String
                    section.data(2).logicalSrcIdx = 53;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 2;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 43;
            section.data(43)  = dumData; %prealloc

                    ;% rtB.cngfn1wxw4
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.h4kspc310t
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.i1ks4nvn04
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.gvkjqyfh5c
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.kxrvfu1ehv
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.lsr13h5kid
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtB.k04rua40z0
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtB.ehm3yytxoa
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 9;

                    ;% rtB.bm3zqotgwb
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 12;

                    ;% rtB.kwftyjyxpv
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 14;

                    ;% rtB.ewf4owjito
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 17;

                    ;% rtB.euqty000s5
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 18;

                    ;% rtB.gc0h2fcjlf
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 19;

                    ;% rtB.ivhyg3ka2t
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 21;

                    ;% rtB.o4oyjbghkn
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 22;

                    ;% rtB.d5bexgg5ud
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 23;

                    ;% rtB.geack2hgej
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 25;

                    ;% rtB.aw5fvfkl4k
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 26;

                    ;% rtB.jnbt4dp1zd
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 27;

                    ;% rtB.pvl2fqbdnb
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 28;

                    ;% rtB.c3f5my0yba
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 30;

                    ;% rtB.gtf5bhspr5
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 32;

                    ;% rtB.ggd3q5xetv
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 33;

                    ;% rtB.b0avxogppv
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 34;

                    ;% rtB.nwdsz2ijro
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 35;

                    ;% rtB.avr1raogew
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 36;

                    ;% rtB.mja435uye4
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 37;

                    ;% rtB.jph2p0erwe
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 38;

                    ;% rtB.o1u44cgbcz
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 39;

                    ;% rtB.mmvr34tq4s
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 40;

                    ;% rtB.o3awe1dagi
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 41;

                    ;% rtB.aq0w45afqv
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 42;

                    ;% rtB.ks2rov0eom
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 43;

                    ;% rtB.nbug4ir3tw
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 44;

                    ;% rtB.mpugsvqgyh
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 45;

                    ;% rtB.ohbrmglluj
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 48;

                    ;% rtB.iaho3wpxg5
                    section.data(37).logicalSrcIdx = 43;
                    section.data(37).dtTransOffset = 49;

                    ;% rtB.fspxye1ya1
                    section.data(38).logicalSrcIdx = 44;
                    section.data(38).dtTransOffset = 50;

                    ;% rtB.kbi5gtax1r
                    section.data(39).logicalSrcIdx = 45;
                    section.data(39).dtTransOffset = 51;

                    ;% rtB.nwh2ohbvkv
                    section.data(40).logicalSrcIdx = 46;
                    section.data(40).dtTransOffset = 52;

                    ;% rtB.dp50dq5tps
                    section.data(41).logicalSrcIdx = 47;
                    section.data(41).dtTransOffset = 53;

                    ;% rtB.hy1sdasjsw
                    section.data(42).logicalSrcIdx = 48;
                    section.data(42).dtTransOffset = 54;

                    ;% rtB.kzc2g5pqze
                    section.data(43).logicalSrcIdx = 55;
                    section.data(43).dtTransOffset = 55;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% rtB.dv5fmxftb2
                    section.data(1).logicalSrcIdx = 56;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.hez31ivcnc
                    section.data(2).logicalSrcIdx = 57;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.pbnizhjvzo
                    section.data(3).logicalSrcIdx = 58;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.cngravbh2r
                    section.data(4).logicalSrcIdx = 59;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.caujwou1jk
                    section.data(5).logicalSrcIdx = 60;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.ntxg1addth
                    section.data(6).logicalSrcIdx = 61;
                    section.data(6).dtTransOffset = 5;

                    ;% rtB.n504o31mpd
                    section.data(7).logicalSrcIdx = 63;
                    section.data(7).dtTransOffset = 6;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 8;
        sectIdxOffset = 2;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%
            section.nData     = 51;
            section.data(51)  = dumData; %prealloc

                    ;% rtDW.e2tyz0qrrq
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.dupakdsnzz
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.a5hvpj25th
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.i5bvacsh1c
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.j0pj1cxjdn
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.hj4s3vhbsm
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.n3g3ymlzmr
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.gqfi4xcbpq
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.nltseoa5tf
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.jf4thnpuad
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.mjsm4xz2fd
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.msu0usinuw
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.eb5ua2po2y
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.a4phy4pqvq
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.ht4sfrmguj
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% rtDW.fvuqlob3jg
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% rtDW.ghpi3etgoe
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% rtDW.b5ciq54a2a
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% rtDW.as3jc4aixp
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% rtDW.kw4mcnvapg
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

                    ;% rtDW.hekbx12zjf
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 20;

                    ;% rtDW.dg4bndzwcf
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 21;

                    ;% rtDW.bsz2i3x1zz
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 22;

                    ;% rtDW.guxmnl3023
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 23;

                    ;% rtDW.mkaulxhvv5
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 24;

                    ;% rtDW.k4bunfh2cu
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 25;

                    ;% rtDW.omd2l4th2w
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 26;

                    ;% rtDW.ibjaxusqtb
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 27;

                    ;% rtDW.bhzxd4c0jb
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 28;

                    ;% rtDW.gcoa440zpp
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 29;

                    ;% rtDW.fiug4ptcox
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 30;

                    ;% rtDW.ei11pgnka4
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 31;

                    ;% rtDW.hryhffuttt
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 32;

                    ;% rtDW.pkjabwswri
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 33;

                    ;% rtDW.hvlgcytolm
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 34;

                    ;% rtDW.ahadgjvl0w
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 35;

                    ;% rtDW.hthc5b4czm
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 36;

                    ;% rtDW.lsryszinou
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 37;

                    ;% rtDW.jbbzdspg0o
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 38;

                    ;% rtDW.j3fo2xlqpp
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 62;

                    ;% rtDW.oa1ipehqlk
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 63;

                    ;% rtDW.nk0ebvht3j
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 64;

                    ;% rtDW.oavskvfao1
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 65;

                    ;% rtDW.m5xqkkdrpe
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 66;

                    ;% rtDW.dlac4no1kf
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 73;

                    ;% rtDW.kmgfkm3qi1
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 80;

                    ;% rtDW.of44i41wjh
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 81;

                    ;% rtDW.anrkqgyd0y
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 82;

                    ;% rtDW.c0ddl114m0
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 83;

                    ;% rtDW.bpv12jq0j2
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 84;

                    ;% rtDW.jcrrh2phtm
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 85;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 8;
            section.data(8)  = dumData; %prealloc

                    ;% rtDW.dcnvswfsji.LoggedData
                    section.data(1).logicalSrcIdx = 51;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.oafdbnskgh.LoggedData
                    section.data(2).logicalSrcIdx = 52;
                    section.data(2).dtTransOffset = 3;

                    ;% rtDW.ptoetb01hb.AQHandles
                    section.data(3).logicalSrcIdx = 53;
                    section.data(3).dtTransOffset = 5;

                    ;% rtDW.fcrqtiosyn.AQHandles
                    section.data(4).logicalSrcIdx = 54;
                    section.data(4).dtTransOffset = 6;

                    ;% rtDW.brzhetjznx.AQHandles
                    section.data(5).logicalSrcIdx = 55;
                    section.data(5).dtTransOffset = 7;

                    ;% rtDW.jd5lbr5wcq.LoggedData
                    section.data(6).logicalSrcIdx = 56;
                    section.data(6).dtTransOffset = 8;

                    ;% rtDW.bxw3wejwzq.AQHandles
                    section.data(7).logicalSrcIdx = 57;
                    section.data(7).dtTransOffset = 9;

                    ;% rtDW.prd3yljh4y.LoggedData
                    section.data(8).logicalSrcIdx = 58;
                    section.data(8).dtTransOffset = 10;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 11;
            section.data(11)  = dumData; %prealloc

                    ;% rtDW.kjbt4d23ke
                    section.data(1).logicalSrcIdx = 59;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.jbz5db4uv3
                    section.data(2).logicalSrcIdx = 60;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.p1x2oxibuy
                    section.data(3).logicalSrcIdx = 61;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.boqo1kfngr
                    section.data(4).logicalSrcIdx = 62;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.nmo21jm233
                    section.data(5).logicalSrcIdx = 63;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.ppafdi3a1m
                    section.data(6).logicalSrcIdx = 64;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.ag2o5lx0zx
                    section.data(7).logicalSrcIdx = 65;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.pinldolpql
                    section.data(8).logicalSrcIdx = 66;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.hivxqwy2wg
                    section.data(9).logicalSrcIdx = 67;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.p1z00yunkl
                    section.data(10).logicalSrcIdx = 68;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.nls3sblsfo
                    section.data(11).logicalSrcIdx = 69;
                    section.data(11).dtTransOffset = 10;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.lhfc0ta5ml
                    section.data(1).logicalSrcIdx = 70;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.chcmzyq1nu
                    section.data(2).logicalSrcIdx = 71;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.k5vzkvexn5
                    section.data(1).logicalSrcIdx = 72;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% rtDW.hgyf2n5vgw
                    section.data(1).logicalSrcIdx = 73;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.n0ab4hkwjr
                    section.data(2).logicalSrcIdx = 74;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.p34vnxg4cl
                    section.data(3).logicalSrcIdx = 75;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.cshvnu2qj4
                    section.data(4).logicalSrcIdx = 76;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.anun1akbzt
                    section.data(5).logicalSrcIdx = 77;
                    section.data(5).dtTransOffset = 4;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% rtDW.k00pa3laqh
                    section.data(1).logicalSrcIdx = 78;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.omatkykwmc
                    section.data(2).logicalSrcIdx = 79;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.h2aulvebrm
                    section.data(3).logicalSrcIdx = 80;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.azfivy5wqv
                    section.data(4).logicalSrcIdx = 81;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.cxaqlklp3z
                    section.data(5).logicalSrcIdx = 82;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.bymhg25233
                    section.data(6).logicalSrcIdx = 83;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 37;
            section.data(37)  = dumData; %prealloc

                    ;% rtDW.bt4dt4cuu2
                    section.data(1).logicalSrcIdx = 84;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.hssax2olko
                    section.data(2).logicalSrcIdx = 85;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.cfai5v52fq
                    section.data(3).logicalSrcIdx = 86;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.n3w0gkdjc5
                    section.data(4).logicalSrcIdx = 87;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.kpwsg1fwo4
                    section.data(5).logicalSrcIdx = 88;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.htlid55lmh
                    section.data(6).logicalSrcIdx = 89;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.hrnpqly234
                    section.data(7).logicalSrcIdx = 90;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.fffjpdz1bc
                    section.data(8).logicalSrcIdx = 91;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.ctlazpcn1r
                    section.data(9).logicalSrcIdx = 92;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.gpt4l3gxl0
                    section.data(10).logicalSrcIdx = 93;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.bwmvjcjrxc
                    section.data(11).logicalSrcIdx = 94;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.ftjkxzybsy
                    section.data(12).logicalSrcIdx = 95;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.hrd2dtqf1n
                    section.data(13).logicalSrcIdx = 96;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.dkcwlolqxl
                    section.data(14).logicalSrcIdx = 97;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.egry1geo3t
                    section.data(15).logicalSrcIdx = 98;
                    section.data(15).dtTransOffset = 14;

                    ;% rtDW.gz5an5grm2
                    section.data(16).logicalSrcIdx = 99;
                    section.data(16).dtTransOffset = 15;

                    ;% rtDW.keotauvojf
                    section.data(17).logicalSrcIdx = 100;
                    section.data(17).dtTransOffset = 16;

                    ;% rtDW.glguabnpzh
                    section.data(18).logicalSrcIdx = 101;
                    section.data(18).dtTransOffset = 17;

                    ;% rtDW.km1goje2r1
                    section.data(19).logicalSrcIdx = 102;
                    section.data(19).dtTransOffset = 18;

                    ;% rtDW.mnez3r4wih
                    section.data(20).logicalSrcIdx = 103;
                    section.data(20).dtTransOffset = 19;

                    ;% rtDW.cpqsdojs4v
                    section.data(21).logicalSrcIdx = 104;
                    section.data(21).dtTransOffset = 20;

                    ;% rtDW.g3h3iifz4a
                    section.data(22).logicalSrcIdx = 105;
                    section.data(22).dtTransOffset = 21;

                    ;% rtDW.auf11wecna
                    section.data(23).logicalSrcIdx = 106;
                    section.data(23).dtTransOffset = 22;

                    ;% rtDW.eottp2wq2b
                    section.data(24).logicalSrcIdx = 107;
                    section.data(24).dtTransOffset = 23;

                    ;% rtDW.hv3cm0cioe
                    section.data(25).logicalSrcIdx = 108;
                    section.data(25).dtTransOffset = 24;

                    ;% rtDW.jtr2pdj40h
                    section.data(26).logicalSrcIdx = 109;
                    section.data(26).dtTransOffset = 25;

                    ;% rtDW.az214v0nqt
                    section.data(27).logicalSrcIdx = 110;
                    section.data(27).dtTransOffset = 26;

                    ;% rtDW.axtegouoxr
                    section.data(28).logicalSrcIdx = 111;
                    section.data(28).dtTransOffset = 27;

                    ;% rtDW.ihr0u5jxyq
                    section.data(29).logicalSrcIdx = 112;
                    section.data(29).dtTransOffset = 28;

                    ;% rtDW.jchleqhuy5
                    section.data(30).logicalSrcIdx = 113;
                    section.data(30).dtTransOffset = 29;

                    ;% rtDW.iu2dpnxnxi
                    section.data(31).logicalSrcIdx = 114;
                    section.data(31).dtTransOffset = 30;

                    ;% rtDW.ddvsbh4eeb
                    section.data(32).logicalSrcIdx = 115;
                    section.data(32).dtTransOffset = 31;

                    ;% rtDW.nmgtdqicex
                    section.data(33).logicalSrcIdx = 116;
                    section.data(33).dtTransOffset = 32;

                    ;% rtDW.hkz1fvip5h
                    section.data(34).logicalSrcIdx = 117;
                    section.data(34).dtTransOffset = 33;

                    ;% rtDW.b41p410v44
                    section.data(35).logicalSrcIdx = 118;
                    section.data(35).dtTransOffset = 34;

                    ;% rtDW.jngltzcitg
                    section.data(36).logicalSrcIdx = 119;
                    section.data(36).dtTransOffset = 35;

                    ;% rtDW.hcizcxtpa5
                    section.data(37).logicalSrcIdx = 120;
                    section.data(37).dtTransOffset = 36;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 1900629582;
    targMap.checksum1 = 3714603425;
    targMap.checksum2 = 3539306551;
    targMap.checksum3 = 3798494281;

