/* Ghidra 12.1.2 native pseudocode; RVA 0x6A36FA4; Merger.MergeBoard.View.Items.MergeBoardItemsContainer.GetItemView; status ok */


/* WARNING: Possible PIC construction at 0x03ce36f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03ce3980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x044c9d14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03ce3984) */
/* WARNING: Removing unreachable block (ram,0x03ce36fc) */
/* WARNING: Removing unreachable block (ram,0x03ce3724) */
/* WARNING: Removing unreachable block (ram,0x03ce3728) */
/* WARNING: Removing unreachable block (ram,0x044c9d18) */
/* WARNING: Removing unreachable block (ram,0x044c9d38) */
/* WARNING: Removing unreachable block (ram,0x044c9d3c) */
/* WARNING: Removing unreachable block (ram,0x03d54ef4) */
/* WARNING: Removing unreachable block (ram,0x03d54f08) */
/* WARNING: Removing unreachable block (ram,0x03d54774) */
/* WARNING: Removing unreachable block (ram,0x03d54788) */
/* WARNING: Removing unreachable block (ram,0x03d555e8) */
/* WARNING: Removing unreachable block (ram,0x03d555fc) */
/* WARNING: Removing unreachable block (ram,0x03d58944) */
/* WARNING: Type propagation algorithm not settling */

long *****
Merger_MergeBoard_View_Items_MergeBoardItemsContainer__GetItemView
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long ****param_5)

{
  ulong *puVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long *****ppppplVar15;
  bool bVar16;
  uint uVar17;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int iVar18;
  long *****ppppplVar22;
  long ****pppplVar23;
  long *****ppppplVar24;
  long ***ppplVar25;
  long *****ppppplVar26;
  long *****ppppplVar27;
  long *****ppppplVar28;
  long lVar29;
  long *plVar30;
  long *plVar31;
  long ****pppplVar32;
  undefined *puVar33;
  long *plVar34;
  long ***ppplVar35;
  long ***ppplVar36;
  long **pplVar37;
  long ***ppplVar38;
  long lVar39;
  long *****ppppplVar40;
  long lVar41;
  long *****ppppplVar42;
  uint uVar43;
  int iVar44;
  long lVar45;
  long ***ppplVar46;
  long ****pppplVar47;
  long lVar48;
  long lVar49;
  undefined8 *extraout_x8;
  ulong uVar50;
  ulong uVar51;
  code *pcVar52;
  long **pplVar53;
  int *piVar54;
  long ****pppplVar55;
  long *****ppppplVar56;
  long ****pppplVar57;
  ulong uVar58;
  long ****pppplVar59;
  ulong uVar60;
  long lVar61;
  long ****pppplVar62;
  long *****ppppplVar63;
  long lVar64;
  long ****pppplVar65;
  ulong uVar66;
  long *****ppppplVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [12];
  undefined8 auStack_990 [16];
  undefined8 auStack_910 [8];
  undefined1 auStack_8d0 [16];
  long alStack_8c0 [8];
  long alStack_880 [2];
  undefined4 uStack_86c;
  long lStack_868;
  undefined1 auStack_860 [8];
  long alStack_858 [23];
  long ***ppplStack_7a0;
  long ****apppplStack_798 [3];
  char acStack_77c [4];
  long ****apppplStack_778 [19];
  undefined1 auStack_6e0 [16];
  long ****apppplStack_6d0 [22];
  long ****apppplStack_620 [2];
  undefined1 auStack_60c [12];
  long ****apppplStack_600 [36];
  char acStack_4dc [4];
  long ****apppplStack_4d8 [19];
  long ****apppplStack_440 [4];
  long ****apppplStack_420 [32];
  undefined1 auStack_320 [16];
  long ****apppplStack_310 [5];
  long **applStack_2e8 [18];
  long ***appplStack_258 [5];
  byte abStack_22c [4];
  long ***appplStack_228 [20];
  long ****apppplStack_188 [3];
  byte abStack_16c [4];
  long ****apppplStack_168 [19];
  long *****appppplStack_d0 [4];
  long ****pppplStack_b0;
  long *****ppppplStack_a8;
  char acStack_9c [4];
  long ***ppplStack_98;
  long *****ppppplStack_28;
  
  puVar33 = PTR_DAT_0782f610;
  if ((bRam0000000007e2a560 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f610);
    bRam0000000007e2a560 = 1;
  }
  plVar34 = *(long **)(param_1 + 0x48);
  lVar41 = *(long *)puVar33;
  lVar45 = *(long *)(lVar41 + 0x38);
  if (lVar45 == 0) {
    func_0x03256878(lVar41);
    lVar45 = *(long *)(lVar41 + 0x38);
  }
  ppppplVar42 = *(long ******)(lVar45 + 0x18);
  ppppplVar67 = ppppplVar42;
  if (ppppplVar42[7] == (long ****)0x0) {
    func_0x03256878(ppppplVar42);
  }
  ppppplStack_28 = (long *****)0x0;
  if (plVar34 != (long *)0x0) {
    ppplVar35 = *ppppplVar42[7];
    if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
      ppplVar35 = (long ***)func_0x0325681c(ppplVar35);
    }
    lVar41 = *plVar34;
    uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
      do {
        if (*(long ****)(piVar54 + -2) == ppplVar35) {
          puVar19 = (undefined8 *)(lVar41 + (long)(*piVar54 + 1) * 0x10 + 0x138);
          goto LAB_03ce2bb4;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    puVar19 = (undefined8 *)func_0x03256b10(plVar34,ppplVar35,1);
LAB_03ce2bb4:
    uVar50 = (*(code *)*puVar19)(plVar34,param_2,&ppppplStack_28,puVar19[1]);
    if ((uVar50 & 1) == 0) {
      ppppplStack_28 = (long *****)0x0;
    }
    return ppppplStack_28;
  }
  func_0x03280a2c(PTR_DAT_0774e5b0);
  uVar20 = func_0x03280ca0();
  uVar21 = func_0x03280a2c(PTR_DAT_07779930);
  ppppplVar40 = (long *****)0x0;
  func_0x056e7310(uVar20,uVar21);
  auVar72 = func_0x03280b7c(uVar20,ppppplVar42);
  ppppplVar42 = auVar72._8_8_;
  pppplVar55 = auVar72._0_8_;
  pppplVar23 = (long ****)tpidr_el0;
  ppplStack_98 = pppplVar23[5];
  pppplVar57 = (long ****)param_5[7];
  appppplStack_d0[0] = ppppplVar40;
  appppplStack_d0[1] = ppppplVar67;
  appppplStack_d0[2] = ppppplVar40;
  appppplStack_d0[3] = ppppplVar42;
  if (pppplVar57 == (long ****)0x0) {
    func_0x03256878(param_5);
    pppplVar57 = (long ****)param_5[7];
  }
  ppplVar35 = (long ***)(ulong)*(uint *)((long)pppplVar57[1] + 0xfc);
  pppplVar59 = (long ****)(ulong)*(uint *)((long)pppplVar57[4] + 0xfc);
  pppplVar65 = (long ****)((long)appppplStack_d0 - ((long)ppplVar35 + 0xfU & 0x1fffffff0));
  uVar50 = (long)pppplVar59 + 0xfU & 0x1fffffff0;
  pppplVar62 = (long ****)((long)pppplVar65 - uVar50);
  ppppplVar40 = (long *****)((long)pppplVar62 - uVar50);
  func_0x072ce9a0(ppppplVar40,0,pppplVar59);
  if (pppplVar55 == (long ****)0x0) {
    func_0x03280a2c(PTR_DAT_0774e5b0);
    pppplVar23 = (long ****)func_0x03280ca0();
    uVar20 = func_0x03280a2c(PTR_DAT_07779930);
    pppplVar47 = (long ****)0x0;
    func_0x056e7310(pppplVar23,uVar20);
    func_0x03280b7c(pppplVar23,param_5);
  }
  else {
    ppppplVar67 = ppppplVar42;
    if (-1 < *(int *)(pppplVar57[1] + 5)) {
      ppppplVar67 = (long *****)(appppplStack_d0 + 3);
    }
    func_0x072ce970(pppplVar65,ppppplVar67,ppplVar35);
    ppplVar36 = *pppplVar57;
    if ((*(byte *)((long)ppplVar36 + 0x135) & 1) == 0) {
      ppplVar36 = (long ***)func_0x0325681c(ppplVar36);
      pppplVar57 = (long ****)param_5[7];
    }
    if (-1 < *(int *)(pppplVar57[1] + 5)) {
      pppplVar65 = (long ****)*pppplVar65;
    }
    ppplVar46 = *pppplVar55;
    uVar50 = (ulong)*(ushort *)((long)ppplVar46 + 0x12e);
    if (uVar50 != 0) {
      pplVar37 = ppplVar46[0x16] + 1;
      do {
        if ((long ***)pplVar37[-1] == ppplVar36) {
          ppplVar46 = ppplVar46 + (long)(*(int *)pplVar37 + 1) * 2 + 0x27;
          goto LAB_03ce2d68;
        }
        uVar50 = uVar50 - 1;
        pplVar37 = pplVar37 + 2;
      } while (uVar50 != 0);
    }
    ppplVar46 = (long ***)func_0x03256b10(pppplVar55,ppplVar36,1);
LAB_03ce2d68:
    pplVar37 = ppplVar46[1];
    ppppplVar67 = &pppplStack_b0;
    pppplStack_b0 = pppplVar65;
    ppppplStack_a8 = ppppplVar40;
    (*(code *)pplVar37[2])(pplVar37[1],pplVar37,pppplVar55,ppppplVar67,acStack_9c);
    ppppplVar22 = ppppplVar40;
    if ((acStack_9c[0] == '\0') &&
       (ppppplVar22 = appppplStack_d0[0], -1 < *(int *)(param_5[7][4] + 5))) {
      ppppplVar22 = (long *****)(appppplStack_d0 + 2);
    }
    func_0x072ce970(pppplVar62,ppppplVar22,pppplVar59);
    pppplVar47 = pppplVar59;
    ppppplVar22 = (long *****)func_0x072ce970(appppplStack_d0[1],pppplVar62);
    if (pppplVar23[5] == ppplStack_98) {
      return ppppplVar22;
    }
  }
  auVar72 = func_0x072ce990();
  plVar34 = auVar72._0_8_;
  ppppplVar40[-6] = (long ****)0x3ce2e40;
  ppppplVar40[-5] = pppplVar55;
  ppppplVar40[-4] = pppplVar59;
  ppppplVar40[-3] = pppplVar57;
  ppppplVar40[-2] = pppplVar23;
  ppppplVar40[-1] = param_5;
  ppppplVar22 = ppppplVar67;
  if (ppppplVar67[7] == (long ****)0x0) {
    func_0x03256878(ppppplVar67);
  }
  if (plVar34 != (long *)0x0) {
    ppplVar35 = *ppppplVar67[7];
    if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
      ppplVar35 = (long ***)func_0x0325681c(ppplVar35);
    }
    lVar41 = *plVar34;
    uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
      do {
        if (*(long ****)(piVar54 + -2) == ppplVar35) {
          puVar19 = (undefined8 *)(lVar41 + (long)(*piVar54 + 7) * 0x10 + 0x138);
          goto LAB_03ce2ed8;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    puVar19 = (undefined8 *)func_0x03256b10(plVar34,ppplVar35,7);
LAB_03ce2ed8:
    uVar17 = (*(code *)*puVar19)(plVar34,auVar72._8_8_,pppplVar47,puVar19[1]);
    if ((uVar17 & 1) == 0) {
      *pppplVar47 = (long ***)0x0;
    }
    else {
      ppplVar35 = *ppppplVar67[7];
      if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
        ppplVar35 = (long ***)func_0x0325681c(ppplVar35);
      }
      lVar41 = *plVar34;
      uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
      if (uVar50 != 0) {
        piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
        do {
          if (*(long ****)(piVar54 + -2) == ppplVar35) {
            puVar19 = (undefined8 *)(lVar41 + (long)(*piVar54 + 6) * 0x10 + 0x138);
            goto LAB_03ce2f64;
          }
          uVar50 = uVar50 - 1;
          piVar54 = piVar54 + 4;
        } while (uVar50 != 0);
      }
      puVar19 = (undefined8 *)func_0x03256b10(plVar34,ppplVar35,6);
LAB_03ce2f64:
      (*(code *)*puVar19)(plVar34,auVar72._8_8_,puVar19[1]);
    }
    return (long *****)(ulong)(uVar17 & 1);
  }
  func_0x03280a2c(PTR_DAT_0774e5b0);
  pppplVar23 = (long ****)func_0x03280ca0();
  uVar20 = func_0x03280a2c(PTR_DAT_07779930);
  pppplVar57 = (long ****)0x0;
  func_0x056e7310(pppplVar23,uVar20);
  auVar72 = func_0x03280b7c(pppplVar23,ppppplVar67);
  ppppplVar27 = auVar72._8_8_;
  ppppplVar26 = auVar72._0_8_;
  ppppplVar15 = ppppplVar40 + -0x12;
  ppppplVar40[-0x12] = (long ****)&stack0xffffffffffffff70;
  ppppplVar40[-0x11] = (long ****)0x3ce2fc4;
  ppppplVar40[-0x10] = (long ****)ppppplVar42;
  ppppplVar40[-0xe] = pppplVar65;
  ppppplVar40[-0xd] = (long ****)ppppplVar40;
  ppppplVar40[-0xc] = pppplVar62;
  ppppplVar40[-0xb] = pppplVar55;
  ppppplVar40[-10] = pppplVar47;
  ppppplVar40[-9] = (long ****)ppppplVar67;
  ppppplVar40[-8] = (long ****)0x0;
  ppppplVar40[-7] = pppplVar23;
  ppplVar36 = (long ***)tpidr_el0;
  ppppplVar40[-0x13] = (long ****)ppplVar36[5];
  ppppplVar40[-0x17] = (long ****)ppppplVar27;
  pppplVar23 = ppppplVar22[7];
  ppppplVar67 = ppppplVar22;
  if (pppplVar23 == (long ****)0x0) {
    func_0x03256878(ppppplVar22);
    pppplVar23 = ppppplVar22[7];
  }
  ppplVar46 = (long ***)(ulong)*(uint *)((long)pppplVar23[1] + 0xfc);
  pppplVar59 = (long ****)((long)ppppplVar40 + (-0xc0 - ((long)ppplVar46 + 0xfU & 0x1fffffff0)));
  pppplVar55 = pppplVar59;
  if (ppppplVar26 == (long *****)0x0) {
    func_0x03280a2c(PTR_DAT_0774e5b0);
    ppppplVar26 = (long *****)func_0x03280ca0();
    uVar20 = func_0x03280a2c(PTR_DAT_07779930);
    ppppplVar42 = (long *****)0x0;
    func_0x056e7310(ppppplVar26,uVar20,0);
    ppppplVar24 = (long *****)func_0x03280b7c(ppppplVar26,ppppplVar22);
  }
  else {
    ppppplVar63 = (long *****)(ulong)*(uint *)((long)pppplVar23[5] + 0xfc);
    ppppplVar67 = ppppplVar27;
    if (-1 < *(int *)(pppplVar23[1] + 5)) {
      ppppplVar67 = ppppplVar40 + -0x17;
    }
    func_0x072ce970(pppplVar59,ppppplVar67,ppplVar46);
    ppplVar38 = *pppplVar23;
    if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
      ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
      pppplVar23 = ppppplVar22[7];
    }
    pppplVar62 = pppplVar59;
    if (-1 < *(int *)(pppplVar23[1] + 5)) {
      pppplVar62 = (long ****)*pppplVar59;
    }
    pppplVar23 = *ppppplVar26;
    uVar50 = (ulong)*(ushort *)((long)pppplVar23 + 0x12e);
    if (uVar50 != 0) {
      ppplVar25 = pppplVar23[0x16] + 1;
      do {
        if ((long ***)ppplVar25[-1] == ppplVar38) {
          pppplVar23 = pppplVar23 + (long)(*(int *)ppplVar25 + 7) * 2 + 0x27;
          goto LAB_03ce30d8;
        }
        uVar50 = uVar50 - 1;
        ppplVar25 = ppplVar25 + 2;
      } while (uVar50 != 0);
    }
    pppplVar23 = (long ****)func_0x03256b10(ppppplVar26,ppplVar38,7);
LAB_03ce30d8:
    ppppplVar40[-0x16] = pppplVar62;
    ppppplVar40[-0x15] = pppplVar57;
    ppplVar38 = pppplVar23[1];
    ppppplVar67 = ppppplVar40 + -0x16;
    (*(code *)ppplVar38[2])
              (ppplVar38[1],ppplVar38,ppppplVar26,ppppplVar67,(long)ppppplVar40 + -0x9c);
    bVar3 = *(byte *)((long)ppppplVar40 + -0x9c);
    pppplVar23 = (long ****)(ulong)bVar3;
    if (bVar3 == 0) {
      ppppplVar42 = ppppplVar63;
      func_0x072ce9a0(pppplVar57,0,ppppplVar63);
    }
    else {
      pppplVar57 = ppppplVar22[7];
      ppppplVar67 = ppppplVar27;
      if (-1 < *(int *)(pppplVar57[1] + 5)) {
        ppppplVar67 = ppppplVar40 + -0x17;
      }
      func_0x072ce970(pppplVar59,ppppplVar67,ppplVar46);
      ppplVar38 = *pppplVar57;
      if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
        ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
        pppplVar57 = ppppplVar22[7];
      }
      if (-1 < *(int *)(pppplVar57[1] + 5)) {
        pppplVar55 = (long ****)*pppplVar59;
      }
      pppplVar62 = *ppppplVar26;
      uVar50 = (ulong)*(ushort *)((long)pppplVar62 + 0x12e);
      if (uVar50 != 0) {
        ppplVar25 = pppplVar62[0x16] + 1;
        do {
          if ((long ***)ppplVar25[-1] == ppplVar38) {
            pppplVar62 = pppplVar62 + (long)(*(int *)ppplVar25 + 6) * 2 + 0x27;
            goto LAB_03ce31ac;
          }
          uVar50 = uVar50 - 1;
          ppplVar25 = ppplVar25 + 2;
        } while (uVar50 != 0);
      }
      pppplVar62 = (long ****)func_0x03256b10(ppppplVar26,ppplVar38,6);
LAB_03ce31ac:
      ppppplVar40[-0x16] = pppplVar55;
      ppplVar38 = pppplVar62[1];
      ppppplVar67 = ppppplVar40 + -0x16;
      ppppplVar42 = ppppplVar26;
      (*(code *)ppplVar38[2])
                (ppplVar38[1],ppplVar38,ppppplVar26,ppppplVar67,(long)ppppplVar40 + -0x9c);
    }
    ppppplVar28 = ppppplVar40 + -0x13;
    ppppplVar24 = (long *****)(ulong)(bVar3 != 0);
    ppppplVar40 = ppppplVar63;
    if ((long ****)ppplVar36[5] == *ppppplVar28) {
      return ppppplVar24;
    }
  }
  auVar72 = func_0x072ce990(ppppplVar24);
  ppplVar38 = auVar72._8_8_;
  plVar34 = auVar72._0_8_;
  pppplVar59[-6] = (long ***)0x3ce3240;
  pppplVar59[-5] = (long ***)pppplVar57;
  pppplVar59[-4] = (long ***)ppppplVar27;
  pppplVar59[-3] = (long ***)ppppplVar22;
  pppplVar59[-2] = (long ***)pppplVar55;
  pppplVar59[-1] = (long ***)ppppplVar26;
  ppppplVar22 = ppppplVar67;
  if (ppppplVar67[7] == (long ****)0x0) {
    func_0x03256878(ppppplVar67);
  }
  if (plVar34 != (long *)0x0) {
    ppplVar35 = *ppppplVar67[7];
    if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
      ppplVar35 = (long ***)func_0x0325681c(ppplVar35);
    }
    lVar41 = *plVar34;
    uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
      do {
        if (*(long ****)(piVar54 + -2) == ppplVar35) {
          puVar19 = (undefined8 *)(lVar41 + (long)(*piVar54 + 4) * 0x10 + 0x138);
          goto LAB_03ce32d8;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    puVar19 = (undefined8 *)func_0x03256b10(plVar34,ppplVar35,4);
LAB_03ce32d8:
    uVar17 = (*(code *)*puVar19)(plVar34,ppplVar38,puVar19[1]);
    if ((uVar17 & 1) == 0) {
      ppplVar35 = *ppppplVar67[7];
      if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
        ppplVar35 = (long ***)func_0x0325681c(ppplVar35);
      }
      lVar41 = *plVar34;
      uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
      if (uVar50 != 0) {
        piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
        do {
          if (*(long ****)(piVar54 + -2) == ppplVar35) {
            puVar19 = (undefined8 *)(lVar41 + (long)(*piVar54 + 5) * 0x10 + 0x138);
            goto LAB_03ce3358;
          }
          uVar50 = uVar50 - 1;
          piVar54 = piVar54 + 4;
        } while (uVar50 != 0);
      }
      puVar19 = (undefined8 *)func_0x03256b10(plVar34,ppplVar35,5);
LAB_03ce3358:
      (*(code *)*puVar19)(plVar34,ppplVar38,ppppplVar42,puVar19[1]);
    }
    return (long *****)(ulong)(~uVar17 & 1);
  }
  func_0x03280a2c(PTR_DAT_0774e5b0);
  ppplVar25 = (long ***)func_0x03280ca0();
  uVar20 = func_0x03280a2c(PTR_DAT_07779930);
  pppplVar62 = (long ****)0x0;
  func_0x056e7310(ppplVar25,uVar20);
  auVar72 = func_0x03280b7c(ppplVar25,ppppplVar67);
  pppplVar55 = auVar72._8_8_;
  ppppplVar42 = auVar72._0_8_;
  pppplVar59[-0x12] = (long ***)ppppplVar15;
  pppplVar59[-0x11] = (long ***)0x3ce33c0;
  pppplVar59[-0x10] = ppplVar35;
  pppplVar59[-0xf] = (long ***)pppplVar23;
  pppplVar59[-0xe] = ppplVar36;
  pppplVar59[-0xd] = (long ***)ppppplVar40;
  pppplVar59[-0xc] = ppplVar46;
  pppplVar59[-0xb] = (long ***)pppplVar57;
  pppplVar59[-10] = (long ***)ppppplVar67;
  pppplVar59[-9] = (long ***)0x0;
  pppplVar59[-8] = ppplVar38;
  pppplVar59[-7] = ppplVar25;
  pppplVar23 = (long ****)tpidr_el0;
  pppplVar59[-0x13] = pppplVar23[5];
  pppplVar59[-0x18] = (long ***)pppplVar62;
  pppplVar59[-0x17] = (long ***)pppplVar55;
  ppppplVar67 = (long *****)ppppplVar22[7];
  if (ppppplVar67 == (long *****)0x0) {
    func_0x03256878(ppppplVar22);
    ppppplVar67 = (long *****)ppppplVar22[7];
  }
  pppplVar57 = (long ****)(ulong)*(uint *)((long)ppppplVar67[1] + 0xfc);
  pplVar37 = (long **)(ulong)*(uint *)((long)ppppplVar67[3] + 0xfc);
  ppplVar46 = (long ***)
              ((long)pppplVar59 + (-0xd0 - ((ulong)((long)pppplVar57 + 0xfU) & 0x1fffffff0)));
  ppplVar36 = (long ***)((long)ppplVar46 - ((long)pplVar37 + 0xfU & 0x1fffffff0));
  ppplVar35 = ppplVar36;
  if (ppppplVar42 == (long *****)0x0) {
    func_0x03280a2c(PTR_DAT_0774e5b0);
    ppppplVar42 = (long *****)func_0x03280ca0();
    uVar20 = func_0x03280a2c(PTR_DAT_07779930);
    ppppplVar40 = (long *****)0x0;
    func_0x056e7310(ppppplVar42,uVar20);
    ppppplVar26 = (long *****)func_0x03280b7c(ppppplVar42,ppppplVar22);
  }
  else {
    pppplVar65 = pppplVar55;
    if (-1 < *(int *)(ppppplVar67[1] + 5)) {
      pppplVar65 = pppplVar59 + -0x17;
    }
    func_0x072ce970(ppplVar46,pppplVar65,pppplVar57);
    pppplVar65 = *ppppplVar67;
    if ((*(byte *)((long)pppplVar65 + 0x135) & 1) == 0) {
      pppplVar65 = (long ****)func_0x0325681c(pppplVar65);
      ppppplVar67 = (long *****)ppppplVar22[7];
    }
    ppplVar38 = ppplVar46;
    if (-1 < *(int *)(ppppplVar67[1] + 5)) {
      ppplVar38 = (long ***)*ppplVar46;
    }
    pppplVar47 = *ppppplVar42;
    uVar50 = (ulong)*(ushort *)((long)pppplVar47 + 0x12e);
    if (uVar50 != 0) {
      ppplVar25 = pppplVar47[0x16] + 1;
      do {
        if ((long ****)ppplVar25[-1] == pppplVar65) {
          pppplVar47 = pppplVar47 + (long)(*(int *)ppplVar25 + 4) * 2 + 0x27;
          goto LAB_03ce34e8;
        }
        uVar50 = uVar50 - 1;
        ppplVar25 = ppplVar25 + 2;
      } while (uVar50 != 0);
    }
    pppplVar47 = (long ****)func_0x03256b10(ppppplVar42,pppplVar65,4);
LAB_03ce34e8:
    pppplVar59[-0x16] = ppplVar38;
    ppplVar38 = pppplVar47[1];
    ppppplVar40 = ppppplVar42;
    (*(code *)ppplVar38[2])
              (ppplVar38[1],ppplVar38,ppppplVar42,pppplVar59 + -0x16,(long)pppplVar59 + -0x9c);
    bVar3 = *(byte *)((long)pppplVar59 + -0x9c);
    ppppplVar67 = (long *****)(ulong)bVar3;
    if (bVar3 == 0) {
      pppplVar59[-0x19] = (long ***)pppplVar23;
      pppplVar65 = ppppplVar22[7];
      pppplVar23 = pppplVar55;
      if (-1 < *(int *)(pppplVar65[1] + 5)) {
        pppplVar23 = pppplVar59 + -0x17;
      }
      func_0x072ce970(ppplVar46,pppplVar23,pppplVar57);
      pppplVar23 = pppplVar62;
      if (-1 < *(int *)(pppplVar65[3] + 5)) {
        pppplVar23 = pppplVar59 + -0x18;
      }
      func_0x072ce970(ppplVar36,pppplVar23,pplVar37);
      ppplVar38 = *pppplVar65;
      if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
        ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
        pppplVar65 = ppppplVar22[7];
      }
      if (-1 < *(int *)(pppplVar65[1] + 5)) {
        ppplVar46 = (long ***)*ppplVar46;
      }
      if (-1 < *(int *)(pppplVar65[3] + 5)) {
        ppplVar35 = (long ***)*ppplVar36;
      }
      pppplVar65 = *ppppplVar42;
      pppplVar23 = (long ****)pppplVar59[-0x19];
      uVar50 = (ulong)*(ushort *)((long)pppplVar65 + 0x12e);
      if (uVar50 != 0) {
        ppplVar25 = pppplVar65[0x16] + 1;
        do {
          if ((long ***)ppplVar25[-1] == ppplVar38) {
            pppplVar65 = pppplVar65 + (long)(*(int *)ppplVar25 + 5) * 2 + 0x27;
            goto LAB_03ce35e0;
          }
          uVar50 = uVar50 - 1;
          ppplVar25 = ppplVar25 + 2;
        } while (uVar50 != 0);
      }
      pppplVar65 = (long ****)func_0x03256b10(ppppplVar42,ppplVar38,5);
LAB_03ce35e0:
      pppplVar59[-0x16] = ppplVar46;
      pppplVar59[-0x15] = ppplVar35;
      ppplVar38 = pppplVar65[1];
      ppppplVar40 = ppppplVar42;
      (*(code *)ppplVar38[2])(ppplVar38[1],ppplVar38,ppppplVar42,pppplVar59 + -0x16,ppplVar35);
    }
    ppppplVar26 = (long *****)(ulong)(bVar3 == 0);
    if (pppplVar23[5] == pppplVar59[-0x13]) {
      return ppppplVar26;
    }
  }
  auVar72 = func_0x072ce990(ppppplVar26);
  pppplVar65 = auVar72._8_8_;
  pplVar53 = auVar72._0_8_;
  ppplVar36[-6] = (long **)0x3ce3674;
  ppplVar36[-4] = (long **)ppppplVar22;
  ppplVar36[-3] = (long **)ppplVar46;
  ppplVar36[-2] = (long **)ppplVar35;
  ppplVar36[-1] = (long **)ppppplVar42;
  ppppplVar42 = ppppplVar40;
  if (ppppplVar40[7] == (long ****)0x0) {
    func_0x03256878(ppppplVar40);
  }
  if (pplVar53 == (long **)0x0) {
LAB_03ce3754:
    ppppplVar26 = ppppplVar22;
    func_0x03280cac();
  }
  else {
    uVar17 = func_0x04545968(pplVar53,ppppplVar40[7][1]);
    ppplVar35 = ppppplVar40[7][2];
    if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
      ppplVar35 = (long ***)func_0x0325681c(ppplVar35);
    }
    ppppplVar26 = (long *****)func_0x03280afc(ppplVar35,uVar17 + 1);
    ppppplVar22 = (long *****)(ulong)uVar17;
    if (ppppplVar26 == (long *****)0x0) goto LAB_03ce3754;
    if (*(int *)(ppppplVar26 + 3) != 0) {
      ppppplVar26 = ppppplVar26 + 4;
      *ppppplVar26 = pppplVar65;
      goto SUB_032809c4;
    }
  }
  auVar72 = func_0x03280cb4();
  pppplVar47 = auVar72._8_8_;
  pppplVar32 = auVar72._0_8_;
  ppplVar36[-0x10] = (long **)(pppplVar59 + -0x12);
  ppplVar36[-0xf] = (long **)0x3ce375c;
  ppplVar36[-0xe] = (long **)pppplVar57;
  ppplVar36[-0xd] = pplVar37;
  ppplVar36[-0xc] = (long **)pppplVar55;
  ppplVar36[-0xb] = (long **)pppplVar62;
  ppplVar36[-10] = (long **)ppppplVar26;
  ppplVar36[-9] = (long **)pppplVar65;
  ppplVar36[-8] = pplVar53;
  ppplVar36[-7] = (long **)ppppplVar40;
  pppplVar55 = (long ****)tpidr_el0;
  ppplVar36[-0x11] = (long **)pppplVar55[5];
  ppplVar36[-0x12] = (long **)pppplVar47;
  pppplVar59 = ppppplVar42[7];
  ppppplVar26 = ppppplVar42;
  if (pppplVar59 == (long ****)0x0) {
    func_0x03256878(ppppplVar42);
    pppplVar59 = ppppplVar42[7];
  }
  ppppplVar22 = (long *****)(ulong)*(uint *)((long)pppplVar59[3] + 0xfc);
  ppppplVar40 = (long *****)((long)ppplVar36 + (-0x90 - ((long)ppppplVar22 + 0xfU & 0x1fffffff0)));
  if (pppplVar32 == (long ****)0x0) {
LAB_03ce38f0:
    func_0x03280cac();
LAB_03ce38f4:
    func_0x03280cb4();
  }
  else {
    iVar18 = (*(code *)*pppplVar59[1])(pppplVar32);
    ppplVar35 = ppppplVar42[7][2];
    if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
      ppplVar35 = (long ***)func_0x0325681c(ppplVar35);
    }
    pppplVar65 = (long ****)func_0x03280afc(ppplVar35,iVar18 + 1);
    pppplVar59 = pppplVar47;
    if (-1 < *(int *)(ppppplVar42[7][3] + 5)) {
      pppplVar59 = (long ****)(ppplVar36 + -0x12);
    }
    ppppplVar26 = ppppplVar22;
    func_0x072ce970(ppppplVar40,pppplVar59);
    if (pppplVar65 == (long ****)0x0) goto LAB_03ce38f0;
    pppplVar57 = (long ****)pppplVar65[3];
    if ((int)pppplVar57 == 0) goto LAB_03ce38f4;
    pppplVar47 = pppplVar65 + 4;
    ppppplVar26 = ppppplVar22;
    func_0x072ce970(pppplVar47,ppppplVar40);
    ppplVar35 = ppppplVar42[7][3];
    if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
      ppplVar35 = (long ***)func_0x0325681c();
      pppplVar57 = (long ****)pppplVar65[3];
    }
    if ((int)pppplVar57 == 0) goto LAB_03ce38f4;
    func_0x032809c8(ppplVar35,pppplVar47,ppppplVar40);
    (*(code *)*ppppplVar42[7][4])(pppplVar32,pppplVar65,1);
    if ((*(byte *)((long)ppppplVar42[7][6] + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    ppppplVar27 = (long *****)func_0x03280ca0();
    ppppplVar26 = (long *****)ppppplVar42[7][7];
    (*(code *)*ppppplVar26)(ppppplVar27,pppplVar65);
    ppppplVar42 = ppppplVar27;
    if (pppplVar55[5] == (long ***)ppplVar36[-0x11]) {
      return ppppplVar27;
    }
  }
  auVar72 = func_0x072ce990();
  lVar41 = auVar72._0_8_;
  ppppplVar40[-4] = (long ****)0x3ce38fc;
  ppppplVar40[-3] = pppplVar65;
  ppppplVar40[-2] = pppplVar32;
  ppppplVar40[-1] = (long ****)ppppplVar42;
  ppppplVar42 = ppppplVar26;
  if (ppppplVar26[7] == (long ****)0x0) {
    func_0x03256878(ppppplVar26);
  }
  if (lVar41 == 0) {
LAB_03ce3994:
    func_0x03280cac();
  }
  else {
    ppplVar35 = ppppplVar26[7][1];
    if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
      ppplVar35 = (long ***)func_0x0325681c();
    }
    ppppplVar26 = (long *****)func_0x03280afc(ppplVar35,*(int *)(lVar41 + 0x18) + 1);
    ppppplVar42 = (long *****)0x0;
    func_0x057b9e7c(lVar41,ppppplVar26,0,0);
    if (ppppplVar26 == (long *****)0x0) goto LAB_03ce3994;
    if ((uint)*(long *)(lVar41 + 0x18) < *(uint *)(ppppplVar26 + 3)) {
      ppppplVar26 = (long *****)
                    ((long)ppppplVar26 + ((*(long *)(lVar41 + 0x18) << 0x20) >> 0x1d) + 0x20);
      *ppppplVar26 = auVar72._8_8_;
      goto SUB_032809c4;
    }
  }
  auVar73 = func_0x03280cb4();
  ppppplVar27 = auVar73._8_8_;
  pppplVar59 = auVar73._0_8_;
  ppppplVar40[-0xe] = (long ****)(ppplVar36 + -0x10);
  ppppplVar40[-0xd] = (long ****)0x3ce399c;
  ppppplVar40[-0xc] = pppplVar55;
  ppppplVar40[-10] = (long ****)ppppplVar22;
  ppppplVar40[-9] = pppplVar47;
  ppppplVar40[-8] = (long ****)ppppplVar40;
  ppppplVar40[-7] = (long ****)ppppplVar26;
  *(undefined1 (*) [16])(ppppplVar40 + -6) = auVar72;
  pppplVar55 = (long ****)tpidr_el0;
  ppppplVar40[-0xf] = (long ****)pppplVar55[5];
  ppppplVar40[-0x10] = (long ****)ppppplVar27;
  pppplVar62 = ppppplVar42[7];
  ppppplVar22 = ppppplVar42;
  if (pppplVar62 == (long ****)0x0) {
    func_0x03256878(ppppplVar42);
    pppplVar62 = ppppplVar42[7];
  }
  ppppplVar63 = (long *****)(ulong)*(uint *)((long)pppplVar62[2] + 0xfc);
  ppppplVar24 = (long *****)((long)ppppplVar40 + (-0x80 - ((long)ppppplVar63 + 0xfU & 0x1fffffff0)))
  ;
  ppppplVar26 = ppppplVar40;
  if (pppplVar59 == (long ****)0x0) {
LAB_03ce3b0c:
    func_0x03280cac();
LAB_03ce3b10:
    func_0x03280cb4();
  }
  else {
    ppplVar35 = pppplVar62[1];
    if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
      ppplVar35 = (long ***)func_0x0325681c();
    }
    ppppplVar26 = (long *****)func_0x03280afc(ppplVar35,*(int *)(pppplVar59 + 3) + 1);
    func_0x057b9e7c(pppplVar59,ppppplVar26,0,0);
    ppppplVar28 = ppppplVar27;
    if (-1 < *(int *)(ppppplVar42[7][2] + 5)) {
      ppppplVar28 = ppppplVar40 + -0x10;
    }
    ppppplVar22 = ppppplVar63;
    func_0x072ce970(ppppplVar24,ppppplVar28);
    if (ppppplVar26 == (long *****)0x0) goto LAB_03ce3b0c;
    if (*(uint *)(ppppplVar26 + 3) <= (uint)pppplVar59[3]) goto LAB_03ce3b10;
    ppppplVar22 = ppppplVar63;
    func_0x072ce970((long)ppppplVar26 +
                    (long)(int)(uint)pppplVar59[3] * (ulong)*(uint *)((long)*ppppplVar26 + 0x104) +
                    0x20,ppppplVar24);
    ppplVar35 = ppppplVar42[7][2];
    if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
      ppplVar35 = (long ***)func_0x0325681c();
    }
    if (*(uint *)(ppppplVar26 + 3) <= (uint)pppplVar59[3]) goto LAB_03ce3b10;
    ppppplVar22 = ppppplVar24;
    func_0x032809c8(ppplVar35,
                    (long)ppppplVar26 +
                    (long)(int)(uint)pppplVar59[3] * (ulong)*(uint *)((long)*ppppplVar26 + 0x104) +
                    0x20);
    if ((long ****)pppplVar55[5] == ppppplVar40[-0xf]) {
      return ppppplVar26;
    }
  }
  auVar72 = func_0x072ce990();
  pppplVar65 = auVar72._8_8_;
  pppplVar62 = auVar72._0_8_;
  ppppplVar24[-4] = (long ****)0x3ce3b18;
  ppppplVar24[-2] = (long ****)ppppplVar24;
  ppppplVar24[-1] = pppplVar59;
  if (pppplVar65[7] == (long ***)0x0) {
    func_0x03256878(pppplVar65);
  }
  if (pppplVar62 != (long ****)0x0) {
    pplVar37 = pppplVar65[7][1];
    if ((*(byte *)((long)pplVar37 + 0x135) & 1) == 0) {
      pplVar37 = (long **)func_0x0325681c();
    }
    ppppplVar28 = (long *****)func_0x03280afc(pplVar37,*(int *)(pppplVar62 + 3) + -1);
    if (ppppplVar28 != (long *****)0x0) {
      func_0x057b9f30(pppplVar62,1,ppppplVar28,0,*(undefined4 *)(ppppplVar28 + 3),0);
      return ppppplVar28;
    }
  }
  auVar72 = func_0x03280cac();
  pppplVar47 = auVar72._8_8_;
  pppplVar59 = auVar72._0_8_;
  ppppplVar24[-8] = (long ****)0x3ce3b94;
  ppppplVar24[-6] = pppplVar65;
  ppppplVar24[-5] = pppplVar62;
  if (pppplVar47[7] == (long ***)0x0) {
    func_0x03256878(pppplVar47);
  }
  if (pppplVar59 != (long ****)0x0) {
    pplVar37 = pppplVar47[7][1];
    if ((*(byte *)((long)pplVar37 + 0x135) & 1) == 0) {
      pplVar37 = (long **)func_0x0325681c();
    }
    ppppplVar28 = (long *****)func_0x03280afc(pplVar37,*(int *)(pppplVar59 + 3) + -1);
    if (ppppplVar28 != (long *****)0x0) {
      func_0x057b9f30(pppplVar59,1,ppppplVar28,0,*(undefined4 *)(ppppplVar28 + 3),0);
      return ppppplVar28;
    }
  }
  auVar72 = func_0x03280cac();
  pppplVar65 = auVar72._8_8_;
  pppplVar62 = auVar72._0_8_;
  ppppplVar24[-0xc] = (long ****)0x3ce3c10;
  ppppplVar24[-10] = pppplVar47;
  ppppplVar24[-9] = pppplVar59;
  if (pppplVar65[7] == (long ***)0x0) {
    func_0x03256878(pppplVar65);
  }
  if (pppplVar62 != (long ****)0x0) {
    pplVar37 = pppplVar65[7][1];
    if ((*(byte *)((long)pplVar37 + 0x135) & 1) == 0) {
      pplVar37 = (long **)func_0x0325681c();
    }
    ppppplVar28 = (long *****)func_0x03280afc(pplVar37,*(int *)(pppplVar62 + 3) + -1);
    if (ppppplVar28 != (long *****)0x0) {
      func_0x057b9f30(pppplVar62,0,ppppplVar28,0,*(undefined4 *)(ppppplVar28 + 3),0);
      return ppppplVar28;
    }
  }
  auVar72 = func_0x03280cac();
  pppplVar47 = auVar72._8_8_;
  pppplVar59 = auVar72._0_8_;
  ppppplVar24[-0x10] = (long ****)0x3ce3c8c;
  ppppplVar24[-0xe] = pppplVar65;
  ppppplVar24[-0xd] = pppplVar62;
  if (pppplVar47[7] == (long ***)0x0) {
    func_0x03256878(pppplVar47);
  }
  if (pppplVar59 != (long ****)0x0) {
    pplVar37 = pppplVar47[7][1];
    if ((*(byte *)((long)pplVar37 + 0x135) & 1) == 0) {
      pplVar37 = (long **)func_0x0325681c();
    }
    ppppplVar28 = (long *****)func_0x03280afc(pplVar37,*(int *)(pppplVar59 + 3) + -1);
    if (ppppplVar28 != (long *****)0x0) {
      func_0x057b9f30(pppplVar59,0,ppppplVar28,0,*(undefined4 *)(ppppplVar28 + 3),0);
      return ppppplVar28;
    }
  }
  auVar72 = func_0x03280cac();
  lVar45 = auVar72._8_8_;
  ppppplVar28 = auVar72._0_8_;
  ppppplVar24[-0x14] = (long ****)0x3ce3d08;
  ppppplVar24[-0x13] = (long ****)ppppplVar42;
  ppppplVar24[-0x12] = pppplVar47;
  ppppplVar24[-0x11] = pppplVar59;
  lVar41 = *(long *)(lVar45 + 0x38);
  if (lVar41 == 0) {
    func_0x03256878(lVar45);
    lVar41 = *(long *)(lVar45 + 0x38);
  }
  if (ppppplVar28 != (long *****)0x0) {
    pppplVar59 = *(long *****)(lVar41 + 0x20);
    if ((*(byte *)((long)pppplVar59 + 0x135) & 1) == 0) {
      pppplVar59 = (long ****)func_0x0325681c();
    }
    pppplVar62 = *ppppplVar28;
    if (pppplVar62 == pppplVar59) {
      return ppppplVar28;
    }
    pppplVar59 = *(long *****)(*(long *)(lVar45 + 0x38) + 0x28);
    if ((*(byte *)((long)pppplVar59 + 0x135) & 1) == 0) {
      pppplVar59 = (long ****)func_0x0325681c();
      pppplVar62 = *ppppplVar28;
    }
    if (pppplVar62 == pppplVar59) {
      pppplVar23 = ppppplVar24[-0x11];
      lVar41 = *(long *)(*(long *)(lVar45 + 0x38) + 0x30);
      pppplVar55 = ppppplVar24[-0x13];
      ppppplVar24[-0x16] = ppppplVar24[-0x14];
      ppppplVar24[-0x15] = (long ****)ppppplVar63;
      ppppplVar24[-0x14] = (long ****)ppppplVar26;
      ppppplVar24[-0x13] = pppplVar55;
      ppppplVar24[-0x12] = ppppplVar24[-0x12];
      ppppplVar24[-0x11] = pppplVar23;
      ppppplVar26 = ppppplVar28 + 2;
      if (*ppppplVar26 != (long ****)0x0) {
        if (*(int *)(ppppplVar28 + 3) != *(int *)(*ppppplVar26 + 3)) {
          func_0x044c9c08(ppppplVar28,
                          *(undefined8 *)(*(long *)(*(long *)(lVar41 + 0x20) + 0xc0) + 0xe0));
        }
        lVar45 = **(long **)(*(long *)(lVar41 + 0x20) + 0xc0);
        lVar41 = *(long *)(lVar45 + 0x38);
        if (lVar41 == 0) {
          func_0x03256878(lVar45);
          lVar41 = *(long *)(lVar45 + 0x38);
        }
        lVar41 = *(long *)(lVar41 + 0x10);
        if ((*(byte *)(lVar41 + 0x135) & 1) == 0) {
          lVar41 = func_0x0325681c();
        }
        if (*(int *)(lVar41 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        lVar41 = *(long *)(*(long *)(lVar45 + 0x38) + 0x10);
        if ((*(byte *)(lVar41 + 0x135) & 1) == 0) {
          lVar41 = func_0x0325681c();
        }
        ppppplVar28[2] = (long ****)**(long **)(lVar41 + 0xb8);
SUB_032809c4:
        if (iRam00000000080486b8 != 0) {
          puVar1 = (ulong *)(((ulong)ppppplVar26 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
          do {
            cVar4 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar16) {
              *puVar1 = *puVar1 | 1L << ((ulong)ppppplVar26 >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        return ppppplVar26;
      }
      auVar77 = func_0x03280cac();
      iVar18 = auVar77._8_4_;
      ppppplVar67 = auVar77._0_8_;
      ppppplVar24[-0x18] = (long ****)0x44c9d70;
      if (ppppplVar67[2] == (long ****)0x0) {
        auVar72 = func_0x03280cac();
        ppppplVar24[-0x1a] = (long ****)0x44c9dc0;
        ppppplVar24[-0x19] = pppplVar23;
        lVar41 = *(long *)(auVar72._8_8_ + 0x20);
        if ((*(byte *)(lVar41 + 0x135) & 1) == 0) {
          lVar41 = func_0x0325681c(lVar41);
        }
        lVar41 = *(long *)(*(long *)(lVar41 + 0xc0) + 0x20);
        if ((*(byte *)(lVar41 + 0x135) & 1) == 0) {
          lVar41 = func_0x0325681c(lVar41);
        }
        lVar41 = func_0x03280b90(auVar72._0_8_,lVar41);
        if (lVar41 == 0) {
          ppppplVar67 = (long *****)(ulong)(auVar72._0_8_ == 0);
        }
        else {
          ppppplVar67 = (long *****)0x1;
        }
        return ppppplVar67;
      }
      ppplVar35 = ppppplVar67[2][3];
      iVar44 = (int)ppplVar35;
      if (iVar18 <= iVar44) {
        return ppppplVar67;
      }
      iVar2 = 4;
      if (ppplVar35 != (long ***)0x0) {
        iVar2 = iVar44 << 1;
      }
      if (iVar18 <= iVar2) {
        iVar18 = iVar2;
      }
      pplVar37 = ppppplVar22[4][0x18][0x20];
      ppppplVar24[-0x1a] = ppppplVar24[-0x18];
      ppppplVar24[-0x19] = pppplVar55;
      ppppplVar24[-0x18] = (long ****)0x0;
      ppppplVar24[-0x17] = pppplVar23;
      if (iVar18 < *(int *)(ppppplVar67 + 3)) {
        func_0x03280a2c(PTR_DAT_077517e8);
        uVar20 = func_0x03280ca0();
        uVar21 = func_0x03280a2c(PTR_DAT_0774fae0);
        func_0x056ef504(uVar20,uVar21,0);
        func_0x03280b7c(uVar20,pplVar37);
      }
      else {
        ppppplVar26 = ppppplVar67 + 2;
        if (*ppppplVar26 != (long ****)0x0) {
          if (*(int *)(*ppppplVar26 + 3) == iVar18) {
            return ppppplVar67;
          }
          plVar34 = (long *)pplVar37[4][0x18];
          if (iVar18 < 1) {
            lVar45 = *plVar34;
            lVar41 = *(long *)(lVar45 + 0x38);
            if (lVar41 == 0) {
              func_0x03256878(lVar45);
              lVar41 = *(long *)(lVar45 + 0x38);
            }
            lVar41 = *(long *)(lVar41 + 0x10);
            if ((*(byte *)(lVar41 + 0x135) & 1) == 0) {
              lVar41 = func_0x0325681c();
            }
            if (*(int *)(lVar41 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            lVar41 = *(long *)(*(long *)(lVar45 + 0x38) + 0x10);
            if ((*(byte *)(lVar41 + 0x135) & 1) == 0) {
              lVar41 = func_0x0325681c();
            }
            *ppppplVar26 = (long ****)**(undefined8 **)(lVar41 + 0xb8);
          }
          else {
            lVar41 = plVar34[3];
            if ((*(byte *)(lVar41 + 0x135) & 1) == 0) {
              lVar41 = func_0x0325681c();
            }
            pppplVar23 = (long ****)func_0x03280afc(lVar41,iVar18);
            if (0 < *(int *)(ppppplVar67 + 3)) {
              func_0x057b9f30(*ppppplVar26,0,pppplVar23,0,*(int *)(ppppplVar67 + 3),0);
            }
            *ppppplVar26 = pppplVar23;
          }
          goto SUB_032809c4;
        }
      }
      lVar41 = func_0x03280cac();
      return (long *****)(ulong)*(uint *)(lVar41 + 0x18);
    }
    lVar29 = func_0x03d5b8d8(ppppplVar28,*(undefined8 *)(*(long *)(lVar45 + 0x38) + 0x38));
    if (lVar29 == 0) {
      auVar73 = func_0x03280cac();
      lVar45 = auVar73._8_8_;
      ppppplVar28 = auVar73._0_8_;
      ppppplVar24[-0x18] = (long ****)0x3ce3e28;
      ppppplVar24[-0x17] = (long ****)ppppplVar42;
      *(undefined1 (*) [16])(ppppplVar24 + -0x16) = auVar72;
      lVar41 = *(long *)(lVar45 + 0x38);
      if (lVar41 == 0) {
        func_0x03256878(lVar45);
        lVar41 = *(long *)(lVar45 + 0x38);
      }
      if (ppppplVar28 != (long *****)0x0) {
        pppplVar59 = *(long *****)(lVar41 + 0x20);
        if ((*(byte *)((long)pppplVar59 + 0x135) & 1) == 0) {
          pppplVar59 = (long ****)func_0x0325681c();
        }
        pppplVar62 = *ppppplVar28;
        if (pppplVar62 == pppplVar59) {
          return ppppplVar28;
        }
        pppplVar59 = *(long *****)(*(long *)(lVar45 + 0x38) + 0x28);
        if ((*(byte *)((long)pppplVar59 + 0x135) & 1) == 0) {
          pppplVar59 = (long ****)func_0x0325681c();
          pppplVar62 = *ppppplVar28;
        }
        if (pppplVar62 == pppplVar59) {
                    /* WARNING: Could not recover jumptable at 0x03ce3f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppppplVar67 = (long *****)
                        (*(code *)**(undefined8 **)(*(long *)(lVar45 + 0x38) + 0x30))(ppppplVar28);
          return ppppplVar67;
        }
        lVar29 = (*(code *)**(undefined8 **)(*(long *)(lVar45 + 0x38) + 0x38))(ppppplVar28);
        if (lVar29 == 0) {
          auVar72 = func_0x03280cac();
          plVar31 = auVar72._8_8_;
          plVar34 = auVar72._0_8_;
          ppppplVar24[-0x1c] = (long ****)0x3ce3f54;
          ppppplVar24[-0x1b] = (long ****)ppppplVar42;
          *(undefined1 (*) [16])(ppppplVar24 + -0x1a) = auVar73;
          if (ppppplVar22[7] == (long ****)0x0) {
            func_0x03256878(ppppplVar22);
          }
          if (plVar34 == (long *)0x0) {
            if (plVar31 == (long *)0x0) {
              return (long *****)0x1;
            }
            iVar18 = (int)plVar31[3];
          }
          else {
            if (plVar31 != (long *)0x0) {
              ppplVar35 = ppppplVar22[7][2];
              ppppplVar24[-0x1c] = ppppplVar24[-0x1c];
              ppppplVar24[-0x1b] = ppppplVar24[-0x1b];
              ppppplVar24[-0x1a] = ppppplVar24[-0x1a];
              ppppplVar24[-0x19] = ppppplVar24[-0x19];
              pplVar37 = ppplVar35[7];
              if (pplVar37 == (long **)0x0) {
                func_0x03256878(ppplVar35);
                pplVar37 = ppplVar35[7];
              }
              ppppplVar28 = (long *****)pplVar37[1];
              ppppplVar22 = (long *****)0x0;
              ppppplVar24[-0x20] = ppppplVar24[-0x1c];
              ppppplVar24[-0x1f] = pppplVar55;
              ppppplVar24[-0x1e] = (long ****)ppppplVar27;
              ppppplVar24[-0x1d] = (long ****)ppppplVar63;
              ppppplVar24[-0x1c] = (long ****)ppppplVar26;
              ppppplVar24[-0x1b] = ppppplVar24[-0x1b];
              ppppplVar24[-0x1a] = ppppplVar24[-0x1a];
              ppppplVar24[-0x19] = ppppplVar24[-0x19];
              ppppplVar42 = ppppplVar28;
              if (ppppplVar28[7] == (long ****)0x0) {
                func_0x03280a18(PTR_DAT_0774e8c8);
                func_0x03280a18(PTR_DAT_0774e8e0);
                if (ppppplVar28[7] == (long ****)0x0) {
                  func_0x03256878(ppppplVar28);
                }
              }
              plVar30 = (long *)func_0x039574b0(ppppplVar28[7][1]);
              puVar33 = PTR_DAT_07779d10;
              pppplVar59 = pppplVar55;
              if ((plVar34 == (long *)0x0) || (puVar33 = PTR_DAT_07779d18, plVar31 == (long *)0x0))
              {
LAB_03d54658:
                uVar20 = func_0x03280a2c(puVar33);
                uVar20 = func_0x05ac7464(uVar20,0);
                func_0x03280b7c(uVar20,ppppplVar28);
                goto LAB_03d5466c;
              }
              ppplVar35 = ppppplVar28[7][4];
              if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
                ppplVar35 = (long ***)func_0x0325681c(ppplVar35);
              }
              lVar41 = *plVar34;
              uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
              if (uVar50 != 0) {
                piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
                do {
                  if (*(long ****)(piVar54 + -2) == ppplVar35) {
                    puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
                    goto LAB_03d541f8;
                  }
                  uVar50 = uVar50 - 1;
                  piVar54 = piVar54 + 4;
                } while (uVar50 != 0);
              }
              ppppplVar22 = (long *****)0x0;
              puVar19 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d541f8:
              plVar34 = (long *)(*(code *)*puVar19)(plVar34,puVar19[1]);
              ppplVar35 = ppppplVar28[7][4];
              if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
                ppplVar35 = (long ***)func_0x0325681c(ppplVar35);
              }
              lVar41 = *plVar31;
              uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
              if (uVar50 != 0) {
                piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
                do {
                  if (*(long ****)(piVar54 + -2) == ppplVar35) {
                    puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
                    goto LAB_03d5426c;
                  }
                  uVar50 = uVar50 - 1;
                  piVar54 = piVar54 + 4;
                } while (uVar50 != 0);
              }
              ppppplVar22 = (long *****)0x0;
              puVar19 = (undefined8 *)func_0x03256b10(plVar31);
LAB_03d5426c:
              plVar31 = (long *)(*(code *)*puVar19)(plVar31,puVar19[1]);
              pppplVar59 = (long ****)PTR_DAT_0774e8e0;
              auVar5._8_8_ = plVar31;
              auVar5._0_8_ = plVar34;
              auVar73._8_8_ = plVar31;
              auVar73._0_8_ = plVar34;
              auVar72._8_8_ = plVar31;
              auVar72._0_8_ = plVar34;
              if (plVar34 == (long *)0x0) goto LAB_03d54674;
              do {
                lVar41 = *plVar34;
                uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
                if (uVar50 != 0) {
                  piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
                  do {
                    if ((long ***)*(long *)(piVar54 + -2) == *pppplVar59) {
                      puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
                      goto LAB_03d542d4;
                    }
                    uVar50 = uVar50 - 1;
                    piVar54 = piVar54 + 4;
                  } while (uVar50 != 0);
                }
                ppppplVar22 = (long *****)0x0;
                puVar19 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d542d4:
                uVar50 = (*(code *)*puVar19)(plVar34,puVar19[1]);
                if ((uVar50 & 1) == 0) {
                  if (plVar31 == (long *)0x0) goto LAB_03d54680;
                  lVar41 = *plVar31;
                  uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
                  if (uVar50 == 0) goto LAB_03d544f0;
                  piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
                  goto LAB_03d544d8;
                }
                if (plVar31 == (long *)0x0) {
                  func_0x03280cac();
LAB_03d54640:
                  func_0x03280cac();
                  puVar33 = PTR_DAT_07779d10;
                  goto LAB_03d54658;
                }
                lVar41 = *plVar31;
                uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
                if (uVar50 != 0) {
                  piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
                  do {
                    if ((long ***)*(long *)(piVar54 + -2) == *pppplVar59) {
                      puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
                      goto LAB_03d54334;
                    }
                    uVar50 = uVar50 - 1;
                    piVar54 = piVar54 + 4;
                  } while (uVar50 != 0);
                }
                ppppplVar22 = (long *****)0x0;
                puVar19 = (undefined8 *)func_0x03256b10(plVar31);
LAB_03d54334:
                uVar50 = (*(code *)*puVar19)(plVar31,puVar19[1]);
                ppppplVar26 = ppppplVar27;
                if ((uVar50 & 1) == 0) break;
                ppplVar35 = ppppplVar28[7][6];
                if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
                  ppplVar35 = (long ***)func_0x0325681c(ppplVar35);
                }
                lVar41 = *plVar34;
                uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
                if (uVar50 != 0) {
                  piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
                  do {
                    if (*(long ****)(piVar54 + -2) == ppplVar35) {
                      puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
                      goto LAB_03d543a8;
                    }
                    uVar50 = uVar50 - 1;
                    piVar54 = piVar54 + 4;
                  } while (uVar50 != 0);
                }
                ppppplVar22 = (long *****)0x0;
                puVar19 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d543a8:
                uVar20 = (*(code *)*puVar19)(plVar34,puVar19[1]);
                ppplVar35 = ppppplVar28[7][6];
                if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
                  ppplVar35 = (long ***)func_0x0325681c(ppplVar35);
                }
                lVar41 = *plVar31;
                uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
                if (uVar50 != 0) {
                  piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
                  do {
                    if (*(long ****)(piVar54 + -2) == ppplVar35) {
                      puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
                      goto LAB_03d5441c;
                    }
                    uVar50 = uVar50 - 1;
                    piVar54 = piVar54 + 4;
                  } while (uVar50 != 0);
                }
                ppppplVar22 = (long *****)0x0;
                puVar19 = (undefined8 *)func_0x03256b10(plVar31);
LAB_03d5441c:
                ppppplVar26 = (long *****)(*(code *)*puVar19)(plVar31,puVar19[1]);
                if (plVar30 == (long *)0x0) goto LAB_03d54640;
                ppplVar35 = *ppppplVar28[7];
                if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
                  ppplVar35 = (long ***)func_0x0325681c(ppplVar35);
                }
                lVar41 = *plVar30;
                uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
                if (uVar50 != 0) {
                  piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
                  do {
                    if (*(long ****)(piVar54 + -2) == ppplVar35) {
                      puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
                      goto LAB_03d54494;
                    }
                    uVar50 = uVar50 - 1;
                    piVar54 = piVar54 + 4;
                  } while (uVar50 != 0);
                }
                puVar19 = (undefined8 *)func_0x03256b10(plVar30,ppplVar35,0);
LAB_03d54494:
                ppppplVar42 = (long *****)puVar19[1];
                ppppplVar22 = ppppplVar26;
                uVar50 = (*(code *)*puVar19)(plVar30,uVar20);
                ppppplVar27 = ppppplVar26;
              } while ((uVar50 & 1) != 0);
              iVar18 = 0xc;
              ppppplVar27 = ppppplVar26;
joined_r0x03d5453c:
              plVar30 = (long *)0x0;
joined_r0x03d5453c:
              if (plVar31 != (long *)0x0) {
                plVar34 = auVar73._8_8_;
                lVar41 = *plVar34;
                uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
                if (uVar50 != 0) {
                  piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar54 + -2) == *(long *)PTR_DAT_0774e8c8) {
                      puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
                      goto LAB_03d54594;
                    }
                    uVar50 = uVar50 - 1;
                    piVar54 = piVar54 + 4;
                  } while (uVar50 != 0);
                }
                ppppplVar22 = (long *****)0x0;
                puVar19 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d54594:
                (*(code *)*puVar19)(plVar34,puVar19[1]);
              }
              pppplVar55 = auVar73._0_8_;
              if (plVar30 != (long *)0x0) goto LAB_03d54678;
              ppppplVar26 = (long *****)0x0;
              ppppplVar28 = (long *****)0x0;
              if (iVar18 == 0) goto LAB_03d545b0;
              do {
                auVar72._8_8_ = ppppplVar28;
                auVar72._0_8_ = pppplVar55;
                if (pppplVar55 != (long ****)0x0) {
                  ppplVar35 = *pppplVar55;
                  uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
                  if (uVar50 != 0) {
                    pplVar37 = ppplVar35[0x16] + 1;
                    do {
                      if (pplVar37[-1] == *(long **)PTR_DAT_0774e8c8) {
                        ppplVar35 = ppplVar35 + (long)*(int *)pplVar37 * 2 + 0x27;
                        goto LAB_03d54610;
                      }
                      uVar50 = uVar50 - 1;
                      pplVar37 = pplVar37 + 2;
                    } while (uVar50 != 0);
                  }
                  ppppplVar22 = (long *****)0x0;
                  ppplVar35 = (long ***)func_0x03256b10(pppplVar55);
LAB_03d54610:
                  (*(code *)*ppplVar35)(pppplVar55,ppplVar35[1]);
                }
                if (ppppplVar28 == (long *****)0x0) {
                  return (long *****)(ulong)(iVar18 != 0xc);
                }
LAB_03d5466c:
                func_0x03280ca4(ppppplVar28);
                pppplVar55 = pppplVar59;
                auVar73 = auVar72;
LAB_03d54674:
                func_0x03280cac();
                pppplVar59 = pppplVar55;
LAB_03d54678:
                func_0x03280ca4(plVar30);
                auVar5 = auVar73;
LAB_03d54680:
                plVar31 = auVar5._8_8_;
                pppplVar55 = auVar5._0_8_;
                auVar72 = func_0x03280cac();
                pppplVar62 = auVar72._0_8_;
                if (auVar72._8_4_ == 1) goto code_r0x03d546c4;
                plVar30 = (long *)0x0;
                if (plVar31 != (long *)0x0) {
                  lVar41 = *plVar31;
                  uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
                  if (uVar50 != 0) {
                    piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar54 + -2) == *(long *)PTR_DAT_0774e8c8) {
                        puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
                        goto LAB_03d54740;
                      }
                      uVar50 = uVar50 - 1;
                      piVar54 = piVar54 + 4;
                    } while (uVar50 != 0);
                  }
                  ppppplVar22 = (long *****)0x0;
                  puVar19 = (undefined8 *)func_0x03256b10(plVar31);
LAB_03d54740:
                  (*(code *)*puVar19)(plVar31,puVar19[1]);
                }
                if (auVar72._8_4_ != 1) {
                  if (pppplVar55 == (long ****)0x0) goto LAB_03d547f4;
                  ppplVar35 = *pppplVar55;
                  uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
                  if (uVar50 == 0) goto LAB_03d547cc;
                  pplVar37 = ppplVar35[0x16] + 1;
                  goto LAB_03d547b4;
                }
                puVar19 = (undefined8 *)func_0x072ce910(pppplVar62);
                ppppplVar26 = (long *****)*puVar19;
                func_0x072ce920();
LAB_03d545b0:
                iVar18 = 0;
                ppppplVar28 = ppppplVar26;
              } while( true );
            }
            iVar18 = (int)plVar34[3];
          }
          return (long *****)(ulong)(iVar18 == 0);
        }
        lVar41 = *(long *)(lVar45 + 0x38);
        if (*(long *)(lVar29 + 0x18) != 0) {
          if ((*(byte *)(*(long *)(lVar41 + 0x20) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          ppppplVar67 = (long *****)func_0x03280ca0();
          (*(code *)**(undefined8 **)(*(long *)(lVar45 + 0x38) + 0x48))(ppppplVar67,lVar29);
          return ppppplVar67;
        }
      }
      lVar41 = *(long *)(lVar41 + 0x18);
      if ((*(byte *)(lVar41 + 0x135) & 1) == 0) {
        lVar41 = func_0x0325681c();
      }
      if (*(int *)(lVar41 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar41 = *(long *)(*(long *)(lVar45 + 0x38) + 0x18);
      if ((*(byte *)(lVar41 + 0x135) & 1) == 0) {
        lVar41 = func_0x0325681c();
      }
      return (long *****)**(long **)(lVar41 + 0xb8);
    }
    lVar41 = *(long *)(lVar45 + 0x38);
    if (*(long *)(lVar29 + 0x18) != 0) {
      if ((*(byte *)(*(long *)(lVar41 + 0x20) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      ppppplVar67 = (long *****)func_0x03280ca0();
      func_0x04720438(ppppplVar67,lVar29,*(undefined8 *)(*(long *)(lVar45 + 0x38) + 0x48));
      return ppppplVar67;
    }
  }
  lVar41 = *(long *)(lVar41 + 0x18);
  if ((*(byte *)(lVar41 + 0x135) & 1) == 0) {
    lVar41 = func_0x0325681c();
  }
  if (*(int *)(lVar41 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar41 = *(long *)(*(long *)(lVar45 + 0x38) + 0x18);
  if ((*(byte *)(lVar41 + 0x135) & 1) == 0) {
    lVar41 = func_0x0325681c();
  }
  return (long *****)**(long **)(lVar41 + 0xb8);
  while( true ) {
    uVar50 = uVar50 - 1;
    piVar54 = piVar54 + 4;
    if (uVar50 == 0) break;
LAB_03d544d8:
    if ((long ***)*(long *)(piVar54 + -2) == *pppplVar59) {
      puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
      goto LAB_03d5451c;
    }
  }
LAB_03d544f0:
  ppppplVar22 = (long *****)0x0;
  puVar19 = (undefined8 *)func_0x03256b10(plVar31);
LAB_03d5451c:
  uVar50 = (*(code *)*puVar19)(plVar31,puVar19[1]);
  iVar18 = 0xc;
  if ((uVar50 & 1) == 0) {
    iVar18 = 0xe;
  }
  goto joined_r0x03d5453c;
code_r0x03d546c4:
  plVar30 = (long *)func_0x072ce910(pppplVar62);
  plVar30 = (long *)*plVar30;
  func_0x072ce920();
  iVar18 = 0;
  auVar73 = auVar5;
  goto joined_r0x03d5453c;
  while( true ) {
    uVar50 = uVar50 - 1;
    pplVar37 = pplVar37 + 2;
    if (uVar50 == 0) break;
LAB_03d547b4:
    if (pplVar37[-1] == *(long **)PTR_DAT_0774e8c8) {
      ppplVar35 = ppplVar35 + (long)*(int *)pplVar37 * 2 + 0x27;
      goto LAB_03d547e8;
    }
  }
LAB_03d547cc:
  ppppplVar22 = (long *****)0x0;
  ppplVar35 = (long ***)func_0x03256b10(pppplVar55);
LAB_03d547e8:
  (*(code *)*ppplVar35)(pppplVar55,ppplVar35[1]);
LAB_03d547f4:
  func_0x03365958(pppplVar62);
  func_0x03280ca4(0);
  auVar74 = func_0x02f09514();
  plVar31 = auVar74._8_8_;
  plVar34 = auVar74._0_8_;
  ppppplVar24[-0x2c] = (long ****)(ppppplVar40 + -0xe);
  ppppplVar24[-0x2b] = (long ****)0x3d5480c;
  ppppplVar24[-0x2a] = (long ****)ppppplVar67;
  ppppplVar24[-0x29] = pppplVar23;
  ppppplVar24[-0x28] = pppplVar57;
  ppppplVar24[-0x27] = pppplVar59;
  ppppplVar24[-0x26] = (long ****)ppppplVar27;
  ppppplVar24[-0x25] = auVar72._8_8_;
  ppppplVar24[-0x24] = (long ****)0x0;
  ppppplVar24[-0x23] = pppplVar62;
  ppppplVar24[-0x22] = (long ****)0x0;
  ppppplVar24[-0x21] = pppplVar55;
  pppplVar55 = (long ****)tpidr_el0;
  ppppplVar24[-0x2d] = (long ****)pppplVar55[5];
  pppplVar59 = ppppplVar42[7];
  ppppplVar40 = ppppplVar22;
  ppppplVar26 = ppppplVar42;
  if (pppplVar59 == (long ****)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    pppplVar59 = ppppplVar42[7];
    if (pppplVar59 == (long ****)0x0) {
      func_0x03256878(ppppplVar42);
      pppplVar59 = ppppplVar42[7];
    }
  }
  uVar50 = (ulong)*(uint *)((long)pppplVar59[8] + 0xfc) + 0xf & 0x1fffffff0;
  pppplVar62 = (long ****)((long)ppppplVar24 + (-0x180 - uVar50));
  ppppplVar27 = (long *****)((long)pppplVar62 - uVar50);
  if (ppppplVar22 == (long *****)0x0) {
    ppppplVar22 = (long *****)(*(code *)*pppplVar59[1])();
  }
  puVar33 = PTR_DAT_07779d10;
  pppplVar59 = pppplVar57;
  if ((plVar34 == (long *)0x0) || (puVar33 = PTR_DAT_07779d18, plVar31 == (long *)0x0)) {
LAB_03d54dd4:
    uVar20 = func_0x03280a2c(puVar33);
    uVar20 = func_0x05ac7464(uVar20,0);
    func_0x03280b7c(uVar20,ppppplVar42);
    goto LAB_03d54de8;
  }
  ppplVar35 = ppppplVar42[7][4];
  if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
    ppplVar35 = (long ***)func_0x0325681c(ppplVar35);
  }
  lVar41 = *plVar34;
  uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
  if (uVar50 != 0) {
    piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
    do {
      if (*(long ****)(piVar54 + -2) == ppplVar35) {
        puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
        goto LAB_03d54924;
      }
      uVar50 = uVar50 - 1;
      piVar54 = piVar54 + 4;
    } while (uVar50 != 0);
  }
  ppppplVar40 = (long *****)0x0;
  puVar19 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d54924:
  plVar34 = (long *)(*(code *)*puVar19)(plVar34,puVar19[1]);
  ppplVar35 = ppppplVar42[7][4];
  if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
    ppplVar35 = (long ***)func_0x0325681c(ppplVar35);
  }
  lVar41 = *plVar31;
  uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
  if (uVar50 != 0) {
    piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
    do {
      if (*(long ****)(piVar54 + -2) == ppplVar35) {
        puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
        goto LAB_03d54998;
      }
      uVar50 = uVar50 - 1;
      piVar54 = piVar54 + 4;
    } while (uVar50 != 0);
  }
  ppppplVar40 = (long *****)0x0;
  puVar19 = (undefined8 *)func_0x03256b10(plVar31);
LAB_03d54998:
  ppppplVar63 = (long *****)(*(code *)*puVar19)(plVar31,puVar19[1]);
  pppplVar59 = (long ****)PTR_DAT_0774e8e0;
  auVar7._8_8_ = ppppplVar63;
  auVar7._0_8_ = plVar34;
  auVar6._8_8_ = ppppplVar63;
  auVar6._0_8_ = plVar34;
  auVar74._8_8_ = ppppplVar63;
  auVar74._0_8_ = plVar34;
  if (plVar34 == (long *)0x0) goto LAB_03d54df0;
  do {
    lVar41 = *plVar34;
    uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
      do {
        if ((long ***)*(long *)(piVar54 + -2) == *pppplVar59) {
          puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
          goto LAB_03d54a00;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    ppppplVar40 = (long *****)0x0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d54a00:
    uVar50 = (*(code *)*puVar19)(plVar34,puVar19[1]);
    if ((uVar50 & 1) == 0) {
      if (ppppplVar63 == (long *****)0x0) goto LAB_03d54dfc;
      pppplVar57 = *ppppplVar63;
      uVar50 = (ulong)*(ushort *)((long)pppplVar57 + 0x12e);
      if (uVar50 == 0) goto LAB_03d54c60;
      ppplVar35 = pppplVar57[0x16] + 1;
      goto LAB_03d54c48;
    }
    if (ppppplVar63 == (long *****)0x0) {
      func_0x03280cac();
LAB_03d54dbc:
      func_0x03280cac();
      puVar33 = PTR_DAT_07779d10;
      goto LAB_03d54dd4;
    }
    pppplVar57 = *ppppplVar63;
    uVar50 = (ulong)*(ushort *)((long)pppplVar57 + 0x12e);
    if (uVar50 != 0) {
      ppplVar35 = pppplVar57[0x16] + 1;
      do {
        if ((long ***)ppplVar35[-1] == *pppplVar59) {
          pppplVar57 = pppplVar57 + (long)*(int *)ppplVar35 * 2 + 0x27;
          goto LAB_03d54a60;
        }
        uVar50 = uVar50 - 1;
        ppplVar35 = ppplVar35 + 2;
      } while (uVar50 != 0);
    }
    ppppplVar40 = (long *****)0x0;
    pppplVar57 = (long ****)func_0x03256b10(ppppplVar63);
LAB_03d54a60:
    uVar50 = (*(code *)*pppplVar57)(ppppplVar63,pppplVar57[1]);
    if ((uVar50 & 1) == 0) break;
    ppplVar35 = ppppplVar42[7][6];
    if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
      ppplVar35 = (long ***)func_0x0325681c(ppplVar35);
    }
    lVar41 = *plVar34;
    uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
      do {
        if (*(long ****)(piVar54 + -2) == ppplVar35) {
          lVar41 = lVar41 + (long)*piVar54 * 0x10 + 0x138;
          goto LAB_03d54ad4;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    lVar41 = func_0x03256b10(plVar34,ppplVar35,0);
LAB_03d54ad4:
    ppppplVar24[-0x30] = pppplVar62;
    lVar41 = *(long *)(lVar41 + 8);
    (**(code **)(lVar41 + 0x10))
              (*(undefined8 *)(lVar41 + 8),lVar41,plVar34,ppppplVar24 + -0x30,pppplVar62);
    ppplVar35 = ppppplVar42[7][6];
    if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
      ppplVar35 = (long ***)func_0x0325681c(ppplVar35);
    }
    pppplVar57 = *ppppplVar63;
    uVar50 = (ulong)*(ushort *)((long)pppplVar57 + 0x12e);
    if (uVar50 != 0) {
      ppplVar36 = pppplVar57[0x16] + 1;
      do {
        if ((long ***)ppplVar36[-1] == ppplVar35) {
          pppplVar57 = pppplVar57 + (long)*(int *)ppplVar36 * 2 + 0x27;
          goto LAB_03d54b54;
        }
        uVar50 = uVar50 - 1;
        ppplVar36 = ppplVar36 + 2;
      } while (uVar50 != 0);
    }
    pppplVar57 = (long ****)func_0x03256b10(ppppplVar63,ppplVar35,0);
LAB_03d54b54:
    ppppplVar24[-0x30] = (long ****)ppppplVar27;
    ppppplVar26 = ppppplVar24 + -0x30;
    ppppplVar40 = ppppplVar63;
    (*(code *)pppplVar57[1][2])(pppplVar57[1][1]);
    if (ppppplVar22 == (long *****)0x0) goto LAB_03d54dbc;
    pppplVar57 = ppppplVar42[7];
    ppplVar35 = *pppplVar57;
    if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
      ppplVar35 = (long ***)func_0x0325681c(ppplVar35);
      pppplVar57 = ppppplVar42[7];
    }
    pppplVar23 = pppplVar62;
    ppppplVar67 = ppppplVar27;
    if (-1 < *(int *)(pppplVar57[8] + 5)) {
      pppplVar23 = (long ****)*pppplVar62;
      ppppplVar67 = (long *****)*ppppplVar27;
    }
    pppplVar57 = *ppppplVar22;
    uVar50 = (ulong)*(ushort *)((long)pppplVar57 + 0x12e);
    if (uVar50 != 0) {
      ppplVar36 = pppplVar57[0x16] + 1;
      do {
        if ((long ***)ppplVar36[-1] == ppplVar35) {
          pppplVar57 = pppplVar57 + (long)*(int *)ppplVar36 * 2 + 0x27;
          goto LAB_03d54bf8;
        }
        uVar50 = uVar50 - 1;
        ppplVar36 = ppplVar36 + 2;
      } while (uVar50 != 0);
    }
    pppplVar57 = (long ****)func_0x03256b10(ppppplVar22,ppplVar35,0);
LAB_03d54bf8:
    ppppplVar24[-0x30] = pppplVar23;
    ppppplVar24[-0x2f] = (long ****)ppppplVar67;
    ppppplVar26 = ppppplVar24 + -0x30;
    ppppplVar40 = ppppplVar22;
    (*(code *)pppplVar57[1][2])(pppplVar57[1][1]);
  } while (*(char *)((long)ppppplVar24 + -0x16c) != '\0');
  iVar18 = 0xc;
  goto joined_r0x03d54c9c;
  while( true ) {
    uVar50 = uVar50 - 1;
    ppplVar35 = ppplVar35 + 2;
    if (uVar50 == 0) break;
LAB_03d54c48:
    if ((long ***)ppplVar35[-1] == *pppplVar59) {
      pppplVar57 = pppplVar57 + (long)*(int *)ppplVar35 * 2 + 0x27;
      goto LAB_03d54c7c;
    }
  }
LAB_03d54c60:
  ppppplVar40 = (long *****)0x0;
  pppplVar57 = (long ****)func_0x03256b10(ppppplVar63);
LAB_03d54c7c:
  uVar50 = (*(code *)*pppplVar57)(ppppplVar63,pppplVar57[1]);
  iVar18 = 0xc;
  if ((uVar50 & 1) == 0) {
    iVar18 = 0xe;
  }
joined_r0x03d54c9c:
  ppppplVar22 = (long *****)0x0;
joined_r0x03d54c9c:
  if (ppppplVar63 != (long *****)0x0) {
    plVar34 = auVar6._8_8_;
    lVar41 = *plVar34;
    uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
      do {
        if (*(long *)(piVar54 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
          goto LAB_03d54cf4;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    ppppplVar40 = (long *****)0x0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d54cf4:
    (*(code *)*puVar19)(plVar34,puVar19[1]);
  }
  pppplVar57 = auVar6._0_8_;
  if (ppppplVar22 != (long *****)0x0) goto LAB_03d54df4;
  ppppplVar63 = (long *****)0x0;
  ppppplVar42 = (long *****)0x0;
  if (iVar18 == 0) goto LAB_03d54d10;
  do {
    auVar74._8_8_ = ppppplVar42;
    auVar74._0_8_ = pppplVar57;
    if (pppplVar57 != (long ****)0x0) {
      ppplVar35 = *pppplVar57;
      uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
      if (uVar50 != 0) {
        pplVar37 = ppplVar35[0x16] + 1;
        do {
          if (pplVar37[-1] == *(long **)PTR_DAT_0774e8c8) {
            ppplVar35 = ppplVar35 + (long)*(int *)pplVar37 * 2 + 0x27;
            goto LAB_03d54d70;
          }
          uVar50 = uVar50 - 1;
          pplVar37 = pplVar37 + 2;
        } while (uVar50 != 0);
      }
      ppppplVar40 = (long *****)0x0;
      ppplVar35 = (long ***)func_0x03256b10(pppplVar57);
LAB_03d54d70:
      (*(code *)*ppplVar35)(pppplVar57,ppplVar35[1]);
    }
    if (ppppplVar42 == (long *****)0x0) {
      ppppplVar42 = (long *****)(ulong)(iVar18 != 0xc);
      auVar7 = auVar74;
      if ((long ****)pppplVar55[5] == ppppplVar24[-0x2d]) {
        return ppppplVar42;
      }
    }
    else {
LAB_03d54de8:
      func_0x03280ca4(ppppplVar42);
      pppplVar57 = pppplVar59;
      auVar6 = auVar74;
LAB_03d54df0:
      func_0x03280cac();
      pppplVar59 = pppplVar57;
LAB_03d54df4:
      func_0x03280ca4(ppppplVar22);
      auVar7 = auVar6;
LAB_03d54dfc:
      ppppplVar42 = (long *****)func_0x03280cac();
    }
    auVar14._8_8_ = pppplVar59;
    auVar14._0_8_ = pppplVar55;
    auVar13._8_8_ = pppplVar59;
    auVar13._0_8_ = pppplVar55;
    auVar12._8_8_ = pppplVar59;
    auVar12._0_8_ = pppplVar55;
    auVar8._8_8_ = pppplVar59;
    auVar8._0_8_ = pppplVar55;
    ppppplVar63 = auVar7._8_8_;
    pppplVar57 = auVar7._0_8_;
    auVar72 = func_0x072ce990(ppppplVar42);
    pppplVar62 = auVar72._0_8_;
    if (auVar72._8_4_ == 1) break;
    ppppplVar22 = (long *****)0x0;
    if (ppppplVar63 != (long *****)0x0) {
      pppplVar65 = *ppppplVar63;
      uVar50 = (ulong)*(ushort *)((long)pppplVar65 + 0x12e);
      if (uVar50 != 0) {
        ppplVar35 = pppplVar65[0x16] + 1;
        do {
          if (ppplVar35[-1] == *(long ***)PTR_DAT_0774e8c8) {
            pppplVar65 = pppplVar65 + (long)*(int *)ppplVar35 * 2 + 0x27;
            goto LAB_03d54ec0;
          }
          uVar50 = uVar50 - 1;
          ppplVar35 = ppplVar35 + 2;
        } while (uVar50 != 0);
      }
      ppppplVar40 = (long *****)0x0;
      pppplVar65 = (long ****)func_0x03256b10(ppppplVar63);
LAB_03d54ec0:
      (*(code *)*pppplVar65)(ppppplVar63,pppplVar65[1]);
    }
    if (auVar72._8_4_ != 1) {
      if (pppplVar57 == (long ****)0x0) goto LAB_03d54f74;
      ppplVar35 = *pppplVar57;
      uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
      if (uVar50 == 0) goto LAB_03d54f4c;
      pplVar37 = ppplVar35[0x16] + 1;
      goto LAB_03d54f34;
    }
    puVar19 = (undefined8 *)func_0x072ce910(pppplVar62);
    ppppplVar63 = (long *****)*puVar19;
    func_0x072ce920();
LAB_03d54d10:
    iVar18 = 0;
    ppppplVar42 = ppppplVar63;
  } while( true );
  plVar34 = (long *)func_0x072ce910(pppplVar62);
  ppppplVar22 = (long *****)*plVar34;
  func_0x072ce920();
  iVar18 = 0;
  auVar6 = auVar7;
  goto joined_r0x03d54c9c;
  while( true ) {
    uVar50 = uVar50 - 1;
    pplVar37 = pplVar37 + 2;
    if (uVar50 == 0) break;
LAB_03d54f34:
    if (pplVar37[-1] == *(long **)PTR_DAT_0774e8c8) {
      ppplVar35 = ppplVar35 + (long)*(int *)pplVar37 * 2 + 0x27;
      goto LAB_03d54f68;
    }
  }
LAB_03d54f4c:
  ppppplVar40 = (long *****)0x0;
  ppplVar35 = (long ***)func_0x03256b10(pppplVar57);
LAB_03d54f68:
  (*(code *)*ppplVar35)(pppplVar57,ppplVar35[1]);
LAB_03d54f74:
  func_0x03365958(pppplVar62);
  func_0x03280ca4(0);
  auVar75 = func_0x02f09514();
  plVar31 = auVar75._8_8_;
  plVar34 = auVar75._0_8_;
  ppppplVar27[-10] = (long ****)0x3d54f8c;
  ppppplVar27[-9] = pppplVar23;
  ppppplVar27[-8] = pppplVar59;
  ppppplVar27[-7] = pppplVar55;
  ppppplVar27[-6] = (long ****)ppppplVar27;
  ppppplVar27[-5] = auVar72._8_8_;
  ppppplVar27[-4] = (long ****)0x0;
  ppppplVar27[-3] = pppplVar62;
  ppppplVar27[-2] = (long ****)0x0;
  ppppplVar27[-1] = pppplVar57;
  ppppplVar42 = ppppplVar40;
  ppppplVar22 = ppppplVar26;
  if (ppppplVar26[7] == (long ****)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (ppppplVar26[7] == (long ****)0x0) {
      func_0x03256878(ppppplVar26);
    }
  }
  if (ppppplVar40 == (long *****)0x0) {
    ppppplVar40 = (long *****)func_0x03d6108c(ppppplVar26[7][1]);
  }
  puVar33 = PTR_DAT_07779d10;
  ppppplVar63 = ppppplVar27;
  pppplVar55 = pppplVar23;
  if ((plVar34 == (long *)0x0) ||
     (puVar33 = PTR_DAT_07779d18, auVar12 = auVar13, plVar31 == (long *)0x0)) {
LAB_03d554cc:
    uVar20 = func_0x03280a2c(puVar33);
    uVar20 = func_0x05ac7464(uVar20,0);
    func_0x03280b7c(uVar20,ppppplVar26);
    goto LAB_03d554e0;
  }
  ppplVar35 = ppppplVar26[7][4];
  if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
    ppplVar35 = (long ***)func_0x0325681c(ppplVar35);
  }
  lVar41 = *plVar34;
  uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
  if (uVar50 != 0) {
    piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
    do {
      if (*(long ****)(piVar54 + -2) == ppplVar35) {
        puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
        goto LAB_03d55058;
      }
      uVar50 = uVar50 - 1;
      piVar54 = piVar54 + 4;
    } while (uVar50 != 0);
  }
  ppppplVar42 = (long *****)0x0;
  puVar19 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d55058:
  plVar34 = (long *)(*(code *)*puVar19)(plVar34,puVar19[1]);
  ppplVar35 = ppppplVar26[7][4];
  if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
    ppplVar35 = (long ***)func_0x0325681c(ppplVar35);
  }
  lVar41 = *plVar31;
  uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
  if (uVar50 != 0) {
    piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
    do {
      if (*(long ****)(piVar54 + -2) == ppplVar35) {
        puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
        goto LAB_03d550cc;
      }
      uVar50 = uVar50 - 1;
      piVar54 = piVar54 + 4;
    } while (uVar50 != 0);
  }
  ppppplVar42 = (long *****)0x0;
  puVar19 = (undefined8 *)func_0x03256b10(plVar31);
LAB_03d550cc:
  plVar31 = (long *)(*(code *)*puVar19)(plVar31,puVar19[1]);
  pppplVar55 = (long ****)PTR_DAT_0774e8e0;
  auVar10._8_8_ = plVar31;
  auVar10._0_8_ = plVar34;
  auVar9._8_8_ = plVar31;
  auVar9._0_8_ = plVar34;
  auVar75._8_8_ = plVar31;
  auVar75._0_8_ = plVar34;
  if (plVar34 == (long *)0x0) goto LAB_03d554e8;
  do {
    lVar41 = *plVar34;
    uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
      do {
        if ((long ***)*(long *)(piVar54 + -2) == *pppplVar55) {
          puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
          ppppplVar28 = ppppplVar22;
          goto LAB_03d55134;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    ppppplVar42 = (long *****)0x0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar34);
    ppppplVar28 = ppppplVar22;
LAB_03d55134:
    uVar50 = (*(code *)*puVar19)(plVar34,puVar19[1]);
    if ((uVar50 & 1) == 0) {
      if (plVar31 == (long *)0x0) goto LAB_03d554f4;
      lVar41 = *plVar31;
      uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
      if (uVar50 == 0) goto LAB_03d55360;
      piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
      goto LAB_03d55348;
    }
    if (plVar31 == (long *)0x0) {
      func_0x03280cac();
LAB_03d554b4:
      func_0x03280cac();
      puVar33 = PTR_DAT_07779d10;
      ppppplVar22 = ppppplVar28;
      auVar12 = auVar8;
      goto LAB_03d554cc;
    }
    lVar41 = *plVar31;
    uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
      do {
        if ((long ***)*(long *)(piVar54 + -2) == *pppplVar55) {
          puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
          ppppplVar22 = ppppplVar28;
          goto LAB_03d55194;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    ppppplVar42 = (long *****)0x0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar31);
    ppppplVar22 = ppppplVar28;
LAB_03d55194:
    uVar50 = (*(code *)*puVar19)(plVar31,puVar19[1]);
    auVar72 = auVar8;
    if ((uVar50 & 1) == 0) break;
    ppplVar35 = ppppplVar26[7][6];
    ppppplVar28 = ppppplVar22;
    if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
      ppplVar35 = (long ***)func_0x0325681c(ppplVar35);
      ppppplVar28 = ppppplVar22;
    }
    lVar41 = *plVar34;
    uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
      do {
        if (*(long ****)(piVar54 + -2) == ppplVar35) {
          puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
          goto LAB_03d55208;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    ppppplVar42 = (long *****)0x0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d55208:
    auVar73 = (*(code *)*puVar19)(plVar34,puVar19[1]);
    ppppplVar63 = auVar73._8_8_;
    ppplVar35 = ppppplVar26[7][6];
    if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
      ppplVar35 = (long ***)func_0x0325681c(ppplVar35);
    }
    lVar41 = *plVar31;
    uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
      do {
        if (*(long ****)(piVar54 + -2) == ppplVar35) {
          puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
          goto LAB_03d55280;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    ppppplVar42 = (long *****)0x0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar31);
LAB_03d55280:
    auVar72 = (*(code *)*puVar19)(plVar31,puVar19[1]);
    ppppplVar22 = auVar72._0_8_;
    if (ppppplVar40 == (long *****)0x0) goto LAB_03d554b4;
    ppplVar35 = *ppppplVar26[7];
    if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
      ppplVar35 = (long ***)func_0x0325681c(ppplVar35);
    }
    pppplVar23 = *ppppplVar40;
    uVar50 = (ulong)*(ushort *)((long)pppplVar23 + 0x12e);
    if (uVar50 != 0) {
      ppplVar36 = pppplVar23[0x16] + 1;
      do {
        if ((long ***)ppplVar36[-1] == ppplVar35) {
          pppplVar23 = pppplVar23 + (long)*(int *)ppplVar36 * 2 + 0x27;
          goto LAB_03d552fc;
        }
        uVar50 = uVar50 - 1;
        ppplVar36 = ppplVar36 + 2;
      } while (uVar50 != 0);
    }
    pppplVar23 = (long ****)func_0x03256b10(ppppplVar40,ppplVar35,0);
LAB_03d552fc:
    ppppplVar42 = ppppplVar63;
    uVar50 = (*(code *)*pppplVar23)
                       (ppppplVar40,auVar73._0_8_,ppppplVar63,ppppplVar22,auVar72._8_8_,
                        pppplVar23[1]);
    auVar8 = auVar72;
  } while ((uVar50 & 1) != 0);
  iVar18 = 0xc;
  ppppplVar28 = ppppplVar22;
  auVar8 = auVar72;
  goto joined_r0x03d553ac;
  while( true ) {
    uVar50 = uVar50 - 1;
    piVar54 = piVar54 + 4;
    if (uVar50 == 0) break;
LAB_03d55348:
    if ((long ***)*(long *)(piVar54 + -2) == *pppplVar55) {
      puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
      goto LAB_03d5538c;
    }
  }
LAB_03d55360:
  ppppplVar42 = (long *****)0x0;
  puVar19 = (undefined8 *)func_0x03256b10(plVar31);
LAB_03d5538c:
  uVar50 = (*(code *)*puVar19)(plVar31,puVar19[1]);
  iVar18 = 0xc;
  if ((uVar50 & 1) == 0) {
    iVar18 = 0xe;
  }
joined_r0x03d553ac:
  ppppplVar40 = (long *****)0x0;
joined_r0x03d553ac:
  if (plVar31 != (long *)0x0) {
    plVar34 = auVar9._8_8_;
    lVar41 = *plVar34;
    uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
      do {
        if (*(long *)(piVar54 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
          goto LAB_03d55404;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    ppppplVar42 = (long *****)0x0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d55404:
    (*(code *)*puVar19)(plVar34,puVar19[1]);
  }
  pppplVar23 = auVar9._0_8_;
  if (ppppplVar40 != (long *****)0x0) goto LAB_03d554ec;
  ppppplVar56 = (long *****)0x0;
  ppppplVar22 = ppppplVar28;
  ppppplVar26 = (long *****)0x0;
  if (iVar18 == 0) goto LAB_03d55420;
  do {
    auVar75._8_8_ = ppppplVar26;
    auVar75._0_8_ = pppplVar23;
    if (pppplVar23 != (long ****)0x0) {
      ppplVar35 = *pppplVar23;
      uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
      if (uVar50 != 0) {
        pplVar37 = ppplVar35[0x16] + 1;
        do {
          if (pplVar37[-1] == *(long **)PTR_DAT_0774e8c8) {
            ppplVar35 = ppplVar35 + (long)*(int *)pplVar37 * 2 + 0x27;
            goto LAB_03d55480;
          }
          uVar50 = uVar50 - 1;
          pplVar37 = pplVar37 + 2;
        } while (uVar50 != 0);
      }
      ppppplVar42 = (long *****)0x0;
      ppplVar35 = (long ***)func_0x03256b10(pppplVar23);
LAB_03d55480:
      (*(code *)*ppplVar35)(pppplVar23,ppplVar35[1]);
    }
    auVar12 = auVar8;
    if (ppppplVar26 == (long *****)0x0) {
      return (long *****)(ulong)(iVar18 != 0xc);
    }
LAB_03d554e0:
    func_0x03280ca4(ppppplVar26);
    pppplVar23 = pppplVar55;
    auVar9 = auVar75;
    auVar14 = auVar12;
LAB_03d554e8:
    auVar8 = auVar14;
    func_0x03280cac();
    ppppplVar28 = ppppplVar22;
    pppplVar55 = pppplVar23;
LAB_03d554ec:
    func_0x03280ca4(ppppplVar40);
    auVar10 = auVar9;
LAB_03d554f4:
    plVar31 = auVar10._8_8_;
    pppplVar23 = auVar10._0_8_;
    auVar72 = func_0x03280cac();
    pppplVar59 = auVar72._8_8_;
    pppplVar57 = auVar72._0_8_;
    if (auVar72._8_4_ == 1) break;
    ppppplVar40 = (long *****)0x0;
    if (plVar31 != (long *)0x0) {
      lVar41 = *plVar31;
      uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
      if (uVar50 != 0) {
        piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
        do {
          if (*(long *)(piVar54 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
            goto LAB_03d555b4;
          }
          uVar50 = uVar50 - 1;
          piVar54 = piVar54 + 4;
        } while (uVar50 != 0);
      }
      ppppplVar42 = (long *****)0x0;
      puVar19 = (undefined8 *)func_0x03256b10(plVar31);
LAB_03d555b4:
      (*(code *)*puVar19)(plVar31,puVar19[1]);
    }
    if (auVar72._8_4_ != 1) {
      pppplVar62 = (long ****)0x0;
      if (pppplVar23 == (long ****)0x0) goto LAB_03d55668;
      ppplVar35 = *pppplVar23;
      uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
      if (uVar50 == 0) goto LAB_03d55640;
      pplVar37 = ppplVar35[0x16] + 1;
      goto LAB_03d55628;
    }
    puVar19 = (undefined8 *)func_0x072ce910(pppplVar57);
    ppppplVar56 = (long *****)*puVar19;
    func_0x072ce920();
LAB_03d55420:
    iVar18 = 0;
    ppppplVar22 = ppppplVar28;
    ppppplVar26 = ppppplVar56;
  } while( true );
  plVar34 = (long *)func_0x072ce910(pppplVar57);
  ppppplVar40 = (long *****)*plVar34;
  func_0x072ce920();
  iVar18 = 0;
  auVar9 = auVar10;
  goto joined_r0x03d553ac;
  while( true ) {
    uVar50 = uVar50 - 1;
    pplVar37 = pplVar37 + 2;
    if (uVar50 == 0) break;
LAB_03d55628:
    if (pplVar37[-1] == *(long **)PTR_DAT_0774e8c8) {
      ppplVar35 = ppplVar35 + (long)*(int *)pplVar37 * 2 + 0x27;
      goto LAB_03d5565c;
    }
  }
LAB_03d55640:
  ppppplVar42 = (long *****)0x0;
  ppplVar35 = (long ***)func_0x03256b10(pppplVar23);
LAB_03d5565c:
  (*(code *)*ppplVar35)(pppplVar23,ppplVar35[1]);
LAB_03d55668:
  func_0x03365958(pppplVar57);
  func_0x03280ca4(0);
  auVar72 = func_0x02f09514();
  pppplVar65 = auVar72._8_8_;
  plVar34 = auVar72._0_8_;
  ppppplVar27[-0x10] = (long ****)0x3d55680;
  ppppplVar27[-0xf] = pppplVar59;
  ppppplVar27[-0xe] = (long ****)0x0;
  ppppplVar27[-0xd] = pppplVar57;
  ppppplVar27[-0xc] = (long ****)0x0;
  ppppplVar27[-0xb] = pppplVar23;
  if (pppplVar65[7] == (long ***)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (pppplVar65[7] == (long ***)0x0) {
      func_0x03256878(pppplVar65);
    }
  }
  if (plVar34 == (long *)0x0) {
    uVar20 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar20 = func_0x05ac7464(uVar20,0);
  }
  else {
    pplVar37 = pppplVar65[7][1];
    if ((*(byte *)((long)pplVar37 + 0x135) & 1) == 0) {
      pplVar37 = (long **)func_0x0325681c(pplVar37);
    }
    pppplVar62 = (long ****)func_0x03280b90(plVar34,pplVar37);
    if (pppplVar62 == (long ****)0x0) {
      pplVar37 = *pppplVar65[7];
      if ((*(byte *)((long)pplVar37 + 0x135) & 1) == 0) {
        pplVar37 = (long **)func_0x0325681c(pplVar37);
      }
      lVar41 = *plVar34;
      uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
      if (uVar50 != 0) {
        piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
        do {
          if (*(long ***)(piVar54 + -2) == pplVar37) {
            puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
            goto LAB_03d55850;
          }
          uVar50 = uVar50 - 1;
          piVar54 = piVar54 + 4;
        } while (uVar50 != 0);
      }
      ppppplVar42 = (long *****)0x0;
      puVar19 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d55850:
      pppplVar62 = (long ****)(*(code *)*puVar19)(plVar34,puVar19[1]);
      puVar33 = PTR_DAT_0774e8e0;
      if (pppplVar62 == (long ****)0x0) goto LAB_03d55a6c;
      ppplVar35 = *pppplVar62;
      uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
      if (uVar50 != 0) {
        pplVar37 = ppplVar35[0x16] + 1;
        do {
          if (pplVar37[-1] == *(long **)PTR_DAT_0774e8e0) {
            ppplVar35 = ppplVar35 + (long)*(int *)pplVar37 * 2 + 0x27;
            goto LAB_03d558b8;
          }
          uVar50 = uVar50 - 1;
          pplVar37 = pplVar37 + 2;
        } while (uVar50 != 0);
      }
      ppppplVar42 = (long *****)0x0;
      ppplVar35 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d558b8:
      uVar50 = (*(code *)*ppplVar35)(pppplVar62,ppplVar35[1]);
      if ((uVar50 & 1) == 0) goto LAB_03d55a78;
      pplVar37 = pppplVar65[7][7];
      if ((*(byte *)((long)pplVar37 + 0x135) & 1) == 0) {
        pplVar37 = (long **)func_0x0325681c(pplVar37);
      }
      ppplVar35 = *pppplVar62;
      uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
      if (uVar50 != 0) {
        pplVar53 = ppplVar35[0x16] + 1;
        do {
          if ((long **)pplVar53[-1] == pplVar37) {
            ppplVar35 = ppplVar35 + (long)*(int *)pplVar53 * 2 + 0x27;
            goto LAB_03d5592c;
          }
          uVar50 = uVar50 - 1;
          pplVar53 = pplVar53 + 2;
        } while (uVar50 != 0);
      }
      ppppplVar42 = (long *****)0x0;
      ppplVar35 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d5592c:
      uVar17 = (*(code *)*ppplVar35)(pppplVar62,ppplVar35[1]);
      ppplVar35 = *pppplVar62;
      uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
      if (uVar50 != 0) {
        pplVar37 = ppplVar35[0x16] + 1;
        do {
          if (pplVar37[-1] == *(long **)puVar33) {
            ppplVar35 = ppplVar35 + (long)*(int *)pplVar37 * 2 + 0x27;
            goto LAB_03d55988;
          }
          uVar50 = uVar50 - 1;
          pplVar37 = pplVar37 + 2;
        } while (uVar50 != 0);
      }
      ppppplVar42 = (long *****)0x0;
      ppplVar35 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d55988:
      uVar50 = (*(code *)*ppplVar35)(pppplVar62,ppplVar35[1]);
      bVar16 = (uVar50 & 1) == 0;
      plVar34 = (long *)0x0;
      uVar43 = 8;
      if (bVar16) {
        uVar43 = 0xf;
      }
      pppplVar59 = (long ****)(ulong)uVar43;
      uVar43 = 0;
      if (bVar16) {
        uVar43 = uVar17;
      }
      if (pppplVar62 == (long ****)0x0) goto LAB_03d55a10;
      goto LAB_03d559b0;
    }
    pplVar37 = pppplVar65[7][2];
    if ((*(byte *)((long)pplVar37 + 0x135) & 1) == 0) {
      pplVar37 = (long **)func_0x0325681c(pplVar37);
    }
    ppplVar35 = *pppplVar62;
    uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
    if (uVar50 != 0) {
      pplVar53 = ppplVar35[0x16] + 1;
      do {
        if ((long **)pplVar53[-1] == pplVar37) {
          ppplVar35 = ppplVar35 + (long)*(int *)pplVar53 * 2 + 0x27;
          goto LAB_03d557b0;
        }
        uVar50 = uVar50 - 1;
        pplVar53 = pplVar53 + 2;
      } while (uVar50 != 0);
    }
    ppppplVar42 = (long *****)0x0;
    ppplVar35 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d557b0:
    iVar18 = (*(code *)*ppplVar35)(pppplVar62,ppplVar35[1]);
    if (iVar18 == 1) {
      pplVar37 = pppplVar65[7][1];
      if ((*(byte *)((long)pplVar37 + 0x135) & 1) == 0) {
        pplVar37 = (long **)func_0x0325681c(pplVar37);
      }
      ppplVar35 = *pppplVar62;
      uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
      if (uVar50 != 0) {
        pplVar53 = ppplVar35[0x16] + 1;
        do {
          if ((long **)pplVar53[-1] == pplVar37) {
            ppplVar35 = ppplVar35 + (long)*(int *)pplVar53 * 2 + 0x27;
            goto LAB_03d55828;
          }
          uVar50 = uVar50 - 1;
          pplVar53 = pplVar53 + 2;
        } while (uVar50 != 0);
      }
      ppplVar35 = (long ***)func_0x03256b10(pppplVar62,pplVar37,0);
LAB_03d55828:
                    /* WARNING: Could not recover jumptable at 0x03d55840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppppplVar67 = (long *****)(*(code *)*ppplVar35)(pppplVar62,0,ppplVar35[1]);
      return ppppplVar67;
    }
    if (iVar18 != 0) goto LAB_03d55a44;
    uVar20 = func_0x05ac75f4(0);
  }
  do {
    func_0x03280b7c(uVar20,pppplVar65);
LAB_03d55a6c:
    func_0x03280cac();
    do {
      func_0x03280ca4(plVar34);
LAB_03d55a78:
      uVar20 = func_0x05ac75f4(0);
      auVar77 = func_0x03280b7c(uVar20,pppplVar65);
      pppplVar23 = auVar77._0_8_;
      if (auVar77._8_4_ != 1) {
        if (pppplVar62 == (long ****)0x0) goto LAB_03d55b34;
        ppplVar35 = *pppplVar62;
        uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
        if (uVar50 == 0) goto LAB_03d55b0c;
        pplVar37 = ppplVar35[0x16] + 1;
        goto LAB_03d55af4;
      }
      puVar19 = (undefined8 *)func_0x072ce910(pppplVar23);
      plVar34 = (long *)*puVar19;
      func_0x072ce920();
      pppplVar59 = (long ****)0x0;
      uVar43 = 0;
      if (pppplVar62 != (long ****)0x0) {
LAB_03d559b0:
        ppplVar35 = *pppplVar62;
        uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
        if (uVar50 != 0) {
          pplVar37 = ppplVar35[0x16] + 1;
          do {
            if (pplVar37[-1] == *(long **)PTR_DAT_0774e8c8) {
              ppplVar35 = ppplVar35 + (long)*(int *)pplVar37 * 2 + 0x27;
              goto LAB_03d55a04;
            }
            uVar50 = uVar50 - 1;
            pplVar37 = pplVar37 + 2;
          } while (uVar50 != 0);
        }
        ppppplVar42 = (long *****)0x0;
        ppplVar35 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d55a04:
        (*(code *)*ppplVar35)(pppplVar62,ppplVar35[1]);
      }
LAB_03d55a10:
    } while (plVar34 != (long *)0x0);
    if (((uint)pppplVar59 | 8) != 8) {
      return (long *****)(ulong)uVar43;
    }
LAB_03d55a44:
    uVar20 = func_0x05ac751c(0);
  } while( true );
  while( true ) {
    uVar50 = uVar50 - 1;
    pplVar37 = pplVar37 + 2;
    if (uVar50 == 0) break;
LAB_03d55af4:
    if (pplVar37[-1] == *(long **)PTR_DAT_0774e8c8) {
      ppplVar35 = ppplVar35 + (long)*(int *)pplVar37 * 2 + 0x27;
      goto LAB_03d55b28;
    }
  }
LAB_03d55b0c:
  ppppplVar42 = (long *****)0x0;
  ppplVar35 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d55b28:
  (*(code *)*ppplVar35)(pppplVar62,ppplVar35[1]);
LAB_03d55b34:
  func_0x03365958(pppplVar23);
  func_0x03280ca4(0);
  auVar72 = func_0x02f09514();
  pppplVar57 = auVar72._8_8_;
  plVar34 = auVar72._0_8_;
  ppppplVar27[-0x16] = (long ****)0x3d55b4c;
  ppppplVar27[-0x15] = pppplVar59;
  ppppplVar27[-0x14] = pppplVar23;
  ppppplVar27[-0x13] = (long ****)0x0;
  ppppplVar27[-0x12] = pppplVar62;
  ppppplVar27[-0x11] = pppplVar65;
  if (pppplVar57[7] == (long ***)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (pppplVar57[7] == (long ***)0x0) {
      func_0x03256878(pppplVar57);
    }
  }
  if (plVar34 == (long *)0x0) {
    uVar20 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar20 = func_0x05ac7464(uVar20,0);
  }
  else {
    pplVar37 = pppplVar57[7][1];
    if ((*(byte *)((long)pplVar37 + 0x135) & 1) == 0) {
      pplVar37 = (long **)func_0x0325681c(pplVar37);
    }
    pppplVar62 = (long ****)func_0x03280b90(plVar34,pplVar37);
    if (pppplVar62 == (long ****)0x0) {
      pplVar37 = *pppplVar57[7];
      if ((*(byte *)((long)pplVar37 + 0x135) & 1) == 0) {
        pplVar37 = (long **)func_0x0325681c(pplVar37);
      }
      lVar41 = *plVar34;
      uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
      if (uVar50 != 0) {
        piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
        do {
          if (*(long ***)(piVar54 + -2) == pplVar37) {
            puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
            goto LAB_03d55d1c;
          }
          uVar50 = uVar50 - 1;
          piVar54 = piVar54 + 4;
        } while (uVar50 != 0);
      }
      ppppplVar42 = (long *****)0x0;
      puVar19 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d55d1c:
      pppplVar62 = (long ****)(*(code *)*puVar19)(plVar34,puVar19[1]);
      puVar33 = PTR_DAT_0774e8e0;
      if (pppplVar62 == (long ****)0x0) goto LAB_03d55f38;
      ppplVar35 = *pppplVar62;
      uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
      if (uVar50 != 0) {
        pplVar37 = ppplVar35[0x16] + 1;
        do {
          if (pplVar37[-1] == *(long **)PTR_DAT_0774e8e0) {
            ppplVar35 = ppplVar35 + (long)*(int *)pplVar37 * 2 + 0x27;
            goto LAB_03d55d84;
          }
          uVar50 = uVar50 - 1;
          pplVar37 = pplVar37 + 2;
        } while (uVar50 != 0);
      }
      ppppplVar42 = (long *****)0x0;
      ppplVar35 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d55d84:
      uVar50 = (*(code *)*ppplVar35)(pppplVar62,ppplVar35[1]);
      if ((uVar50 & 1) == 0) goto LAB_03d55f44;
      pplVar37 = pppplVar57[7][7];
      if ((*(byte *)((long)pplVar37 + 0x135) & 1) == 0) {
        pplVar37 = (long **)func_0x0325681c(pplVar37);
      }
      ppplVar35 = *pppplVar62;
      uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
      if (uVar50 != 0) {
        pplVar53 = ppplVar35[0x16] + 1;
        do {
          if ((long **)pplVar53[-1] == pplVar37) {
            ppplVar35 = ppplVar35 + (long)*(int *)pplVar53 * 2 + 0x27;
            goto LAB_03d55df8;
          }
          uVar50 = uVar50 - 1;
          pplVar53 = pplVar53 + 2;
        } while (uVar50 != 0);
      }
      ppppplVar42 = (long *****)0x0;
      ppplVar35 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d55df8:
      ppppplVar40 = (long *****)(*(code *)*ppplVar35)(pppplVar62,ppplVar35[1]);
      ppplVar35 = *pppplVar62;
      uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
      if (uVar50 != 0) {
        pplVar37 = ppplVar35[0x16] + 1;
        do {
          if (pplVar37[-1] == *(long **)puVar33) {
            ppplVar35 = ppplVar35 + (long)*(int *)pplVar37 * 2 + 0x27;
            goto LAB_03d55e54;
          }
          uVar50 = uVar50 - 1;
          pplVar37 = pplVar37 + 2;
        } while (uVar50 != 0);
      }
      ppppplVar42 = (long *****)0x0;
      ppplVar35 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d55e54:
      uVar50 = (*(code *)*ppplVar35)(pppplVar62,ppplVar35[1]);
      bVar16 = (uVar50 & 1) == 0;
      plVar34 = (long *)0x0;
      uVar17 = 8;
      if (bVar16) {
        uVar17 = 0xf;
      }
      pppplVar59 = (long ****)(ulong)uVar17;
      ppppplVar22 = (long *****)0x0;
      if (bVar16) {
        ppppplVar22 = ppppplVar40;
      }
      if (pppplVar62 == (long ****)0x0) goto LAB_03d55edc;
      goto LAB_03d55e7c;
    }
    pplVar37 = pppplVar57[7][2];
    if ((*(byte *)((long)pplVar37 + 0x135) & 1) == 0) {
      pplVar37 = (long **)func_0x0325681c(pplVar37);
    }
    ppplVar35 = *pppplVar62;
    uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
    if (uVar50 != 0) {
      pplVar53 = ppplVar35[0x16] + 1;
      do {
        if ((long **)pplVar53[-1] == pplVar37) {
          ppplVar35 = ppplVar35 + (long)*(int *)pplVar53 * 2 + 0x27;
          goto LAB_03d55c7c;
        }
        uVar50 = uVar50 - 1;
        pplVar53 = pplVar53 + 2;
      } while (uVar50 != 0);
    }
    ppppplVar42 = (long *****)0x0;
    ppplVar35 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d55c7c:
    iVar18 = (*(code *)*ppplVar35)(pppplVar62,ppplVar35[1]);
    if (iVar18 == 1) {
      pplVar37 = pppplVar57[7][1];
      if ((*(byte *)((long)pplVar37 + 0x135) & 1) == 0) {
        pplVar37 = (long **)func_0x0325681c(pplVar37);
      }
      ppplVar35 = *pppplVar62;
      uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
      if (uVar50 != 0) {
        pplVar53 = ppplVar35[0x16] + 1;
        do {
          if ((long **)pplVar53[-1] == pplVar37) {
            ppplVar35 = ppplVar35 + (long)*(int *)pplVar53 * 2 + 0x27;
            goto LAB_03d55cf4;
          }
          uVar50 = uVar50 - 1;
          pplVar53 = pplVar53 + 2;
        } while (uVar50 != 0);
      }
      ppplVar35 = (long ***)func_0x03256b10(pppplVar62,pplVar37,0);
LAB_03d55cf4:
                    /* WARNING: Could not recover jumptable at 0x03d55d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppppplVar67 = (long *****)(*(code *)*ppplVar35)(pppplVar62,0,ppplVar35[1]);
      return ppppplVar67;
    }
    if (iVar18 != 0) goto LAB_03d55f10;
    uVar20 = func_0x05ac75f4(0);
  }
  do {
    func_0x03280b7c(uVar20,pppplVar57);
LAB_03d55f38:
    func_0x03280cac();
    do {
      func_0x03280ca4(plVar34);
LAB_03d55f44:
      uVar20 = func_0x05ac75f4(0);
      auVar77 = func_0x03280b7c(uVar20,pppplVar57);
      pppplVar23 = auVar77._0_8_;
      if (auVar77._8_4_ != 1) {
        if (pppplVar62 == (long ****)0x0) goto LAB_03d56000;
        ppplVar35 = *pppplVar62;
        uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
        if (uVar50 == 0) goto LAB_03d55fd8;
        pplVar37 = ppplVar35[0x16] + 1;
        goto LAB_03d55fc0;
      }
      puVar19 = (undefined8 *)func_0x072ce910(pppplVar23);
      plVar34 = (long *)*puVar19;
      func_0x072ce920();
      pppplVar59 = (long ****)0x0;
      ppppplVar22 = (long *****)0x0;
      if (pppplVar62 != (long ****)0x0) {
LAB_03d55e7c:
        ppplVar35 = *pppplVar62;
        uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
        if (uVar50 != 0) {
          pplVar37 = ppplVar35[0x16] + 1;
          do {
            if (pplVar37[-1] == *(long **)PTR_DAT_0774e8c8) {
              ppplVar35 = ppplVar35 + (long)*(int *)pplVar37 * 2 + 0x27;
              goto LAB_03d55ed0;
            }
            uVar50 = uVar50 - 1;
            pplVar37 = pplVar37 + 2;
          } while (uVar50 != 0);
        }
        ppppplVar42 = (long *****)0x0;
        ppplVar35 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d55ed0:
        (*(code *)*ppplVar35)(pppplVar62,ppplVar35[1]);
      }
LAB_03d55edc:
    } while (plVar34 != (long *)0x0);
    if (((uint)pppplVar59 | 8) != 8) {
      return ppppplVar22;
    }
LAB_03d55f10:
    uVar20 = func_0x05ac751c(0);
  } while( true );
  while( true ) {
    uVar50 = uVar50 - 1;
    pplVar37 = pplVar37 + 2;
    if (uVar50 == 0) break;
LAB_03d55fc0:
    if (pplVar37[-1] == *(long **)PTR_DAT_0774e8c8) {
      ppplVar35 = ppplVar35 + (long)*(int *)pplVar37 * 2 + 0x27;
      goto LAB_03d55ff4;
    }
  }
LAB_03d55fd8:
  ppppplVar42 = (long *****)0x0;
  ppplVar35 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d55ff4:
  (*(code *)*ppplVar35)(pppplVar62,ppplVar35[1]);
LAB_03d56000:
  func_0x03365958(pppplVar23);
  func_0x03280ca4(0);
  auVar72 = func_0x02f09514();
  plVar34 = auVar72._0_8_;
  ppppplVar27[-0x22] = (long ****)(ppppplVar24 + -0x2c);
  ppppplVar27[-0x21] = (long ****)0x3d56018;
  ppppplVar27[-0x20] = pppplVar55;
  ppppplVar27[-0x1e] = auVar8._8_8_;
  ppppplVar27[-0x1d] = auVar8._0_8_;
  ppppplVar27[-0x1c] = (long ****)ppppplVar63;
  ppppplVar27[-0x1b] = pppplVar59;
  ppppplVar27[-0x1a] = pppplVar23;
  ppppplVar27[-0x19] = (long ****)0x0;
  ppppplVar27[-0x18] = pppplVar62;
  ppppplVar27[-0x17] = pppplVar57;
  pppplVar23 = (long ****)tpidr_el0;
  ppppplVar27[-0x23] = (long ****)pppplVar23[5];
  pppplVar55 = ppppplVar42[7];
  if (pppplVar55 == (long ****)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    pppplVar55 = ppppplVar42[7];
    if (pppplVar55 == (long ****)0x0) {
      func_0x03256878(ppppplVar42);
      pppplVar55 = ppppplVar42[7];
    }
  }
  pppplVar59 = (long ****)(ulong)*(uint *)((long)pppplVar55[5] + 0xfc);
  uVar50 = (long)pppplVar59 + 0xfU & 0x1fffffff0;
  pppplVar62 = (long ****)((long)ppppplVar27 + (-0x130 - uVar50));
  lVar41 = (long)pppplVar62 - uVar50;
  func_0x072ce9a0(lVar41,0,pppplVar59);
  ppppplVar40 = (long *****)(lVar41 - uVar50);
  pppplVar57 = pppplVar59;
  func_0x072ce9a0(ppppplVar40,0);
  if (plVar34 == (long *)0x0) {
    uVar20 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar20 = func_0x05ac7464(uVar20,0);
    goto LAB_03d56508;
  }
  ppplVar35 = pppplVar55[1];
  if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
    ppplVar35 = (long ***)func_0x0325681c(ppplVar35);
  }
  pppplVar55 = (long ****)func_0x03280b90(plVar34,ppplVar35);
  if (pppplVar55 == (long ****)0x0) {
    ppplVar35 = *ppppplVar42[7];
    if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
      ppplVar35 = (long ***)func_0x0325681c(ppplVar35);
    }
    lVar45 = *plVar34;
    uVar50 = (ulong)*(ushort *)(lVar45 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar45 + 0xb0) + 8);
      do {
        if (*(long ****)(piVar54 + -2) == ppplVar35) {
          puVar19 = (undefined8 *)(lVar45 + (long)*piVar54 * 0x10 + 0x138);
          goto LAB_03d5626c;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    pppplVar57 = (long ****)0x0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d5626c:
    pppplVar55 = (long ****)(*(code *)*puVar19)(plVar34,puVar19[1]);
    puVar33 = PTR_DAT_0774e8e0;
    if (pppplVar55 == (long ****)0x0) goto LAB_03d56510;
    ppplVar35 = *pppplVar55;
    uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
    if (uVar50 != 0) {
      pplVar37 = ppplVar35[0x16] + 1;
      do {
        if (pplVar37[-1] == *(long **)PTR_DAT_0774e8e0) {
          ppplVar35 = ppplVar35 + (long)*(int *)pplVar37 * 2 + 0x27;
          goto LAB_03d562d4;
        }
        uVar50 = uVar50 - 1;
        pplVar37 = pplVar37 + 2;
      } while (uVar50 != 0);
    }
    pppplVar57 = (long ****)0x0;
    ppplVar35 = (long ***)func_0x03256b10(pppplVar55);
LAB_03d562d4:
    uVar50 = (*(code *)*ppplVar35)(pppplVar55,ppplVar35[1]);
    if ((uVar50 & 1) == 0) goto LAB_03d5651c;
    ppplVar35 = ppppplVar42[7][7];
    if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
      ppplVar35 = (long ***)func_0x0325681c(ppplVar35);
    }
    ppplVar36 = *pppplVar55;
    uVar50 = (ulong)*(ushort *)((long)ppplVar36 + 0x12e);
    if (uVar50 != 0) {
      pplVar37 = ppplVar36[0x16] + 1;
      do {
        if ((long ***)pplVar37[-1] == ppplVar35) {
          ppplVar36 = ppplVar36 + (long)*(int *)pplVar37 * 2 + 0x27;
          goto LAB_03d56348;
        }
        uVar50 = uVar50 - 1;
        pplVar37 = pplVar37 + 2;
      } while (uVar50 != 0);
    }
    ppplVar36 = (long ***)func_0x03256b10(pppplVar55,ppplVar35,0);
LAB_03d56348:
    ppppplVar27[-0x26] = pppplVar62;
    pplVar37 = ppplVar36[1];
    ppppplVar28 = ppppplVar27 + -0x26;
    (*(code *)pplVar37[2])(pplVar37[1],pplVar37,pppplVar55,ppppplVar28,pppplVar62);
    pppplVar57 = pppplVar59;
    func_0x072ce970(lVar41,pppplVar62);
    ppplVar35 = *pppplVar55;
    uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
    if (uVar50 != 0) {
      pplVar37 = ppplVar35[0x16] + 1;
      do {
        if (pplVar37[-1] == *(long **)puVar33) {
          ppplVar35 = ppplVar35 + (long)*(int *)pplVar37 * 2 + 0x27;
          goto LAB_03d563c0;
        }
        uVar50 = uVar50 - 1;
        pplVar37 = pplVar37 + 2;
      } while (uVar50 != 0);
    }
    pppplVar57 = (long ****)0x0;
    ppplVar35 = (long ***)func_0x03256b10(pppplVar55);
LAB_03d563c0:
    ppppplVar22 = (long *****)(*(code *)*ppplVar35)(pppplVar55,ppplVar35[1]);
    if (((ulong)ppppplVar22 & 1) != 0) {
      lVar41 = 0;
      iVar44 = 8;
      iVar18 = 8;
      goto joined_r0x03d563d8;
    }
    func_0x072ce970(pppplVar62,lVar41,pppplVar59);
    pppplVar57 = pppplVar59;
    ppppplVar22 = (long *****)func_0x072ce970(ppppplVar40,pppplVar62);
    lVar41 = 0;
    iVar18 = 0xf;
    iVar44 = 0xf;
    if (pppplVar55 == (long ****)0x0) goto LAB_03d5646c;
    goto LAB_03d5640c;
  }
  ppplVar35 = ppppplVar42[7][2];
  if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
    ppplVar35 = (long ***)func_0x0325681c(ppplVar35);
  }
  ppplVar36 = *pppplVar55;
  uVar50 = (ulong)*(ushort *)((long)ppplVar36 + 0x12e);
  if (uVar50 != 0) {
    pplVar37 = ppplVar36[0x16] + 1;
    do {
      if ((long ***)pplVar37[-1] == ppplVar35) {
        ppplVar36 = ppplVar36 + (long)*(int *)pplVar37 * 2 + 0x27;
        goto LAB_03d561c0;
      }
      uVar50 = uVar50 - 1;
      pplVar37 = pplVar37 + 2;
    } while (uVar50 != 0);
  }
  pppplVar57 = (long ****)0x0;
  ppplVar36 = (long ***)func_0x03256b10(pppplVar55);
LAB_03d561c0:
  iVar18 = (*(code *)*ppplVar36)(pppplVar55,ppplVar36[1]);
  if (iVar18 != 1) {
    if (iVar18 != 0) goto LAB_03d56500;
    uVar20 = func_0x05ac75f4(0);
    goto LAB_03d56508;
  }
  ppplVar35 = ppppplVar42[7][1];
  if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
    ppplVar35 = (long ***)func_0x0325681c(ppplVar35);
  }
  *(undefined4 *)((long)ppppplVar27 + -0x11c) = 0;
  ppplVar36 = *pppplVar55;
  uVar50 = (ulong)*(ushort *)((long)ppplVar36 + 0x12e);
  if (uVar50 != 0) {
    pplVar37 = ppplVar36[0x16] + 1;
    do {
      if ((long ***)pplVar37[-1] == ppplVar35) {
        ppplVar36 = ppplVar36 + (long)*(int *)pplVar37 * 2 + 0x27;
        goto LAB_03d5623c;
      }
      uVar50 = uVar50 - 1;
      pplVar37 = pplVar37 + 2;
    } while (uVar50 != 0);
  }
  ppplVar36 = (long ***)func_0x03256b10(pppplVar55,ppplVar35,0);
LAB_03d5623c:
  ppppplVar27[-0x26] = (long ****)((long)ppppplVar27 + -0x11c);
  ppppplVar27[-0x25] = pppplVar62;
  pplVar37 = ppplVar36[1];
  ppppplVar28 = ppppplVar27 + -0x26;
  (*(code *)pplVar37[2])(pplVar37[1],pplVar37,pppplVar55,ppppplVar28,pppplVar62);
LAB_03d56498:
  pppplVar57 = pppplVar59;
  ppppplVar22 = (long *****)func_0x072ce970(auVar72._8_8_,pppplVar62);
LAB_03d564a8:
  if ((long ****)pppplVar23[5] == ppppplVar27[-0x23]) {
    return ppppplVar22;
  }
  do {
    auVar77 = func_0x072ce990();
    pppplVar65 = auVar77._0_8_;
    if (auVar77._8_4_ != 1) {
      if (pppplVar55 == (long ****)0x0) goto LAB_03d565d8;
      ppplVar35 = *pppplVar55;
      uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
      if (uVar50 == 0) goto LAB_03d565b0;
      pplVar37 = ppplVar35[0x16] + 1;
      break;
    }
    plVar34 = (long *)func_0x072ce910(pppplVar65);
    lVar41 = *plVar34;
    ppppplVar22 = (long *****)func_0x072ce920();
    iVar44 = 0;
    iVar18 = 0;
joined_r0x03d563d8:
    if (pppplVar55 != (long ****)0x0) {
LAB_03d5640c:
      iVar18 = iVar44;
      ppplVar35 = *pppplVar55;
      uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
      if (uVar50 != 0) {
        pplVar37 = ppplVar35[0x16] + 1;
        do {
          if (pplVar37[-1] == *(long **)PTR_DAT_0774e8c8) {
            ppplVar35 = ppplVar35 + (long)*(int *)pplVar37 * 2 + 0x27;
            goto LAB_03d56460;
          }
          uVar50 = uVar50 - 1;
          pplVar37 = pplVar37 + 2;
        } while (uVar50 != 0);
      }
      pppplVar57 = (long ****)0x0;
      ppplVar35 = (long ***)func_0x03256b10(pppplVar55);
LAB_03d56460:
      ppppplVar22 = (long *****)(*(code *)*ppplVar35)(pppplVar55,ppplVar35[1]);
    }
LAB_03d5646c:
    if (lVar41 == 0) {
      if (iVar18 == 0xf) {
        func_0x072ce970(pppplVar62,ppppplVar40,pppplVar59);
        goto LAB_03d56498;
      }
      if ((iVar18 != 8) && (iVar18 != 0)) goto LAB_03d564a8;
LAB_03d56500:
      uVar20 = func_0x05ac751c(0);
LAB_03d56508:
      func_0x03280b7c(uVar20,ppppplVar42);
LAB_03d56510:
      func_0x03280cac();
    }
    func_0x03280ca4(lVar41);
LAB_03d5651c:
    uVar20 = func_0x05ac75f4(0);
    func_0x03280b7c(uVar20,ppppplVar42);
  } while( true );
  while( true ) {
    uVar50 = uVar50 - 1;
    pplVar37 = pplVar37 + 2;
    if (uVar50 == 0) break;
    if (pplVar37[-1] == *(long **)PTR_DAT_0774e8c8) {
      ppplVar35 = ppplVar35 + (long)*(int *)pplVar37 * 2 + 0x27;
      goto LAB_03d565cc;
    }
  }
LAB_03d565b0:
  pppplVar57 = (long ****)0x0;
  ppplVar35 = (long ***)func_0x03256b10(pppplVar55);
LAB_03d565cc:
  (*(code *)*ppplVar35)(pppplVar55,ppplVar35[1]);
LAB_03d565d8:
  func_0x03365958(pppplVar65);
  func_0x03280ca4(0);
  auVar73 = func_0x02f09514();
  pppplVar47 = auVar73._8_8_;
  plVar34 = auVar73._0_8_;
  ppppplVar40[-8] = (long ****)0x3d565f0;
  ppppplVar40[-6] = pppplVar55;
  ppppplVar40[-5] = (long ****)ppppplVar40;
  ppppplVar40[-4] = (long ****)ppppplVar42;
  ppppplVar40[-3] = pppplVar62;
  ppppplVar40[-2] = pppplVar59;
  ppppplVar40[-1] = auVar72._8_8_;
  if (pppplVar47[7] == (long ***)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (pppplVar47[7] == (long ***)0x0) {
      func_0x03256878(pppplVar47);
    }
  }
  ppppplVar42 = ppppplVar40;
  if (plVar34 == (long *)0x0) {
    uVar20 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar20 = func_0x05ac7464(uVar20,0);
  }
  else {
    pplVar37 = pppplVar47[7][1];
    if ((*(byte *)((long)pplVar37 + 0x135) & 1) == 0) {
      pplVar37 = (long **)func_0x0325681c(pplVar37);
    }
    pppplVar59 = (long ****)func_0x03280b90(plVar34,pplVar37);
    if (pppplVar59 == (long ****)0x0) {
      pplVar37 = *pppplVar47[7];
      if ((*(byte *)((long)pplVar37 + 0x135) & 1) == 0) {
        pplVar37 = (long **)func_0x0325681c(pplVar37);
      }
      lVar41 = *plVar34;
      uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
      if (uVar50 != 0) {
        piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
        do {
          if (*(long ***)(piVar54 + -2) == pplVar37) {
            puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
            goto LAB_03d567c4;
          }
          uVar50 = uVar50 - 1;
          piVar54 = piVar54 + 4;
        } while (uVar50 != 0);
      }
      pppplVar57 = (long ****)0x0;
      puVar19 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d567c4:
      pppplVar59 = (long ****)(*(code *)*puVar19)(plVar34,puVar19[1]);
      puVar33 = PTR_DAT_0774e8e0;
      if (pppplVar59 == (long ****)0x0) goto LAB_03d569f0;
      ppplVar35 = *pppplVar59;
      uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
      if (uVar50 != 0) {
        pplVar37 = ppplVar35[0x16] + 1;
        do {
          if (pplVar37[-1] == *(long **)PTR_DAT_0774e8e0) {
            ppplVar35 = ppplVar35 + (long)*(int *)pplVar37 * 2 + 0x27;
            goto LAB_03d5682c;
          }
          uVar50 = uVar50 - 1;
          pplVar37 = pplVar37 + 2;
        } while (uVar50 != 0);
      }
      pppplVar57 = (long ****)0x0;
      ppplVar35 = (long ***)func_0x03256b10(pppplVar59);
LAB_03d5682c:
      uVar50 = (*(code *)*ppplVar35)(pppplVar59,ppplVar35[1]);
      if ((uVar50 & 1) == 0) goto LAB_03d569fc;
      pplVar37 = pppplVar47[7][7];
      if ((*(byte *)((long)pplVar37 + 0x135) & 1) == 0) {
        pplVar37 = (long **)func_0x0325681c(pplVar37);
      }
      ppplVar35 = *pppplVar59;
      uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
      if (uVar50 != 0) {
        pplVar53 = ppplVar35[0x16] + 1;
        do {
          if ((long **)pplVar53[-1] == pplVar37) {
            ppplVar35 = ppplVar35 + (long)*(int *)pplVar53 * 2 + 0x27;
            goto LAB_03d568a0;
          }
          uVar50 = uVar50 - 1;
          pplVar53 = pplVar53 + 2;
        } while (uVar50 != 0);
      }
      pppplVar57 = (long ****)0x0;
      ppplVar35 = (long ***)func_0x03256b10(pppplVar59);
LAB_03d568a0:
      ppppplVar22 = (long *****)(*(code *)*ppplVar35)(pppplVar59,ppplVar35[1]);
      ppplVar35 = *pppplVar59;
      uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
      if (uVar50 != 0) {
        pplVar37 = ppplVar35[0x16] + 1;
        do {
          if (pplVar37[-1] == *(long **)puVar33) {
            ppplVar35 = ppplVar35 + (long)*(int *)pplVar37 * 2 + 0x27;
            goto LAB_03d56900;
          }
          uVar50 = uVar50 - 1;
          pplVar37 = pplVar37 + 2;
        } while (uVar50 != 0);
      }
      pppplVar57 = (long ****)0x0;
      ppplVar35 = (long ***)func_0x03256b10(pppplVar59);
LAB_03d56900:
      uVar50 = (*(code *)*ppplVar35)(pppplVar59,ppplVar35[1]);
      bVar16 = (uVar50 & 1) == 0;
      plVar34 = (long *)0x0;
      uVar17 = 8;
      if (bVar16) {
        uVar17 = 0xf;
      }
      pppplVar55 = (long ****)(ulong)uVar17;
      ppppplVar42 = (long *****)0x0;
      if (bVar16) {
        ppppplVar42 = ppppplVar22;
      }
      if (pppplVar59 == (long ****)0x0) goto LAB_03d5698c;
      goto LAB_03d5692c;
    }
    pplVar37 = pppplVar47[7][2];
    if ((*(byte *)((long)pplVar37 + 0x135) & 1) == 0) {
      pplVar37 = (long **)func_0x0325681c(pplVar37);
    }
    ppplVar35 = *pppplVar59;
    uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
    if (uVar50 != 0) {
      pplVar53 = ppplVar35[0x16] + 1;
      do {
        if ((long **)pplVar53[-1] == pplVar37) {
          ppplVar35 = ppplVar35 + (long)*(int *)pplVar53 * 2 + 0x27;
          goto LAB_03d56724;
        }
        uVar50 = uVar50 - 1;
        pplVar53 = pplVar53 + 2;
      } while (uVar50 != 0);
    }
    pppplVar57 = (long ****)0x0;
    ppplVar35 = (long ***)func_0x03256b10(pppplVar59);
LAB_03d56724:
    iVar18 = (*(code *)*ppplVar35)(pppplVar59,ppplVar35[1]);
    if (iVar18 == 1) {
      pplVar37 = pppplVar47[7][1];
      if ((*(byte *)((long)pplVar37 + 0x135) & 1) == 0) {
        pplVar37 = (long **)func_0x0325681c(pplVar37);
      }
      ppplVar35 = *pppplVar59;
      uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
      if (uVar50 != 0) {
        pplVar53 = ppplVar35[0x16] + 1;
        do {
          if ((long **)pplVar53[-1] == pplVar37) {
            ppplVar35 = ppplVar35 + (long)*(int *)pplVar53 * 2 + 0x27;
            goto LAB_03d5679c;
          }
          uVar50 = uVar50 - 1;
          pplVar53 = pplVar53 + 2;
        } while (uVar50 != 0);
      }
      ppplVar35 = (long ***)func_0x03256b10(pppplVar59,pplVar37,0);
LAB_03d5679c:
      ppppplVar67 = (long *****)(*(code *)*ppplVar35)(pppplVar59,0,ppplVar35[1]);
      return ppppplVar67;
    }
    if (iVar18 != 0) goto LAB_03d569c8;
    uVar20 = func_0x05ac75f4(0);
  }
  do {
    func_0x03280b7c(uVar20,pppplVar47);
LAB_03d569f0:
    func_0x03280cac();
    do {
      func_0x03280ca4(plVar34);
LAB_03d569fc:
      auVar11._8_8_ = 0;
      auVar11._0_8_ = pppplVar55;
      auVar76._8_8_ = 0;
      auVar76._0_8_ = pppplVar55;
      uVar20 = func_0x05ac75f4(0);
      auVar77 = func_0x03280b7c(uVar20,pppplVar47);
      pppplVar62 = auVar77._0_8_;
      if (auVar77._8_4_ != 1) {
        if (pppplVar59 == (long ****)0x0) goto LAB_03d56abc;
        ppplVar35 = *pppplVar59;
        uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
        if (uVar50 == 0) goto LAB_03d56a94;
        pplVar37 = ppplVar35[0x16] + 1;
        goto LAB_03d56a7c;
      }
      puVar19 = (undefined8 *)func_0x072ce910(pppplVar62);
      plVar34 = (long *)*puVar19;
      func_0x072ce920();
      pppplVar55 = (long ****)0x0;
      ppppplVar42 = (long *****)0x0;
      if (pppplVar59 != (long ****)0x0) {
LAB_03d5692c:
        ppplVar35 = *pppplVar59;
        uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
        if (uVar50 != 0) {
          pplVar37 = ppplVar35[0x16] + 1;
          do {
            if (pplVar37[-1] == *(long **)PTR_DAT_0774e8c8) {
              ppplVar35 = ppplVar35 + (long)*(int *)pplVar37 * 2 + 0x27;
              goto LAB_03d56980;
            }
            uVar50 = uVar50 - 1;
            pplVar37 = pplVar37 + 2;
          } while (uVar50 != 0);
        }
        pppplVar57 = (long ****)0x0;
        ppplVar35 = (long ***)func_0x03256b10(pppplVar59);
LAB_03d56980:
        (*(code *)*ppplVar35)(pppplVar59,ppplVar35[1]);
      }
LAB_03d5698c:
    } while (plVar34 != (long *)0x0);
    if (((uint)pppplVar55 | 8) != 8) {
      return ppppplVar42;
    }
LAB_03d569c8:
    uVar20 = func_0x05ac751c(0);
  } while( true );
  while( true ) {
    uVar50 = uVar50 - 1;
    pplVar37 = pplVar37 + 2;
    if (uVar50 == 0) break;
LAB_03d56a7c:
    if (pplVar37[-1] == *(long **)PTR_DAT_0774e8c8) {
      ppplVar35 = ppplVar35 + (long)*(int *)pplVar37 * 2 + 0x27;
      goto LAB_03d56ab0;
    }
  }
LAB_03d56a94:
  pppplVar57 = (long ****)0x0;
  ppplVar35 = (long ***)func_0x03256b10(pppplVar59);
LAB_03d56ab0:
  (*(code *)*ppplVar35)(pppplVar59,ppplVar35[1]);
LAB_03d56abc:
  func_0x03365958(pppplVar62);
  func_0x03280ca4(0);
  auVar72 = func_0x02f09514();
  lVar41 = auVar72._8_8_;
  pppplVar32 = auVar72._0_8_;
  ppppplVar40[-0x14] = (long ****)0x3d56ad4;
  ppppplVar40[-0x12] = (long ****)ppppplVar67;
  ppppplVar40[-0x11] = pppplVar23;
  ppppplVar40[-0x10] = pppplVar65;
  ppppplVar40[-0xf] = (long ****)0x0;
  ppppplVar40[-0xe] = pppplVar55;
  ppppplVar40[-0xd] = (long ****)ppppplVar42;
  ppppplVar40[-0xc] = pppplVar62;
  ppppplVar40[-0xb] = (long ****)0x0;
  ppppplVar40[-10] = pppplVar59;
  ppppplVar40[-9] = pppplVar47;
  pppplVar55 = pppplVar57;
  if (pppplVar57[7] == (long ***)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (pppplVar57[7] == (long ***)0x0) {
      func_0x03256878(pppplVar57);
    }
  }
  puVar33 = PTR_DAT_07774b08;
  if ((pppplVar32 != (long ****)0x0) && (puVar33 = PTR_DAT_077799b8, lVar41 != 0)) {
    pplVar37 = *pppplVar57[7];
    if ((*(byte *)((long)pplVar37 + 0x135) & 1) == 0) {
      pplVar37 = (long **)func_0x0325681c(pplVar37);
    }
    ppplVar35 = *pppplVar32;
    uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
    if (uVar50 != 0) {
      pplVar53 = ppplVar35[0x16] + 1;
      do {
        if ((long **)pplVar53[-1] == pplVar37) {
          ppplVar35 = ppplVar35 + (long)*(int *)pplVar53 * 2 + 0x27;
          goto LAB_03d56b94;
        }
        uVar50 = uVar50 - 1;
        pplVar53 = pplVar53 + 2;
      } while (uVar50 != 0);
    }
    pppplVar55 = (long ****)0x0;
    ppplVar35 = (long ***)func_0x03256b10(pppplVar32);
LAB_03d56b94:
    pppplVar32 = (long ****)(*(code *)*ppplVar35)(pppplVar32,ppplVar35[1]);
    pppplVar23 = (long ****)PTR_DAT_0774e8e0;
    lVar45 = 0;
    ppppplVar67 = (long *****)0x7fffffffffffffff;
    uVar20 = 0;
    do {
      auVar11._8_8_ = auVar76._8_8_;
      auVar11._0_8_ = uVar20;
      if (pppplVar32 == (long ****)0x0) {
        func_0x03280cac();
        goto LAB_03d56d74;
      }
      ppplVar35 = *pppplVar32;
      uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
      if (uVar50 != 0) {
        pplVar37 = ppplVar35[0x16] + 1;
        do {
          if ((long ***)pplVar37[-1] == *pppplVar23) {
            ppplVar35 = ppplVar35 + (long)*(int *)pplVar37 * 2 + 0x27;
            goto LAB_03d56c0c;
          }
          uVar50 = uVar50 - 1;
          pplVar37 = pplVar37 + 2;
        } while (uVar50 != 0);
      }
      pppplVar55 = (long ****)0x0;
      ppplVar35 = (long ***)func_0x03256b10(pppplVar32);
LAB_03d56c0c:
      uVar50 = (*(code *)*ppplVar35)(pppplVar32,ppplVar35[1]);
      if ((uVar50 & 1) == 0) {
        lVar41 = 0;
        uVar20 = 0xc;
        if (pppplVar32 == (long ****)0x0) goto LAB_03d56d34;
        goto LAB_03d56cd4;
      }
      pplVar37 = pppplVar57[7][4];
      if ((*(byte *)((long)pplVar37 + 0x135) & 1) == 0) {
        pplVar37 = (long **)func_0x0325681c(pplVar37);
      }
      ppplVar35 = *pppplVar32;
      uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
      if (uVar50 != 0) {
        pplVar53 = ppplVar35[0x16] + 1;
        do {
          if ((long **)pplVar53[-1] == pplVar37) {
            ppplVar35 = ppplVar35 + (long)*(int *)pplVar53 * 2 + 0x27;
            goto LAB_03d56c80;
          }
          uVar50 = uVar50 - 1;
          pplVar53 = pplVar53 + 2;
        } while (uVar50 != 0);
      }
      ppplVar35 = (long ***)func_0x03256b10(pppplVar32,pplVar37,0);
LAB_03d56c80:
      auVar76 = (*(code *)*ppplVar35)(pppplVar32,ppplVar35[1]);
      pppplVar55 = auVar76._8_8_;
      ppppplVar28 = *(long ******)(lVar41 + 0x28);
      uVar50 = (**(code **)(lVar41 + 0x18))(*(undefined8 *)(lVar41 + 0x40),auVar76._0_8_);
      if ((uVar50 & 1) != 0) {
        if (lVar45 == 0x7fffffffffffffff) goto LAB_03d56db0;
        lVar45 = lVar45 + 1;
        uVar20 = auVar76._0_8_;
      }
    } while( true );
  }
  uVar20 = func_0x03280a2c(puVar33);
  uVar20 = func_0x05ac7464(uVar20,0);
  while( true ) {
    pppplVar59 = auVar11._8_8_;
    auVar77 = func_0x03280b7c(uVar20,pppplVar57);
    lVar45 = 0x7fffffffffffffff;
    if (auVar77._8_4_ != 1) break;
    plVar34 = (long *)func_0x072ce910();
    lVar41 = *plVar34;
    func_0x072ce920();
    uVar20 = 0;
    if (pppplVar32 != (long ****)0x0) {
LAB_03d56cd4:
      ppplVar35 = *pppplVar32;
      uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
      if (uVar50 != 0) {
        pplVar37 = ppplVar35[0x16] + 1;
        do {
          if (pplVar37[-1] == *(long **)PTR_DAT_0774e8c8) {
            ppplVar35 = ppplVar35 + (long)*(int *)pplVar37 * 2 + 0x27;
            goto LAB_03d56d28;
          }
          uVar50 = uVar50 - 1;
          pplVar37 = pplVar37 + 2;
        } while (uVar50 != 0);
      }
      pppplVar55 = (long ****)0x0;
      ppplVar35 = (long ***)func_0x03256b10(pppplVar32);
LAB_03d56d28:
      (*(code *)*ppplVar35)(pppplVar32,ppplVar35[1]);
    }
LAB_03d56d34:
    auVar76._8_8_ = auVar11._8_8_;
    auVar76._0_8_ = uVar20;
    if (lVar41 == 0) {
      if ((((int)uVar20 != 0xc) && ((int)uVar20 != 0)) || (lVar45 == 1)) {
        return auVar11._0_8_;
      }
LAB_03d56d74:
      uVar20 = 0;
      if (lVar45 != 0) goto LAB_03d56dbc;
      uVar20 = func_0x05ac7660();
      auVar11 = auVar76;
    }
    else {
      func_0x03280ca4(lVar41);
LAB_03d56db0:
      uVar20 = func_0x03280cbc();
      uVar20 = func_0x03280b7c(uVar20,pppplVar57);
LAB_03d56dbc:
      uVar20 = func_0x05ac7588(uVar20);
      auVar11 = auVar76;
    }
  }
  ppppplVar42 = (long *****)0x0;
  if (pppplVar32 != (long ****)0x0) {
    ppplVar35 = *pppplVar32;
    uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
    if (uVar50 != 0) {
      pplVar37 = ppplVar35[0x16] + 1;
      do {
        if (pplVar37[-1] == *(long **)PTR_DAT_0774e8c8) {
          ppplVar35 = ppplVar35 + (long)*(int *)pplVar37 * 2 + 0x27;
          goto LAB_03d56e78;
        }
        uVar50 = uVar50 - 1;
        pplVar37 = pplVar37 + 2;
      } while (uVar50 != 0);
    }
    pppplVar55 = (long ****)0x0;
    ppplVar35 = (long ***)func_0x03256b10(pppplVar32);
LAB_03d56e78:
    (*(code *)*ppplVar35)(pppplVar32,ppplVar35[1]);
  }
  func_0x03365958(auVar77._0_8_);
  func_0x03280ca4(0);
  auVar72 = func_0x02f09514();
  lVar41 = auVar72._8_8_;
  pppplVar62 = auVar72._0_8_;
  ppppplVar40[-0x1e] = (long ****)0x3d56e9c;
  ppppplVar40[-0x1c] = (long ****)0x7fffffffffffffff;
  ppppplVar40[-0x1b] = pppplVar59;
  ppppplVar40[-0x1a] = auVar11._0_8_;
  ppppplVar40[-0x19] = (long ****)0x0;
  *(undefined1 (*) [16])(ppppplVar40 + -0x18) = auVar11;
  ppppplVar40[-0x16] = pppplVar32;
  ppppplVar40[-0x15] = auVar77._0_8_;
  pppplVar57 = pppplVar55;
  if (pppplVar55[7] == (long ***)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (pppplVar55[7] == (long ***)0x0) {
      func_0x03256878(pppplVar55);
    }
  }
  puVar33 = PTR_DAT_07774b08;
  if ((pppplVar62 != (long ****)0x0) && (puVar33 = PTR_DAT_077799b8, lVar41 != 0)) {
    pplVar37 = *pppplVar55[7];
    if ((*(byte *)((long)pplVar37 + 0x135) & 1) == 0) {
      pplVar37 = (long **)func_0x0325681c(pplVar37);
    }
    ppplVar35 = *pppplVar62;
    uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
    if (uVar50 != 0) {
      pplVar53 = ppplVar35[0x16] + 1;
      do {
        if ((long **)pplVar53[-1] == pplVar37) {
          ppplVar35 = ppplVar35 + (long)*(int *)pplVar53 * 2 + 0x27;
          goto LAB_03d56f58;
        }
        uVar50 = uVar50 - 1;
        pplVar53 = pplVar53 + 2;
      } while (uVar50 != 0);
    }
    pppplVar57 = (long ****)0x0;
    ppplVar35 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d56f58:
    pppplVar62 = (long ****)(*(code *)*ppplVar35)(pppplVar62,ppplVar35[1]);
    pppplVar59 = (long ****)PTR_DAT_0774e8e0;
    lVar45 = 0;
    ppppplVar22 = (long *****)0x0;
    do {
      if (pppplVar62 == (long ****)0x0) {
        func_0x03280cac();
        goto LAB_03d57120;
      }
      ppplVar35 = *pppplVar62;
      uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
      if (uVar50 != 0) {
        pplVar37 = ppplVar35[0x16] + 1;
        do {
          if ((long ***)pplVar37[-1] == *pppplVar59) {
            ppplVar35 = ppplVar35 + (long)*(int *)pplVar37 * 2 + 0x27;
            goto LAB_03d56fcc;
          }
          uVar50 = uVar50 - 1;
          pplVar37 = pplVar37 + 2;
        } while (uVar50 != 0);
      }
      pppplVar57 = (long ****)0x0;
      ppplVar35 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d56fcc:
      uVar50 = (*(code *)*ppplVar35)(pppplVar62,ppplVar35[1]);
      if ((uVar50 & 1) == 0) {
        lVar41 = 0;
        ppppplVar42 = (long *****)0xc;
        if (pppplVar62 == (long ****)0x0) goto LAB_03d570e8;
        goto LAB_03d57088;
      }
      pplVar37 = pppplVar55[7][4];
      if ((*(byte *)((long)pplVar37 + 0x135) & 1) == 0) {
        pplVar37 = (long **)func_0x0325681c(pplVar37);
      }
      ppplVar35 = *pppplVar62;
      uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
      if (uVar50 != 0) {
        pplVar53 = ppplVar35[0x16] + 1;
        do {
          if ((long **)pplVar53[-1] == pplVar37) {
            ppplVar35 = ppplVar35 + (long)*(int *)pplVar53 * 2 + 0x27;
            goto LAB_03d57040;
          }
          uVar50 = uVar50 - 1;
          pplVar53 = pplVar53 + 2;
        } while (uVar50 != 0);
      }
      ppplVar35 = (long ***)func_0x03256b10(pppplVar62,pplVar37,0);
LAB_03d57040:
      ppppplVar42 = (long *****)(*(code *)*ppplVar35)(pppplVar62,ppplVar35[1]);
      pppplVar57 = *(long *****)(lVar41 + 0x28);
      uVar50 = (**(code **)(lVar41 + 0x18))(*(undefined8 *)(lVar41 + 0x40),ppppplVar42);
      if ((uVar50 & 1) != 0) {
        if (lVar45 == 0x7fffffffffffffff) goto LAB_03d5715c;
        lVar45 = lVar45 + 1;
        ppppplVar22 = ppppplVar42;
      }
    } while( true );
  }
  uVar20 = func_0x03280a2c(puVar33);
  uVar20 = func_0x05ac7464(uVar20,0);
  ppppplVar22 = ppppplVar42;
  while( true ) {
    auVar77 = func_0x03280b7c(uVar20,pppplVar55);
    lVar45 = 0x7fffffffffffffff;
    if (auVar77._8_4_ != 1) break;
    plVar34 = (long *)func_0x072ce910();
    lVar41 = *plVar34;
    func_0x072ce920();
    ppppplVar42 = (long *****)0x0;
    if (pppplVar62 != (long ****)0x0) {
LAB_03d57088:
      ppplVar35 = *pppplVar62;
      uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
      if (uVar50 != 0) {
        pplVar37 = ppplVar35[0x16] + 1;
        do {
          if (pplVar37[-1] == *(long **)PTR_DAT_0774e8c8) {
            ppplVar35 = ppplVar35 + (long)*(int *)pplVar37 * 2 + 0x27;
            goto LAB_03d570dc;
          }
          uVar50 = uVar50 - 1;
          pplVar37 = pplVar37 + 2;
        } while (uVar50 != 0);
      }
      pppplVar57 = (long ****)0x0;
      ppplVar35 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d570dc:
      (*(code *)*ppplVar35)(pppplVar62,ppplVar35[1]);
    }
LAB_03d570e8:
    if (lVar41 == 0) {
      if ((((int)ppppplVar42 != 0xc) && ((int)ppppplVar42 != 0)) || (lVar45 == 1)) {
        return ppppplVar22;
      }
LAB_03d57120:
      uVar20 = 0;
      if (lVar45 != 0) goto LAB_03d57168;
      uVar20 = func_0x05ac7660();
      ppppplVar22 = ppppplVar42;
    }
    else {
      func_0x03280ca4(lVar41);
LAB_03d5715c:
      uVar20 = func_0x03280cbc();
      uVar20 = func_0x03280b7c(uVar20,pppplVar55);
LAB_03d57168:
      uVar20 = func_0x05ac7588(uVar20);
      ppppplVar22 = ppppplVar42;
    }
  }
  if (pppplVar62 != (long ****)0x0) {
    ppplVar35 = *pppplVar62;
    uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
    if (uVar50 != 0) {
      pplVar37 = ppplVar35[0x16] + 1;
      do {
        if (pplVar37[-1] == *(long **)PTR_DAT_0774e8c8) {
          ppplVar35 = ppplVar35 + (long)*(int *)pplVar37 * 2 + 0x27;
          goto LAB_03d5721c;
        }
        uVar50 = uVar50 - 1;
        pplVar37 = pplVar37 + 2;
      } while (uVar50 != 0);
    }
    pppplVar57 = (long ****)0x0;
    ppplVar35 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d5721c:
    (*(code *)*ppplVar35)(pppplVar62,ppplVar35[1]);
  }
  func_0x03365958(auVar77._0_8_);
  func_0x03280ca4(0);
  auVar72 = func_0x02f09514();
  uVar50 = auVar72._8_8_;
  plVar34 = auVar72._0_8_;
  ppppplVar40[-0x2a] = (long ****)(ppppplVar27 + -0x22);
  ppppplVar40[-0x29] = (long ****)0x3d57240;
  ppppplVar40[-0x28] = (long ****)ppppplVar67;
  ppppplVar40[-0x27] = pppplVar23;
  ppppplVar40[-0x26] = (long ****)0x7fffffffffffffff;
  ppppplVar40[-0x25] = pppplVar59;
  ppppplVar40[-0x24] = (long ****)0x7fffffffffffffff;
  ppppplVar40[-0x23] = (long ****)ppppplVar22;
  ppppplVar40[-0x22] = (long ****)0x0;
  ppppplVar40[-0x21] = (long ****)ppppplVar22;
  ppppplVar40[-0x20] = pppplVar62;
  ppppplVar40[-0x1f] = auVar77._0_8_;
  pppplVar23 = (long ****)tpidr_el0;
  ppppplVar40[-0x2f] = pppplVar57;
  ppppplVar40[-0x2e] = pppplVar23;
  ppppplVar40[-0x2b] = (long ****)pppplVar23[5];
  pppplVar23 = ppppplVar28[7];
  if (pppplVar23 == (long ****)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    pppplVar23 = ppppplVar28[7];
    if (pppplVar23 == (long ****)0x0) {
      func_0x03256878(ppppplVar28);
      pppplVar23 = ppppplVar28[7];
    }
  }
  uVar58 = (ulong)*(uint *)((long)pppplVar23[2] + 0xfc);
  uVar66 = uVar58 + 0xf & 0x1fffffff0;
  pppplVar55 = (long ****)((long)ppppplVar40 + (-0x180 - uVar66));
  pppplVar57 = (long ****)((long)pppplVar55 - uVar66);
  uVar60 = (long)pppplVar57 - uVar66;
  func_0x072ce9a0(uVar60,0,uVar58);
  lVar41 = uVar60 - uVar66;
  uVar66 = uVar58;
  func_0x072ce9a0(lVar41,0);
  puVar33 = PTR_DAT_07774b08;
  if ((plVar34 != (long *)0x0) && (puVar33 = PTR_DAT_077799b8, uVar50 != 0)) {
    uVar66 = uVar58;
    func_0x072ce9a0(uVar60,0);
    ppplVar35 = *pppplVar23;
    if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
      ppplVar35 = (long ***)func_0x0325681c(ppplVar35);
    }
    lVar45 = *plVar34;
    uVar51 = (ulong)*(ushort *)(lVar45 + 0x12e);
    if (uVar51 != 0) {
      piVar54 = (int *)(*(long *)(lVar45 + 0xb0) + 8);
      do {
        if (*(long ****)(piVar54 + -2) == ppplVar35) {
          puVar19 = (undefined8 *)(lVar45 + (long)*piVar54 * 0x10 + 0x138);
          goto LAB_03d57388;
        }
        uVar51 = uVar51 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar51 != 0);
    }
    uVar66 = 0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d57388:
    plVar34 = (long *)(*(code *)*puVar19)(plVar34,puVar19[1]);
    puVar33 = PTR_DAT_0774e8e0;
    plVar31 = (long *)0x0;
    do {
      if (plVar34 == (long *)0x0) {
        func_0x03280cac();
        goto LAB_03d575f4;
      }
      lVar45 = *plVar34;
      uVar51 = (ulong)*(ushort *)(lVar45 + 0x12e);
      if (uVar51 != 0) {
        piVar54 = (int *)(*(long *)(lVar45 + 0xb0) + 8);
        do {
          if (*(long *)(piVar54 + -2) == *(long *)puVar33) {
            puVar19 = (undefined8 *)(lVar45 + (long)*piVar54 * 0x10 + 0x138);
            goto LAB_03d573f4;
          }
          uVar51 = uVar51 - 1;
          piVar54 = piVar54 + 4;
        } while (uVar51 != 0);
      }
      uVar66 = 0;
      puVar19 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d573f4:
      ppppplVar67 = (long *****)(*(code *)*puVar19)(plVar34,puVar19[1]);
      if (((ulong)ppppplVar67 & 1) == 0) {
        lVar45 = 0;
        iVar44 = 0xc;
        iVar18 = 0xc;
        if (plVar34 == (long *)0x0) goto LAB_03d57584;
        goto LAB_03d57524;
      }
      ppplVar35 = ppppplVar28[7][4];
      if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
        ppplVar35 = (long ***)func_0x0325681c(ppplVar35);
      }
      lVar45 = *plVar34;
      uVar66 = (ulong)*(ushort *)(lVar45 + 0x12e);
      if (uVar66 != 0) {
        piVar54 = (int *)(*(long *)(lVar45 + 0xb0) + 8);
        do {
          if (*(long ****)(piVar54 + -2) == ppplVar35) {
            lVar45 = lVar45 + (long)*piVar54 * 0x10 + 0x138;
            goto LAB_03d57468;
          }
          uVar66 = uVar66 - 1;
          piVar54 = piVar54 + 4;
        } while (uVar66 != 0);
      }
      lVar45 = func_0x03256b10(plVar34,ppplVar35,0);
LAB_03d57468:
      ppppplVar40[-0x2d] = pppplVar55;
      lVar45 = *(long *)(lVar45 + 8);
      (**(code **)(lVar45 + 0x10))
                (*(undefined8 *)(lVar45 + 8),lVar45,plVar34,ppppplVar40 + -0x2d,pppplVar55);
      func_0x072ce970(lVar41,pppplVar55,uVar58);
      func_0x072ce970(pppplVar57,lVar41,uVar58);
      pppplVar23 = pppplVar57;
      if (-1 < *(int *)(ppppplVar28[7][2] + 5)) {
        pppplVar23 = (long ****)*pppplVar57;
      }
      ppplVar35 = ppppplVar28[7][6];
      pplVar37 = *ppplVar35;
      ppppplVar40[-0x2d] = pppplVar23;
      uVar66 = uVar50;
      (*(code *)ppplVar35[2])
                (pplVar37,ppplVar35,uVar50,ppppplVar40 + -0x2d,(long)ppppplVar40 + -0x15c);
      if (*(char *)((long)ppppplVar40 + -0x15c) != '\0') {
        func_0x072ce970(pppplVar55,lVar41,uVar58);
        uVar66 = uVar58;
        func_0x072ce970(uVar60,pppplVar55);
        if (plVar31 == (long *)0x7fffffffffffffff) goto LAB_03d57630;
        plVar31 = (long *)((long)plVar31 + 1);
      }
    } while( true );
  }
  uVar20 = func_0x03280a2c(puVar33);
  uVar20 = func_0x05ac7464(uVar20,0);
LAB_03d57640:
  func_0x03280b7c(uVar20,ppppplVar28);
  do {
    auVar77 = func_0x072ce990();
    uVar20 = auVar77._0_8_;
    plVar31 = (long *)0x7fffffffffffffff;
    if (auVar77._8_4_ != 1) {
      if (plVar34 == (long *)0x0) goto LAB_03d57704;
      lVar45 = *plVar34;
      uVar50 = (ulong)*(ushort *)(lVar45 + 0x12e);
      if (uVar50 == 0) goto LAB_03d576dc;
      piVar54 = (int *)(*(long *)(lVar45 + 0xb0) + 8);
      goto LAB_03d576c4;
    }
    plVar30 = (long *)func_0x072ce910(uVar20);
    lVar45 = *plVar30;
    ppppplVar67 = (long *****)func_0x072ce920();
    iVar44 = 0;
    iVar18 = 0;
    if (plVar34 != (long *)0x0) {
LAB_03d57524:
      iVar44 = iVar18;
      lVar29 = *plVar34;
      uVar50 = (ulong)*(ushort *)(lVar29 + 0x12e);
      if (uVar50 != 0) {
        piVar54 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
        do {
          if (*(long *)(piVar54 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar19 = (undefined8 *)(lVar29 + (long)*piVar54 * 0x10 + 0x138);
            goto LAB_03d57578;
          }
          uVar50 = uVar50 - 1;
          piVar54 = piVar54 + 4;
        } while (uVar50 != 0);
      }
      uVar66 = 0;
      puVar19 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d57578:
      ppppplVar67 = (long *****)(*(code *)*puVar19)(plVar34,puVar19[1]);
    }
LAB_03d57584:
    if (lVar45 != 0) {
      func_0x03280ca4(lVar45);
LAB_03d57630:
      uVar20 = func_0x03280cbc();
      uVar20 = func_0x03280b7c(uVar20,ppppplVar28);
      goto LAB_03d5763c;
    }
    if ((iVar44 == 0xc) || (iVar44 == 0)) {
      if (plVar31 != (long *)0x1) goto LAB_03d575f4;
      func_0x072ce970(pppplVar55,uVar60,uVar58);
      uVar66 = uVar58;
      ppppplVar67 = (long *****)func_0x072ce970(ppppplVar40[-0x2f],pppplVar55);
    }
    if ((long ****)ppppplVar40[-0x2e][5] == ppppplVar40[-0x2b]) {
      return ppppplVar67;
    }
  } while( true );
  while( true ) {
    uVar50 = uVar50 - 1;
    piVar54 = piVar54 + 4;
    if (uVar50 == 0) break;
LAB_03d58054:
    if (*(long *)(piVar54 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar19 = (undefined8 *)(lVar45 + (long)*piVar54 * 0x10 + 0x138);
      goto LAB_03d58088;
    }
  }
LAB_03d5806c:
  uVar66 = 0;
  puVar19 = (undefined8 *)func_0x03256b10(plVar31);
LAB_03d58088:
  (*(code *)*puVar19)(plVar31,puVar19[1]);
LAB_03d58094:
  func_0x03365958(uVar21);
  func_0x03280ca4(0);
  auVar72 = func_0x02f09514();
  plVar30 = auVar72._0_8_;
  *(long ******)(lVar41 + -0xc0) = ppppplVar40 + -0x2a;
  *(undefined8 *)(lVar41 + -0xb8) = 0x3d580ac;
  *(long *)(lVar41 + -0xb0) = lVar41;
  *(undefined8 *)(lVar41 + -0xa0) = uVar20;
  *(undefined8 *)(lVar41 + -0x98) = 0;
  *(long **)(lVar41 + -0x90) = plVar34;
  *(ulong *)(lVar41 + -0x88) = uVar60;
  *(undefined8 *)(lVar41 + -0x80) = uVar21;
  *(undefined8 *)(lVar41 + -0x78) = 0;
  *(long **)(lVar41 + -0x70) = plVar31;
  *(long *)(lVar41 + -0x68) = lVar29;
  lVar45 = tpidr_el0;
  *(undefined8 *)(lVar41 + -200) = *(undefined8 *)(lVar45 + 0x28);
  plVar34 = *(long **)(uVar66 + 0x38);
  if (plVar34 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar34 = *(long **)(uVar66 + 0x38);
    if (plVar34 == (long *)0x0) {
      func_0x03256878(uVar66);
      plVar34 = *(long **)(uVar66 + 0x38);
    }
  }
  uVar60 = (ulong)*(uint *)(plVar34[4] + 0xfc);
  uVar50 = uVar60 + 0xf & 0x1fffffff0;
  lVar48 = (lVar41 + -0xe0) - uVar50;
  lVar61 = lVar48 - uVar50;
  func_0x072ce9a0(lVar61,0,uVar60);
  lVar64 = lVar61 - uVar50;
  uVar50 = uVar60;
  func_0x072ce9a0(lVar64,0);
  lVar29 = lVar64;
  if (plVar30 == (long *)0x0) {
    uVar20 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar20 = func_0x05ac7464(uVar20,0);
    goto LAB_03d585bc;
  }
  lVar39 = plVar34[1];
  if ((*(byte *)(lVar39 + 0x135) & 1) == 0) {
    lVar39 = func_0x0325681c(lVar39);
  }
  plVar34 = (long *)func_0x03280b90(plVar30,lVar39);
  if (plVar34 == (long *)0x0) {
    lVar39 = **(long **)(uVar66 + 0x38);
    if ((*(byte *)(lVar39 + 0x135) & 1) == 0) {
      lVar39 = func_0x0325681c(lVar39);
    }
    lVar49 = *plVar30;
    uVar58 = (ulong)*(ushort *)(lVar49 + 0x12e);
    if (uVar58 != 0) {
      piVar54 = (int *)(*(long *)(lVar49 + 0xb0) + 8);
      do {
        if (*(long *)(piVar54 + -2) == lVar39) {
          puVar19 = (undefined8 *)(lVar49 + (long)*piVar54 * 0x10 + 0x138);
          goto LAB_03d582e8;
        }
        uVar58 = uVar58 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar58 != 0);
    }
    uVar50 = 0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar30);
LAB_03d582e8:
    plVar34 = (long *)(*(code *)*puVar19)(plVar30,puVar19[1]);
    puVar33 = PTR_DAT_0774e8e0;
    if (plVar34 == (long *)0x0) goto LAB_03d585c4;
    lVar29 = *plVar34;
    uVar50 = (ulong)*(ushort *)(lVar29 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
      do {
        if (*(long *)(piVar54 + -2) == *(long *)PTR_DAT_0774e8e0) {
          puVar19 = (undefined8 *)(lVar29 + (long)*piVar54 * 0x10 + 0x138);
          goto LAB_03d58350;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    puVar19 = (undefined8 *)func_0x03256b10(plVar34,*(long *)PTR_DAT_0774e8e0,0);
LAB_03d58350:
    uVar50 = (*(code *)*puVar19)(plVar34,puVar19[1]);
    if ((uVar50 & 1) == 0) {
      func_0x072ce9a0(lVar61,0,uVar60);
      lVar29 = lVar61;
    }
    else {
      lVar29 = *(long *)(*(long *)(uVar66 + 0x38) + 0x38);
      if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
        lVar29 = func_0x0325681c(lVar29);
      }
      lVar39 = *plVar34;
      uVar50 = (ulong)*(ushort *)(lVar39 + 0x12e);
      if (uVar50 != 0) {
        piVar54 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
        do {
          if (*(long *)(piVar54 + -2) == lVar29) {
            lVar29 = lVar39 + (long)*piVar54 * 0x10 + 0x138;
            goto LAB_03d58410;
          }
          uVar50 = uVar50 - 1;
          piVar54 = piVar54 + 4;
        } while (uVar50 != 0);
      }
      lVar29 = func_0x03256b10(plVar34,lVar29,0);
LAB_03d58410:
      *(long *)(lVar41 + -0xe0) = lVar48;
      lVar29 = *(long *)(lVar29 + 8);
      (**(code **)(lVar29 + 0x10))(*(undefined8 *)(lVar29 + 8),lVar29,plVar34,lVar41 + -0xe0,lVar48)
      ;
      uVar50 = uVar60;
      func_0x072ce970(lVar64,lVar48);
      lVar29 = *plVar34;
      uVar58 = (ulong)*(ushort *)(lVar29 + 0x12e);
      if (uVar58 != 0) {
        piVar54 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
        do {
          if (*(long *)(piVar54 + -2) == *(long *)puVar33) {
            puVar19 = (undefined8 *)(lVar29 + (long)*piVar54 * 0x10 + 0x138);
            goto LAB_03d58488;
          }
          uVar58 = uVar58 - 1;
          piVar54 = piVar54 + 4;
        } while (uVar58 != 0);
      }
      uVar50 = 0;
      puVar19 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d58488:
      ppppplVar67 = (long *****)(*(code *)*puVar19)(plVar34,puVar19[1]);
      lVar29 = lVar64;
      if (((ulong)ppppplVar67 & 1) != 0) {
        lVar29 = 0;
        iVar44 = 8;
        iVar18 = 8;
        goto joined_r0x03d584a0;
      }
    }
    func_0x072ce970(lVar48,lVar29,uVar60);
    uVar50 = uVar60;
    ppppplVar67 = (long *****)func_0x072ce970(lVar61,lVar48);
    lVar29 = 0;
    iVar18 = 10;
    iVar44 = 10;
    if (plVar34 == (long *)0x0) goto LAB_03d58534;
    goto LAB_03d584d4;
  }
  lVar39 = *(long *)(*(long *)(uVar66 + 0x38) + 0x10);
  if ((*(byte *)(lVar39 + 0x135) & 1) == 0) {
    lVar39 = func_0x0325681c(lVar39);
  }
  lVar49 = *plVar34;
  uVar58 = (ulong)*(ushort *)(lVar49 + 0x12e);
  if (uVar58 != 0) {
    piVar54 = (int *)(*(long *)(lVar49 + 0xb0) + 8);
    do {
      if (*(long *)(piVar54 + -2) == lVar39) {
        puVar19 = (undefined8 *)(lVar49 + (long)*piVar54 * 0x10 + 0x138);
        goto LAB_03d58254;
      }
      uVar58 = uVar58 - 1;
      piVar54 = piVar54 + 4;
    } while (uVar58 != 0);
  }
  uVar50 = 0;
  puVar19 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d58254:
  iVar18 = (*(code *)*puVar19)(plVar34,puVar19[1]);
  if (iVar18 != 1) {
    if (iVar18 != 0) goto LAB_03d5854c;
    func_0x072ce9a0(lVar61,0,uVar60);
    goto LAB_03d58558;
  }
  lVar29 = *(long *)(*(long *)(uVar66 + 0x38) + 8);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c(lVar29);
  }
  *(undefined4 *)(lVar41 + -0xcc) = 0;
  lVar39 = *plVar34;
  uVar50 = (ulong)*(ushort *)(lVar39 + 0x12e);
  if (uVar50 != 0) {
    piVar54 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
    do {
      if (*(long *)(piVar54 + -2) == lVar29) {
        lVar29 = lVar39 + (long)*piVar54 * 0x10 + 0x138;
        goto LAB_03d583e0;
      }
      uVar50 = uVar50 - 1;
      piVar54 = piVar54 + 4;
    } while (uVar50 != 0);
  }
  lVar29 = func_0x03256b10(plVar34,lVar29,0);
LAB_03d583e0:
  *(long *)(lVar41 + -0xe0) = lVar41 + -0xcc;
  *(long *)(lVar41 + -0xd8) = lVar48;
  lVar29 = *(long *)(lVar29 + 8);
  (**(code **)(lVar29 + 0x10))(*(undefined8 *)(lVar29 + 8),lVar29,plVar34,lVar41 + -0xe0,lVar48);
LAB_03d58568:
  uVar50 = uVar60;
  ppppplVar67 = (long *****)func_0x072ce970(auVar72._8_8_,lVar48);
LAB_03d58578:
  if (*(long *)(lVar45 + 0x28) == *(long *)(lVar41 + -200)) {
    return ppppplVar67;
  }
  do {
    auVar77 = func_0x072ce990();
    if (auVar77._8_4_ != 1) {
      if (plVar34 == (long *)0x0) goto LAB_03d58678;
      lVar45 = *plVar34;
      uVar58 = (ulong)*(ushort *)(lVar45 + 0x12e);
      if (uVar58 == 0) goto LAB_03d58650;
      piVar54 = (int *)(*(long *)(lVar45 + 0xb0) + 8);
      break;
    }
    plVar31 = (long *)func_0x072ce910(auVar77._0_8_);
    lVar29 = *plVar31;
    ppppplVar67 = (long *****)func_0x072ce920();
    iVar44 = 0;
    iVar18 = 0;
joined_r0x03d584a0:
    if (plVar34 != (long *)0x0) {
LAB_03d584d4:
      iVar18 = iVar44;
      lVar39 = *plVar34;
      uVar58 = (ulong)*(ushort *)(lVar39 + 0x12e);
      if (uVar58 != 0) {
        piVar54 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
        do {
          if (*(long *)(piVar54 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar19 = (undefined8 *)(lVar39 + (long)*piVar54 * 0x10 + 0x138);
            goto LAB_03d58528;
          }
          uVar58 = uVar58 - 1;
          piVar54 = piVar54 + 4;
        } while (uVar58 != 0);
      }
      uVar50 = 0;
      puVar19 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d58528:
      ppppplVar67 = (long *****)(*(code *)*puVar19)(plVar34,puVar19[1]);
    }
LAB_03d58534:
    if (lVar29 == 0) {
      if (iVar18 == 10) goto LAB_03d58558;
      if ((iVar18 != 8) && (iVar18 != 0)) goto LAB_03d58578;
LAB_03d5854c:
      uVar20 = func_0x05ac751c(0);
LAB_03d585bc:
      func_0x03280b7c(uVar20,uVar66);
LAB_03d585c4:
      func_0x03280cac();
    }
    func_0x03280ca4(lVar29);
  } while( true );
  while( true ) {
    uVar58 = uVar58 - 1;
    piVar54 = piVar54 + 4;
    if (uVar58 == 0) break;
    if (*(long *)(piVar54 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar19 = (undefined8 *)(lVar45 + (long)*piVar54 * 0x10 + 0x138);
      goto LAB_03d5866c;
    }
  }
LAB_03d58650:
  uVar50 = 0;
  puVar19 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d5866c:
  (*(code *)*puVar19)(plVar34,puVar19[1]);
LAB_03d58678:
  func_0x03365958(auVar77._0_8_);
  func_0x03280ca4(0);
  auVar73 = func_0x02f09514();
  lVar45 = auVar73._8_8_;
  plVar31 = auVar73._0_8_;
  *(long *)(lVar64 + -0x50) = lVar41 + -0xc0;
  *(undefined8 *)(lVar64 + -0x40) = 0x3d58690;
  *(undefined8 *)(lVar64 + -0x38) = 0;
  *(long **)(lVar64 + -0x30) = plVar34;
  *(long *)(lVar64 + -0x28) = lVar61;
  *(ulong *)(lVar64 + -0x20) = uVar66;
  *(long *)(lVar64 + -0x18) = lVar48;
  *(ulong *)(lVar64 + -0x10) = uVar60;
  *(long *)(lVar64 + -8) = auVar72._8_8_;
  if (*(long *)(uVar50 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar50 + 0x38) == 0) {
      func_0x03256878(uVar50);
    }
  }
  *(undefined8 *)(lVar64 + -0xe0) = 0;
  *(undefined8 *)(lVar64 + -0xf8) = 0;
  *(undefined8 *)(lVar64 + -0x100) = 0;
  *(undefined8 *)(lVar64 + -0xe8) = 0;
  *(undefined8 *)(lVar64 + -0xf0) = 0;
  *(undefined8 *)(lVar64 + -0x108) = 0;
  *(undefined8 *)(lVar64 + -0x110) = 0;
  puVar33 = PTR_DAT_07774b08;
  if ((plVar31 != (long *)0x0) && (puVar33 = PTR_DAT_077799b8, lVar45 != 0)) {
    *(undefined8 *)(lVar64 + -0xa0) = 0;
    *(undefined8 *)(lVar64 + -0xb8) = 0;
    *(undefined8 *)(lVar64 + -0xc0) = 0;
    *(undefined8 *)(lVar64 + -0xa8) = 0;
    *(undefined8 *)(lVar64 + -0xb0) = 0;
    *(undefined8 *)(lVar64 + -200) = 0;
    *(undefined8 *)(lVar64 + -0xd0) = 0;
    lVar41 = **(long **)(uVar50 + 0x38);
    if ((*(byte *)(lVar41 + 0x135) & 1) == 0) {
      lVar41 = func_0x0325681c(lVar41);
    }
    lVar29 = *plVar31;
    uVar60 = (ulong)*(ushort *)(lVar29 + 0x12e);
    if (uVar60 != 0) {
      piVar54 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
      do {
        if (*(long *)(piVar54 + -2) == lVar41) {
          puVar19 = (undefined8 *)(lVar29 + (long)*piVar54 * 0x10 + 0x138);
          goto LAB_03d58774;
        }
        uVar60 = uVar60 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar60 != 0);
    }
    puVar19 = (undefined8 *)func_0x03256b10(plVar31,lVar41,0);
LAB_03d58774:
    plVar34 = (long *)(*(code *)*puVar19)(plVar31,puVar19[1]);
    puVar33 = PTR_DAT_0774e8e0;
    lVar41 = 0;
    while (plVar34 != (long *)0x0) {
      lVar29 = *plVar34;
      uVar60 = (ulong)*(ushort *)(lVar29 + 0x12e);
      if (uVar60 != 0) {
        piVar54 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
        do {
          if (*(long *)(piVar54 + -2) == *(long *)puVar33) {
            puVar19 = (undefined8 *)(lVar29 + (long)*piVar54 * 0x10 + 0x138);
            goto LAB_03d587e4;
          }
          uVar60 = uVar60 - 1;
          piVar54 = piVar54 + 4;
        } while (uVar60 != 0);
      }
      puVar19 = (undefined8 *)func_0x03256b10(plVar34,*(long *)puVar33,0);
LAB_03d587e4:
      ppppplVar67 = (long *****)(*(code *)*puVar19)(plVar34,puVar19[1]);
      if (((ulong)ppppplVar67 & 1) == 0) {
        lVar45 = 0;
        if (plVar34 == (long *)0x0) goto LAB_03d58938;
        lVar29 = *plVar34;
        uVar60 = (ulong)*(ushort *)(lVar29 + 0x12e);
        if (uVar60 == 0) goto LAB_03d58910;
        piVar54 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
        goto LAB_03d588f8;
      }
      lVar29 = *(long *)(*(long *)(uVar50 + 0x38) + 0x20);
      if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
        lVar29 = func_0x0325681c(lVar29);
      }
      lVar48 = *plVar34;
      uVar60 = (ulong)*(ushort *)(lVar48 + 0x12e);
      if (uVar60 != 0) {
        piVar54 = (int *)(*(long *)(lVar48 + 0xb0) + 8);
        do {
          if (*(long *)(piVar54 + -2) == lVar29) {
            puVar19 = (undefined8 *)(lVar48 + (long)*piVar54 * 0x10 + 0x138);
            goto LAB_03d58858;
          }
          uVar60 = uVar60 - 1;
          piVar54 = piVar54 + 4;
        } while (uVar60 != 0);
      }
      puVar19 = (undefined8 *)func_0x03256b10(plVar34,lVar29,0);
LAB_03d58858:
      (*(code *)*puVar19)(lVar64 + -0x90,plVar34,puVar19[1]);
      *(undefined8 *)(lVar64 + -0x108) = *(undefined8 *)(lVar64 + -0x88);
      *(undefined8 *)(lVar64 + -0x110) = *(undefined8 *)(lVar64 + -0x90);
      *(undefined8 *)(lVar64 + -0xf8) = *(undefined8 *)(lVar64 + -0x78);
      *(undefined8 *)(lVar64 + -0x100) = *(undefined8 *)(lVar64 + -0x80);
      *(undefined8 *)(lVar64 + -0xe8) = *(undefined8 *)(lVar64 + -0x68);
      *(undefined8 *)(lVar64 + -0xf0) = *(undefined8 *)(lVar64 + -0x70);
      *(undefined8 *)(lVar64 + -0xe0) = *(undefined8 *)(lVar64 + -0x60);
      pcVar52 = *(code **)(lVar45 + 0x18);
      uVar20 = *(undefined8 *)(lVar45 + 0x40);
      *(undefined8 *)(lVar64 + -0x88) = *(undefined8 *)(lVar64 + -0x88);
      *(undefined8 *)(lVar64 + -0x90) = *(undefined8 *)(lVar64 + -0x90);
      *(undefined8 *)(lVar64 + -0x78) = *(undefined8 *)(lVar64 + -0x78);
      *(undefined8 *)(lVar64 + -0x80) = *(undefined8 *)(lVar64 + -0x80);
      *(undefined8 *)(lVar64 + -0x68) = *(undefined8 *)(lVar64 + -0x68);
      *(undefined8 *)(lVar64 + -0x70) = *(undefined8 *)(lVar64 + -0x70);
      *(undefined8 *)(lVar64 + -0x60) = *(undefined8 *)(lVar64 + -0x60);
      uVar60 = (*pcVar52)(uVar20,lVar64 + -0x90,*(undefined8 *)(lVar45 + 0x28));
      if ((uVar60 & 1) != 0) {
        *(undefined8 *)(lVar64 + -200) = *(undefined8 *)(lVar64 + -0x108);
        *(undefined8 *)(lVar64 + -0xd0) = *(undefined8 *)(lVar64 + -0x110);
        *(undefined8 *)(lVar64 + -0xb8) = *(undefined8 *)(lVar64 + -0xf8);
        *(undefined8 *)(lVar64 + -0xc0) = *(undefined8 *)(lVar64 + -0x100);
        *(undefined8 *)(lVar64 + -0xa8) = *(undefined8 *)(lVar64 + -0xe8);
        *(undefined8 *)(lVar64 + -0xb0) = *(undefined8 *)(lVar64 + -0xf0);
        *(undefined8 *)(lVar64 + -0xa0) = *(undefined8 *)(lVar64 + -0xe0);
        if (lVar41 == 0x7fffffffffffffff) goto LAB_03d589d0;
        lVar41 = lVar41 + 1;
      }
    }
    func_0x03280cac();
    puVar33 = PTR_DAT_07774b08;
  }
  uVar20 = func_0x03280a2c(puVar33);
  uVar20 = func_0x05ac7464(uVar20,0);
  do {
    func_0x03280b7c(uVar20,uVar50);
    func_0x03280ca4(lVar45);
LAB_03d589d0:
    uVar20 = func_0x03280cbc();
    func_0x03280b7c(uVar20,uVar50);
LAB_03d589dc:
    uVar20 = func_0x05ac7588(0);
  } while( true );
LAB_03d58558:
  func_0x072ce970(lVar48,lVar61,uVar60);
  goto LAB_03d58568;
LAB_03d575f4:
  uVar20 = 0;
  if (plVar31 == (long *)0x0) {
    uVar20 = func_0x05ac7660();
  }
  else {
LAB_03d5763c:
    uVar20 = func_0x05ac7588(uVar20);
  }
  goto LAB_03d57640;
  while( true ) {
    uVar50 = uVar50 - 1;
    piVar54 = piVar54 + 4;
    if (uVar50 == 0) break;
LAB_03d576c4:
    if (*(long *)(piVar54 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar19 = (undefined8 *)(lVar45 + (long)*piVar54 * 0x10 + 0x138);
      goto LAB_03d576f8;
    }
  }
LAB_03d576dc:
  uVar66 = 0;
  puVar19 = (undefined8 *)func_0x03256b10(plVar34);
LAB_03d576f8:
  (*(code *)*puVar19)(plVar34,puVar19[1]);
LAB_03d57704:
  func_0x03365958(uVar20);
  func_0x03280ca4(0);
  auVar72 = func_0x02f09514();
  lVar45 = auVar72._8_8_;
  plVar30 = auVar72._0_8_;
  *(undefined8 *)(lVar41 + -0x30) = 0x3d5771c;
  *(ulong *)(lVar41 + -0x28) = uVar60;
  *(long *****)(lVar41 + -0x20) = pppplVar55;
  *(ulong *)(lVar41 + -0x18) = uVar58;
  *(undefined8 *)(lVar41 + -0x10) = 0x7fffffffffffffff;
  *(long ******)(lVar41 + -8) = ppppplVar28;
  if (*(long *)(lVar45 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(lVar45 + 0x38) == 0) {
      func_0x03256878(lVar45);
    }
  }
  if (plVar30 == (long *)0x0) {
    uVar21 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar21 = func_0x05ac7464(uVar21,0);
    goto LAB_03d57b10;
  }
  lVar29 = *(long *)(*(long *)(lVar45 + 0x38) + 8);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c(lVar29);
  }
  plVar31 = (long *)func_0x03280b90(plVar30,lVar29);
  if (plVar31 == (long *)0x0) {
    lVar29 = **(long **)(lVar45 + 0x38);
    if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
      lVar29 = func_0x0325681c(lVar29);
    }
    lVar48 = *plVar30;
    uVar50 = (ulong)*(ushort *)(lVar48 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar48 + 0xb0) + 8);
      do {
        if (*(long *)(piVar54 + -2) == lVar29) {
          puVar19 = (undefined8 *)(lVar48 + (long)*piVar54 * 0x10 + 0x138);
          goto LAB_03d578d0;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    uVar66 = 0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar30);
LAB_03d578d0:
    plVar31 = (long *)(*(code *)*puVar19)(plVar30,puVar19[1]);
    puVar33 = PTR_DAT_0774e8e0;
    if (plVar31 == (long *)0x0) goto LAB_03d57b18;
    lVar29 = *plVar31;
    uVar50 = (ulong)*(ushort *)(lVar29 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
      do {
        if (*(long *)(piVar54 + -2) == *(long *)PTR_DAT_0774e8e0) {
          puVar19 = (undefined8 *)(lVar29 + (long)*piVar54 * 0x10 + 0x138);
          goto LAB_03d57938;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    uVar66 = 0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar31);
LAB_03d57938:
    uVar50 = (*(code *)*puVar19)(plVar31,puVar19[1]);
    if ((uVar50 & 1) == 0) {
      plVar30 = (long *)0x0;
      uVar60 = 10;
      goto joined_r0x03d579ac;
    }
    lVar29 = *(long *)(*(long *)(lVar45 + 0x38) + 0x38);
    if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
      lVar29 = func_0x0325681c(lVar29);
    }
    lVar48 = *plVar31;
    uVar50 = (ulong)*(ushort *)(lVar48 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar48 + 0xb0) + 8);
      do {
        if (*(long *)(piVar54 + -2) == lVar29) {
          puVar19 = (undefined8 *)(lVar48 + (long)*piVar54 * 0x10 + 0x138);
          goto LAB_03d579e8;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    uVar66 = 0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar31);
LAB_03d579e8:
    ppppplVar67 = (long *****)(*(code *)*puVar19)(plVar31,puVar19[1]);
    lVar29 = *plVar31;
    uVar50 = (ulong)*(ushort *)(lVar29 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
      do {
        if (*(long *)(piVar54 + -2) == *(long *)puVar33) {
          puVar19 = (undefined8 *)(lVar29 + (long)*piVar54 * 0x10 + 0x138);
          goto LAB_03d57a44;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    uVar66 = 0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar31);
LAB_03d57a44:
    uVar50 = (*(code *)*puVar19)(plVar31,puVar19[1]);
    bVar16 = (uVar50 & 1) == 0;
    plVar30 = (long *)0x0;
    ppppplVar42 = (long *****)0x0;
    if (bVar16) {
      ppppplVar42 = ppppplVar67;
    }
    uVar17 = 8;
    if (bVar16) {
      uVar17 = 10;
    }
    uVar60 = (ulong)uVar17;
    if (plVar31 == (long *)0x0) goto LAB_03d57acc;
    goto LAB_03d57a6c;
  }
  lVar29 = *(long *)(*(long *)(lVar45 + 0x38) + 0x10);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c(lVar29);
  }
  lVar48 = *plVar31;
  uVar50 = (ulong)*(ushort *)(lVar48 + 0x12e);
  if (uVar50 != 0) {
    piVar54 = (int *)(*(long *)(lVar48 + 0xb0) + 8);
    do {
      if (*(long *)(piVar54 + -2) == lVar29) {
        puVar19 = (undefined8 *)(lVar48 + (long)*piVar54 * 0x10 + 0x138);
        goto LAB_03d5784c;
      }
      uVar50 = uVar50 - 1;
      piVar54 = piVar54 + 4;
    } while (uVar50 != 0);
  }
  uVar66 = 0;
  puVar19 = (undefined8 *)func_0x03256b10(plVar31);
LAB_03d5784c:
  iVar18 = (*(code *)*puVar19)(plVar31,puVar19[1]);
  if (iVar18 == 0) {
    ppppplVar42 = (long *****)0x0;
  }
  else {
    if (iVar18 == 1) {
      lVar41 = *(long *)(*(long *)(lVar45 + 0x38) + 8);
      if ((*(byte *)(lVar41 + 0x135) & 1) == 0) {
        lVar41 = func_0x0325681c(lVar41);
      }
      lVar45 = *plVar31;
      uVar50 = (ulong)*(ushort *)(lVar45 + 0x12e);
      if (uVar50 != 0) {
        piVar54 = (int *)(*(long *)(lVar45 + 0xb0) + 8);
        do {
          if (*(long *)(piVar54 + -2) == lVar41) {
            puVar19 = (undefined8 *)(lVar45 + (long)*piVar54 * 0x10 + 0x138);
            goto LAB_03d579c0;
          }
          uVar50 = uVar50 - 1;
          piVar54 = piVar54 + 4;
        } while (uVar50 != 0);
      }
      puVar19 = (undefined8 *)func_0x03256b10(plVar31,lVar41,0);
LAB_03d579c0:
                    /* WARNING: Could not recover jumptable at 0x03d579d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppppplVar67 = (long *****)(*(code *)*puVar19)(plVar31,0,puVar19[1]);
      return ppppplVar67;
    }
    do {
      uVar21 = func_0x05ac751c(0);
LAB_03d57b10:
      func_0x03280b7c(uVar21,lVar45);
LAB_03d57b18:
      func_0x03280cac();
      do {
        auVar77 = func_0x03280ca4(plVar30);
        uVar21 = auVar77._0_8_;
        if (auVar77._8_4_ != 1) {
          if (plVar31 == (long *)0x0) goto LAB_03d57bcc;
          lVar29 = *plVar31;
          uVar50 = (ulong)*(ushort *)(lVar29 + 0x12e);
          if (uVar50 == 0) goto LAB_03d57ba4;
          piVar54 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
          goto LAB_03d57b8c;
        }
        puVar19 = (undefined8 *)func_0x072ce910(uVar21);
        plVar30 = (long *)*puVar19;
        func_0x072ce920();
        uVar60 = 0;
joined_r0x03d579ac:
        ppppplVar42 = (long *****)0x0;
        if (plVar31 != (long *)0x0) {
LAB_03d57a6c:
          lVar29 = *plVar31;
          uVar50 = (ulong)*(ushort *)(lVar29 + 0x12e);
          if (uVar50 != 0) {
            piVar54 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
            do {
              if (*(long *)(piVar54 + -2) == *(long *)PTR_DAT_0774e8c8) {
                puVar19 = (undefined8 *)(lVar29 + (long)*piVar54 * 0x10 + 0x138);
                goto LAB_03d57ac0;
              }
              uVar50 = uVar50 - 1;
              piVar54 = piVar54 + 4;
            } while (uVar50 != 0);
          }
          uVar66 = 0;
          puVar19 = (undefined8 *)func_0x03256b10(plVar31);
LAB_03d57ac0:
          (*(code *)*puVar19)(plVar31,puVar19[1]);
        }
LAB_03d57acc:
      } while (plVar30 != (long *)0x0);
    } while (((uint)uVar60 | 8) == 8);
  }
  return ppppplVar42;
  while( true ) {
    uVar50 = uVar50 - 1;
    piVar54 = piVar54 + 4;
    if (uVar50 == 0) break;
LAB_03d57b8c:
    if (*(long *)(piVar54 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar19 = (undefined8 *)(lVar29 + (long)*piVar54 * 0x10 + 0x138);
      goto LAB_03d57bc0;
    }
  }
LAB_03d57ba4:
  uVar66 = 0;
  puVar19 = (undefined8 *)func_0x03256b10(plVar31);
LAB_03d57bc0:
  (*(code *)*puVar19)(plVar31,puVar19[1]);
LAB_03d57bcc:
  func_0x03365958(uVar21);
  func_0x03280ca4(0);
  auVar72 = func_0x02f09514();
  lVar29 = auVar72._8_8_;
  plVar30 = auVar72._0_8_;
  *(undefined8 *)(lVar41 + -0x60) = 0x3d57be4;
  *(ulong *)(lVar41 + -0x58) = uVar60;
  *(undefined8 *)(lVar41 + -0x50) = uVar21;
  *(undefined8 *)(lVar41 + -0x48) = 0;
  *(long **)(lVar41 + -0x40) = plVar31;
  *(long *)(lVar41 + -0x38) = lVar45;
  if (*(long *)(lVar29 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(lVar29 + 0x38) == 0) {
      func_0x03256878(lVar29);
    }
  }
  if (plVar30 == (long *)0x0) {
    uVar21 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar21 = func_0x05ac7464(uVar21,0);
    goto LAB_03d57fd8;
  }
  lVar45 = *(long *)(*(long *)(lVar29 + 0x38) + 8);
  if ((*(byte *)(lVar45 + 0x135) & 1) == 0) {
    lVar45 = func_0x0325681c(lVar45);
  }
  plVar31 = (long *)func_0x03280b90(plVar30,lVar45);
  if (plVar31 == (long *)0x0) {
    lVar45 = **(long **)(lVar29 + 0x38);
    if ((*(byte *)(lVar45 + 0x135) & 1) == 0) {
      lVar45 = func_0x0325681c(lVar45);
    }
    lVar48 = *plVar30;
    uVar50 = (ulong)*(ushort *)(lVar48 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar48 + 0xb0) + 8);
      do {
        if (*(long *)(piVar54 + -2) == lVar45) {
          puVar19 = (undefined8 *)(lVar48 + (long)*piVar54 * 0x10 + 0x138);
          goto LAB_03d57d98;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    uVar66 = 0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar30);
LAB_03d57d98:
    plVar31 = (long *)(*(code *)*puVar19)(plVar30,puVar19[1]);
    puVar33 = PTR_DAT_0774e8e0;
    if (plVar31 == (long *)0x0) goto LAB_03d57fe0;
    lVar45 = *plVar31;
    uVar50 = (ulong)*(ushort *)(lVar45 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar45 + 0xb0) + 8);
      do {
        if (*(long *)(piVar54 + -2) == *(long *)PTR_DAT_0774e8e0) {
          puVar19 = (undefined8 *)(lVar45 + (long)*piVar54 * 0x10 + 0x138);
          goto LAB_03d57e00;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    uVar66 = 0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar31);
LAB_03d57e00:
    uVar50 = (*(code *)*puVar19)(plVar31,puVar19[1]);
    if ((uVar50 & 1) == 0) {
      plVar30 = (long *)0x0;
      uVar60 = 10;
      goto joined_r0x03d57e74;
    }
    lVar45 = *(long *)(*(long *)(lVar29 + 0x38) + 0x38);
    if ((*(byte *)(lVar45 + 0x135) & 1) == 0) {
      lVar45 = func_0x0325681c(lVar45);
    }
    lVar48 = *plVar31;
    uVar50 = (ulong)*(ushort *)(lVar48 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar48 + 0xb0) + 8);
      do {
        if (*(long *)(piVar54 + -2) == lVar45) {
          puVar19 = (undefined8 *)(lVar48 + (long)*piVar54 * 0x10 + 0x138);
          goto LAB_03d57eb0;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    uVar66 = 0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar31);
LAB_03d57eb0:
    ppppplVar67 = (long *****)(*(code *)*puVar19)(plVar31,puVar19[1]);
    lVar45 = *plVar31;
    uVar50 = (ulong)*(ushort *)(lVar45 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar45 + 0xb0) + 8);
      do {
        if (*(long *)(piVar54 + -2) == *(long *)puVar33) {
          puVar19 = (undefined8 *)(lVar45 + (long)*piVar54 * 0x10 + 0x138);
          goto LAB_03d57f0c;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    uVar66 = 0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar31);
LAB_03d57f0c:
    uVar50 = (*(code *)*puVar19)(plVar31,puVar19[1]);
    bVar16 = (uVar50 & 1) == 0;
    plVar30 = (long *)0x0;
    ppppplVar42 = (long *****)0x0;
    if (bVar16) {
      ppppplVar42 = ppppplVar67;
    }
    uVar17 = 8;
    if (bVar16) {
      uVar17 = 10;
    }
    uVar60 = (ulong)uVar17;
    if (plVar31 == (long *)0x0) goto LAB_03d57f94;
    goto LAB_03d57f34;
  }
  lVar45 = *(long *)(*(long *)(lVar29 + 0x38) + 0x10);
  if ((*(byte *)(lVar45 + 0x135) & 1) == 0) {
    lVar45 = func_0x0325681c(lVar45);
  }
  lVar48 = *plVar31;
  uVar50 = (ulong)*(ushort *)(lVar48 + 0x12e);
  if (uVar50 != 0) {
    piVar54 = (int *)(*(long *)(lVar48 + 0xb0) + 8);
    do {
      if (*(long *)(piVar54 + -2) == lVar45) {
        puVar19 = (undefined8 *)(lVar48 + (long)*piVar54 * 0x10 + 0x138);
        goto LAB_03d57d14;
      }
      uVar50 = uVar50 - 1;
      piVar54 = piVar54 + 4;
    } while (uVar50 != 0);
  }
  uVar66 = 0;
  puVar19 = (undefined8 *)func_0x03256b10(plVar31);
LAB_03d57d14:
  iVar18 = (*(code *)*puVar19)(plVar31,puVar19[1]);
  if (iVar18 == 0) {
    ppppplVar42 = (long *****)0x0;
  }
  else {
    if (iVar18 == 1) {
      lVar41 = *(long *)(*(long *)(lVar29 + 0x38) + 8);
      if ((*(byte *)(lVar41 + 0x135) & 1) == 0) {
        lVar41 = func_0x0325681c(lVar41);
      }
      lVar45 = *plVar31;
      uVar50 = (ulong)*(ushort *)(lVar45 + 0x12e);
      if (uVar50 != 0) {
        piVar54 = (int *)(*(long *)(lVar45 + 0xb0) + 8);
        do {
          if (*(long *)(piVar54 + -2) == lVar41) {
            puVar19 = (undefined8 *)(lVar45 + (long)*piVar54 * 0x10 + 0x138);
            goto LAB_03d57e88;
          }
          uVar50 = uVar50 - 1;
          piVar54 = piVar54 + 4;
        } while (uVar50 != 0);
      }
      puVar19 = (undefined8 *)func_0x03256b10(plVar31,lVar41,0);
LAB_03d57e88:
                    /* WARNING: Could not recover jumptable at 0x03d57ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppppplVar67 = (long *****)(*(code *)*puVar19)(plVar31,0,puVar19[1]);
      return ppppplVar67;
    }
    do {
      uVar21 = func_0x05ac751c(0);
LAB_03d57fd8:
      func_0x03280b7c(uVar21,lVar29);
LAB_03d57fe0:
      func_0x03280cac();
      do {
        auVar77 = func_0x03280ca4(plVar30);
        uVar21 = auVar77._0_8_;
        if (auVar77._8_4_ != 1) {
          if (plVar31 == (long *)0x0) goto LAB_03d58094;
          lVar45 = *plVar31;
          uVar50 = (ulong)*(ushort *)(lVar45 + 0x12e);
          if (uVar50 == 0) goto LAB_03d5806c;
          piVar54 = (int *)(*(long *)(lVar45 + 0xb0) + 8);
          goto LAB_03d58054;
        }
        puVar19 = (undefined8 *)func_0x072ce910(uVar21);
        plVar30 = (long *)*puVar19;
        func_0x072ce920();
        uVar60 = 0;
joined_r0x03d57e74:
        ppppplVar42 = (long *****)0x0;
        if (plVar31 != (long *)0x0) {
LAB_03d57f34:
          lVar45 = *plVar31;
          uVar50 = (ulong)*(ushort *)(lVar45 + 0x12e);
          if (uVar50 != 0) {
            piVar54 = (int *)(*(long *)(lVar45 + 0xb0) + 8);
            do {
              if (*(long *)(piVar54 + -2) == *(long *)PTR_DAT_0774e8c8) {
                puVar19 = (undefined8 *)(lVar45 + (long)*piVar54 * 0x10 + 0x138);
                goto LAB_03d57f88;
              }
              uVar50 = uVar50 - 1;
              piVar54 = piVar54 + 4;
            } while (uVar50 != 0);
          }
          uVar66 = 0;
          puVar19 = (undefined8 *)func_0x03256b10(plVar31);
LAB_03d57f88:
          (*(code *)*puVar19)(plVar31,puVar19[1]);
        }
LAB_03d57f94:
      } while (plVar30 != (long *)0x0);
    } while (((uint)uVar60 | 8) == 8);
  }
  return ppppplVar42;
  while( true ) {
    uVar60 = uVar60 - 1;
    piVar54 = piVar54 + 4;
    if (uVar60 == 0) break;
LAB_03d588f8:
    if (*(long *)(piVar54 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar19 = (undefined8 *)(lVar29 + (long)*piVar54 * 0x10 + 0x138);
      goto LAB_03d5892c;
    }
  }
LAB_03d58910:
  puVar19 = (undefined8 *)func_0x03256b10(plVar34,*(long *)PTR_DAT_0774e8c8,0);
LAB_03d5892c:
  ppppplVar67 = (long *****)(*(code *)*puVar19)(plVar34,puVar19[1]);
LAB_03d58938:
  if (lVar41 == 0) {
    extraout_x8[6] = 0;
    extraout_x8[3] = 0;
    extraout_x8[2] = 0;
    extraout_x8[5] = 0;
    extraout_x8[4] = 0;
    extraout_x8[1] = 0;
    *extraout_x8 = 0;
  }
  else {
    if (lVar41 != 1) goto LAB_03d589dc;
    uVar69 = *(undefined8 *)(lVar64 + -0xb8);
    uVar68 = *(undefined8 *)(lVar64 + -0xc0);
    uVar21 = *(undefined8 *)(lVar64 + -0xa8);
    uVar20 = *(undefined8 *)(lVar64 + -0xb0);
    uVar71 = *(undefined8 *)(lVar64 + -200);
    uVar70 = *(undefined8 *)(lVar64 + -0xd0);
    extraout_x8[6] = *(undefined8 *)(lVar64 + -0xa0);
    extraout_x8[3] = uVar69;
    extraout_x8[2] = uVar68;
    extraout_x8[5] = uVar21;
    extraout_x8[4] = uVar20;
    extraout_x8[1] = uVar71;
    *extraout_x8 = uVar70;
  }
  return ppppplVar67;
}

