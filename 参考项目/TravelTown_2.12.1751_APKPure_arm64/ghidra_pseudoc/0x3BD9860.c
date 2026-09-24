/* Ghidra 12.1.2 native pseudocode; RVA 0x3BD9860; Merger.MergeBoard.Controller.BoardController.DoAction<__Il2CppFullySharedGenericType>; status ok */


/* WARNING: Possible PIC construction at 0x03cd9c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03cd9c1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03cd9c04) */
/* WARNING: Removing unreachable block (ram,0x03cd9c20) */
/* WARNING: Removing unreachable block (ram,0x03cd9c28) */
/* WARNING: Removing unreachable block (ram,0x03cd9c34) */

long *** Merger_MergeBoard_Controller_BoardController__DoAction___Il2CppFullySharedGenericType_
                   (long *param_1,long ******param_2,long param_3,long ***param_4)

{
  long ******pppppplVar1;
  long **pplVar2;
  long ***ppplVar3;
  long *plVar4;
  long **pplVar5;
  long lVar6;
  long **pplVar7;
  long **pplVar8;
  long **pplVar9;
  long ***ppplVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  long *plVar17;
  long **pplVar18;
  long **pplVar19;
  long **pplVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  long *****ppppplStack_70;
  long **pplStack_68;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  lVar6 = tpidr_el0;
  lStack_58 = *(long *)(lVar6 + 0x28);
  plVar11 = *(long **)(param_3 + 0x38);
  ppppplStack_70 = (long *****)param_2;
  if (plVar11 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_07779710);
    plVar11 = *(long **)(param_3 + 0x38);
    if (plVar11 == (long *)0x0) {
      func_0x03256878(param_3);
      plVar11 = *(long **)(param_3 + 0x38);
    }
  }
  pplVar20 = (long **)(ulong)*(uint *)(*plVar11 + 0xfc);
  pplVar9 = (long **)((long)&ppppplStack_70 - ((long)pplVar20 + 0xfU & 0x1fffffff0));
  plVar11 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07779710);
  func_0x060157bc(plVar11,0);
  plVar17 = *(long **)(param_3 + 0x38);
  pppppplVar1 = param_2;
  if (-1 < *(int *)(*plVar17 + 0x28)) {
    pppppplVar1 = &ppppplStack_70;
  }
  pplVar7 = pplVar20;
  func_0x072ce970(pplVar9,pppppplVar1);
  pplVar19 = pplVar9;
  if (plVar11 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    puVar12 = (undefined8 *)plVar17[1];
    if (-1 < *(int *)(*plVar17 + 0x28)) {
      pplVar19 = (long **)*pplVar9;
    }
    param_4 = &pplStack_68;
    pplStack_68 = pplVar19;
    (*(code *)puVar12[2])(*puVar12,puVar12,plVar11,param_4,auStack_60);
    pplVar7 = (long **)0x0;
    ppplVar3 = (long ***)func_0x06b9b560(param_1,plVar11);
    if (*(long *)(lVar6 + 0x28) == lStack_58) {
      return ppplVar3;
    }
  }
  uVar21 = 0x3cd9990;
  auVar22 = func_0x072ce990();
  do {
    plVar4 = auVar22._0_8_;
    pplVar2 = pplVar9 + -8;
    pplVar9[-8] = (long *)uVar21;
    pplVar9[-6] = (long *)pplVar20;
    pplVar9[-5] = (long *)pplVar19;
    pplVar9[-4] = plVar11;
    pplVar9[-3] = plVar17;
    pplVar9[-2] = (long *)param_2;
    pplVar9[-1] = param_1;
    plVar11 = pplVar7[7];
    ppplVar3 = (long ***)(auVar22._8_8_ & 0xffffffff);
    pplVar8 = pplVar7;
    if (plVar11 == (long *)0x0) {
      func_0x03280a18(PTR_DAT_0776dcd8);
      func_0x03280a18(PTR_DAT_07779718);
      func_0x03280a18(PTR_DAT_07779720);
      func_0x03280a18(PTR_DAT_0774e558);
      func_0x03280a18(PTR_DAT_07779728);
      func_0x03280a18(PTR_DAT_07779730);
      func_0x03280a18(PTR_DAT_07779738);
      func_0x03280a18(PTR_DAT_077503b8);
      plVar11 = pplVar7[7];
      if (plVar11 == (long *)0x0) {
        func_0x03256878(pplVar7);
        plVar11 = pplVar7[7];
      }
    }
    pplVar20 = (long **)PTR_DAT_0774e558;
    pplVar9[-7] = (long *)0x0;
    pplVar18 = (long **)plVar4[0x11];
    pplVar19 = (long **)*plVar11;
    if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    plVar11 = (long *)func_0x057a51c4(pplVar19,0);
    if ((plVar11 == (long *)0x0) ||
       (pplVar5 = (long **)(**(code **)(*plVar11 + 0x1b8))
                                     (plVar11,*(undefined8 *)(*plVar11 + 0x1c0)),
       pplVar18 == (long **)0x0)) {
LAB_03cd9c4c:
      pplVar5 = pplVar8;
      uVar21 = 0x3cd9c50;
      auVar23 = func_0x03280cac();
SUB_03cd9c50:
      pplVar8 = auVar23._8_8_;
      pplVar2 = pplVar9 + -0xe;
      pplVar9[-0xe] = (long *)uVar21;
      pplVar9[-0xc] = (long *)pplVar18;
      pplVar9[-0xb] = (long *)pplVar7;
      pplVar9[-10] = (long *)ppplVar3;
      pplVar9[-9] = plVar4;
      pplVar9 = pplVar5;
      ppplVar10 = param_4;
      if (param_4[7] == (long **)0x0) {
        func_0x03280a18(PTR_DAT_07779740);
        func_0x03280a18(PTR_DAT_0774e558);
        if (param_4[7] == (long **)0x0) {
          func_0x03256878(param_4);
        }
      }
      if (*(int *)(*(long *)PTR_DAT_07779740 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar6 = func_0x069572f4(pplVar8,0);
      ppplVar3 = param_4;
      pplVar7 = pplVar5;
      if (lVar6 != 0) {
        pplVar9 = (long **)0x1;
        ppplVar10 = (long ***)0x0;
        pplVar18 = (long **)func_0x06957fd0(lVar6,pplVar5);
        if (pplVar18 != (long **)0x0) {
          ppplVar3 = (long ***)func_0x03dc9518(pplVar18,*param_4[7]);
          pplVar8 = (long **)param_4[7][2];
          if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
            func_0x03280b8c(*(long *)PTR_DAT_0774e558);
          }
          pplVar9 = (long **)func_0x057a51c4(pplVar8,0);
          ppplVar10 = (long ***)0x0;
          func_0x068309d0(auVar23._0_8_,ppplVar3,pplVar9,0,1,0);
          lVar6 = func_0x06fdf130(pplVar18,0);
          pplVar7 = pplVar18;
          if (lVar6 != 0) {
            func_0x06fed5b8(lVar6,0);
            return ppplVar3;
          }
        }
      }
      pplVar5 = pplVar9;
      uVar21 = 0x3cd9d68;
      auVar24 = func_0x03280cac();
      plVar4 = auVar23._0_8_;
    }
    else {
      plVar11 = *pplVar18;
      uVar14 = (ulong)*(ushort *)((long)plVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(plVar11[0x16] + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07779720) {
            plVar11 = plVar11 + (long)(*piVar15 + 1) * 2 + 0x27;
            goto LAB_03cd9ac8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      plVar11 = (long *)func_0x03256b10(pplVar18,*(long *)PTR_DAT_07779720,1);
LAB_03cd9ac8:
      param_4 = (long ***)plVar11[1];
      pplVar8 = pplVar9 + -7;
      (*(code *)*plVar11)(pplVar18,pplVar5);
      plVar11 = pplVar9[-7];
      pplVar19 = pplVar5;
      if (plVar11 == (long *)0x0) {
        pplVar18 = (long **)*pplVar7[7];
        if (*(int *)((long)*pplVar20 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        plVar11 = (long *)func_0x057a51c4(pplVar18,0);
        if (plVar11 != (long *)0x0) {
          uVar21 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
          pplVar18 = (long **)func_0x055ea7a0(*(undefined8 *)PTR_DAT_07779728,uVar21,0);
          if (*(int *)(*(long *)PTR_DAT_0776dcd8 + 0xe0) == 0) {
            func_0x03280b8c(*(long *)PTR_DAT_0776dcd8);
          }
          param_4 = *(long ****)PTR_DAT_07779738;
          pplVar8 = (long **)0x0;
          func_0x0556c434(pplVar18,*(undefined8 *)PTR_DAT_077503b8,0,param_4,
                          *(undefined8 *)PTR_DAT_07779730,0,0);
          plVar11 = pplVar9[-7];
          if (plVar11 != (long *)0x0) goto LAB_03cd9b94;
        }
        goto LAB_03cd9c4c;
      }
LAB_03cd9b94:
      if (plVar4[0x10] == 0) goto LAB_03cd9c4c;
      pplVar19 = (long **)plVar11[4];
      auVar24._8_8_ = pplVar19;
      auVar24._0_8_ = plVar4;
      pplVar8 = *(long ***)PTR_DAT_07779718;
      pplVar5 = (long **)func_0x04fe2cfc(plVar4[0x10],plVar11[3]);
      if (pplVar9[-7] == (long *)0x0) goto LAB_03cd9c4c;
      if ((int)pplVar9[-7][5] == 1) {
        pplVar18 = pplVar5;
        if (pplVar19 == (long **)0x0) goto LAB_03cd9c4c;
        pplVar20 = (long **)plVar4[0x16];
        uVar21 = func_0x06fe368c(pplVar19,0);
        uVar21 = func_0x055ee6c0(pplVar20,uVar21,0);
        auVar23._8_8_ = uVar21;
        auVar23._0_8_ = plVar4;
        param_4 = (long ***)pplVar7[7][3];
        uVar21 = 0x3cd9c04;
        goto SUB_03cd9c50;
      }
      ppplVar10 = (long ***)pplVar7[7][1];
      uVar21 = 0x3cd9c20;
      pplVar8 = pplVar5;
    }
    plVar11 = auVar24._8_8_;
    *(undefined8 *)((long)pplVar2 + -0x30) = uVar21;
    *(long ***)((long)pplVar2 + -0x20) = pplVar8;
    *(long ***)((long)pplVar2 + -0x18) = pplVar7;
    *(long ****)((long)pplVar2 + -0x10) = ppplVar3;
    *(long **)((long)pplVar2 + -8) = plVar4;
    param_4 = ppplVar10;
    if (ppplVar10[7] == (long **)0x0) {
      func_0x03280a18(PTR_DAT_07779748);
      func_0x03280a18(PTR_DAT_0774e4e0);
      func_0x03280a18(PTR_DAT_0774e558);
      if (ppplVar10[7] == (long **)0x0) {
        func_0x03256878(ppplVar10);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar6 = func_0x03e3cdbc(plVar11,pplVar5,*(undefined8 *)PTR_DAT_07779748);
    if (lVar6 != 0) {
      ppplVar3 = (long ***)func_0x03dc9518(lVar6,*ppplVar10[7]);
      plVar11 = ppplVar10[7][2];
      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)PTR_DAT_0774e558);
      }
      uVar21 = func_0x057a51c4(plVar11,0);
      func_0x068309d0(auVar24._0_8_,ppplVar3,uVar21,0,1,0);
      return ppplVar3;
    }
    auVar22 = func_0x03280cac();
    lVar6 = auVar22._8_8_;
    pplVar9 = (long **)((long)pplVar2 + -0x60);
    *(undefined8 *)((long)pplVar2 + -0x50) = 0x3cd9e68;
    *(long ***)((long)pplVar2 + -0x48) = pplVar5;
    *(long ****)((long)pplVar2 + -0x40) = ppplVar10;
    *(long *)((long)pplVar2 + -0x38) = auVar24._0_8_;
    puVar12 = *(undefined8 **)(lVar6 + 0x38);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x03280a18(PTR_DAT_07779750);
      func_0x03280a18(PTR_DAT_0774e558);
      puVar12 = *(undefined8 **)(lVar6 + 0x38);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x03256878(lVar6);
        puVar12 = *(undefined8 **)(lVar6 + 0x38);
      }
    }
    *(undefined8 *)((long)pplVar2 + -0x58) = 0;
    lVar16 = *(long *)(auVar22._0_8_ + 0x90);
    plVar17 = (long *)*puVar12;
    if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar21 = func_0x057a51c4(plVar17,0);
    if (lVar16 != 0) {
      func_0x04fe48b0(lVar16,uVar21,(undefined1 *)((long)pplVar2 + -0x58),
                      *(undefined8 *)PTR_DAT_07779750);
      uVar21 = *(undefined8 *)((long)pplVar2 + -0x58);
      lVar16 = *(long *)(*(long *)(lVar6 + 0x38) + 8);
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = func_0x0325681c(lVar16);
      }
      lVar16 = func_0x03280b90(uVar21,lVar16);
      lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = func_0x0325681c(lVar6);
      }
      if (lVar16 != 0) {
        ppplVar3 = (long ***)func_0x03280b90(lVar16,lVar6);
        if (ppplVar3 != (long ***)0x0) {
          return ppplVar3;
        }
        func_0x03281048(lVar16,lVar6);
      }
      return (long ***)0x0;
    }
    auVar22 = func_0x03280cac();
    lVar16 = auVar22._8_8_;
    plVar4 = auVar22._0_8_;
    *(undefined8 *)((long)pplVar2 + -0x80) = 0x3cd9f80;
    *(undefined8 *)((long)pplVar2 + -0x70) = 0;
    *(long *)((long)pplVar2 + -0x68) = lVar6;
    plVar13 = *(long **)(lVar16 + 0x38);
    if (plVar13 == (long *)0x0) {
      func_0x03256878(lVar16);
      plVar13 = *(long **)(lVar16 + 0x38);
    }
    lVar6 = func_0x03280b88(*(undefined8 *)
                             (*plVar4 + (ulong)*(ushort *)(*plVar13 + 0x50) * 0x10 + 0x140));
    ppplVar3 = (long ***)(**(code **)(lVar6 + 8))(plVar4,lVar6);
    if (ppplVar3 != (long ***)0x0) {
      return ppplVar3;
    }
    param_2 = *(long *******)((long)pplVar2 + -0x70);
    param_1 = *(long **)((long)pplVar2 + -0x68);
    auVar22._8_8_ = 1;
    auVar22._0_8_ = plVar4;
    pplVar7 = *(long ***)(*(long *)(lVar16 + 0x38) + 0x10);
    uVar21 = *(undefined8 *)((long)pplVar2 + -0x80);
  } while( true );
}

