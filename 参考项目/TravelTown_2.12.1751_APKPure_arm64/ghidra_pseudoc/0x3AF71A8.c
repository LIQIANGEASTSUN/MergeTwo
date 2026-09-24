/* Ghidra 12.1.2 native pseudocode; RVA 0x3AF71A8; MergeEngine.ECS.Systems.State.StateSystemBase<TStatePayload>.TryLoadComponent<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>; status ok */


/* WARNING: Type propagation algorithm not settling */

long *******
MergeEngine_ECS_Systems_State_StateSystemBase_TStatePayload___TryLoadComponent___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
          (undefined8 param_1,long *******param_2,long *******param_3,long *******param_4,
          long *******param_5,long *******param_6,undefined8 param_7,long ******param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort uVar4;
  long lVar5;
  long *****ppppplVar6;
  ulong uVar7;
  long *******ppppppplVar8;
  long *******ppppppplVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long ******pppppplVar14;
  undefined8 *puVar15;
  long ******pppppplVar16;
  long *******ppppppplVar17;
  long *******ppppppplVar18;
  long ****pppplVar19;
  long ***ppplVar20;
  long ****pppplVar21;
  long ***ppplVar22;
  long ***ppplVar23;
  long **pplVar24;
  long **pplVar25;
  long lVar26;
  undefined *puVar27;
  long ****pppplVar28;
  long **pplVar29;
  long ******pppppplVar30;
  long ****pppplVar31;
  long **pplVar32;
  long **pplVar33;
  long *******ppppppplVar34;
  long *******ppppppplVar35;
  long *******ppppppplVar36;
  long *******ppppppplVar37;
  long ******pppppplVar38;
  uint uVar39;
  long ******pppppplVar40;
  long ******pppppplVar41;
  long *****ppppplVar42;
  long *****ppppplVar43;
  int *piVar44;
  long **pplVar45;
  long ******pppppplVar46;
  long **pplVar47;
  long ***ppplVar48;
  long *plVar49;
  long ******pppppplVar50;
  long *****ppppplVar51;
  long ****pppplVar52;
  long *******ppppppplVar53;
  long *******ppppppplVar54;
  long ******pppppplVar55;
  long *****ppppplVar56;
  long *******ppppppplVar57;
  long ***ppplVar58;
  long *******ppppppplVar59;
  long *******ppppppplVar60;
  long *****ppppplVar61;
  long ****pppplVar62;
  long ******pppppplVar63;
  long ******pppppplVar64;
  undefined8 uVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [12];
  long **applStack_640 [5];
  undefined4 uStack_614;
  long **applStack_610 [9];
  uint uStack_5c4;
  long **applStack_5c0 [9];
  uint uStack_574;
  long **applStack_570 [9];
  long ***ppplStack_528;
  long ****pppplStack_520;
  long ***appplStack_518 [17];
  long ******pppppplStack_490;
  long ****apppplStack_488 [11];
  long ******pppppplStack_430;
  long ****apppplStack_428 [3];
  long ******pppppplStack_410;
  long ****apppplStack_408 [14];
  long *****appppplStack_398 [8];
  long ******pppppplStack_358;
  long *****appppplStack_350 [2];
  long ******pppppplStack_340;
  long *****appppplStack_338 [9];
  undefined1 auStack_2f0 [16];
  long *****appppplStack_2e0 [2];
  long ******apppppplStack_2d0 [8];
  undefined1 auStack_28c [12];
  long ******apppppplStack_280 [19];
  undefined4 uStack_1e4;
  long ******apppppplStack_1e0 [44];
  long *******appppppplStack_80 [3];
  long *****ppppplStack_68;
  
  pppppplVar46 = (long ******)&stack0xffffffffffffffa0;
  pppppplVar63 = (long ******)&stack0xffffffffffffffa0;
  pppppplVar50 = (long ******)tpidr_el0;
  ppppplStack_68 = pppppplVar50[5];
  pppppplVar64 = param_4[7];
  ppppppplVar35 = param_4;
  appppppplStack_80[0] = param_3;
  appppppplStack_80[1] = param_2;
  if (pppppplVar64 == (long ******)0x0) {
    func_0x03256878(param_4);
    pppppplVar64 = param_4[7];
  }
  ppppplVar6 = *pppppplVar64;
  uVar39 = *(uint *)((long)ppppplVar6 + 0xfc);
  ppppppplVar59 = (long *******)(ulong)uVar39;
  ppppppplVar57 = (long *******)(ulong)*(uint *)((long)pppppplVar64[1] + 0xfc);
  if ((*(byte *)((long)ppppplVar6 + 0x135) & 1) == 0) {
    lVar5 = func_0x0325681c();
    pppppplVar64 = param_4[7];
    uVar39 = *(uint *)(lVar5 + 0xfc);
    ppppplVar6 = *pppppplVar64;
  }
  ppppppplVar34 =
       (long *******)((long)appppppplStack_80 - ((ulong)(uVar39 + 0x10) + 0xf & 0x1fffffff0));
  ppppppplVar60 = (long *******)((long)ppppppplVar34 - ((long)ppppppplVar59 + 0xfU & 0x1fffffff0));
  ppppppplVar53 = (long *******)((long)ppppppplVar60 - ((long)ppppppplVar57 + 0xfU & 0x1fffffff0));
  ppppppplVar54 = param_2;
  if (-1 < *(int *)(ppppplVar6 + 5)) {
    ppppppplVar54 = (long *******)(appppppplStack_80 + 1);
  }
  ppppppplVar37 = ppppppplVar59;
  func_0x072ce970(ppppppplVar60,ppppppplVar54);
  uVar7 = func_0x03280c64(*pppppplVar64,ppppppplVar60);
  ppppppplVar54 = ppppppplVar53;
  if ((uVar7 & 1) == 0) {
LAB_03bf7308:
    ppppppplVar8 = (long *******)0x0;
  }
  else {
    ppppppplVar59 = (long *******)param_4[7];
    ppppppplVar60 = (long *******)appppppplStack_80;
    ppppppplVar8 = param_3;
    if (-1 < *(int *)(ppppppplVar59[1] + 5)) {
      ppppppplVar8 = ppppppplVar60;
    }
    ppppppplVar37 = ppppppplVar57;
    func_0x072ce970(ppppppplVar53,ppppppplVar8);
    uVar7 = func_0x03280c64(ppppppplVar59[1],ppppppplVar53);
    if ((uVar7 & 1) == 0) goto LAB_03bf7308;
    ppppppplVar59 = (long *******)param_4[7];
    ppppppplVar35 = param_3;
    if (-1 < *(int *)(ppppppplVar59[1] + 5)) {
      ppppppplVar35 = ppppppplVar60;
    }
    func_0x072ce970(ppppppplVar53,ppppppplVar35,ppppppplVar57);
    pppppplVar40 = *ppppppplVar59;
    pppppplVar41 = pppppplVar40;
    if ((*(byte *)((long)pppppplVar40 + 0x135) & 1) == 0) {
      pppppplVar40 = (long ******)func_0x0325681c(pppppplVar40);
      ppppppplVar59 = (long *******)param_4[7];
      pppppplVar41 = *ppppppplVar59;
      param_2 = appppppplStack_80[1];
    }
    ppppppplVar35 = param_2;
    if (-1 < *(int *)(pppppplVar41 + 5)) {
      ppppppplVar35 = (long *******)(appppppplStack_80 + 1);
    }
    if (-1 < *(int *)(ppppppplVar59[1] + 5)) {
      ppppppplVar54 = (long *******)*ppppppplVar53;
    }
    param_5 = (long *******)(appppppplStack_80 + 2);
    ppppppplVar37 = ppppppplVar34;
    param_6 = ppppppplVar54;
    appppppplStack_80[2] = ppppppplVar54;
    func_0x0328158c(pppppplVar40,ppppppplVar59[3]);
    ppppppplVar8 = (long *******)0x1;
  }
  if (pppppplVar50[5] == ppppplStack_68) {
    return ppppppplVar8;
  }
  auVar66 = func_0x072ce990(ppppppplVar8);
  pppppplVar41 = auVar66._0_8_;
  ppppppplVar53[-8] = (long ******)0x3bf7384;
  ppppppplVar53[-7] = (long ******)ppppppplVar59;
  ppppppplVar53[-6] = (long ******)ppppppplVar57;
  ppppppplVar53[-5] = (long ******)ppppppplVar54;
  ppppppplVar53[-4] = (long ******)param_3;
  ppppppplVar53[-3] = (long ******)ppppppplVar34;
  ppppppplVar53[-2] = (long ******)param_4;
  ppppppplVar53[-1] = (long ******)param_2;
  pppppplVar40 = param_6[7];
  ppppppplVar57 = param_5;
  ppppppplVar59 = param_6;
  if (pppppplVar40 == (long ******)0x0) {
    func_0x03280a18(PTR_DAT_07779508);
    pppppplVar40 = param_6[7];
    if (pppppplVar40 == (long ******)0x0) {
      func_0x03256878(param_6);
      pppppplVar40 = param_6[7];
    }
  }
  if ((*(byte *)((long)pppppplVar40[2] + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  ppppppplVar8 = (long *******)func_0x03280ca0();
  ppppppplVar34 = (long *******)param_6[7][3];
  ppppppplVar54 = param_5;
  func_0x0533fbf8(ppppppplVar8,pppppplVar41);
  ppppplVar6 = param_6[7][6];
  if ((*(byte *)((long)ppppplVar6 + 0x135) & 1) == 0) {
    ppppplVar6 = (long *****)func_0x0325681c();
  }
  if (*(int *)(ppppplVar6 + 0x1c) == 0) {
    func_0x03280b8c();
  }
  ppppplVar6 = param_6[7][6];
  if ((*(byte *)((long)ppppplVar6 + 0x135) & 1) == 0) {
    ppppplVar6 = (long *****)func_0x0325681c();
  }
  if (ppppppplVar35 != (long *******)0x0) {
    ppppppplVar57 = (long *******)*ppppplVar6[0x17];
    ppppppplVar54 = auVar66._8_8_;
    ppppppplVar34 = ppppppplVar37;
    ppppppplVar59 = ppppppplVar8;
    ppppppplVar9 = (long *******)(*(code *)ppppppplVar35[3])(ppppppplVar35[8],pppppplVar41);
    if (ppppppplVar9 != (long *******)0x0) {
      pppppplVar40 = *ppppppplVar9;
      uVar7 = (ulong)*(ushort *)((long)pppppplVar40 + 0x12e);
      if (uVar7 != 0) {
        ppppplVar6 = pppppplVar40[0x16] + 1;
        do {
          if (ppppplVar6[0xffffffffffffffff] == *(long *****)PTR_DAT_07779508) {
            pppppplVar40 = pppppplVar40 + (long)(*(int *)ppppplVar6 + 3) * 2 + 0x27;
            goto LAB_03bf74c0;
          }
          uVar7 = uVar7 - 1;
          ppppplVar6 = ppppplVar6 + 2;
        } while (uVar7 != 0);
      }
      ppppppplVar54 = (long *******)0x3;
      pppppplVar40 = (long ******)func_0x03256b10(ppppppplVar9);
LAB_03bf74c0:
      uVar7 = (*(code *)*pppppplVar40)(ppppppplVar9,pppppplVar40[1]);
      if ((uVar7 & 1) == 0) {
        return ppppppplVar8;
      }
      ppppppplVar37 = ppppppplVar9;
      if (ppppppplVar8 != (long *******)0x0) {
        func_0x0533fe78(ppppppplVar8,pppppplVar41,param_5,ppppppplVar9,0,param_6[7][8]);
        return ppppppplVar8;
      }
    }
  }
  auVar67 = func_0x03280cac();
  pppppplVar40 = auVar67._8_8_;
  ppppppplVar53[-0x10] = (long ******)0x3bf7510;
  ppppppplVar53[-0xe] = (long ******)auVar66._8_8_;
  ppppppplVar53[-0xd] = (long ******)ppppppplVar37;
  ppppppplVar53[-0xc] = (long ******)ppppppplVar8;
  ppppppplVar53[-0xb] = pppppplVar41;
  ppppppplVar53[-10] = (long ******)param_6;
  ppppppplVar53[-9] = (long ******)param_5;
  pppppplVar41 = ppppppplVar59[7];
  if (pppppplVar41 == (long ******)0x0) {
    func_0x03256878(ppppppplVar59);
    pppppplVar41 = ppppppplVar59[7];
  }
  ppppppplVar37 = (long *******)(ulong)*(uint *)(auVar67._0_8_ + 0x20);
  pppppplVar38 = (long ******)pppppplVar41[2];
  ppppppplVar53[-0x14] = (long ******)&stack0xffffffffffffffa0;
  ppppppplVar53[-0x13] = ppppppplVar53[-0x10];
  ppppppplVar53[-0x12] = pppppplVar64;
  ppppppplVar53[-0x11] = pppppplVar50;
  ppppppplVar53[-0x10] = (long ******)ppppppplVar60;
  ppppppplVar53[-0xf] = (long ******)ppppppplVar35;
  ppppppplVar53[-0xe] = ppppppplVar53[-0xe];
  ppppppplVar53[-0xd] = ppppppplVar53[-0xd];
  ppppppplVar53[-0xc] = ppppppplVar53[-0xc];
  ppppppplVar53[-0xb] = ppppppplVar53[-0xb];
  ppppppplVar53[-10] = ppppppplVar53[-10];
  ppppppplVar53[-9] = ppppppplVar53[-9];
  ppppplVar6 = pppppplVar38[7];
  pppppplVar41 = (long ******)0x0;
  ppppppplVar35 = ppppppplVar34;
  ppppppplVar59 = ppppppplVar57;
  ppppppplVar60 = ppppppplVar37;
  pppppplVar50 = pppppplVar38;
  if (ppppplVar6 == (long *****)0x0) {
    func_0x03280a18(PTR_DAT_07761a80);
    func_0x03280a18(PTR_DAT_07779510);
    func_0x03280a18(PTR_DAT_07779508);
    func_0x03280a18(PTR_DAT_07779518);
    ppppplVar6 = pppppplVar38[7];
    if (ppppplVar6 == (long *****)0x0) {
      func_0x03256878(pppppplVar38);
      ppppplVar6 = pppppplVar38[7];
    }
  }
  if ((*(byte *)((long)*ppppplVar6 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar5 = func_0x03280ca0();
  func_0x04057d8c(lVar5,pppppplVar38[7][1]);
  if (lVar5 == 0) {
    func_0x03280cac();
LAB_03bf78fc:
    func_0x03280a2c(PTR_DAT_0774e5b0);
    pppppplVar14 = (long ******)func_0x03280ca0();
    puVar27 = PTR_DAT_07779520;
  }
  else {
    plVar49 = (long *)(lVar5 + 0x10);
    *plVar49 = (long)ppppppplVar54;
    func_0x032809c4(plVar49,ppppppplVar54);
    ppppppplVar54 = (long *******)(lVar5 + 0x18);
    *ppppppplVar54 = (long ******)0x0;
    func_0x032809c4(ppppppplVar54,0);
    if (pppppplVar40 == (long ******)0x0) goto LAB_03bf78fc;
    if ((*plVar49 != 0) || (ppppppplVar8 = ppppppplVar57, *ppppppplVar54 != (long ******)0x0)) {
      func_0x0581a88c(ppppppplVar37,1,0);
      ppppplVar6 = pppppplVar38[4];
      if ((*(byte *)((long)ppppplVar6 + 0x135) & 1) == 0) {
        ppppplVar6 = (long *****)func_0x0325681c();
      }
      if ((*(byte *)((long)ppppplVar6[0x18][5] + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      pppppplVar64 = (long ******)func_0x03280ca0();
      ppppplVar6 = pppppplVar38[4];
      if ((*(byte *)((long)ppppplVar6 + 0x135) & 1) == 0) {
        ppppplVar6 = (long *****)func_0x0325681c(ppppplVar6);
      }
      func_0x046a6e10(pppppplVar64,ppppppplVar57,ppppppplVar37,ppppplVar6[0x18][0x11]);
      ppppppplVar37 = (long *******)(lVar5 + 0x20);
      *ppppppplVar37 = pppppplVar64;
      func_0x032809c4(ppppppplVar37,pppppplVar64);
      pppppplVar46 = (long ******)PTR_DAT_07779510;
      if (*(int *)(*(long *)PTR_DAT_07779510 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar7 = func_0x0580ec5c(0);
      if ((uVar7 & 1) != 0) {
        pppppplVar64 = *ppppppplVar37;
        uVar65 = *(undefined8 *)PTR_DAT_07779518;
        uVar10 = (*(code *)(*pppppplVar40)[0x2d])(pppppplVar40,(*pppppplVar40)[0x2e]);
        uVar10 = func_0x055ea7a0(uVar65,uVar10,0);
        if (*(int *)((long)*pppppplVar46 + 0xe0) == 0) {
          func_0x03280b8c(*pppppplVar46);
        }
        func_0x0580ec64(0,pppppplVar64,uVar10,0,0);
      }
      pppppplVar63 = *ppppppplVar37;
      if (*(int *)((long)*pppppplVar46 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      if (cRam0000000007e17d7a == '\0') {
        func_0x03280a18(PTR_DAT_07779510);
        func_0x03280a18(PTR_DAT_077619f0);
        cRam0000000007e17d7a = '\x01';
      }
      pppppplVar64 = (long ******)PTR_DAT_077619f0;
      lVar11 = *(long *)PTR_DAT_077619f0;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar11 = (long)*pppppplVar64;
      }
      if (*(char *)(*(long *)(lVar11 + 0xb8) + 0x10) != '\0') {
        if (*(int *)((long)*pppppplVar46 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        func_0x0580ed0c(pppppplVar63,0);
      }
      pppppplVar41 = (long ******)func_0x03280ca0(*(undefined8 *)PTR_DAT_07761a80);
      func_0x056efa8c(pppppplVar41,lVar5,pppppplVar38[7][4],0);
      ppppppplVar59 = (long *******)pppppplVar40[5];
      plVar12 = (long *)(*(code *)pppppplVar40[3])(pppppplVar40[8],ppppppplVar34,pppppplVar41);
      if (plVar12 != (long *)0x0) {
        lVar5 = *plVar12;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar44 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar44 + -2) == *(long *)PTR_DAT_07779508) {
              puVar13 = (undefined8 *)(lVar5 + (long)(*piVar44 + 3) * 0x10 + 0x138);
              goto LAB_03bf788c;
            }
            uVar7 = uVar7 - 1;
            piVar44 = piVar44 + 4;
          } while (uVar7 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_07779508,3);
LAB_03bf788c:
        uVar7 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        if ((uVar7 & 1) != 0) {
          ppppplVar6 = pppppplVar38[4];
          lVar5 = *plVar49;
          pppppplVar50 = *ppppppplVar54;
          pppppplVar64 = *ppppppplVar37;
          if ((*(byte *)((long)ppppplVar6 + 0x135) & 1) == 0) {
            ppppplVar6 = (long *****)func_0x0325681c();
          }
          func_0x04667064(plVar12,lVar5,pppppplVar50,pppppplVar64,0,ppppplVar6[0x18][0x13]);
        }
        return (long *******)*ppppppplVar37;
      }
      func_0x03280cac();
      ppppppplVar8 = (long *******)0x0;
      ppppppplVar35 = ppppppplVar57;
    }
    func_0x03280a2c(PTR_DAT_0774e5b0);
    pppppplVar14 = (long ******)func_0x03280ca0();
    puVar27 = PTR_DAT_07779528;
    ppppppplVar57 = ppppppplVar8;
    pppppplVar63 = pppppplVar46;
  }
  uVar10 = func_0x03280a2c(puVar27);
  pppppplVar30 = (long ******)0x0;
  func_0x056e7310(pppppplVar14,uVar10);
  auVar68 = func_0x03280b7c(pppppplVar14,pppppplVar38);
  pppppplVar46 = auVar68._0_8_;
  if (auVar68._8_4_ == 1) {
    puVar13 = (undefined8 *)func_0x072ce910(pppppplVar46);
    uVar10 = func_0x03280a2c(PTR_DAT_0774ece0);
    uVar7 = func_0x032810d8(uVar10,*(undefined8 *)*puVar13);
    if ((uVar7 & 1) != 0) {
      puVar13 = (undefined8 *)*puVar13;
      func_0x072ce920();
      lVar5 = func_0x03280a2c(PTR_DAT_07779510);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar7 = func_0x0580ec5c(0);
      if ((uVar7 & 1) != 0) {
        pppppplVar46 = *ppppppplVar37;
        lVar5 = func_0x03280a2c(PTR_DAT_07779510);
        if (*(int *)(lVar5 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        ppppppplVar35 = (long *******)0x0;
        func_0x0580ec68(0,pppppplVar46,3);
      }
      func_0x02f0b18c(pppppplVar14);
      ppppppplVar37 = (long *******)pppppplVar14[4];
      func_0x03280a2c(PTR_DAT_07779510);
      func_0x02f09504();
      func_0x03c05464(ppppppplVar37,0);
      func_0x02f0b18c(pppppplVar14);
      pppppplVar14 = (long ******)pppppplVar14[4];
      func_0x02f0b18c(pppppplVar14);
      lVar5 = func_0x02f16ebc(pppppplVar38[4]);
      func_0x02f177b4(pppppplVar14,0,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x58));
      func_0x03280ca4(puVar13);
    }
    puVar15 = (undefined8 *)func_0x072ce930(8);
    *puVar15 = *puVar13;
    pppppplVar30 = (long ******)0x0;
    pppppplVar46 = (long ******)
                   func_0x072ce940(puVar15,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28);
    func_0x072ce920();
  }
  func_0x03365958(pppppplVar46);
  auVar66 = func_0x02f09514();
  pppppplVar55 = auVar66._8_8_;
  pppppplVar16 = auVar66._0_8_;
  ppppppplVar53[-0x20] = pppppplVar63;
  ppppppplVar53[-0x1f] = (long ******)0x3bf7a90;
  ppppppplVar53[-0x1e] = pppppplVar64;
  ppppppplVar53[-0x1d] = pppppplVar41;
  ppppppplVar53[-0x1c] = pppppplVar40;
  ppppppplVar53[-0x1b] = (long ******)ppppppplVar34;
  ppppppplVar53[-0x1a] = (long ******)ppppppplVar57;
  ppppppplVar53[-0x19] = (long ******)ppppppplVar54;
  ppppppplVar53[-0x18] = pppppplVar46;
  ppppppplVar53[-0x17] = (long ******)ppppppplVar37;
  ppppppplVar53[-0x16] = pppppplVar14;
  ppppppplVar53[-0x15] = pppppplVar38;
  ppppplVar6 = pppppplVar50[7];
  pppppplVar41 = (long ******)((ulong)ppppppplVar60 & 0xffffffff);
  ppppppplVar57 = ppppppplVar35;
  ppppppplVar54 = ppppppplVar59;
  pppppplVar46 = pppppplVar50;
  if (ppppplVar6 == (long *****)0x0) {
    func_0x03280a18(PTR_DAT_07761a80);
    func_0x03280a18(PTR_DAT_07779510);
    func_0x03280a18(PTR_DAT_07779508);
    func_0x03280a18(PTR_DAT_07779518);
    ppppplVar6 = pppppplVar50[7];
    if (ppppplVar6 == (long *****)0x0) {
      func_0x03256878(pppppplVar50);
      ppppplVar6 = pppppplVar50[7];
    }
  }
  if ((*(byte *)((long)*ppppplVar6 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar5 = func_0x03280ca0();
  func_0x04057e78(lVar5,pppppplVar50[7][1]);
  if (lVar5 == 0) {
    func_0x03280cac();
LAB_03bf7e10:
    func_0x03280a2c(PTR_DAT_0774e5b0);
    pppppplVar40 = (long ******)func_0x03280ca0();
    puVar27 = PTR_DAT_07779520;
  }
  else {
    plVar49 = (long *)(lVar5 + 0x10);
    *plVar49 = (long)pppppplVar55;
    func_0x032809c4(plVar49,pppppplVar55);
    pppppplVar55 = (long ******)(lVar5 + 0x18);
    *pppppplVar55 = (long *****)pppppplVar30;
    func_0x032809c4(pppppplVar55,pppppplVar30);
    if (pppppplVar16 == (long ******)0x0) goto LAB_03bf7e10;
    if ((*plVar49 != 0) || (ppppppplVar34 = ppppppplVar59, *pppppplVar55 != (long *****)0x0)) {
      func_0x0581a88c(pppppplVar41,1,0);
      ppppplVar6 = pppppplVar50[4];
      if ((*(byte *)((long)ppppplVar6 + 0x135) & 1) == 0) {
        ppppplVar6 = (long *****)func_0x0325681c();
      }
      if ((*(byte *)((long)ppppplVar6[0x18][5] + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      ppppplVar6 = (long *****)func_0x03280ca0();
      ppppplVar42 = pppppplVar50[4];
      if ((*(byte *)((long)ppppplVar42 + 0x135) & 1) == 0) {
        ppppplVar42 = (long *****)func_0x0325681c(ppppplVar42);
      }
      func_0x046ab5ac(ppppplVar6,ppppppplVar59,pppppplVar41,ppppplVar42[0x18][0x11]);
      pppppplVar41 = (long ******)(lVar5 + 0x20);
      *pppppplVar41 = ppppplVar6;
      func_0x032809c4(pppppplVar41,ppppplVar6);
      pppppplVar63 = (long ******)PTR_DAT_07779510;
      if (*(int *)(*(long *)PTR_DAT_07779510 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar7 = func_0x0580ec5c(0);
      if ((uVar7 & 1) != 0) {
        ppppplVar6 = *pppppplVar41;
        uVar65 = *(undefined8 *)PTR_DAT_07779518;
        uVar10 = (*(code *)(*pppppplVar16)[0x2d])(pppppplVar16,(*pppppplVar16)[0x2e]);
        uVar10 = func_0x055ea7a0(uVar65,uVar10,0);
        if (*(int *)((long)*pppppplVar63 + 0xe0) == 0) {
          func_0x03280b8c(*pppppplVar63);
        }
        func_0x0580ec64(0,ppppplVar6,uVar10,0,0);
      }
      ppppplVar6 = *pppppplVar41;
      if (*(int *)((long)*pppppplVar63 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      if (cRam0000000007e17d7a == '\0') {
        func_0x03280a18(PTR_DAT_07779510);
        func_0x03280a18(PTR_DAT_077619f0);
        cRam0000000007e17d7a = '\x01';
      }
      pppppplVar64 = (long ******)PTR_DAT_077619f0;
      lVar11 = *(long *)PTR_DAT_077619f0;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar11 = (long)*pppppplVar64;
      }
      if (*(char *)(*(long *)(lVar11 + 0xb8) + 0x10) != '\0') {
        if (*(int *)((long)*pppppplVar63 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        func_0x0580ed0c(ppppplVar6,0);
      }
      pppppplVar30 = (long ******)func_0x03280ca0(*(undefined8 *)PTR_DAT_07761a80);
      func_0x056efa8c(pppppplVar30,lVar5,pppppplVar50[7][4],0);
      ppppppplVar54 = (long *******)pppppplVar16[5];
      plVar12 = (long *)(*(code *)pppppplVar16[3])(pppppplVar16[8],ppppppplVar35,pppppplVar30);
      if (plVar12 != (long *)0x0) {
        lVar5 = *plVar12;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar44 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar44 + -2) == *(long *)PTR_DAT_07779508) {
              puVar13 = (undefined8 *)(lVar5 + (long)(*piVar44 + 3) * 0x10 + 0x138);
              goto LAB_03bf7da0;
            }
            uVar7 = uVar7 - 1;
            piVar44 = piVar44 + 4;
          } while (uVar7 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_07779508,3);
LAB_03bf7da0:
        uVar7 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        if ((uVar7 & 1) != 0) {
          ppppplVar6 = pppppplVar50[4];
          lVar5 = *plVar49;
          ppppplVar42 = *pppppplVar55;
          ppppplVar56 = *pppppplVar41;
          if ((*(byte *)((long)ppppplVar6 + 0x135) & 1) == 0) {
            ppppplVar6 = (long *****)func_0x0325681c();
          }
          func_0x04669e10(plVar12,lVar5,ppppplVar42,ppppplVar56,0,ppppplVar6[0x18][0x13]);
        }
        return (long *******)*pppppplVar41;
      }
      func_0x03280cac();
      ppppppplVar34 = (long *******)0x0;
      ppppppplVar57 = ppppppplVar59;
    }
    func_0x03280a2c(PTR_DAT_0774e5b0);
    pppppplVar40 = (long ******)func_0x03280ca0();
    puVar27 = PTR_DAT_07779528;
    ppppppplVar59 = ppppppplVar34;
  }
  uVar10 = func_0x03280a2c(puVar27);
  ppppppplVar34 = (long *******)0x0;
  func_0x056e7310(pppppplVar40,uVar10);
  auVar68 = func_0x03280b7c(pppppplVar40,pppppplVar50);
  pppppplVar38 = auVar68._0_8_;
  if (auVar68._8_4_ == 1) {
    puVar13 = (undefined8 *)func_0x072ce910(pppppplVar38);
    uVar10 = func_0x03280a2c(PTR_DAT_0774ece0);
    uVar7 = func_0x032810d8(uVar10,*(undefined8 *)*puVar13);
    if ((uVar7 & 1) != 0) {
      puVar13 = (undefined8 *)*puVar13;
      func_0x072ce920();
      lVar5 = func_0x03280a2c(PTR_DAT_07779510);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar7 = func_0x0580ec5c(0);
      if ((uVar7 & 1) != 0) {
        ppppplVar6 = *pppppplVar41;
        lVar5 = func_0x03280a2c(PTR_DAT_07779510);
        if (*(int *)(lVar5 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        ppppppplVar57 = (long *******)0x0;
        func_0x0580ec68(0,ppppplVar6,3);
      }
      func_0x02f0b18c(pppppplVar40);
      pppppplVar41 = (long ******)pppppplVar40[4];
      func_0x03280a2c(PTR_DAT_07779510);
      func_0x02f09504();
      func_0x03c05464(pppppplVar41,0);
      func_0x02f0b18c(pppppplVar40);
      pppppplVar40 = (long ******)pppppplVar40[4];
      func_0x02f0b18c(pppppplVar40);
      lVar5 = func_0x02f16ebc(pppppplVar50[4]);
      func_0x02f177b8(pppppplVar40,0,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x58));
      func_0x03280ca4(puVar13);
    }
    puVar15 = (undefined8 *)func_0x072ce930(8);
    *puVar15 = *puVar13;
    ppppppplVar34 = (long *******)0x0;
    pppppplVar38 = (long ******)
                   func_0x072ce940(puVar15,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28);
    func_0x072ce920();
  }
  func_0x03365958(pppppplVar38);
  auVar66 = func_0x02f09514();
  pppppplVar14 = auVar66._8_8_;
  ppppplVar6 = auVar66._0_8_;
  ppppppplVar53[-0x2c] = pppppplVar63;
  ppppppplVar53[-0x2b] = (long ******)0x3bf7fa4;
  ppppppplVar53[-0x2a] = pppppplVar64;
  ppppppplVar53[-0x29] = pppppplVar30;
  ppppppplVar53[-0x28] = pppppplVar16;
  ppppppplVar53[-0x27] = (long ******)ppppppplVar35;
  ppppppplVar53[-0x26] = (long ******)ppppppplVar59;
  ppppppplVar53[-0x25] = pppppplVar55;
  ppppppplVar53[-0x24] = pppppplVar38;
  ppppppplVar53[-0x23] = pppppplVar41;
  ppppppplVar53[-0x22] = pppppplVar40;
  ppppppplVar53[-0x21] = pppppplVar50;
  ppppplVar42 = param_8[7];
  pppppplVar64 = (long ******)((ulong)pppppplVar46 & 0xffffffff);
  ppppppplVar8 = (long *******)((ulong)ppppppplVar54 & 0xffffffff);
  ppppppplVar35 = ppppppplVar57;
  ppppppplVar59 = ppppppplVar54;
  ppppppplVar37 = ppppppplVar60;
  pppppplVar50 = param_8;
  if (ppppplVar42 == (long *****)0x0) {
    func_0x03280a18(PTR_DAT_07761a80);
    func_0x03280a18(PTR_DAT_07779510);
    func_0x03280a18(PTR_DAT_07779508);
    func_0x03280a18(PTR_DAT_07779518);
    ppppplVar42 = param_8[7];
    if (ppppplVar42 == (long *****)0x0) {
      func_0x03256878(param_8);
      ppppplVar42 = param_8[7];
    }
  }
  if ((*(byte *)((long)*ppppplVar42 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar5 = func_0x03280ca0();
  func_0x04c0a644(lVar5,param_8[7][1]);
  if (lVar5 == 0) {
    func_0x03280cac();
LAB_03bf833c:
    func_0x03280a2c(PTR_DAT_0774e5b0);
    pppppplVar41 = (long ******)func_0x03280ca0();
    puVar27 = PTR_DAT_07779520;
  }
  else {
    plVar49 = (long *)(lVar5 + 0x10);
    *plVar49 = (long)pppppplVar14;
    func_0x032809c4(plVar49,pppppplVar14);
    pppppplVar14 = (long ******)(lVar5 + 0x18);
    *pppppplVar14 = (long *****)ppppppplVar34;
    func_0x032809c4(pppppplVar14,ppppppplVar34);
    if (ppppplVar6 == (long *****)0x0) goto LAB_03bf833c;
    if ((*plVar49 != 0) || (ppppppplVar9 = ppppppplVar60, *pppppplVar14 != (long *****)0x0)) {
      func_0x0581a88c(pppppplVar64,1,0);
      ppppplVar42 = param_8[4];
      if ((*(byte *)((long)ppppplVar42 + 0x135) & 1) == 0) {
        ppppplVar42 = (long *****)func_0x0325681c();
      }
      if ((*(byte *)((long)ppppplVar42[0x18][5] + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      ppppplVar42 = (long *****)func_0x03280ca0();
      ppppplVar56 = param_8[4];
      *(int *)((long)ppppppplVar53 + -0x164) = (int)ppppppplVar54;
      if ((*(byte *)((long)ppppplVar56 + 0x135) & 1) == 0) {
        ppppplVar56 = (long *****)func_0x0325681c(ppppplVar56);
      }
      func_0x046ab5ac(ppppplVar42,ppppppplVar60,pppppplVar64,ppppplVar56[0x18][0x11]);
      pppppplVar64 = (long ******)(lVar5 + 0x20);
      *pppppplVar64 = ppppplVar42;
      func_0x032809c4(pppppplVar64,ppppplVar42);
      ppppppplVar9 = (long *******)PTR_DAT_07779510;
      if (*(int *)(*(long *)PTR_DAT_07779510 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar7 = func_0x0580ec5c(0);
      if ((uVar7 & 1) != 0) {
        ppppplVar42 = *pppppplVar64;
        uVar65 = *(undefined8 *)PTR_DAT_07779518;
        uVar10 = (*(code *)(*ppppplVar6)[0x2d])(ppppplVar6,(*ppppplVar6)[0x2e]);
        uVar10 = func_0x055ea7a0(uVar65,uVar10,0);
        if (*(int *)((long)*ppppppplVar9 + 0xe0) == 0) {
          func_0x03280b8c(*ppppppplVar9);
        }
        func_0x0580ec64(0,ppppplVar42,uVar10,0,0);
      }
      ppppplVar42 = *pppppplVar64;
      if (*(int *)((long)*ppppppplVar9 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      if (cRam0000000007e17d7a == '\0') {
        func_0x03280a18(PTR_DAT_07779510);
        func_0x03280a18(PTR_DAT_077619f0);
        cRam0000000007e17d7a = '\x01';
      }
      pppppplVar63 = (long ******)PTR_DAT_077619f0;
      lVar11 = *(long *)PTR_DAT_077619f0;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar11 = (long)*pppppplVar63;
      }
      if (*(char *)(*(long *)(lVar11 + 0xb8) + 0x10) != '\0') {
        if (*(int *)((long)*ppppppplVar9 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        func_0x0580ed0c(ppppplVar42,0);
      }
      ppppppplVar34 = (long *******)func_0x03280ca0(*(undefined8 *)PTR_DAT_07761a80);
      func_0x056efa8c(ppppppplVar34,lVar5,param_8[7][5],0);
      ppppppplVar37 = (long *******)ppppplVar6[5];
      ppppppplVar35 = ppppppplVar34;
      ppppppplVar59 = ppppppplVar60;
      plVar12 = (long *)(*(code *)ppppplVar6[3])
                                  (ppppplVar6[8],ppppppplVar57,
                                   *(undefined4 *)((long)ppppppplVar53 + -0x164));
      if (plVar12 != (long *)0x0) {
        lVar5 = *plVar12;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar44 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar44 + -2) == *(long *)PTR_DAT_07779508) {
              puVar13 = (undefined8 *)(lVar5 + (long)(*piVar44 + 3) * 0x10 + 0x138);
              goto LAB_03bf82c8;
            }
            uVar7 = uVar7 - 1;
            piVar44 = piVar44 + 4;
          } while (uVar7 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_07779508,3);
LAB_03bf82c8:
        uVar7 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        if ((uVar7 & 1) != 0) {
          ppppplVar6 = param_8[4];
          lVar5 = *plVar49;
          ppppplVar42 = *pppppplVar14;
          ppppplVar56 = *pppppplVar64;
          if ((*(byte *)((long)ppppplVar6 + 0x135) & 1) == 0) {
            ppppplVar6 = (long *****)func_0x0325681c();
          }
          func_0x04669e10(plVar12,lVar5,ppppplVar42,ppppplVar56,0,ppppplVar6[0x18][0x13]);
        }
        return (long *******)*pppppplVar64;
      }
      func_0x03280cac();
      ppppppplVar57 = (long *******)0x0;
      ppppppplVar8 = ppppppplVar60;
    }
    func_0x03280a2c(PTR_DAT_0774e5b0);
    pppppplVar41 = (long ******)func_0x03280ca0();
    puVar27 = PTR_DAT_07779530;
    ppppppplVar60 = ppppppplVar9;
  }
  uVar10 = func_0x03280a2c(puVar27);
  ppppppplVar54 = (long *******)0x0;
  func_0x056e7310(pppppplVar41,uVar10);
  auVar68 = func_0x03280b7c(pppppplVar41,param_8);
  pppppplVar40 = auVar68._0_8_;
  if (auVar68._8_4_ == 1) {
    puVar13 = (undefined8 *)func_0x072ce910(pppppplVar40);
    uVar10 = func_0x03280a2c(PTR_DAT_0774ece0);
    uVar7 = func_0x032810d8(uVar10,*(undefined8 *)*puVar13);
    if ((uVar7 & 1) != 0) {
      puVar13 = (undefined8 *)*puVar13;
      func_0x072ce920();
      lVar5 = func_0x03280a2c(PTR_DAT_07779510);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar7 = func_0x0580ec5c(0);
      if ((uVar7 & 1) != 0) {
        ppppplVar42 = *pppppplVar64;
        lVar5 = func_0x03280a2c(PTR_DAT_07779510);
        if (*(int *)(lVar5 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        ppppppplVar35 = (long *******)0x0;
        func_0x0580ec68(0,ppppplVar42,3);
      }
      func_0x02f0b18c(pppppplVar41);
      pppppplVar64 = (long ******)pppppplVar41[4];
      func_0x03280a2c(PTR_DAT_07779510);
      func_0x02f09504();
      func_0x03c05464(pppppplVar64,0);
      func_0x02f0b18c(pppppplVar41);
      pppppplVar41 = (long ******)pppppplVar41[4];
      func_0x02f0b18c(pppppplVar41);
      lVar5 = func_0x02f16ebc(param_8[4]);
      func_0x02f177b8(pppppplVar41,0,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x58));
      func_0x03280ca4(puVar13);
    }
    puVar15 = (undefined8 *)func_0x072ce930(8);
    *puVar15 = *puVar13;
    ppppppplVar54 = (long *******)0x0;
    pppppplVar40 = (long ******)
                   func_0x072ce940(puVar15,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28);
    func_0x072ce920();
  }
  func_0x03365958(pppppplVar40);
  auVar66 = func_0x02f09514();
  pppppplVar38 = auVar66._0_8_;
  ppppppplVar53[-0x36] = (long ******)0x3bf84d0;
  ppppppplVar53[-0x35] = (long ******)ppppppplVar60;
  ppppppplVar53[-0x34] = (long ******)ppppppplVar57;
  ppppppplVar53[-0x33] = pppppplVar14;
  ppppppplVar53[-0x32] = pppppplVar40;
  ppppppplVar53[-0x31] = pppppplVar64;
  ppppppplVar53[-0x30] = pppppplVar41;
  ppppppplVar53[-0x2f] = param_8;
  pppppplVar64 = ppppppplVar37[7];
  ppppppplVar57 = ppppppplVar59;
  ppppppplVar60 = ppppppplVar37;
  if (pppppplVar64 == (long ******)0x0) {
    func_0x03280a18(PTR_DAT_07779508);
    pppppplVar64 = ppppppplVar37[7];
    if (pppppplVar64 == (long ******)0x0) {
      func_0x03256878(ppppppplVar37);
      pppppplVar64 = ppppppplVar37[7];
    }
  }
  if ((*(byte *)((long)pppppplVar64[2] + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  ppppppplVar17 = (long *******)func_0x03280ca0();
  ppppppplVar36 = (long *******)ppppppplVar37[7][3];
  ppppppplVar9 = ppppppplVar59;
  func_0x053400b8(ppppppplVar17,pppppplVar38);
  ppppplVar42 = ppppppplVar37[7][6];
  if ((*(byte *)((long)ppppplVar42 + 0x135) & 1) == 0) {
    ppppplVar42 = (long *****)func_0x0325681c();
  }
  if (*(int *)(ppppplVar42 + 0x1c) == 0) {
    func_0x03280b8c();
  }
  ppppplVar42 = ppppppplVar37[7][6];
  if ((*(byte *)((long)ppppplVar42 + 0x135) & 1) == 0) {
    ppppplVar42 = (long *****)func_0x0325681c();
  }
  if (ppppppplVar35 != (long *******)0x0) {
    pppppplVar46 = ppppppplVar35[5];
    ppppppplVar57 = (long *******)*ppppplVar42[0x17];
    ppppppplVar9 = auVar66._8_8_;
    ppppppplVar36 = ppppppplVar54;
    ppppppplVar60 = ppppppplVar17;
    ppppppplVar18 = (long *******)(*(code *)ppppppplVar35[3])(ppppppplVar35[8],pppppplVar38);
    if (ppppppplVar18 != (long *******)0x0) {
      pppppplVar64 = *ppppppplVar18;
      uVar7 = (ulong)*(ushort *)((long)pppppplVar64 + 0x12e);
      if (uVar7 != 0) {
        ppppplVar42 = pppppplVar64[0x16] + 1;
        do {
          if (ppppplVar42[0xffffffffffffffff] == *(long *****)PTR_DAT_07779508) {
            pppppplVar64 = pppppplVar64 + (long)(*(int *)ppppplVar42 + 3) * 2 + 0x27;
            goto LAB_03bf860c;
          }
          uVar7 = uVar7 - 1;
          ppppplVar42 = ppppplVar42 + 2;
        } while (uVar7 != 0);
      }
      ppppppplVar9 = (long *******)0x3;
      pppppplVar64 = (long ******)func_0x03256b10(ppppppplVar18);
LAB_03bf860c:
      uVar7 = (*(code *)*pppppplVar64)(ppppppplVar18,pppppplVar64[1]);
      if ((uVar7 & 1) == 0) {
        return ppppppplVar17;
      }
      ppppppplVar54 = ppppppplVar18;
      if (ppppppplVar17 != (long *******)0x0) {
        func_0x05340338(ppppppplVar17,pppppplVar38,ppppppplVar59,ppppppplVar18,0,ppppppplVar37[7][8]
                       );
        return ppppppplVar17;
      }
    }
  }
  auVar67 = func_0x03280cac();
  ppppppplVar53[-0x40] = pppppplVar63;
  ppppppplVar53[-0x3f] = (long ******)0x3bf865c;
  ppppppplVar53[-0x3e] = (long ******)ppppppplVar8;
  ppppppplVar53[-0x3d] = (long ******)ppppppplVar35;
  ppppppplVar53[-0x3c] = (long ******)auVar66._8_8_;
  ppppppplVar53[-0x3b] = (long ******)ppppppplVar54;
  ppppppplVar53[-0x3a] = (long ******)ppppppplVar17;
  ppppppplVar53[-0x39] = pppppplVar38;
  ppppppplVar53[-0x38] = (long ******)ppppppplVar37;
  ppppppplVar53[-0x37] = (long ******)ppppppplVar59;
  ppppplVar42 = (long *****)tpidr_el0;
  ppppppplVar53[-0x41] = (long ******)ppppplVar42[5];
  ppppppplVar53[-0x4a] = (long ******)ppppppplVar36;
  pppppplVar64 = ppppppplVar60[7];
  ppppppplVar35 = ppppppplVar60;
  if (pppppplVar64 == (long ******)0x0) {
    func_0x03256878(ppppppplVar60);
    pppppplVar64 = ppppppplVar60[7];
  }
  pppppplVar63 = (long ******)
                 ((long)ppppppplVar53 +
                 (-0x250 - ((ulong)*(uint *)((long)pppppplVar64[1] + 0xfc) + 0xf & 0x1fffffff0)));
  ppppppplVar59 = ppppppplVar36;
  if (-1 < *(int *)(pppppplVar64[1] + 5)) {
    ppppppplVar59 = ppppppplVar53 + -0x4a;
  }
  func_0x072ce970(pppppplVar63,ppppppplVar59);
  ppppplVar56 = pppppplVar64[2];
  pppplVar19 = *ppppplVar56;
  pppppplVar41 = pppppplVar63;
  if (-1 < *(int *)(pppppplVar64[1] + 5)) {
    pppppplVar41 = (long ******)*pppppplVar63;
  }
  *(undefined4 *)((long)ppppppplVar53 + -0x20c) = *(undefined4 *)(auVar67._0_8_ + 0x20);
  ppppppplVar53[-0x49] = auVar67._8_8_;
  ppppppplVar53[-0x48] = (long ******)ppppppplVar9;
  ppppppplVar53[-0x47] = (long ******)0x0;
  ppppppplVar53[-0x46] = pppppplVar41;
  ppppppplVar53[-0x45] = (long ******)ppppppplVar57;
  ppppppplVar53[-0x44] = (long ******)((long)ppppppplVar53 + -0x20c);
  ppppppplVar59 = ppppppplVar53 + -0x49;
  ppppppplVar54 = ppppppplVar53 + -0x43;
  pppplVar31 = (long ****)0x0;
  (*(code *)ppppplVar56[2])(pppplVar19);
  if ((long ******)ppppplVar42[5] == ppppppplVar53[-0x41]) {
    return (long *******)ppppppplVar53[-0x43];
  }
  auVar66 = func_0x072ce990(ppppppplVar53[-0x43]);
  ppppppplVar60 = auVar66._0_8_;
  pppppplVar63[-0xc] = (long *****)(ppppppplVar53 + -0x40);
  pppppplVar63[-0xb] = (long *****)0x3bf875c;
  pppppplVar63[-10] = (long *****)ppppppplVar34;
  pppppplVar63[-9] = ppppplVar6;
  pppppplVar63[-8] = (long *****)pppppplVar64;
  pppppplVar63[-7] = ppppplVar42;
  pppppplVar63[-6] = (long *****)pppppplVar41;
  pppppplVar63[-5] = (long *****)ppppppplVar36;
  *(undefined1 (*) [16])(pppppplVar63 + -4) = auVar67;
  pppppplVar63[-2] = (long *****)ppppppplVar9;
  pppppplVar63[-1] = (long *****)ppppppplVar57;
  pppppplVar63[-0x13] = (long *****)ppppppplVar54;
  ppppplVar42 = (long *****)tpidr_el0;
  pppppplVar63[-0x16] = ppppplVar42;
  ppppplVar6 = (long *****)((ulong)ppppppplVar35 & 0xffffffff);
  pppppplVar63[-0xd] = (long *****)ppppplVar42[5];
  pppppplVar63[-0x12] = (long *****)ppppppplVar59;
  ppppppplVar57 = ppppppplVar59;
  pppppplVar64 = pppppplVar46;
  if (pppppplVar46[7] == (long *****)0x0) {
    func_0x03280a18(PTR_DAT_07761a80);
    func_0x03280a18(PTR_DAT_07779510);
    func_0x03280a18(PTR_DAT_07779508);
    func_0x03280a18(PTR_DAT_07779518);
    if (pppppplVar46[7] == (long *****)0x0) {
      func_0x03256878(pppppplVar46);
    }
  }
  ppppplVar42 = pppppplVar46[4];
  pppppplVar63[-0x14] = (long *****)ppppppplVar59;
  if ((*(byte *)((long)ppppplVar42 + 0x135) & 1) == 0) {
    ppppplVar42 = (long *****)func_0x0325681c();
  }
  ppppppplVar59 = (long *******)pppppplVar46[7];
  uVar39 = *(uint *)((long)ppppppplVar59[3] + 0xfc);
  ppppplVar51 = (long *****)(ulong)*(uint *)((long)ppppplVar42[0x18][8] + 0xfc);
  pppppplVar63[-0x15] = (long *****)(ulong)uVar39;
  ppppplVar56 = (long *****)
                ((long)pppppplVar63 + (-0xd0 - ((long)(ulong)uVar39 + 0xfU & 0x1fffffff0)));
  uVar7 = (long)ppppplVar51 + 0xfU & 0x1fffffff0;
  ppppplVar42 = (long *****)((long)ppppplVar56 - uVar7);
  ppppplVar61 = (long *****)((long)ppppplVar42 - uVar7);
  func_0x072ce9a0(ppppplVar61,0,ppppplVar51);
  pppppplVar41 = *ppppppplVar59;
  pppppplVar63[-0x18] = ppppplVar61;
  pppppplVar63[-0x17] = ppppplVar51;
  if ((*(byte *)((long)pppppplVar41 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  pppplVar19 = (long ****)func_0x03280ca0();
  (*(code *)*pppppplVar46[7][1])();
  if (pppplVar19 == (long ****)0x0) {
LAB_03bf8de4:
    func_0x03280cac();
LAB_03bf8de8:
    puVar13 = (undefined8 *)func_0x072ce930(8);
    *puVar13 = *ppppplVar56;
    func_0x072ce940(puVar13,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28,0);
    auVar67 = auVar66;
LAB_03bf8e08:
    ppppplVar43 = pppppplVar46[4];
    uVar4 = *(ushort *)((long)ppppplVar43 + 0x135);
    ppppplVar51 = ppppplVar43;
    if ((uVar4 & 1) == 0) {
      ppppplVar43 = (long *****)func_0x0325681c(ppppplVar43);
      uVar4 = *(ushort *)((long)pppppplVar46[4] + 0x135);
      ppppplVar51 = pppppplVar46[4];
    }
    pppplVar52 = (long ****)*ppppplVar43[0x18][0xb];
    ppppplVar43 = ppppplVar51;
    if ((uVar4 & 1) == 0) {
      ppppplVar51 = (long *****)func_0x0325681c(ppppplVar51);
      uVar4 = *(ushort *)((long)pppppplVar46[4] + 0x135);
      ppppplVar43 = pppppplVar46[4];
    }
    pppppplVar46 = (long ******)ppppplVar51[0x18][0xb];
    if ((uVar4 & 1) == 0) {
      ppppplVar43 = (long *****)func_0x0325681c(ppppplVar43);
    }
    if (-1 < *(int *)(ppppplVar43[0x18][8] + 5)) {
      pppppplVar63[-0x19] = (long *****)*pppppplVar63[-0x19];
    }
    ppppppplVar57 = (long *******)pppppplVar63[-0x19];
    ppppppplVar34 = ppppppplVar59;
    func_0x02f1768c(pppplVar52,pppppplVar46);
    pppplVar28 = (long ****)func_0x03280ca4(ppppplVar56);
    func_0x072ce920();
  }
  else {
    pppplVar52 = pppplVar19 + 2;
    *pppplVar52 = auVar66._8_8_;
    func_0x032809c4(pppplVar52,auVar66._8_8_);
    pppplVar21 = pppplVar19 + 3;
    *pppplVar21 = (long ***)pppplVar31;
    func_0x032809c4(pppplVar21,pppplVar31);
    if (ppppppplVar60 == (long *******)0x0) {
      func_0x03280a2c(PTR_DAT_0774e5b0);
      uVar10 = func_0x03280ca0();
      puVar27 = PTR_DAT_07779520;
LAB_03bf8c6c:
      uVar65 = func_0x03280a2c(puVar27);
      ppppppplVar34 = (long *******)0x0;
      func_0x056e7310(uVar10,uVar65);
      ppppppplVar53 = (long *******)func_0x03280b7c(uVar10,pppppplVar46);
    }
    else {
      if ((*pppplVar52 == (long ***)0x0) && (*pppplVar21 == (long ***)0x0)) {
LAB_03bf8c50:
        func_0x03280a2c(PTR_DAT_0774e5b0);
        uVar10 = func_0x03280ca0();
        puVar27 = PTR_DAT_07779528;
        goto LAB_03bf8c6c;
      }
      func_0x0581a88c(ppppplVar6,1,0);
      ppppplVar51 = pppppplVar46[4];
      if ((*(byte *)((long)ppppplVar51 + 0x135) & 1) == 0) {
        ppppplVar51 = (long *****)func_0x0325681c();
      }
      if ((*(byte *)((long)ppppplVar51[0x18][5] + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      pppplVar31 = (long ****)func_0x03280ca0();
      ppppplVar43 = pppppplVar46[4];
      uVar4 = *(ushort *)((long)ppppplVar43 + 0x135);
      ppppplVar51 = ppppplVar43;
      if ((uVar4 & 1) == 0) {
        ppppplVar43 = (long *****)func_0x0325681c(ppppplVar43);
        uVar4 = *(ushort *)((long)pppppplVar46[4] + 0x135);
        ppppplVar51 = pppppplVar46[4];
      }
      pplVar47 = *ppppplVar43[0x18][0x11];
      if ((uVar4 & 1) == 0) {
        ppppplVar51 = (long *****)func_0x0325681c(ppppplVar51);
      }
      (*(code *)pplVar47)(pppplVar31,pppppplVar63[-0x13],ppppplVar6,ppppplVar51[0x18][0x11]);
      ppppplVar6 = (long *****)(pppplVar19 + 4);
      *ppppplVar6 = pppplVar31;
      func_0x032809c4(ppppplVar6,pppplVar31);
      puVar27 = PTR_DAT_07779510;
      if (*(int *)(*(long *)PTR_DAT_07779510 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      pppppplVar63[-0x19] = ppppplVar42;
      uVar7 = func_0x0580ec5c(0);
      if ((uVar7 & 1) != 0) {
        pppplVar31 = *ppppplVar6;
        uVar65 = *(undefined8 *)PTR_DAT_07779518;
        uVar10 = (*(code *)(*ppppppplVar60)[0x2d])(ppppppplVar60,(*ppppppplVar60)[0x2e]);
        uVar10 = func_0x055ea7a0(uVar65,uVar10,0);
        if (*(int *)(*(long *)puVar27 + 0xe0) == 0) {
          func_0x03280b8c(*(long *)puVar27);
        }
        func_0x0580ec64(0,pppplVar31,uVar10,0,0);
      }
      pppplVar31 = *ppppplVar6;
      if (*(int *)(*(long *)puVar27 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      if (cRam0000000007e17d7a == '\0') {
        func_0x03280a18(PTR_DAT_07779510);
        func_0x03280a18(PTR_DAT_077619f0);
        cRam0000000007e17d7a = '\x01';
      }
      ppppplVar42 = (long *****)PTR_DAT_077619f0;
      lVar5 = *(long *)PTR_DAT_077619f0;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar5 = (long)*ppppplVar42;
      }
      if (*(char *)(*(long *)(lVar5 + 0xb8) + 0x10) != '\0') {
        if (*(int *)(*(long *)puVar27 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        func_0x0580ed0c(pppplVar31,0);
      }
      pppppplVar41 = (long ******)pppppplVar63[-0x14];
      if (-1 < *(int *)(pppppplVar46[7][3] + 5)) {
        pppppplVar41 = pppppplVar63 + -0x12;
      }
      func_0x072ce970(ppppplVar56,pppppplVar41,pppppplVar63[-0x15]);
      ppppppplVar59 = (long *******)func_0x03280ca0(*(undefined8 *)PTR_DAT_07761a80);
      func_0x056efa8c(ppppppplVar59,pppplVar19,pppppplVar46[7][4],0);
      pppplVar28 = pppppplVar46[7][5];
      ppplVar20 = *pppplVar28;
      if (-1 < *(int *)(pppppplVar46[7][3] + 5)) {
        ppppplVar56 = (long *****)*ppppplVar56;
      }
      pppppplVar63[-0x11] = ppppplVar56;
      pppppplVar63[-0x10] = (long *****)ppppppplVar59;
      pppppplVar63[-0xf] = pppppplVar63[-0x13];
      ppppppplVar57 = (long *******)(pppppplVar63 + -0x11);
      ppppppplVar54 = (long *******)(pppppplVar63 + -0xe);
      ppppppplVar34 = ppppppplVar60;
      (*(code *)pppplVar28[2])(ppplVar20);
      ppppplVar56 = pppppplVar63[-0xe];
      if (ppppplVar56 == (long *****)0x0) {
        func_0x03280cac();
        goto LAB_03bf8c50;
      }
      pppplVar28 = *ppppplVar56;
      uVar7 = (ulong)*(ushort *)((long)pppplVar28 + 0x12e);
      if (uVar7 != 0) {
        ppplVar20 = pppplVar28[0x16] + 1;
        do {
          if (ppplVar20[0xffffffffffffffff] == *(long ***)PTR_DAT_07779508) {
            pppplVar28 = pppplVar28 + (long)(*(int *)ppplVar20 + 3) * 2 + 0x27;
            goto LAB_03bf8b78;
          }
          uVar7 = uVar7 - 1;
          ppplVar20 = ppplVar20 + 2;
        } while (uVar7 != 0);
      }
      ppppppplVar34 = (long *******)0x3;
      pppplVar28 = (long ****)func_0x03256b10(ppppplVar56);
LAB_03bf8b78:
      uVar7 = (*(code *)*pppplVar28)(ppppplVar56,pppplVar28[1]);
      if ((uVar7 & 1) != 0) {
        ppppplVar43 = pppppplVar46[4];
        pppplVar52 = (long ****)*pppplVar52;
        ppppppplVar59 = (long *******)*pppplVar21;
        ppppppplVar60 = (long *******)*ppppplVar6;
        uVar4 = *(ushort *)((long)ppppplVar43 + 0x135);
        ppppplVar51 = ppppplVar43;
        if ((uVar4 & 1) == 0) {
          ppppplVar51 = (long *****)func_0x0325681c();
          ppppplVar43 = pppppplVar46[4];
          uVar4 = *(ushort *)((long)ppppplVar43 + 0x135);
        }
        pppplVar31 = (long ****)*ppppplVar51[0x18][0x13];
        if ((uVar4 & 1) == 0) {
          ppppplVar43 = (long *****)func_0x0325681c();
        }
        ppppppplVar35 = (long *******)ppppplVar43[0x18][0x13];
        ppppppplVar54 = (long *******)0x0;
        ppppppplVar34 = ppppppplVar59;
        ppppppplVar57 = ppppppplVar60;
        (*(code *)pppplVar31)(ppppplVar56,pppplVar52);
      }
      ppppppplVar53 = (long *******)*ppppplVar6;
      if ((long *****)pppppplVar63[-0x16][5] == pppppplVar63[-0xd]) {
        return ppppppplVar53;
      }
    }
    auVar66._8_8_ = pppplVar21;
    auVar66._0_8_ = ppppppplVar60;
    auVar68 = func_0x072ce990(ppppppplVar53);
    pppplVar28 = auVar68._0_8_;
    auVar67 = auVar66;
    if (auVar68._8_4_ == 1) {
      ppppplVar56 = (long *****)func_0x072ce910(pppplVar28);
      uVar10 = func_0x03280a2c(PTR_DAT_0774ece0);
      uVar7 = func_0x032810d8(uVar10,**ppppplVar56);
      if ((uVar7 & 1) == 0) goto LAB_03bf8de8;
      ppppplVar56 = (long *****)*ppppplVar56;
      func_0x072ce920();
      lVar5 = func_0x03280a2c(PTR_DAT_07779510);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar7 = func_0x0580ec5c(0);
      if ((uVar7 & 1) != 0) {
        pppplVar52 = *ppppplVar6;
        lVar5 = func_0x03280a2c(PTR_DAT_07779510);
        if (*(int *)(lVar5 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        func_0x0580ec68(0,pppplVar52,3,0);
      }
      puVar27 = PTR_DAT_07779510;
      pppplVar52 = *ppppplVar6;
      lVar5 = func_0x03280a2c(PTR_DAT_07779510);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      auVar67._8_8_ = pppplVar21;
      auVar67._0_8_ = 0x7e17000;
      auVar66._0_8_ = 0x7e17000;
      if (cRam0000000007e17d7b == '\0') {
        func_0x03280a18(PTR_DAT_07779510);
        func_0x03280a18(PTR_DAT_077619f0);
        cRam0000000007e17d7b = '\x01';
      }
      pppplVar21 = *ppppplVar42;
      if (*(int *)(pppplVar21 + 0x1c) == 0) {
        func_0x03280b8c();
        pppplVar21 = *ppppplVar42;
      }
      if (*(char *)(pppplVar21[0x17] + 2) != '\0') {
        if (*(int *)(*(long *)puVar27 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        func_0x0580ef88(pppplVar52,0);
      }
      ppppppplVar59 = (long *******)*ppppplVar6;
      ppppplVar6 = pppppplVar63[-0x18];
      ppppplVar51 = pppppplVar63[-0x17];
      func_0x072ce9a0(ppppplVar6,0,ppppplVar51);
      func_0x072ce970(pppppplVar63[-0x19],ppppplVar6,ppppplVar51);
      if (ppppppplVar59 == (long *******)0x0) goto LAB_03bf8de4;
      goto LAB_03bf8e08;
    }
  }
  func_0x03365958(pppplVar28);
  auVar66 = func_0x02f09514();
  ppplVar20 = auVar66._8_8_;
  ppppplVar61[0xfffffffffffffff4] = (long ****)(pppppplVar63 + -0xc);
  ppppplVar61[0xfffffffffffffff5] = (long ****)0x3bf8ec4;
  ppppplVar61[0xfffffffffffffff6] = (long ****)ppppplVar42;
  ppppplVar61[0xfffffffffffffff7] = auVar67._8_8_;
  ppppplVar61[0xfffffffffffffff8] = pppplVar19;
  ppppplVar61[0xfffffffffffffff9] = pppplVar31;
  ppppplVar61[0xfffffffffffffffa] = auVar67._0_8_;
  ppppplVar61[0xfffffffffffffffb] = (long ****)ppppplVar6;
  ppppplVar61[0xfffffffffffffffc] = pppplVar52;
  ppppplVar61[0xfffffffffffffffd] = (long ****)ppppppplVar59;
  ppppplVar61[0xfffffffffffffffe] = pppplVar28;
  ppppplVar61[0xffffffffffffffff] = (long ****)pppppplVar46;
  ppppplVar61[0xffffffffffffffea] = (long ****)ppppppplVar35;
  pppplVar19 = (long ****)tpidr_el0;
  ppppplVar61[0xffffffffffffffe5] = pppplVar19;
  pppplVar31 = (long ****)((ulong)pppppplVar64 & 0xffffffff);
  ppppplVar61[0xfffffffffffffff3] = (long ****)pppplVar19[5];
  ppppplVar61[0xffffffffffffffec] = (long ****)ppppppplVar54;
  ppppplVar61[0xffffffffffffffed] = (long ****)ppppppplVar57;
  ppppplVar6 = pppppplVar50[7];
  ppppplVar61[0xffffffffffffffeb] = auVar66._0_8_;
  ppppppplVar35 = ppppppplVar57;
  ppppppplVar59 = ppppppplVar54;
  if (ppppplVar6 == (long *****)0x0) {
    func_0x03280a18(PTR_DAT_07761a80);
    func_0x03280a18(PTR_DAT_07779510);
    func_0x03280a18(PTR_DAT_07779508);
    func_0x03280a18(PTR_DAT_07779518);
    if (pppppplVar50[7] == (long *****)0x0) {
      func_0x03256878(pppppplVar50);
    }
  }
  ppppplVar6 = pppppplVar50[4];
  ppppplVar61[0xffffffffffffffe8] = (long ****)ppppppplVar57;
  ppppplVar61[0xffffffffffffffe9] = (long ****)ppppppplVar54;
  if ((*(byte *)((long)ppppplVar6 + 0x135) & 1) == 0) {
    ppppplVar6 = (long *****)func_0x0325681c();
  }
  ppppplVar42 = pppppplVar50[7];
  uVar39 = *(uint *)((long)ppppplVar42[3] + 0xfc);
  uVar3 = *(uint *)((long)ppppplVar42[4] + 0xfc);
  pppplVar52 = (long ****)(ulong)*(uint *)((long)ppppplVar6[0x18][8] + 0xfc);
  ppppplVar61[0xffffffffffffffe6] = (long ****)(ulong)uVar39;
  ppppplVar61[0xffffffffffffffe7] = (long ****)(ulong)uVar3;
  ppppppplVar57 =
       (long *******)((long)ppppplVar61 + (-0xf0 - ((long)(ulong)uVar39 + 0xfU & 0x1fffffff0)));
  uVar7 = (ulong)((long)pppplVar52 + 0xf) & 0x1fffffff0;
  pppplVar19 = (long ****)((long)ppppppplVar57 - uVar7);
  pppplVar28 = (long ****)((long)pppplVar19 - ((long)(ulong)uVar3 + 0xfU & 0x1fffffff0));
  pppplVar62 = (long ****)((long)pppplVar28 - uVar7);
  func_0x072ce9a0(pppplVar62,0,pppplVar52);
  pppplVar21 = *ppppplVar42;
  ppppplVar61[0xffffffffffffffe4] = pppplVar62;
  if ((*(byte *)((long)pppplVar21 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  ppplVar22 = (long ***)func_0x03280ca0();
  (*(code *)*pppppplVar50[7][1])();
  if (ppplVar22 == (long ***)0x0) {
LAB_03bf95a8:
    func_0x03280cac();
LAB_03bf95ac:
    plVar49 = (long *)func_0x072ce930(8);
    *plVar49 = (long)*ppppplVar42;
    func_0x072ce940(plVar49,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28,0);
LAB_03bf95cc:
    ppppplVar56 = pppppplVar50[4];
    uVar4 = *(ushort *)((long)ppppplVar56 + 0x135);
    ppppplVar6 = ppppplVar56;
    if ((uVar4 & 1) == 0) {
      ppppplVar56 = (long *****)func_0x0325681c(ppppplVar56);
      uVar4 = *(ushort *)((long)pppppplVar50[4] + 0x135);
      ppppplVar6 = pppppplVar50[4];
    }
    pppplVar28 = (long ****)*ppppplVar56[0x18][0xb];
    ppppplVar56 = ppppplVar6;
    if ((uVar4 & 1) == 0) {
      ppppplVar6 = (long *****)func_0x0325681c(ppppplVar6);
      uVar4 = *(ushort *)((long)pppppplVar50[4] + 0x135);
      ppppplVar56 = pppppplVar50[4];
    }
    pppppplVar50 = (long ******)ppppplVar6[0x18][0xb];
    if ((uVar4 & 1) == 0) {
      ppppplVar56 = (long *****)func_0x0325681c(ppppplVar56);
    }
    if (-1 < *(int *)(ppppplVar56[0x18][8] + 5)) {
      ppppplVar61[0xffffffffffffffe3] = (long ****)*ppppplVar61[0xffffffffffffffe3];
    }
    ppppppplVar35 = (long *******)ppppplVar61[0xffffffffffffffe3];
    ppppppplVar54 = ppppppplVar57;
    func_0x02f1768c(pppplVar28,pppppplVar50);
    ppplVar48 = (long ***)func_0x03280ca4(ppppplVar42);
    func_0x072ce920();
  }
  else {
    ppplVar48 = ppplVar22 + 2;
    *ppplVar48 = (long **)ppplVar20;
    func_0x032809c4(ppplVar48,ppplVar20);
    ppplVar20 = ppplVar22 + 3;
    *ppplVar20 = (long **)ppppppplVar34;
    func_0x032809c4(ppplVar20,ppppppplVar34);
    if (ppppplVar61[0xffffffffffffffeb] == (long ****)0x0) {
      func_0x03280a2c(PTR_DAT_0774e5b0);
      uVar10 = func_0x03280ca0();
      puVar27 = PTR_DAT_07779520;
LAB_03bf942c:
      uVar65 = func_0x03280a2c(puVar27);
      ppppppplVar54 = (long *******)0x0;
      func_0x056e7310(uVar10,uVar65);
      ppppppplVar53 = (long *******)func_0x03280b7c(uVar10,pppppplVar50);
    }
    else {
      if ((*ppplVar48 == (long **)0x0) && (*ppplVar20 == (long **)0x0)) {
LAB_03bf9410:
        func_0x03280a2c(PTR_DAT_0774e5b0);
        uVar10 = func_0x03280ca0();
        puVar27 = PTR_DAT_07779530;
        goto LAB_03bf942c;
      }
      func_0x0581a88c(pppplVar31,1,0);
      ppppplVar6 = pppppplVar50[4];
      if ((*(byte *)((long)ppppplVar6 + 0x135) & 1) == 0) {
        ppppplVar6 = (long *****)func_0x0325681c();
      }
      if ((*(byte *)((long)ppppplVar6[0x18][5] + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      ppplVar23 = (long ***)func_0x03280ca0();
      ppppplVar42 = pppppplVar50[4];
      ppppplVar61[0xffffffffffffffe3] = pppplVar19;
      uVar4 = *(ushort *)((long)ppppplVar42 + 0x135);
      ppppplVar6 = ppppplVar42;
      if ((uVar4 & 1) == 0) {
        ppppplVar42 = (long *****)func_0x0325681c(ppppplVar42);
        uVar4 = *(ushort *)((long)pppppplVar50[4] + 0x135);
        ppppplVar6 = pppppplVar50[4];
      }
      pppplVar19 = ppppplVar42[0x18];
      ppppplVar61[0xffffffffffffffe2] = pppplVar52;
      pplVar47 = *pppplVar19[0x11];
      if ((uVar4 & 1) == 0) {
        ppppplVar6 = (long *****)func_0x0325681c(ppppplVar6);
      }
      (*(code *)pplVar47)(ppplVar23,ppppplVar61[0xffffffffffffffea],pppplVar31,
                          ppppplVar6[0x18][0x11]);
      pppplVar31 = (long ****)(ppplVar22 + 4);
      *pppplVar31 = ppplVar23;
      func_0x032809c4(pppplVar31,ppplVar23);
      pppplVar52 = (long ****)PTR_DAT_07779510;
      if (*(int *)(*(long *)PTR_DAT_07779510 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar7 = func_0x0580ec5c(0);
      if ((uVar7 & 1) != 0) {
        ppplVar58 = *pppplVar31;
        ppplVar23 = *ppppplVar61[0xffffffffffffffeb];
        uVar65 = *(undefined8 *)PTR_DAT_07779518;
        uVar10 = (*(code *)ppplVar23[0x2d])(ppppplVar61[0xffffffffffffffeb],ppplVar23[0x2e]);
        uVar10 = func_0x055ea7a0(uVar65,uVar10,0);
        if (*(int *)((long)*pppplVar52 + 0xe0) == 0) {
          func_0x03280b8c(*pppplVar52);
        }
        func_0x0580ec64(0,ppplVar58,uVar10,0,0);
      }
      ppplVar23 = *pppplVar31;
      if (*(int *)((long)*pppplVar52 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      if (cRam0000000007e17d7a == '\0') {
        func_0x03280a18(PTR_DAT_07779510);
        func_0x03280a18(PTR_DAT_077619f0);
        cRam0000000007e17d7a = '\x01';
      }
      pppplVar19 = (long ****)PTR_DAT_077619f0;
      lVar5 = *(long *)PTR_DAT_077619f0;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar5 = (long)*pppplVar19;
      }
      if (*(char *)(*(long *)(lVar5 + 0xb8) + 0x10) != '\0') {
        if (*(int *)((long)*pppplVar52 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        func_0x0580ed0c(ppplVar23,0);
      }
      ppppplVar42 = pppppplVar50[7];
      ppppplVar6 = (long *****)ppppplVar61[0xffffffffffffffe8];
      if (-1 < *(int *)(ppppplVar42[3] + 5)) {
        ppppplVar6 = ppppplVar61 + 0xffffffffffffffed;
      }
      func_0x072ce970(ppppppplVar57,ppppplVar6,ppppplVar61[0xffffffffffffffe6]);
      ppppplVar6 = (long *****)ppppplVar61[0xffffffffffffffe9];
      if (-1 < *(int *)(ppppplVar42[4] + 5)) {
        ppppplVar6 = ppppplVar61 + 0xffffffffffffffec;
      }
      func_0x072ce970(pppplVar28,ppppplVar6,ppppplVar61[0xffffffffffffffe7]);
      ppppppplVar34 = (long *******)func_0x03280ca0(*(undefined8 *)PTR_DAT_07761a80);
      func_0x056efa8c(ppppppplVar34,ppplVar22,pppppplVar50[7][5],0);
      ppppplVar6 = pppppplVar50[7];
      pppplVar21 = ppppplVar6[6];
      ppplVar23 = *pppplVar21;
      if (-1 < *(int *)(ppppplVar6[3] + 5)) {
        ppppppplVar57 = (long *******)*ppppppplVar57;
      }
      if (-1 < *(int *)(ppppplVar6[4] + 5)) {
        pppplVar28 = (long ****)*pppplVar28;
      }
      ppppppplVar54 = (long *******)ppppplVar61[0xffffffffffffffeb];
      ppppplVar61[0xffffffffffffffee] = (long ****)ppppppplVar57;
      ppppplVar61[0xffffffffffffffef] = pppplVar28;
      ppppplVar61[0xfffffffffffffff0] = (long ****)ppppppplVar34;
      ppppplVar61[0xfffffffffffffff1] = ppppplVar61[0xffffffffffffffea];
      ppppppplVar35 = (long *******)(ppppplVar61 + 0xffffffffffffffee);
      ppppppplVar59 = (long *******)(ppppplVar61 + 0xfffffffffffffff2);
      (*(code *)pppplVar21[2])(ppplVar23);
      ppppppplVar57 = (long *******)ppppplVar61[0xfffffffffffffff2];
      if (ppppppplVar57 == (long *******)0x0) {
        func_0x03280cac();
        goto LAB_03bf9410;
      }
      pppppplVar64 = *ppppppplVar57;
      uVar7 = (ulong)*(ushort *)((long)pppppplVar64 + 0x12e);
      if (uVar7 != 0) {
        ppppplVar6 = pppppplVar64[0x16] + 1;
        do {
          if (ppppplVar6[0xffffffffffffffff] == *(long *****)PTR_DAT_07779508) {
            pppppplVar64 = pppppplVar64 + (long)(*(int *)ppppplVar6 + 3) * 2 + 0x27;
            goto LAB_03bf9338;
          }
          uVar7 = uVar7 - 1;
          ppppplVar6 = ppppplVar6 + 2;
        } while (uVar7 != 0);
      }
      ppppppplVar54 = (long *******)0x3;
      pppppplVar64 = (long ******)func_0x03256b10(ppppppplVar57);
LAB_03bf9338:
      uVar7 = (*(code *)*pppppplVar64)(ppppppplVar57,pppppplVar64[1]);
      if ((uVar7 & 1) != 0) {
        ppppplVar6 = pppppplVar50[4];
        pppplVar28 = (long ****)*ppplVar48;
        ppppppplVar54 = (long *******)*ppplVar20;
        ppppppplVar34 = (long *******)*pppplVar31;
        uVar4 = *(ushort *)((long)ppppplVar6 + 0x135);
        if ((uVar4 & 1) == 0) {
          ppppplVar6 = (long *****)func_0x0325681c();
          uVar4 = *(ushort *)((long)pppppplVar50[4] + 0x135);
        }
        ppplVar22 = (long ***)*ppppplVar6[0x18][0x13];
        if ((uVar4 & 1) == 0) {
          func_0x0325681c();
        }
        ppppppplVar59 = (long *******)0x0;
        ppppppplVar35 = ppppppplVar34;
        (*(code *)ppplVar22)(ppppppplVar57,pppplVar28);
      }
      ppppppplVar53 = (long *******)*pppplVar31;
      if ((long ****)ppppplVar61[0xffffffffffffffe5][5] == ppppplVar61[0xfffffffffffffff3]) {
        return ppppppplVar53;
      }
    }
    auVar68 = func_0x072ce990(ppppppplVar53);
    ppplVar48 = auVar68._0_8_;
    if (auVar68._8_4_ == 1) {
      ppppplVar42 = (long *****)func_0x072ce910(ppplVar48);
      uVar10 = func_0x03280a2c(PTR_DAT_0774ece0);
      uVar7 = func_0x032810d8(uVar10,**ppppplVar42);
      if ((uVar7 & 1) == 0) goto LAB_03bf95ac;
      ppppplVar42 = (long *****)*ppppplVar42;
      func_0x072ce920();
      lVar5 = func_0x03280a2c(PTR_DAT_07779510);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar7 = func_0x0580ec5c(0);
      if ((uVar7 & 1) != 0) {
        ppplVar48 = *pppplVar31;
        lVar5 = func_0x03280a2c(PTR_DAT_07779510);
        if (*(int *)(lVar5 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        func_0x0580ec68(0,ppplVar48,3,0);
      }
      puVar27 = PTR_DAT_07779510;
      ppplVar48 = *pppplVar31;
      lVar5 = func_0x03280a2c(PTR_DAT_07779510);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      ppppppplVar34 = (long *******)0x7e17000;
      if (cRam0000000007e17d7b == '\0') {
        func_0x03280a18(PTR_DAT_07779510);
        func_0x03280a18(PTR_DAT_077619f0);
        cRam0000000007e17d7b = '\x01';
      }
      ppplVar23 = *pppplVar19;
      if (*(int *)(ppplVar23 + 0x1c) == 0) {
        func_0x03280b8c();
        ppplVar23 = *pppplVar19;
      }
      if (*(char *)(ppplVar23[0x17] + 2) != '\0') {
        if (*(int *)(*(long *)puVar27 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        func_0x0580ef88(ppplVar48,0);
      }
      ppppppplVar57 = (long *******)*pppplVar31;
      pppplVar31 = ppppplVar61[0xffffffffffffffe4];
      pppplVar21 = ppppplVar61[0xffffffffffffffe2];
      func_0x072ce9a0(pppplVar31,0,pppplVar21);
      func_0x072ce970(ppppplVar61[0xffffffffffffffe3],pppplVar31,pppplVar21);
      if (ppppppplVar57 == (long *******)0x0) goto LAB_03bf95a8;
      goto LAB_03bf95cc;
    }
  }
  func_0x03365958(ppplVar48);
  auVar66 = func_0x02f09514();
  pppplVar21 = auVar66._8_8_;
  ppplVar23 = auVar66._0_8_;
  pppplVar62[0xfffffffffffffff4] = (long ***)(ppppplVar61 + 0xfffffffffffffff4);
  pppplVar62[0xfffffffffffffff5] = (long ***)0x3bf9688;
  pppplVar62[0xfffffffffffffff6] = (long ***)pppplVar52;
  pppplVar62[0xfffffffffffffff7] = ppplVar20;
  pppplVar62[0xfffffffffffffff8] = ppplVar22;
  pppplVar62[0xfffffffffffffff9] = (long ***)pppplVar19;
  pppplVar62[0xfffffffffffffffa] = (long ***)ppppppplVar34;
  pppplVar62[0xfffffffffffffffb] = (long ***)pppplVar31;
  pppplVar62[0xfffffffffffffffc] = (long ***)pppplVar28;
  pppplVar62[0xfffffffffffffffd] = (long ***)ppppppplVar57;
  pppplVar62[0xfffffffffffffffe] = ppplVar48;
  pppplVar62[0xffffffffffffffff] = (long ***)pppppplVar50;
  lVar5 = tpidr_el0;
  pppplVar62[0xfffffffffffffff3] = *(long ****)(lVar5 + 0x28);
  pppplVar62[0xffffffffffffffed] = (long ***)pppplVar21;
  pppppplVar50 = ppppppplVar59[7];
  if (pppppplVar50 == (long ******)0x0) {
    func_0x03280a18(PTR_DAT_07779508);
    pppppplVar50 = ppppppplVar59[7];
    if (pppppplVar50 == (long ******)0x0) {
      func_0x03256878(ppppppplVar59);
      pppppplVar50 = ppppppplVar59[7];
    }
  }
  ppppppplVar57 = (long *******)(ulong)*(uint *)((long)pppppplVar50[5] + 0xfc);
  ppplVar20 = (long ***)((long)pppplVar62 + (-0xa0 - ((long)ppppppplVar57 + 0xfU & 0x1fffffff0)));
  if ((*(byte *)((long)pppppplVar50[2] + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  ppppppplVar34 = (long *******)func_0x03280ca0();
  ppppplVar6 = ppppppplVar59[7][3];
  (*(code *)*ppppplVar6)(ppppppplVar34,ppplVar23,ppppppplVar35);
  pppppplVar50 = ppppppplVar59[7];
  pppplVar19 = pppplVar21;
  if (-1 < *(int *)(pppppplVar50[5] + 5)) {
    pppplVar19 = pppplVar62 + 0xffffffffffffffed;
  }
  ppppppplVar53 = ppppppplVar57;
  func_0x072ce970(ppplVar20,pppplVar19);
  ppppplVar42 = pppppplVar50[6];
  if ((*(byte *)((long)ppppplVar42 + 0x135) & 1) == 0) {
    ppppplVar42 = (long *****)func_0x0325681c();
  }
  if (*(int *)(ppppplVar42 + 0x1c) == 0) {
    func_0x03280b8c();
  }
  ppppplVar42 = ppppppplVar59[7][6];
  if ((*(byte *)((long)ppppplVar42 + 0x135) & 1) == 0) {
    ppppplVar42 = (long *****)func_0x0325681c();
  }
  ppppplVar56 = (long *****)0x0;
  ppplVar22 = ppplVar20;
  if (ppppppplVar54 == (long *******)0x0) {
LAB_03bf98a4:
    func_0x03280cac();
  }
  else {
    ppppplVar56 = ppppppplVar59[7][7];
    ppplVar48 = *ppppplVar42[0x17];
    pppplVar19 = *ppppplVar56;
    if (-1 < *(int *)(ppppppplVar59[7][5] + 5)) {
      ppplVar22 = (long ***)*ppplVar20;
    }
    pppplVar62[0xffffffffffffffee] = ppplVar23;
    pppplVar62[0xffffffffffffffef] = ppplVar22;
    pppplVar62[0xfffffffffffffff0] = ppplVar48;
    pppplVar62[0xfffffffffffffff1] = (long ***)ppppppplVar34;
    ppppplVar6 = (long *****)(pppplVar62 + 0xffffffffffffffee);
    (*(code *)ppppplVar56[2])(pppplVar19);
    ppppplVar56 = (long *****)pppplVar62[0xfffffffffffffff2];
    ppppppplVar53 = ppppppplVar54;
    if (ppppplVar56 == (long *****)0x0) goto LAB_03bf98a4;
    pppplVar19 = *ppppplVar56;
    uVar7 = (ulong)*(ushort *)((long)pppplVar19 + 0x12e);
    if (uVar7 != 0) {
      ppplVar48 = pppplVar19[0x16] + 1;
      do {
        if (ppplVar48[0xffffffffffffffff] == *(long ***)PTR_DAT_07779508) {
          pppplVar19 = pppplVar19 + (long)(*(int *)ppplVar48 + 3) * 2 + 0x27;
          goto LAB_03bf9838;
        }
        uVar7 = uVar7 - 1;
        ppplVar48 = ppplVar48 + 2;
      } while (uVar7 != 0);
    }
    ppppppplVar53 = (long *******)0x3;
    pppplVar19 = (long ****)func_0x03256b10(ppppplVar56);
LAB_03bf9838:
    uVar7 = (*(code *)*pppplVar19)(ppppplVar56,pppplVar19[1]);
    if ((uVar7 & 1) != 0) {
      if (ppppppplVar34 == (long *******)0x0) goto LAB_03bf98a4;
      ppppppplVar53 = ppppppplVar35;
      ppppplVar6 = ppppplVar56;
      (*(code *)*ppppppplVar59[7][8])(ppppppplVar34,ppplVar23,ppppppplVar35,ppppplVar56,0);
    }
    if (*(long ****)(lVar5 + 0x28) == pppplVar62[0xfffffffffffffff3]) {
      return ppppppplVar34;
    }
  }
  auVar66 = func_0x072ce990();
  pplVar33 = auVar66._8_8_;
  pplVar47 = auVar66._0_8_;
  ppplVar20[-6] = (long **)0x3bf98ac;
  ppplVar20[-4] = (long **)ppppppplVar34;
  ppplVar20[-3] = (long **)ppplVar23;
  ppplVar20[-2] = (long **)ppppppplVar59;
  ppplVar20[-1] = (long **)ppppppplVar35;
  pplVar45 = (long **)((ulong)ppppppplVar53 & 0xffffffff);
  if ((ppppplVar6[7] == (long ****)0x0) &&
     (func_0x03280a18(PTR_DAT_0776f628), ppppplVar6[7] == (long ****)0x0)) {
    func_0x03256878(ppppplVar6);
  }
  if (*(int *)(*(long *)PTR_DAT_0776f628 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  pplVar24 = (long **)func_0x05810938(0);
  ppppppplVar35 = (long *******)ppppplVar6[7][1];
  ppplVar20[-10] = ppplVar20[-6];
  ppplVar20[-8] = (long **)ppppppplVar57;
  ppplVar20[-7] = (long **)pppplVar21;
  ppplVar20[-6] = (long **)ppplVar22;
  ppplVar20[-5] = (long **)ppppplVar56;
  ppplVar20[-4] = ppplVar20[-4];
  ppplVar20[-3] = ppplVar20[-3];
  ppplVar20[-2] = ppplVar20[-2];
  ppplVar20[-1] = ppplVar20[-1];
  if ((ppppppplVar35[7] == (long ******)0x0) &&
     (func_0x03280a18(PTR_DAT_077619f0), ppppppplVar35[7] == (long ******)0x0)) {
    func_0x03256878(ppppppplVar35);
  }
  ppplVar20[-9] = (long **)0x0;
  if (pplVar33 == (long **)0x0) {
    func_0x03280a2c(PTR_DAT_0774e5b0);
    pplVar45 = (long **)func_0x03280ca0();
    puVar27 = PTR_DAT_07779538;
LAB_03bf9a78:
    uVar10 = func_0x03280a2c(puVar27);
    pplVar32 = (long **)0x0;
    func_0x056e7310(pplVar45,uVar10);
    func_0x03280b7c(pplVar45,ppppppplVar35);
  }
  else {
    if (pplVar24 == (long **)0x0) {
      func_0x03280a2c(PTR_DAT_0774e5b0);
      pplVar45 = (long **)func_0x03280ca0();
      puVar27 = PTR_DAT_07779540;
      goto LAB_03bf9a78;
    }
    if (*(int *)(*(long *)PTR_DAT_077619f0 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    func_0x05814d60(pplVar45,(long)ppplVar20 + -0x44,ppplVar20 + -9,0);
    ppppppplVar57 = (long *******)(ulong)*(uint *)(ppplVar20 + -9);
    pppplVar21 = (long ****)(ulong)*(uint *)((long)ppplVar20 + -0x44);
    if ((*(byte *)((long)ppppppplVar35[7][1] + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    ppppppplVar59 = (long *******)func_0x03280ca0();
    pplVar32 = pplVar33;
    func_0x04e9a4f0(ppppppplVar59,pplVar47,pplVar33,0,pppplVar21,ppppppplVar57,ppppppplVar35[7][2]);
    ppppppplVar35 = ppppppplVar59;
    if (pplVar47 != (long **)0x0) {
      func_0x05814f3c(pplVar47,ppppppplVar59,pplVar24,0,pplVar45,0);
      return ppppppplVar59;
    }
  }
  auVar66 = func_0x03280cac();
  pplVar29 = auVar66._8_8_;
  pplVar25 = auVar66._0_8_;
  ppplVar20[-0xe] = (long **)0x3bf9a9c;
  ppplVar20[-0xd] = (long **)0x0;
  ppplVar20[-0xc] = pplVar45;
  ppplVar20[-0xb] = (long **)ppppppplVar35;
  if ((pplVar32[7] == (long *)0x0) &&
     (func_0x03280a18(PTR_DAT_0776f628), pplVar32[7] == (long *)0x0)) {
    func_0x03256878(pplVar32);
  }
  if (*(int *)(*(long *)PTR_DAT_0776f628 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  pplVar45 = (long **)func_0x05810938(0);
  ppppppplVar35 = (long *******)pplVar32[7][1];
  ppplVar20[-0x14] = ppplVar20[-0xe];
  ppplVar20[-0x12] = (long **)ppppppplVar57;
  ppplVar20[-0x11] = (long **)pppplVar21;
  ppplVar20[-0x10] = pplVar33;
  ppplVar20[-0xf] = pplVar47;
  ppplVar20[-0xe] = pplVar24;
  ppplVar20[-0xd] = ppplVar20[-0xd];
  ppplVar20[-0xc] = ppplVar20[-0xc];
  ppplVar20[-0xb] = ppplVar20[-0xb];
  pplVar47 = (long **)0x0;
  if ((ppppppplVar35[7] == (long ******)0x0) &&
     (func_0x03280a18(PTR_DAT_077619f0), ppppppplVar35[7] == (long ******)0x0)) {
    func_0x03256878(ppppppplVar35);
  }
  ppplVar20[-0x13] = (long **)0x0;
  if (pplVar29 == (long **)0x0) {
    func_0x03280a2c(PTR_DAT_0774e5b0);
    pplVar47 = (long **)func_0x03280ca0();
    puVar27 = PTR_DAT_07779538;
LAB_03bf9c5c:
    uVar10 = func_0x03280a2c(puVar27);
    pplVar33 = (long **)0x0;
    func_0x056e7310(pplVar47,uVar10);
    func_0x03280b7c(pplVar47,ppppppplVar35);
  }
  else {
    if (pplVar45 == (long **)0x0) {
      func_0x03280a2c(PTR_DAT_0774e5b0);
      pplVar47 = (long **)func_0x03280ca0();
      puVar27 = PTR_DAT_07779540;
      goto LAB_03bf9c5c;
    }
    if (*(int *)(*(long *)PTR_DAT_077619f0 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    func_0x05814d60(0,(long)ppplVar20 + -0x94,ppplVar20 + -0x13,0);
    ppppppplVar57 = (long *******)(ulong)*(uint *)(ppplVar20 + -0x13);
    pppplVar21 = (long ****)(ulong)*(uint *)((long)ppplVar20 + -0x94);
    if ((*(byte *)((long)ppppppplVar35[7][1] + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    ppppppplVar59 = (long *******)func_0x03280ca0();
    pplVar33 = pplVar29;
    func_0x04e9a6a8(ppppppplVar59,pplVar25,pplVar29,0,pppplVar21,ppppppplVar57,ppppppplVar35[7][2]);
    ppppppplVar35 = ppppppplVar59;
    if (pplVar25 != (long **)0x0) {
      func_0x05814f3c(pplVar25,ppppppplVar59,pplVar45,0,0,0);
      return ppppppplVar59;
    }
  }
  auVar66 = func_0x03280cac();
  lVar11 = auVar66._8_8_;
  lVar5 = auVar66._0_8_;
  ppplVar20[-0x18] = (long **)0x3bf9c80;
  ppplVar20[-0x17] = (long **)0x0;
  ppplVar20[-0x16] = pplVar47;
  ppplVar20[-0x15] = (long **)ppppppplVar35;
  if ((pplVar33[7] == (long *)0x0) &&
     (func_0x03280a18(PTR_DAT_0776f628), pplVar33[7] == (long *)0x0)) {
    func_0x03256878(pplVar33);
  }
  if (*(int *)(*(long *)PTR_DAT_0776f628 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar26 = func_0x05810938(0);
  ppppppplVar35 = (long *******)pplVar33[7][1];
  ppplVar20[-0x1e] = ppplVar20[-0x18];
  ppplVar20[-0x1c] = (long **)ppppppplVar57;
  ppplVar20[-0x1b] = (long **)pppplVar21;
  ppplVar20[-0x1a] = pplVar29;
  ppplVar20[-0x19] = pplVar25;
  ppplVar20[-0x18] = pplVar45;
  ppplVar20[-0x17] = ppplVar20[-0x17];
  ppplVar20[-0x16] = ppplVar20[-0x16];
  ppplVar20[-0x15] = ppplVar20[-0x15];
  pplVar47 = (long **)0x0;
  if ((ppppppplVar35[7] == (long ******)0x0) &&
     (func_0x03280a18(PTR_DAT_077619f0), ppppppplVar35[7] == (long ******)0x0)) {
    func_0x03256878(ppppppplVar35);
  }
  ppplVar20[-0x1d] = (long **)0x0;
  if (lVar11 == 0) {
    func_0x03280a2c(PTR_DAT_0774e5b0);
    pplVar47 = (long **)func_0x03280ca0();
    puVar27 = PTR_DAT_07779538;
  }
  else {
    if (lVar26 != 0) {
      if (*(int *)(*(long *)PTR_DAT_077619f0 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      func_0x05814d60(0,(long)ppplVar20 + -0xe4,ppplVar20 + -0x1d,0);
      uVar1 = *(undefined4 *)(ppplVar20 + -0x1d);
      uVar2 = *(undefined4 *)((long)ppplVar20 + -0xe4);
      if ((*(byte *)((long)ppppppplVar35[7][1] + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      ppppppplVar57 = (long *******)func_0x03280ca0();
      func_0x04e9aa30(ppppppplVar57,lVar5,lVar11,0,uVar2,uVar1,ppppppplVar35[7][2]);
      ppppppplVar35 = ppppppplVar57;
      if (lVar5 != 0) {
        func_0x05814f3c(lVar5,ppppppplVar57,lVar26,0,0,0);
        return ppppppplVar57;
      }
      goto LAB_03bfa050;
    }
    func_0x03280a2c(PTR_DAT_0774e5b0);
    pplVar47 = (long **)func_0x03280ca0();
    puVar27 = PTR_DAT_07779540;
  }
  uVar10 = func_0x03280a2c(puVar27);
  lVar11 = 0;
  func_0x056e7310(pplVar47,uVar10);
  func_0x03280b7c(pplVar47,ppppppplVar35);
LAB_03bfa050:
  auVar66 = func_0x03280cac();
  ppplVar20[-0x22] = (long **)0x3bfa054;
  ppplVar20[-0x21] = (long **)0x0;
  ppplVar20[-0x20] = pplVar47;
  ppplVar20[-0x1f] = (long **)ppppppplVar35;
  if ((*(long *)(lVar11 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0776f628), *(long *)(lVar11 + 0x38) == 0)) {
    func_0x03256878(lVar11);
  }
  if (*(int *)(*(long *)PTR_DAT_0776f628 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar10 = func_0x05810938(0);
                    /* WARNING: Could not recover jumptable at 0x03bfa0d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppppppplVar35 =
       (long *******)
       (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x38) + 8))
                 (auVar66._0_8_,auVar66._8_8_,uVar10,0,0);
  return ppppppplVar35;
}

