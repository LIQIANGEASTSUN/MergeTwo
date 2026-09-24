/* Ghidra 12.1.2 native pseudocode; RVA 0x6A833C0; Merger.MergeBoard.Logic.ToolSpawnHandler.GraphToResource; status ok */


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
Merger_MergeBoard_Logic_ToolSpawnHandler__GraphToResource
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
  long ****pppplVar22;
  long *****ppppplVar23;
  long ***ppplVar24;
  long *****ppppplVar25;
  long *****ppppplVar26;
  long *****ppppplVar27;
  long lVar28;
  long *plVar29;
  long *plVar30;
  long ****pppplVar31;
  undefined *puVar32;
  long *plVar33;
  long ***ppplVar34;
  long ***ppplVar35;
  long **pplVar36;
  long ***ppplVar37;
  long lVar38;
  long *****ppppplVar39;
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
  undefined8 auStack_9c0 [16];
  undefined8 auStack_940 [8];
  undefined1 auStack_900 [16];
  long alStack_8f0 [8];
  long alStack_8b0 [2];
  undefined4 uStack_89c;
  long lStack_898;
  undefined1 auStack_890 [8];
  long alStack_888 [23];
  long ***ppplStack_7d0;
  long ****apppplStack_7c8 [3];
  char acStack_7ac [4];
  long ****apppplStack_7a8 [19];
  undefined1 auStack_710 [16];
  long ****apppplStack_700 [22];
  long ****apppplStack_650 [2];
  undefined1 auStack_63c [12];
  long ****apppplStack_630 [36];
  char acStack_50c [4];
  long ****apppplStack_508 [19];
  long ****apppplStack_470 [4];
  long ****apppplStack_450 [32];
  undefined1 auStack_350 [16];
  long ****apppplStack_340 [5];
  long **applStack_318 [18];
  long ***appplStack_288 [5];
  byte abStack_25c [4];
  long ***appplStack_258 [20];
  long ****apppplStack_1b8 [3];
  byte abStack_19c [4];
  long ****apppplStack_198 [19];
  long *****appppplStack_100 [4];
  long ****pppplStack_e0;
  long *****ppppplStack_d8;
  char acStack_cc [4];
  long ***ppplStack_c8;
  long *****ppppplStack_58;
  long *****ppppplStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  uint uStack_24;
  
  puVar32 = PTR_DAT_07831b50;
  if ((bRam0000000007e2a771 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831b50);
    bRam0000000007e2a771 = 1;
  }
  plVar33 = *(long **)(param_1 + 0x70);
  lVar41 = *(long *)puVar32;
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
  uStack_24 = 0;
  if (plVar33 != (long *)0x0) {
    ppplVar34 = *ppppplVar42[7];
    if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
      ppplVar34 = (long ***)func_0x0325681c(ppplVar34);
    }
    lVar41 = *plVar33;
    uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
      do {
        if (*(long ****)(piVar54 + -2) == ppplVar34) {
          puVar19 = (undefined8 *)(lVar41 + (long)(*piVar54 + 1) * 0x10 + 0x138);
          goto LAB_03ce2aac;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    puVar19 = (undefined8 *)func_0x03256b10(plVar33,ppplVar34,1);
LAB_03ce2aac:
    uVar50 = (*(code *)*puVar19)(plVar33,param_2,&uStack_24,puVar19[1]);
    if ((uVar50 & 1) == 0) {
      uStack_24 = 0;
    }
    return (long *****)(ulong)uStack_24;
  }
  func_0x03280a2c(PTR_DAT_0774e5b0);
  uVar20 = func_0x03280ca0();
  uVar21 = func_0x03280a2c(PTR_DAT_07779930);
  ppppplVar39 = (long *****)0x0;
  func_0x056e7310(uVar20,uVar21,0);
  auVar72 = func_0x03280b7c(uVar20,ppppplVar42);
  plVar30 = auVar72._0_8_;
  ppppplVar40 = ppppplVar67;
  ppppplStack_50 = ppppplVar42;
  plStack_48 = plVar33;
  uStack_40 = param_2;
  uStack_38 = uVar20;
  if (ppppplVar67[7] == (long ****)0x0) {
    func_0x03256878(ppppplVar67);
  }
  ppppplStack_58 = (long *****)0x0;
  if (plVar30 != (long *)0x0) {
    ppplVar34 = *ppppplVar67[7];
    if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
      ppplVar34 = (long ***)func_0x0325681c(ppplVar34);
    }
    lVar41 = *plVar30;
    uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
      do {
        if (*(long ****)(piVar54 + -2) == ppplVar34) {
          puVar19 = (undefined8 *)(lVar41 + (long)(*piVar54 + 1) * 0x10 + 0x138);
          goto LAB_03ce2bb4;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    puVar19 = (undefined8 *)func_0x03256b10(plVar30,ppplVar34,1);
LAB_03ce2bb4:
    uVar50 = (*(code *)*puVar19)(plVar30,auVar72._8_8_,&ppppplStack_58,puVar19[1]);
    if ((uVar50 & 1) == 0) {
      ppppplStack_58 = ppppplVar39;
    }
    return ppppplStack_58;
  }
  func_0x03280a2c(PTR_DAT_0774e5b0);
  uVar20 = func_0x03280ca0();
  uVar21 = func_0x03280a2c(PTR_DAT_07779930);
  ppppplVar42 = (long *****)0x0;
  func_0x056e7310(uVar20,uVar21);
  auVar72 = func_0x03280b7c(uVar20,ppppplVar67);
  ppppplVar67 = auVar72._8_8_;
  pppplVar55 = auVar72._0_8_;
  pppplVar22 = (long ****)tpidr_el0;
  ppplStack_c8 = pppplVar22[5];
  pppplVar57 = (long ****)param_5[7];
  appppplStack_100[0] = ppppplVar42;
  appppplStack_100[1] = ppppplVar40;
  appppplStack_100[2] = ppppplVar42;
  appppplStack_100[3] = ppppplVar67;
  if (pppplVar57 == (long ****)0x0) {
    func_0x03256878(param_5);
    pppplVar57 = (long ****)param_5[7];
  }
  ppplVar34 = (long ***)(ulong)*(uint *)((long)pppplVar57[1] + 0xfc);
  pppplVar59 = (long ****)(ulong)*(uint *)((long)pppplVar57[4] + 0xfc);
  pppplVar65 = (long ****)((long)appppplStack_100 - ((long)ppplVar34 + 0xfU & 0x1fffffff0));
  uVar50 = (long)pppplVar59 + 0xfU & 0x1fffffff0;
  pppplVar62 = (long ****)((long)pppplVar65 - uVar50);
  ppppplVar42 = (long *****)((long)pppplVar62 - uVar50);
  func_0x072ce9a0(ppppplVar42,0,pppplVar59);
  if (pppplVar55 == (long ****)0x0) {
    func_0x03280a2c(PTR_DAT_0774e5b0);
    pppplVar22 = (long ****)func_0x03280ca0();
    uVar20 = func_0x03280a2c(PTR_DAT_07779930);
    pppplVar47 = (long ****)0x0;
    func_0x056e7310(pppplVar22,uVar20);
    func_0x03280b7c(pppplVar22,param_5);
  }
  else {
    ppppplVar40 = ppppplVar67;
    if (-1 < *(int *)(pppplVar57[1] + 5)) {
      ppppplVar40 = (long *****)(appppplStack_100 + 3);
    }
    func_0x072ce970(pppplVar65,ppppplVar40,ppplVar34);
    ppplVar35 = *pppplVar57;
    if ((*(byte *)((long)ppplVar35 + 0x135) & 1) == 0) {
      ppplVar35 = (long ***)func_0x0325681c(ppplVar35);
      pppplVar57 = (long ****)param_5[7];
    }
    if (-1 < *(int *)(pppplVar57[1] + 5)) {
      pppplVar65 = (long ****)*pppplVar65;
    }
    ppplVar46 = *pppplVar55;
    uVar50 = (ulong)*(ushort *)((long)ppplVar46 + 0x12e);
    if (uVar50 != 0) {
      pplVar36 = ppplVar46[0x16] + 1;
      do {
        if ((long ***)pplVar36[-1] == ppplVar35) {
          ppplVar46 = ppplVar46 + (long)(*(int *)pplVar36 + 1) * 2 + 0x27;
          goto LAB_03ce2d68;
        }
        uVar50 = uVar50 - 1;
        pplVar36 = pplVar36 + 2;
      } while (uVar50 != 0);
    }
    ppplVar46 = (long ***)func_0x03256b10(pppplVar55,ppplVar35,1);
LAB_03ce2d68:
    pplVar36 = ppplVar46[1];
    ppppplVar40 = &pppplStack_e0;
    pppplStack_e0 = pppplVar65;
    ppppplStack_d8 = ppppplVar42;
    (*(code *)pplVar36[2])(pplVar36[1],pplVar36,pppplVar55,ppppplVar40,acStack_cc);
    ppppplVar39 = ppppplVar42;
    if ((acStack_cc[0] == '\0') &&
       (ppppplVar39 = appppplStack_100[0], -1 < *(int *)(param_5[7][4] + 5))) {
      ppppplVar39 = (long *****)(appppplStack_100 + 2);
    }
    func_0x072ce970(pppplVar62,ppppplVar39,pppplVar59);
    pppplVar47 = pppplVar59;
    ppppplVar39 = (long *****)func_0x072ce970(appppplStack_100[1],pppplVar62);
    if (pppplVar22[5] == ppplStack_c8) {
      return ppppplVar39;
    }
  }
  auVar72 = func_0x072ce990();
  plVar33 = auVar72._0_8_;
  ppppplVar42[-6] = (long ****)0x3ce2e40;
  ppppplVar42[-5] = pppplVar55;
  ppppplVar42[-4] = pppplVar59;
  ppppplVar42[-3] = pppplVar57;
  ppppplVar42[-2] = pppplVar22;
  ppppplVar42[-1] = param_5;
  ppppplVar39 = ppppplVar40;
  if (ppppplVar40[7] == (long ****)0x0) {
    func_0x03256878(ppppplVar40);
  }
  if (plVar33 != (long *)0x0) {
    ppplVar34 = *ppppplVar40[7];
    if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
      ppplVar34 = (long ***)func_0x0325681c(ppplVar34);
    }
    lVar41 = *plVar33;
    uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
      do {
        if (*(long ****)(piVar54 + -2) == ppplVar34) {
          puVar19 = (undefined8 *)(lVar41 + (long)(*piVar54 + 7) * 0x10 + 0x138);
          goto LAB_03ce2ed8;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    puVar19 = (undefined8 *)func_0x03256b10(plVar33,ppplVar34,7);
LAB_03ce2ed8:
    uVar17 = (*(code *)*puVar19)(plVar33,auVar72._8_8_,pppplVar47,puVar19[1]);
    if ((uVar17 & 1) == 0) {
      *pppplVar47 = (long ***)0x0;
    }
    else {
      ppplVar34 = *ppppplVar40[7];
      if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
        ppplVar34 = (long ***)func_0x0325681c(ppplVar34);
      }
      lVar41 = *plVar33;
      uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
      if (uVar50 != 0) {
        piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
        do {
          if (*(long ****)(piVar54 + -2) == ppplVar34) {
            puVar19 = (undefined8 *)(lVar41 + (long)(*piVar54 + 6) * 0x10 + 0x138);
            goto LAB_03ce2f64;
          }
          uVar50 = uVar50 - 1;
          piVar54 = piVar54 + 4;
        } while (uVar50 != 0);
      }
      puVar19 = (undefined8 *)func_0x03256b10(plVar33,ppplVar34,6);
LAB_03ce2f64:
      (*(code *)*puVar19)(plVar33,auVar72._8_8_,puVar19[1]);
    }
    return (long *****)(ulong)(uVar17 & 1);
  }
  func_0x03280a2c(PTR_DAT_0774e5b0);
  pppplVar22 = (long ****)func_0x03280ca0();
  uVar20 = func_0x03280a2c(PTR_DAT_07779930);
  pppplVar57 = (long ****)0x0;
  func_0x056e7310(pppplVar22,uVar20);
  auVar72 = func_0x03280b7c(pppplVar22,ppppplVar40);
  ppppplVar26 = auVar72._8_8_;
  ppppplVar25 = auVar72._0_8_;
  ppppplVar15 = ppppplVar42 + -0x12;
  ppppplVar42[-0x12] = (long ****)&stack0xffffffffffffff40;
  ppppplVar42[-0x11] = (long ****)0x3ce2fc4;
  ppppplVar42[-0x10] = (long ****)ppppplVar67;
  ppppplVar42[-0xe] = pppplVar65;
  ppppplVar42[-0xd] = (long ****)ppppplVar42;
  ppppplVar42[-0xc] = pppplVar62;
  ppppplVar42[-0xb] = pppplVar55;
  ppppplVar42[-10] = pppplVar47;
  ppppplVar42[-9] = (long ****)ppppplVar40;
  ppppplVar42[-8] = (long ****)0x0;
  ppppplVar42[-7] = pppplVar22;
  ppplVar35 = (long ***)tpidr_el0;
  ppppplVar42[-0x13] = (long ****)ppplVar35[5];
  ppppplVar42[-0x17] = (long ****)ppppplVar26;
  pppplVar22 = ppppplVar39[7];
  ppppplVar67 = ppppplVar39;
  if (pppplVar22 == (long ****)0x0) {
    func_0x03256878(ppppplVar39);
    pppplVar22 = ppppplVar39[7];
  }
  ppplVar46 = (long ***)(ulong)*(uint *)((long)pppplVar22[1] + 0xfc);
  pppplVar59 = (long ****)((long)ppppplVar42 + (-0xc0 - ((long)ppplVar46 + 0xfU & 0x1fffffff0)));
  pppplVar55 = pppplVar59;
  if (ppppplVar25 == (long *****)0x0) {
    func_0x03280a2c(PTR_DAT_0774e5b0);
    ppppplVar25 = (long *****)func_0x03280ca0();
    uVar20 = func_0x03280a2c(PTR_DAT_07779930);
    ppppplVar40 = (long *****)0x0;
    func_0x056e7310(ppppplVar25,uVar20,0);
    ppppplVar23 = (long *****)func_0x03280b7c(ppppplVar25,ppppplVar39);
  }
  else {
    ppppplVar63 = (long *****)(ulong)*(uint *)((long)pppplVar22[5] + 0xfc);
    ppppplVar67 = ppppplVar26;
    if (-1 < *(int *)(pppplVar22[1] + 5)) {
      ppppplVar67 = ppppplVar42 + -0x17;
    }
    func_0x072ce970(pppplVar59,ppppplVar67,ppplVar46);
    ppplVar37 = *pppplVar22;
    if ((*(byte *)((long)ppplVar37 + 0x135) & 1) == 0) {
      ppplVar37 = (long ***)func_0x0325681c(ppplVar37);
      pppplVar22 = ppppplVar39[7];
    }
    pppplVar62 = pppplVar59;
    if (-1 < *(int *)(pppplVar22[1] + 5)) {
      pppplVar62 = (long ****)*pppplVar59;
    }
    pppplVar22 = *ppppplVar25;
    uVar50 = (ulong)*(ushort *)((long)pppplVar22 + 0x12e);
    if (uVar50 != 0) {
      ppplVar24 = pppplVar22[0x16] + 1;
      do {
        if ((long ***)ppplVar24[-1] == ppplVar37) {
          pppplVar22 = pppplVar22 + (long)(*(int *)ppplVar24 + 7) * 2 + 0x27;
          goto LAB_03ce30d8;
        }
        uVar50 = uVar50 - 1;
        ppplVar24 = ppplVar24 + 2;
      } while (uVar50 != 0);
    }
    pppplVar22 = (long ****)func_0x03256b10(ppppplVar25,ppplVar37,7);
LAB_03ce30d8:
    ppppplVar42[-0x16] = pppplVar62;
    ppppplVar42[-0x15] = pppplVar57;
    ppplVar37 = pppplVar22[1];
    ppppplVar67 = ppppplVar42 + -0x16;
    (*(code *)ppplVar37[2])
              (ppplVar37[1],ppplVar37,ppppplVar25,ppppplVar67,(long)ppppplVar42 + -0x9c);
    bVar3 = *(byte *)((long)ppppplVar42 + -0x9c);
    pppplVar22 = (long ****)(ulong)bVar3;
    if (bVar3 == 0) {
      ppppplVar40 = ppppplVar63;
      func_0x072ce9a0(pppplVar57,0,ppppplVar63);
    }
    else {
      pppplVar57 = ppppplVar39[7];
      ppppplVar67 = ppppplVar26;
      if (-1 < *(int *)(pppplVar57[1] + 5)) {
        ppppplVar67 = ppppplVar42 + -0x17;
      }
      func_0x072ce970(pppplVar59,ppppplVar67,ppplVar46);
      ppplVar37 = *pppplVar57;
      if ((*(byte *)((long)ppplVar37 + 0x135) & 1) == 0) {
        ppplVar37 = (long ***)func_0x0325681c(ppplVar37);
        pppplVar57 = ppppplVar39[7];
      }
      if (-1 < *(int *)(pppplVar57[1] + 5)) {
        pppplVar55 = (long ****)*pppplVar59;
      }
      pppplVar62 = *ppppplVar25;
      uVar50 = (ulong)*(ushort *)((long)pppplVar62 + 0x12e);
      if (uVar50 != 0) {
        ppplVar24 = pppplVar62[0x16] + 1;
        do {
          if ((long ***)ppplVar24[-1] == ppplVar37) {
            pppplVar62 = pppplVar62 + (long)(*(int *)ppplVar24 + 6) * 2 + 0x27;
            goto LAB_03ce31ac;
          }
          uVar50 = uVar50 - 1;
          ppplVar24 = ppplVar24 + 2;
        } while (uVar50 != 0);
      }
      pppplVar62 = (long ****)func_0x03256b10(ppppplVar25,ppplVar37,6);
LAB_03ce31ac:
      ppppplVar42[-0x16] = pppplVar55;
      ppplVar37 = pppplVar62[1];
      ppppplVar67 = ppppplVar42 + -0x16;
      ppppplVar40 = ppppplVar25;
      (*(code *)ppplVar37[2])
                (ppplVar37[1],ppplVar37,ppppplVar25,ppppplVar67,(long)ppppplVar42 + -0x9c);
    }
    ppppplVar27 = ppppplVar42 + -0x13;
    ppppplVar23 = (long *****)(ulong)(bVar3 != 0);
    ppppplVar42 = ppppplVar63;
    if ((long ****)ppplVar35[5] == *ppppplVar27) {
      return ppppplVar23;
    }
  }
  auVar72 = func_0x072ce990(ppppplVar23);
  ppplVar37 = auVar72._8_8_;
  plVar33 = auVar72._0_8_;
  pppplVar59[-6] = (long ***)0x3ce3240;
  pppplVar59[-5] = (long ***)pppplVar57;
  pppplVar59[-4] = (long ***)ppppplVar26;
  pppplVar59[-3] = (long ***)ppppplVar39;
  pppplVar59[-2] = (long ***)pppplVar55;
  pppplVar59[-1] = (long ***)ppppplVar25;
  ppppplVar39 = ppppplVar67;
  if (ppppplVar67[7] == (long ****)0x0) {
    func_0x03256878(ppppplVar67);
  }
  if (plVar33 != (long *)0x0) {
    ppplVar34 = *ppppplVar67[7];
    if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
      ppplVar34 = (long ***)func_0x0325681c(ppplVar34);
    }
    lVar41 = *plVar33;
    uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
      do {
        if (*(long ****)(piVar54 + -2) == ppplVar34) {
          puVar19 = (undefined8 *)(lVar41 + (long)(*piVar54 + 4) * 0x10 + 0x138);
          goto LAB_03ce32d8;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    puVar19 = (undefined8 *)func_0x03256b10(plVar33,ppplVar34,4);
LAB_03ce32d8:
    uVar17 = (*(code *)*puVar19)(plVar33,ppplVar37,puVar19[1]);
    if ((uVar17 & 1) == 0) {
      ppplVar34 = *ppppplVar67[7];
      if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
        ppplVar34 = (long ***)func_0x0325681c(ppplVar34);
      }
      lVar41 = *plVar33;
      uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
      if (uVar50 != 0) {
        piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
        do {
          if (*(long ****)(piVar54 + -2) == ppplVar34) {
            puVar19 = (undefined8 *)(lVar41 + (long)(*piVar54 + 5) * 0x10 + 0x138);
            goto LAB_03ce3358;
          }
          uVar50 = uVar50 - 1;
          piVar54 = piVar54 + 4;
        } while (uVar50 != 0);
      }
      puVar19 = (undefined8 *)func_0x03256b10(plVar33,ppplVar34,5);
LAB_03ce3358:
      (*(code *)*puVar19)(plVar33,ppplVar37,ppppplVar40,puVar19[1]);
    }
    return (long *****)(ulong)(~uVar17 & 1);
  }
  func_0x03280a2c(PTR_DAT_0774e5b0);
  ppplVar24 = (long ***)func_0x03280ca0();
  uVar20 = func_0x03280a2c(PTR_DAT_07779930);
  pppplVar62 = (long ****)0x0;
  func_0x056e7310(ppplVar24,uVar20);
  auVar72 = func_0x03280b7c(ppplVar24,ppppplVar67);
  pppplVar55 = auVar72._8_8_;
  ppppplVar40 = auVar72._0_8_;
  pppplVar59[-0x12] = (long ***)ppppplVar15;
  pppplVar59[-0x11] = (long ***)0x3ce33c0;
  pppplVar59[-0x10] = ppplVar34;
  pppplVar59[-0xf] = (long ***)pppplVar22;
  pppplVar59[-0xe] = ppplVar35;
  pppplVar59[-0xd] = (long ***)ppppplVar42;
  pppplVar59[-0xc] = ppplVar46;
  pppplVar59[-0xb] = (long ***)pppplVar57;
  pppplVar59[-10] = (long ***)ppppplVar67;
  pppplVar59[-9] = (long ***)0x0;
  pppplVar59[-8] = ppplVar37;
  pppplVar59[-7] = ppplVar24;
  pppplVar22 = (long ****)tpidr_el0;
  pppplVar59[-0x13] = pppplVar22[5];
  pppplVar59[-0x18] = (long ***)pppplVar62;
  pppplVar59[-0x17] = (long ***)pppplVar55;
  ppppplVar67 = (long *****)ppppplVar39[7];
  if (ppppplVar67 == (long *****)0x0) {
    func_0x03256878(ppppplVar39);
    ppppplVar67 = (long *****)ppppplVar39[7];
  }
  pppplVar57 = (long ****)(ulong)*(uint *)((long)ppppplVar67[1] + 0xfc);
  pplVar36 = (long **)(ulong)*(uint *)((long)ppppplVar67[3] + 0xfc);
  ppplVar46 = (long ***)
              ((long)pppplVar59 + (-0xd0 - ((ulong)((long)pppplVar57 + 0xfU) & 0x1fffffff0)));
  ppplVar35 = (long ***)((long)ppplVar46 - ((long)pplVar36 + 0xfU & 0x1fffffff0));
  ppplVar34 = ppplVar35;
  if (ppppplVar40 == (long *****)0x0) {
    func_0x03280a2c(PTR_DAT_0774e5b0);
    ppppplVar40 = (long *****)func_0x03280ca0();
    uVar20 = func_0x03280a2c(PTR_DAT_07779930);
    ppppplVar42 = (long *****)0x0;
    func_0x056e7310(ppppplVar40,uVar20);
    ppppplVar25 = (long *****)func_0x03280b7c(ppppplVar40,ppppplVar39);
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
      ppppplVar67 = (long *****)ppppplVar39[7];
    }
    ppplVar37 = ppplVar46;
    if (-1 < *(int *)(ppppplVar67[1] + 5)) {
      ppplVar37 = (long ***)*ppplVar46;
    }
    pppplVar47 = *ppppplVar40;
    uVar50 = (ulong)*(ushort *)((long)pppplVar47 + 0x12e);
    if (uVar50 != 0) {
      ppplVar24 = pppplVar47[0x16] + 1;
      do {
        if ((long ****)ppplVar24[-1] == pppplVar65) {
          pppplVar47 = pppplVar47 + (long)(*(int *)ppplVar24 + 4) * 2 + 0x27;
          goto LAB_03ce34e8;
        }
        uVar50 = uVar50 - 1;
        ppplVar24 = ppplVar24 + 2;
      } while (uVar50 != 0);
    }
    pppplVar47 = (long ****)func_0x03256b10(ppppplVar40,pppplVar65,4);
LAB_03ce34e8:
    pppplVar59[-0x16] = ppplVar37;
    ppplVar37 = pppplVar47[1];
    ppppplVar42 = ppppplVar40;
    (*(code *)ppplVar37[2])
              (ppplVar37[1],ppplVar37,ppppplVar40,pppplVar59 + -0x16,(long)pppplVar59 + -0x9c);
    bVar3 = *(byte *)((long)pppplVar59 + -0x9c);
    ppppplVar67 = (long *****)(ulong)bVar3;
    if (bVar3 == 0) {
      pppplVar59[-0x19] = (long ***)pppplVar22;
      pppplVar65 = ppppplVar39[7];
      pppplVar22 = pppplVar55;
      if (-1 < *(int *)(pppplVar65[1] + 5)) {
        pppplVar22 = pppplVar59 + -0x17;
      }
      func_0x072ce970(ppplVar46,pppplVar22,pppplVar57);
      pppplVar22 = pppplVar62;
      if (-1 < *(int *)(pppplVar65[3] + 5)) {
        pppplVar22 = pppplVar59 + -0x18;
      }
      func_0x072ce970(ppplVar35,pppplVar22,pplVar36);
      ppplVar37 = *pppplVar65;
      if ((*(byte *)((long)ppplVar37 + 0x135) & 1) == 0) {
        ppplVar37 = (long ***)func_0x0325681c(ppplVar37);
        pppplVar65 = ppppplVar39[7];
      }
      if (-1 < *(int *)(pppplVar65[1] + 5)) {
        ppplVar46 = (long ***)*ppplVar46;
      }
      if (-1 < *(int *)(pppplVar65[3] + 5)) {
        ppplVar34 = (long ***)*ppplVar35;
      }
      pppplVar65 = *ppppplVar40;
      pppplVar22 = (long ****)pppplVar59[-0x19];
      uVar50 = (ulong)*(ushort *)((long)pppplVar65 + 0x12e);
      if (uVar50 != 0) {
        ppplVar24 = pppplVar65[0x16] + 1;
        do {
          if ((long ***)ppplVar24[-1] == ppplVar37) {
            pppplVar65 = pppplVar65 + (long)(*(int *)ppplVar24 + 5) * 2 + 0x27;
            goto LAB_03ce35e0;
          }
          uVar50 = uVar50 - 1;
          ppplVar24 = ppplVar24 + 2;
        } while (uVar50 != 0);
      }
      pppplVar65 = (long ****)func_0x03256b10(ppppplVar40,ppplVar37,5);
LAB_03ce35e0:
      pppplVar59[-0x16] = ppplVar46;
      pppplVar59[-0x15] = ppplVar34;
      ppplVar37 = pppplVar65[1];
      ppppplVar42 = ppppplVar40;
      (*(code *)ppplVar37[2])(ppplVar37[1],ppplVar37,ppppplVar40,pppplVar59 + -0x16,ppplVar34);
    }
    ppppplVar25 = (long *****)(ulong)(bVar3 == 0);
    if (pppplVar22[5] == pppplVar59[-0x13]) {
      return ppppplVar25;
    }
  }
  auVar72 = func_0x072ce990(ppppplVar25);
  pppplVar65 = auVar72._8_8_;
  pplVar53 = auVar72._0_8_;
  ppplVar35[-6] = (long **)0x3ce3674;
  ppplVar35[-4] = (long **)ppppplVar39;
  ppplVar35[-3] = (long **)ppplVar46;
  ppplVar35[-2] = (long **)ppplVar34;
  ppplVar35[-1] = (long **)ppppplVar40;
  ppppplVar40 = ppppplVar42;
  if (ppppplVar42[7] == (long ****)0x0) {
    func_0x03256878(ppppplVar42);
  }
  if (pplVar53 == (long **)0x0) {
LAB_03ce3754:
    ppppplVar25 = ppppplVar39;
    func_0x03280cac();
  }
  else {
    uVar17 = func_0x04545968(pplVar53,ppppplVar42[7][1]);
    ppplVar34 = ppppplVar42[7][2];
    if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
      ppplVar34 = (long ***)func_0x0325681c(ppplVar34);
    }
    ppppplVar25 = (long *****)func_0x03280afc(ppplVar34,uVar17 + 1);
    ppppplVar39 = (long *****)(ulong)uVar17;
    if (ppppplVar25 == (long *****)0x0) goto LAB_03ce3754;
    if (*(int *)(ppppplVar25 + 3) != 0) {
      ppppplVar25 = ppppplVar25 + 4;
      *ppppplVar25 = pppplVar65;
      goto SUB_032809c4;
    }
  }
  auVar72 = func_0x03280cb4();
  pppplVar47 = auVar72._8_8_;
  pppplVar31 = auVar72._0_8_;
  ppplVar35[-0x10] = (long **)(pppplVar59 + -0x12);
  ppplVar35[-0xf] = (long **)0x3ce375c;
  ppplVar35[-0xe] = (long **)pppplVar57;
  ppplVar35[-0xd] = pplVar36;
  ppplVar35[-0xc] = (long **)pppplVar55;
  ppplVar35[-0xb] = (long **)pppplVar62;
  ppplVar35[-10] = (long **)ppppplVar25;
  ppplVar35[-9] = (long **)pppplVar65;
  ppplVar35[-8] = pplVar53;
  ppplVar35[-7] = (long **)ppppplVar42;
  pppplVar55 = (long ****)tpidr_el0;
  ppplVar35[-0x11] = (long **)pppplVar55[5];
  ppplVar35[-0x12] = (long **)pppplVar47;
  pppplVar59 = ppppplVar40[7];
  ppppplVar25 = ppppplVar40;
  if (pppplVar59 == (long ****)0x0) {
    func_0x03256878(ppppplVar40);
    pppplVar59 = ppppplVar40[7];
  }
  ppppplVar39 = (long *****)(ulong)*(uint *)((long)pppplVar59[3] + 0xfc);
  ppppplVar42 = (long *****)((long)ppplVar35 + (-0x90 - ((long)ppppplVar39 + 0xfU & 0x1fffffff0)));
  if (pppplVar31 == (long ****)0x0) {
LAB_03ce38f0:
    func_0x03280cac();
LAB_03ce38f4:
    func_0x03280cb4();
  }
  else {
    iVar18 = (*(code *)*pppplVar59[1])(pppplVar31);
    ppplVar34 = ppppplVar40[7][2];
    if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
      ppplVar34 = (long ***)func_0x0325681c(ppplVar34);
    }
    pppplVar65 = (long ****)func_0x03280afc(ppplVar34,iVar18 + 1);
    pppplVar59 = pppplVar47;
    if (-1 < *(int *)(ppppplVar40[7][3] + 5)) {
      pppplVar59 = (long ****)(ppplVar35 + -0x12);
    }
    ppppplVar25 = ppppplVar39;
    func_0x072ce970(ppppplVar42,pppplVar59);
    if (pppplVar65 == (long ****)0x0) goto LAB_03ce38f0;
    pppplVar57 = (long ****)pppplVar65[3];
    if ((int)pppplVar57 == 0) goto LAB_03ce38f4;
    pppplVar47 = pppplVar65 + 4;
    ppppplVar25 = ppppplVar39;
    func_0x072ce970(pppplVar47,ppppplVar42);
    ppplVar34 = ppppplVar40[7][3];
    if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
      ppplVar34 = (long ***)func_0x0325681c();
      pppplVar57 = (long ****)pppplVar65[3];
    }
    if ((int)pppplVar57 == 0) goto LAB_03ce38f4;
    func_0x032809c8(ppplVar34,pppplVar47,ppppplVar42);
    (*(code *)*ppppplVar40[7][4])(pppplVar31,pppplVar65,1);
    if ((*(byte *)((long)ppppplVar40[7][6] + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    ppppplVar26 = (long *****)func_0x03280ca0();
    ppppplVar25 = (long *****)ppppplVar40[7][7];
    (*(code *)*ppppplVar25)(ppppplVar26,pppplVar65);
    ppppplVar40 = ppppplVar26;
    if (pppplVar55[5] == (long ***)ppplVar35[-0x11]) {
      return ppppplVar26;
    }
  }
  auVar72 = func_0x072ce990();
  lVar41 = auVar72._0_8_;
  ppppplVar42[-4] = (long ****)0x3ce38fc;
  ppppplVar42[-3] = pppplVar65;
  ppppplVar42[-2] = pppplVar31;
  ppppplVar42[-1] = (long ****)ppppplVar40;
  ppppplVar40 = ppppplVar25;
  if (ppppplVar25[7] == (long ****)0x0) {
    func_0x03256878(ppppplVar25);
  }
  if (lVar41 == 0) {
LAB_03ce3994:
    func_0x03280cac();
  }
  else {
    ppplVar34 = ppppplVar25[7][1];
    if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
      ppplVar34 = (long ***)func_0x0325681c();
    }
    ppppplVar25 = (long *****)func_0x03280afc(ppplVar34,*(int *)(lVar41 + 0x18) + 1);
    ppppplVar40 = (long *****)0x0;
    func_0x057b9e7c(lVar41,ppppplVar25,0,0);
    if (ppppplVar25 == (long *****)0x0) goto LAB_03ce3994;
    if ((uint)*(long *)(lVar41 + 0x18) < *(uint *)(ppppplVar25 + 3)) {
      ppppplVar25 = (long *****)
                    ((long)ppppplVar25 + ((*(long *)(lVar41 + 0x18) << 0x20) >> 0x1d) + 0x20);
      *ppppplVar25 = auVar72._8_8_;
      goto SUB_032809c4;
    }
  }
  auVar73 = func_0x03280cb4();
  ppppplVar26 = auVar73._8_8_;
  pppplVar59 = auVar73._0_8_;
  ppppplVar42[-0xe] = (long ****)(ppplVar35 + -0x10);
  ppppplVar42[-0xd] = (long ****)0x3ce399c;
  ppppplVar42[-0xc] = pppplVar55;
  ppppplVar42[-10] = (long ****)ppppplVar39;
  ppppplVar42[-9] = pppplVar47;
  ppppplVar42[-8] = (long ****)ppppplVar42;
  ppppplVar42[-7] = (long ****)ppppplVar25;
  *(undefined1 (*) [16])(ppppplVar42 + -6) = auVar72;
  pppplVar55 = (long ****)tpidr_el0;
  ppppplVar42[-0xf] = (long ****)pppplVar55[5];
  ppppplVar42[-0x10] = (long ****)ppppplVar26;
  pppplVar62 = ppppplVar40[7];
  ppppplVar39 = ppppplVar40;
  if (pppplVar62 == (long ****)0x0) {
    func_0x03256878(ppppplVar40);
    pppplVar62 = ppppplVar40[7];
  }
  ppppplVar63 = (long *****)(ulong)*(uint *)((long)pppplVar62[2] + 0xfc);
  ppppplVar23 = (long *****)((long)ppppplVar42 + (-0x80 - ((long)ppppplVar63 + 0xfU & 0x1fffffff0)))
  ;
  ppppplVar25 = ppppplVar42;
  if (pppplVar59 == (long ****)0x0) {
LAB_03ce3b0c:
    func_0x03280cac();
LAB_03ce3b10:
    func_0x03280cb4();
  }
  else {
    ppplVar34 = pppplVar62[1];
    if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
      ppplVar34 = (long ***)func_0x0325681c();
    }
    ppppplVar25 = (long *****)func_0x03280afc(ppplVar34,*(int *)(pppplVar59 + 3) + 1);
    func_0x057b9e7c(pppplVar59,ppppplVar25,0,0);
    ppppplVar27 = ppppplVar26;
    if (-1 < *(int *)(ppppplVar40[7][2] + 5)) {
      ppppplVar27 = ppppplVar42 + -0x10;
    }
    ppppplVar39 = ppppplVar63;
    func_0x072ce970(ppppplVar23,ppppplVar27);
    if (ppppplVar25 == (long *****)0x0) goto LAB_03ce3b0c;
    if (*(uint *)(ppppplVar25 + 3) <= (uint)pppplVar59[3]) goto LAB_03ce3b10;
    ppppplVar39 = ppppplVar63;
    func_0x072ce970((long)ppppplVar25 +
                    (long)(int)(uint)pppplVar59[3] * (ulong)*(uint *)((long)*ppppplVar25 + 0x104) +
                    0x20,ppppplVar23);
    ppplVar34 = ppppplVar40[7][2];
    if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
      ppplVar34 = (long ***)func_0x0325681c();
    }
    if (*(uint *)(ppppplVar25 + 3) <= (uint)pppplVar59[3]) goto LAB_03ce3b10;
    ppppplVar39 = ppppplVar23;
    func_0x032809c8(ppplVar34,
                    (long)ppppplVar25 +
                    (long)(int)(uint)pppplVar59[3] * (ulong)*(uint *)((long)*ppppplVar25 + 0x104) +
                    0x20);
    if ((long ****)pppplVar55[5] == ppppplVar42[-0xf]) {
      return ppppplVar25;
    }
  }
  auVar72 = func_0x072ce990();
  pppplVar65 = auVar72._8_8_;
  pppplVar62 = auVar72._0_8_;
  ppppplVar23[-4] = (long ****)0x3ce3b18;
  ppppplVar23[-2] = (long ****)ppppplVar23;
  ppppplVar23[-1] = pppplVar59;
  if (pppplVar65[7] == (long ***)0x0) {
    func_0x03256878(pppplVar65);
  }
  if (pppplVar62 != (long ****)0x0) {
    pplVar36 = pppplVar65[7][1];
    if ((*(byte *)((long)pplVar36 + 0x135) & 1) == 0) {
      pplVar36 = (long **)func_0x0325681c();
    }
    ppppplVar27 = (long *****)func_0x03280afc(pplVar36,*(int *)(pppplVar62 + 3) + -1);
    if (ppppplVar27 != (long *****)0x0) {
      func_0x057b9f30(pppplVar62,1,ppppplVar27,0,*(undefined4 *)(ppppplVar27 + 3),0);
      return ppppplVar27;
    }
  }
  auVar72 = func_0x03280cac();
  pppplVar47 = auVar72._8_8_;
  pppplVar59 = auVar72._0_8_;
  ppppplVar23[-8] = (long ****)0x3ce3b94;
  ppppplVar23[-6] = pppplVar65;
  ppppplVar23[-5] = pppplVar62;
  if (pppplVar47[7] == (long ***)0x0) {
    func_0x03256878(pppplVar47);
  }
  if (pppplVar59 != (long ****)0x0) {
    pplVar36 = pppplVar47[7][1];
    if ((*(byte *)((long)pplVar36 + 0x135) & 1) == 0) {
      pplVar36 = (long **)func_0x0325681c();
    }
    ppppplVar27 = (long *****)func_0x03280afc(pplVar36,*(int *)(pppplVar59 + 3) + -1);
    if (ppppplVar27 != (long *****)0x0) {
      func_0x057b9f30(pppplVar59,1,ppppplVar27,0,*(undefined4 *)(ppppplVar27 + 3),0);
      return ppppplVar27;
    }
  }
  auVar72 = func_0x03280cac();
  pppplVar65 = auVar72._8_8_;
  pppplVar62 = auVar72._0_8_;
  ppppplVar23[-0xc] = (long ****)0x3ce3c10;
  ppppplVar23[-10] = pppplVar47;
  ppppplVar23[-9] = pppplVar59;
  if (pppplVar65[7] == (long ***)0x0) {
    func_0x03256878(pppplVar65);
  }
  if (pppplVar62 != (long ****)0x0) {
    pplVar36 = pppplVar65[7][1];
    if ((*(byte *)((long)pplVar36 + 0x135) & 1) == 0) {
      pplVar36 = (long **)func_0x0325681c();
    }
    ppppplVar27 = (long *****)func_0x03280afc(pplVar36,*(int *)(pppplVar62 + 3) + -1);
    if (ppppplVar27 != (long *****)0x0) {
      func_0x057b9f30(pppplVar62,0,ppppplVar27,0,*(undefined4 *)(ppppplVar27 + 3),0);
      return ppppplVar27;
    }
  }
  auVar72 = func_0x03280cac();
  pppplVar47 = auVar72._8_8_;
  pppplVar59 = auVar72._0_8_;
  ppppplVar23[-0x10] = (long ****)0x3ce3c8c;
  ppppplVar23[-0xe] = pppplVar65;
  ppppplVar23[-0xd] = pppplVar62;
  if (pppplVar47[7] == (long ***)0x0) {
    func_0x03256878(pppplVar47);
  }
  if (pppplVar59 != (long ****)0x0) {
    pplVar36 = pppplVar47[7][1];
    if ((*(byte *)((long)pplVar36 + 0x135) & 1) == 0) {
      pplVar36 = (long **)func_0x0325681c();
    }
    ppppplVar27 = (long *****)func_0x03280afc(pplVar36,*(int *)(pppplVar59 + 3) + -1);
    if (ppppplVar27 != (long *****)0x0) {
      func_0x057b9f30(pppplVar59,0,ppppplVar27,0,*(undefined4 *)(ppppplVar27 + 3),0);
      return ppppplVar27;
    }
  }
  auVar72 = func_0x03280cac();
  lVar45 = auVar72._8_8_;
  ppppplVar27 = auVar72._0_8_;
  ppppplVar23[-0x14] = (long ****)0x3ce3d08;
  ppppplVar23[-0x13] = (long ****)ppppplVar40;
  ppppplVar23[-0x12] = pppplVar47;
  ppppplVar23[-0x11] = pppplVar59;
  lVar41 = *(long *)(lVar45 + 0x38);
  if (lVar41 == 0) {
    func_0x03256878(lVar45);
    lVar41 = *(long *)(lVar45 + 0x38);
  }
  if (ppppplVar27 != (long *****)0x0) {
    pppplVar59 = *(long *****)(lVar41 + 0x20);
    if ((*(byte *)((long)pppplVar59 + 0x135) & 1) == 0) {
      pppplVar59 = (long ****)func_0x0325681c();
    }
    pppplVar62 = *ppppplVar27;
    if (pppplVar62 == pppplVar59) {
      return ppppplVar27;
    }
    pppplVar59 = *(long *****)(*(long *)(lVar45 + 0x38) + 0x28);
    if ((*(byte *)((long)pppplVar59 + 0x135) & 1) == 0) {
      pppplVar59 = (long ****)func_0x0325681c();
      pppplVar62 = *ppppplVar27;
    }
    if (pppplVar62 == pppplVar59) {
      pppplVar22 = ppppplVar23[-0x11];
      lVar41 = *(long *)(*(long *)(lVar45 + 0x38) + 0x30);
      pppplVar55 = ppppplVar23[-0x13];
      ppppplVar23[-0x16] = ppppplVar23[-0x14];
      ppppplVar23[-0x15] = (long ****)ppppplVar63;
      ppppplVar23[-0x14] = (long ****)ppppplVar25;
      ppppplVar23[-0x13] = pppplVar55;
      ppppplVar23[-0x12] = ppppplVar23[-0x12];
      ppppplVar23[-0x11] = pppplVar22;
      ppppplVar25 = ppppplVar27 + 2;
      if (*ppppplVar25 != (long ****)0x0) {
        if (*(int *)(ppppplVar27 + 3) != *(int *)(*ppppplVar25 + 3)) {
          func_0x044c9c08(ppppplVar27,
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
        ppppplVar27[2] = (long ****)**(long **)(lVar41 + 0xb8);
SUB_032809c4:
        if (iRam00000000080486b8 != 0) {
          puVar1 = (ulong *)(((ulong)ppppplVar25 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
          do {
            cVar4 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar16) {
              *puVar1 = *puVar1 | 1L << ((ulong)ppppplVar25 >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        return ppppplVar25;
      }
      auVar77 = func_0x03280cac();
      iVar18 = auVar77._8_4_;
      ppppplVar67 = auVar77._0_8_;
      ppppplVar23[-0x18] = (long ****)0x44c9d70;
      if (ppppplVar67[2] == (long ****)0x0) {
        auVar72 = func_0x03280cac();
        ppppplVar23[-0x1a] = (long ****)0x44c9dc0;
        ppppplVar23[-0x19] = pppplVar22;
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
      ppplVar34 = ppppplVar67[2][3];
      iVar44 = (int)ppplVar34;
      if (iVar18 <= iVar44) {
        return ppppplVar67;
      }
      iVar2 = 4;
      if (ppplVar34 != (long ***)0x0) {
        iVar2 = iVar44 << 1;
      }
      if (iVar18 <= iVar2) {
        iVar18 = iVar2;
      }
      pplVar36 = ppppplVar39[4][0x18][0x20];
      ppppplVar23[-0x1a] = ppppplVar23[-0x18];
      ppppplVar23[-0x19] = pppplVar55;
      ppppplVar23[-0x18] = (long ****)0x0;
      ppppplVar23[-0x17] = pppplVar22;
      if (iVar18 < *(int *)(ppppplVar67 + 3)) {
        func_0x03280a2c(PTR_DAT_077517e8);
        uVar20 = func_0x03280ca0();
        uVar21 = func_0x03280a2c(PTR_DAT_0774fae0);
        func_0x056ef504(uVar20,uVar21,0);
        func_0x03280b7c(uVar20,pplVar36);
      }
      else {
        ppppplVar25 = ppppplVar67 + 2;
        if (*ppppplVar25 != (long ****)0x0) {
          if (*(int *)(*ppppplVar25 + 3) == iVar18) {
            return ppppplVar67;
          }
          plVar33 = (long *)pplVar36[4][0x18];
          if (iVar18 < 1) {
            lVar45 = *plVar33;
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
            *ppppplVar25 = (long ****)**(undefined8 **)(lVar41 + 0xb8);
          }
          else {
            lVar41 = plVar33[3];
            if ((*(byte *)(lVar41 + 0x135) & 1) == 0) {
              lVar41 = func_0x0325681c();
            }
            pppplVar22 = (long ****)func_0x03280afc(lVar41,iVar18);
            if (0 < *(int *)(ppppplVar67 + 3)) {
              func_0x057b9f30(*ppppplVar25,0,pppplVar22,0,*(int *)(ppppplVar67 + 3),0);
            }
            *ppppplVar25 = pppplVar22;
          }
          goto SUB_032809c4;
        }
      }
      lVar41 = func_0x03280cac();
      return (long *****)(ulong)*(uint *)(lVar41 + 0x18);
    }
    lVar28 = func_0x03d5b8d8(ppppplVar27,*(undefined8 *)(*(long *)(lVar45 + 0x38) + 0x38));
    if (lVar28 == 0) {
      auVar73 = func_0x03280cac();
      lVar45 = auVar73._8_8_;
      ppppplVar27 = auVar73._0_8_;
      ppppplVar23[-0x18] = (long ****)0x3ce3e28;
      ppppplVar23[-0x17] = (long ****)ppppplVar40;
      *(undefined1 (*) [16])(ppppplVar23 + -0x16) = auVar72;
      lVar41 = *(long *)(lVar45 + 0x38);
      if (lVar41 == 0) {
        func_0x03256878(lVar45);
        lVar41 = *(long *)(lVar45 + 0x38);
      }
      if (ppppplVar27 != (long *****)0x0) {
        pppplVar59 = *(long *****)(lVar41 + 0x20);
        if ((*(byte *)((long)pppplVar59 + 0x135) & 1) == 0) {
          pppplVar59 = (long ****)func_0x0325681c();
        }
        pppplVar62 = *ppppplVar27;
        if (pppplVar62 == pppplVar59) {
          return ppppplVar27;
        }
        pppplVar59 = *(long *****)(*(long *)(lVar45 + 0x38) + 0x28);
        if ((*(byte *)((long)pppplVar59 + 0x135) & 1) == 0) {
          pppplVar59 = (long ****)func_0x0325681c();
          pppplVar62 = *ppppplVar27;
        }
        if (pppplVar62 == pppplVar59) {
                    /* WARNING: Could not recover jumptable at 0x03ce3f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppppplVar67 = (long *****)
                        (*(code *)**(undefined8 **)(*(long *)(lVar45 + 0x38) + 0x30))(ppppplVar27);
          return ppppplVar67;
        }
        lVar28 = (*(code *)**(undefined8 **)(*(long *)(lVar45 + 0x38) + 0x38))(ppppplVar27);
        if (lVar28 == 0) {
          auVar72 = func_0x03280cac();
          plVar30 = auVar72._8_8_;
          plVar33 = auVar72._0_8_;
          ppppplVar23[-0x1c] = (long ****)0x3ce3f54;
          ppppplVar23[-0x1b] = (long ****)ppppplVar40;
          *(undefined1 (*) [16])(ppppplVar23 + -0x1a) = auVar73;
          if (ppppplVar39[7] == (long ****)0x0) {
            func_0x03256878(ppppplVar39);
          }
          if (plVar33 == (long *)0x0) {
            if (plVar30 == (long *)0x0) {
              return (long *****)0x1;
            }
            iVar18 = (int)plVar30[3];
          }
          else {
            if (plVar30 != (long *)0x0) {
              ppplVar34 = ppppplVar39[7][2];
              ppppplVar23[-0x1c] = ppppplVar23[-0x1c];
              ppppplVar23[-0x1b] = ppppplVar23[-0x1b];
              ppppplVar23[-0x1a] = ppppplVar23[-0x1a];
              ppppplVar23[-0x19] = ppppplVar23[-0x19];
              pplVar36 = ppplVar34[7];
              if (pplVar36 == (long **)0x0) {
                func_0x03256878(ppplVar34);
                pplVar36 = ppplVar34[7];
              }
              ppppplVar27 = (long *****)pplVar36[1];
              ppppplVar39 = (long *****)0x0;
              ppppplVar23[-0x20] = ppppplVar23[-0x1c];
              ppppplVar23[-0x1f] = pppplVar55;
              ppppplVar23[-0x1e] = (long ****)ppppplVar26;
              ppppplVar23[-0x1d] = (long ****)ppppplVar63;
              ppppplVar23[-0x1c] = (long ****)ppppplVar25;
              ppppplVar23[-0x1b] = ppppplVar23[-0x1b];
              ppppplVar23[-0x1a] = ppppplVar23[-0x1a];
              ppppplVar23[-0x19] = ppppplVar23[-0x19];
              ppppplVar40 = ppppplVar27;
              if (ppppplVar27[7] == (long ****)0x0) {
                func_0x03280a18(PTR_DAT_0774e8c8);
                func_0x03280a18(PTR_DAT_0774e8e0);
                if (ppppplVar27[7] == (long ****)0x0) {
                  func_0x03256878(ppppplVar27);
                }
              }
              plVar29 = (long *)func_0x039574b0(ppppplVar27[7][1]);
              puVar32 = PTR_DAT_07779d10;
              pppplVar59 = pppplVar55;
              if ((plVar33 == (long *)0x0) || (puVar32 = PTR_DAT_07779d18, plVar30 == (long *)0x0))
              {
LAB_03d54658:
                uVar20 = func_0x03280a2c(puVar32);
                uVar20 = func_0x05ac7464(uVar20,0);
                func_0x03280b7c(uVar20,ppppplVar27);
                goto LAB_03d5466c;
              }
              ppplVar34 = ppppplVar27[7][4];
              if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
                ppplVar34 = (long ***)func_0x0325681c(ppplVar34);
              }
              lVar41 = *plVar33;
              uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
              if (uVar50 != 0) {
                piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
                do {
                  if (*(long ****)(piVar54 + -2) == ppplVar34) {
                    puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
                    goto LAB_03d541f8;
                  }
                  uVar50 = uVar50 - 1;
                  piVar54 = piVar54 + 4;
                } while (uVar50 != 0);
              }
              ppppplVar39 = (long *****)0x0;
              puVar19 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d541f8:
              plVar33 = (long *)(*(code *)*puVar19)(plVar33,puVar19[1]);
              ppplVar34 = ppppplVar27[7][4];
              if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
                ppplVar34 = (long ***)func_0x0325681c(ppplVar34);
              }
              lVar41 = *plVar30;
              uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
              if (uVar50 != 0) {
                piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
                do {
                  if (*(long ****)(piVar54 + -2) == ppplVar34) {
                    puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
                    goto LAB_03d5426c;
                  }
                  uVar50 = uVar50 - 1;
                  piVar54 = piVar54 + 4;
                } while (uVar50 != 0);
              }
              ppppplVar39 = (long *****)0x0;
              puVar19 = (undefined8 *)func_0x03256b10(plVar30);
LAB_03d5426c:
              plVar30 = (long *)(*(code *)*puVar19)(plVar30,puVar19[1]);
              pppplVar59 = (long ****)PTR_DAT_0774e8e0;
              auVar5._8_8_ = plVar30;
              auVar5._0_8_ = plVar33;
              auVar73._8_8_ = plVar30;
              auVar73._0_8_ = plVar33;
              auVar72._8_8_ = plVar30;
              auVar72._0_8_ = plVar33;
              if (plVar33 == (long *)0x0) goto LAB_03d54674;
              do {
                lVar41 = *plVar33;
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
                ppppplVar39 = (long *****)0x0;
                puVar19 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d542d4:
                uVar50 = (*(code *)*puVar19)(plVar33,puVar19[1]);
                if ((uVar50 & 1) == 0) {
                  if (plVar30 == (long *)0x0) goto LAB_03d54680;
                  lVar41 = *plVar30;
                  uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
                  if (uVar50 == 0) goto LAB_03d544f0;
                  piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
                  goto LAB_03d544d8;
                }
                if (plVar30 == (long *)0x0) {
                  func_0x03280cac();
LAB_03d54640:
                  func_0x03280cac();
                  puVar32 = PTR_DAT_07779d10;
                  goto LAB_03d54658;
                }
                lVar41 = *plVar30;
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
                ppppplVar39 = (long *****)0x0;
                puVar19 = (undefined8 *)func_0x03256b10(plVar30);
LAB_03d54334:
                uVar50 = (*(code *)*puVar19)(plVar30,puVar19[1]);
                ppppplVar25 = ppppplVar26;
                if ((uVar50 & 1) == 0) break;
                ppplVar34 = ppppplVar27[7][6];
                if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
                  ppplVar34 = (long ***)func_0x0325681c(ppplVar34);
                }
                lVar41 = *plVar33;
                uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
                if (uVar50 != 0) {
                  piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
                  do {
                    if (*(long ****)(piVar54 + -2) == ppplVar34) {
                      puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
                      goto LAB_03d543a8;
                    }
                    uVar50 = uVar50 - 1;
                    piVar54 = piVar54 + 4;
                  } while (uVar50 != 0);
                }
                ppppplVar39 = (long *****)0x0;
                puVar19 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d543a8:
                uVar20 = (*(code *)*puVar19)(plVar33,puVar19[1]);
                ppplVar34 = ppppplVar27[7][6];
                if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
                  ppplVar34 = (long ***)func_0x0325681c(ppplVar34);
                }
                lVar41 = *plVar30;
                uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
                if (uVar50 != 0) {
                  piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
                  do {
                    if (*(long ****)(piVar54 + -2) == ppplVar34) {
                      puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
                      goto LAB_03d5441c;
                    }
                    uVar50 = uVar50 - 1;
                    piVar54 = piVar54 + 4;
                  } while (uVar50 != 0);
                }
                ppppplVar39 = (long *****)0x0;
                puVar19 = (undefined8 *)func_0x03256b10(plVar30);
LAB_03d5441c:
                ppppplVar25 = (long *****)(*(code *)*puVar19)(plVar30,puVar19[1]);
                if (plVar29 == (long *)0x0) goto LAB_03d54640;
                ppplVar34 = *ppppplVar27[7];
                if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
                  ppplVar34 = (long ***)func_0x0325681c(ppplVar34);
                }
                lVar41 = *plVar29;
                uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
                if (uVar50 != 0) {
                  piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
                  do {
                    if (*(long ****)(piVar54 + -2) == ppplVar34) {
                      puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
                      goto LAB_03d54494;
                    }
                    uVar50 = uVar50 - 1;
                    piVar54 = piVar54 + 4;
                  } while (uVar50 != 0);
                }
                puVar19 = (undefined8 *)func_0x03256b10(plVar29,ppplVar34,0);
LAB_03d54494:
                ppppplVar40 = (long *****)puVar19[1];
                ppppplVar39 = ppppplVar25;
                uVar50 = (*(code *)*puVar19)(plVar29,uVar20);
                ppppplVar26 = ppppplVar25;
              } while ((uVar50 & 1) != 0);
              iVar18 = 0xc;
              ppppplVar26 = ppppplVar25;
joined_r0x03d5453c:
              plVar29 = (long *)0x0;
joined_r0x03d5453c:
              if (plVar30 != (long *)0x0) {
                plVar33 = auVar73._8_8_;
                lVar41 = *plVar33;
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
                ppppplVar39 = (long *****)0x0;
                puVar19 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d54594:
                (*(code *)*puVar19)(plVar33,puVar19[1]);
              }
              pppplVar55 = auVar73._0_8_;
              if (plVar29 != (long *)0x0) goto LAB_03d54678;
              ppppplVar25 = (long *****)0x0;
              ppppplVar27 = (long *****)0x0;
              if (iVar18 == 0) goto LAB_03d545b0;
              do {
                auVar72._8_8_ = ppppplVar27;
                auVar72._0_8_ = pppplVar55;
                if (pppplVar55 != (long ****)0x0) {
                  ppplVar34 = *pppplVar55;
                  uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
                  if (uVar50 != 0) {
                    pplVar36 = ppplVar34[0x16] + 1;
                    do {
                      if (pplVar36[-1] == *(long **)PTR_DAT_0774e8c8) {
                        ppplVar34 = ppplVar34 + (long)*(int *)pplVar36 * 2 + 0x27;
                        goto LAB_03d54610;
                      }
                      uVar50 = uVar50 - 1;
                      pplVar36 = pplVar36 + 2;
                    } while (uVar50 != 0);
                  }
                  ppppplVar39 = (long *****)0x0;
                  ppplVar34 = (long ***)func_0x03256b10(pppplVar55);
LAB_03d54610:
                  (*(code *)*ppplVar34)(pppplVar55,ppplVar34[1]);
                }
                if (ppppplVar27 == (long *****)0x0) {
                  return (long *****)(ulong)(iVar18 != 0xc);
                }
LAB_03d5466c:
                func_0x03280ca4(ppppplVar27);
                pppplVar55 = pppplVar59;
                auVar73 = auVar72;
LAB_03d54674:
                func_0x03280cac();
                pppplVar59 = pppplVar55;
LAB_03d54678:
                func_0x03280ca4(plVar29);
                auVar5 = auVar73;
LAB_03d54680:
                plVar30 = auVar5._8_8_;
                pppplVar55 = auVar5._0_8_;
                auVar72 = func_0x03280cac();
                pppplVar62 = auVar72._0_8_;
                if (auVar72._8_4_ == 1) goto code_r0x03d546c4;
                plVar29 = (long *)0x0;
                if (plVar30 != (long *)0x0) {
                  lVar41 = *plVar30;
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
                  ppppplVar39 = (long *****)0x0;
                  puVar19 = (undefined8 *)func_0x03256b10(plVar30);
LAB_03d54740:
                  (*(code *)*puVar19)(plVar30,puVar19[1]);
                }
                if (auVar72._8_4_ != 1) {
                  if (pppplVar55 == (long ****)0x0) goto LAB_03d547f4;
                  ppplVar34 = *pppplVar55;
                  uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
                  if (uVar50 == 0) goto LAB_03d547cc;
                  pplVar36 = ppplVar34[0x16] + 1;
                  goto LAB_03d547b4;
                }
                puVar19 = (undefined8 *)func_0x072ce910(pppplVar62);
                ppppplVar25 = (long *****)*puVar19;
                func_0x072ce920();
LAB_03d545b0:
                iVar18 = 0;
                ppppplVar27 = ppppplVar25;
              } while( true );
            }
            iVar18 = (int)plVar33[3];
          }
          return (long *****)(ulong)(iVar18 == 0);
        }
        lVar41 = *(long *)(lVar45 + 0x38);
        if (*(long *)(lVar28 + 0x18) != 0) {
          if ((*(byte *)(*(long *)(lVar41 + 0x20) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          ppppplVar67 = (long *****)func_0x03280ca0();
          (*(code *)**(undefined8 **)(*(long *)(lVar45 + 0x38) + 0x48))(ppppplVar67,lVar28);
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
    if (*(long *)(lVar28 + 0x18) != 0) {
      if ((*(byte *)(*(long *)(lVar41 + 0x20) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      ppppplVar67 = (long *****)func_0x03280ca0();
      func_0x04720438(ppppplVar67,lVar28,*(undefined8 *)(*(long *)(lVar45 + 0x38) + 0x48));
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
  ppppplVar39 = (long *****)0x0;
  puVar19 = (undefined8 *)func_0x03256b10(plVar30);
LAB_03d5451c:
  uVar50 = (*(code *)*puVar19)(plVar30,puVar19[1]);
  iVar18 = 0xc;
  if ((uVar50 & 1) == 0) {
    iVar18 = 0xe;
  }
  goto joined_r0x03d5453c;
code_r0x03d546c4:
  plVar29 = (long *)func_0x072ce910(pppplVar62);
  plVar29 = (long *)*plVar29;
  func_0x072ce920();
  iVar18 = 0;
  auVar73 = auVar5;
  goto joined_r0x03d5453c;
  while( true ) {
    uVar50 = uVar50 - 1;
    pplVar36 = pplVar36 + 2;
    if (uVar50 == 0) break;
LAB_03d547b4:
    if (pplVar36[-1] == *(long **)PTR_DAT_0774e8c8) {
      ppplVar34 = ppplVar34 + (long)*(int *)pplVar36 * 2 + 0x27;
      goto LAB_03d547e8;
    }
  }
LAB_03d547cc:
  ppppplVar39 = (long *****)0x0;
  ppplVar34 = (long ***)func_0x03256b10(pppplVar55);
LAB_03d547e8:
  (*(code *)*ppplVar34)(pppplVar55,ppplVar34[1]);
LAB_03d547f4:
  func_0x03365958(pppplVar62);
  func_0x03280ca4(0);
  auVar74 = func_0x02f09514();
  plVar30 = auVar74._8_8_;
  plVar33 = auVar74._0_8_;
  ppppplVar23[-0x2c] = (long ****)(ppppplVar42 + -0xe);
  ppppplVar23[-0x2b] = (long ****)0x3d5480c;
  ppppplVar23[-0x2a] = (long ****)ppppplVar67;
  ppppplVar23[-0x29] = pppplVar22;
  ppppplVar23[-0x28] = pppplVar57;
  ppppplVar23[-0x27] = pppplVar59;
  ppppplVar23[-0x26] = (long ****)ppppplVar26;
  ppppplVar23[-0x25] = auVar72._8_8_;
  ppppplVar23[-0x24] = (long ****)0x0;
  ppppplVar23[-0x23] = pppplVar62;
  ppppplVar23[-0x22] = (long ****)0x0;
  ppppplVar23[-0x21] = pppplVar55;
  pppplVar55 = (long ****)tpidr_el0;
  ppppplVar23[-0x2d] = (long ****)pppplVar55[5];
  pppplVar59 = ppppplVar40[7];
  ppppplVar42 = ppppplVar39;
  ppppplVar25 = ppppplVar40;
  if (pppplVar59 == (long ****)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    pppplVar59 = ppppplVar40[7];
    if (pppplVar59 == (long ****)0x0) {
      func_0x03256878(ppppplVar40);
      pppplVar59 = ppppplVar40[7];
    }
  }
  uVar50 = (ulong)*(uint *)((long)pppplVar59[8] + 0xfc) + 0xf & 0x1fffffff0;
  pppplVar62 = (long ****)((long)ppppplVar23 + (-0x180 - uVar50));
  ppppplVar26 = (long *****)((long)pppplVar62 - uVar50);
  if (ppppplVar39 == (long *****)0x0) {
    ppppplVar39 = (long *****)(*(code *)*pppplVar59[1])();
  }
  puVar32 = PTR_DAT_07779d10;
  pppplVar59 = pppplVar57;
  if ((plVar33 == (long *)0x0) || (puVar32 = PTR_DAT_07779d18, plVar30 == (long *)0x0)) {
LAB_03d54dd4:
    uVar20 = func_0x03280a2c(puVar32);
    uVar20 = func_0x05ac7464(uVar20,0);
    func_0x03280b7c(uVar20,ppppplVar40);
    goto LAB_03d54de8;
  }
  ppplVar34 = ppppplVar40[7][4];
  if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
    ppplVar34 = (long ***)func_0x0325681c(ppplVar34);
  }
  lVar41 = *plVar33;
  uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
  if (uVar50 != 0) {
    piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
    do {
      if (*(long ****)(piVar54 + -2) == ppplVar34) {
        puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
        goto LAB_03d54924;
      }
      uVar50 = uVar50 - 1;
      piVar54 = piVar54 + 4;
    } while (uVar50 != 0);
  }
  ppppplVar42 = (long *****)0x0;
  puVar19 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d54924:
  plVar33 = (long *)(*(code *)*puVar19)(plVar33,puVar19[1]);
  ppplVar34 = ppppplVar40[7][4];
  if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
    ppplVar34 = (long ***)func_0x0325681c(ppplVar34);
  }
  lVar41 = *plVar30;
  uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
  if (uVar50 != 0) {
    piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
    do {
      if (*(long ****)(piVar54 + -2) == ppplVar34) {
        puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
        goto LAB_03d54998;
      }
      uVar50 = uVar50 - 1;
      piVar54 = piVar54 + 4;
    } while (uVar50 != 0);
  }
  ppppplVar42 = (long *****)0x0;
  puVar19 = (undefined8 *)func_0x03256b10(plVar30);
LAB_03d54998:
  ppppplVar63 = (long *****)(*(code *)*puVar19)(plVar30,puVar19[1]);
  pppplVar59 = (long ****)PTR_DAT_0774e8e0;
  auVar7._8_8_ = ppppplVar63;
  auVar7._0_8_ = plVar33;
  auVar6._8_8_ = ppppplVar63;
  auVar6._0_8_ = plVar33;
  auVar74._8_8_ = ppppplVar63;
  auVar74._0_8_ = plVar33;
  if (plVar33 == (long *)0x0) goto LAB_03d54df0;
  do {
    lVar41 = *plVar33;
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
    ppppplVar42 = (long *****)0x0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d54a00:
    uVar50 = (*(code *)*puVar19)(plVar33,puVar19[1]);
    if ((uVar50 & 1) == 0) {
      if (ppppplVar63 == (long *****)0x0) goto LAB_03d54dfc;
      pppplVar57 = *ppppplVar63;
      uVar50 = (ulong)*(ushort *)((long)pppplVar57 + 0x12e);
      if (uVar50 == 0) goto LAB_03d54c60;
      ppplVar34 = pppplVar57[0x16] + 1;
      goto LAB_03d54c48;
    }
    if (ppppplVar63 == (long *****)0x0) {
      func_0x03280cac();
LAB_03d54dbc:
      func_0x03280cac();
      puVar32 = PTR_DAT_07779d10;
      goto LAB_03d54dd4;
    }
    pppplVar57 = *ppppplVar63;
    uVar50 = (ulong)*(ushort *)((long)pppplVar57 + 0x12e);
    if (uVar50 != 0) {
      ppplVar34 = pppplVar57[0x16] + 1;
      do {
        if ((long ***)ppplVar34[-1] == *pppplVar59) {
          pppplVar57 = pppplVar57 + (long)*(int *)ppplVar34 * 2 + 0x27;
          goto LAB_03d54a60;
        }
        uVar50 = uVar50 - 1;
        ppplVar34 = ppplVar34 + 2;
      } while (uVar50 != 0);
    }
    ppppplVar42 = (long *****)0x0;
    pppplVar57 = (long ****)func_0x03256b10(ppppplVar63);
LAB_03d54a60:
    uVar50 = (*(code *)*pppplVar57)(ppppplVar63,pppplVar57[1]);
    if ((uVar50 & 1) == 0) break;
    ppplVar34 = ppppplVar40[7][6];
    if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
      ppplVar34 = (long ***)func_0x0325681c(ppplVar34);
    }
    lVar41 = *plVar33;
    uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
      do {
        if (*(long ****)(piVar54 + -2) == ppplVar34) {
          lVar41 = lVar41 + (long)*piVar54 * 0x10 + 0x138;
          goto LAB_03d54ad4;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    lVar41 = func_0x03256b10(plVar33,ppplVar34,0);
LAB_03d54ad4:
    ppppplVar23[-0x30] = pppplVar62;
    lVar41 = *(long *)(lVar41 + 8);
    (**(code **)(lVar41 + 0x10))
              (*(undefined8 *)(lVar41 + 8),lVar41,plVar33,ppppplVar23 + -0x30,pppplVar62);
    ppplVar34 = ppppplVar40[7][6];
    if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
      ppplVar34 = (long ***)func_0x0325681c(ppplVar34);
    }
    pppplVar57 = *ppppplVar63;
    uVar50 = (ulong)*(ushort *)((long)pppplVar57 + 0x12e);
    if (uVar50 != 0) {
      ppplVar35 = pppplVar57[0x16] + 1;
      do {
        if ((long ***)ppplVar35[-1] == ppplVar34) {
          pppplVar57 = pppplVar57 + (long)*(int *)ppplVar35 * 2 + 0x27;
          goto LAB_03d54b54;
        }
        uVar50 = uVar50 - 1;
        ppplVar35 = ppplVar35 + 2;
      } while (uVar50 != 0);
    }
    pppplVar57 = (long ****)func_0x03256b10(ppppplVar63,ppplVar34,0);
LAB_03d54b54:
    ppppplVar23[-0x30] = (long ****)ppppplVar26;
    ppppplVar25 = ppppplVar23 + -0x30;
    ppppplVar42 = ppppplVar63;
    (*(code *)pppplVar57[1][2])(pppplVar57[1][1]);
    if (ppppplVar39 == (long *****)0x0) goto LAB_03d54dbc;
    pppplVar57 = ppppplVar40[7];
    ppplVar34 = *pppplVar57;
    if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
      ppplVar34 = (long ***)func_0x0325681c(ppplVar34);
      pppplVar57 = ppppplVar40[7];
    }
    pppplVar22 = pppplVar62;
    ppppplVar67 = ppppplVar26;
    if (-1 < *(int *)(pppplVar57[8] + 5)) {
      pppplVar22 = (long ****)*pppplVar62;
      ppppplVar67 = (long *****)*ppppplVar26;
    }
    pppplVar57 = *ppppplVar39;
    uVar50 = (ulong)*(ushort *)((long)pppplVar57 + 0x12e);
    if (uVar50 != 0) {
      ppplVar35 = pppplVar57[0x16] + 1;
      do {
        if ((long ***)ppplVar35[-1] == ppplVar34) {
          pppplVar57 = pppplVar57 + (long)*(int *)ppplVar35 * 2 + 0x27;
          goto LAB_03d54bf8;
        }
        uVar50 = uVar50 - 1;
        ppplVar35 = ppplVar35 + 2;
      } while (uVar50 != 0);
    }
    pppplVar57 = (long ****)func_0x03256b10(ppppplVar39,ppplVar34,0);
LAB_03d54bf8:
    ppppplVar23[-0x30] = pppplVar22;
    ppppplVar23[-0x2f] = (long ****)ppppplVar67;
    ppppplVar25 = ppppplVar23 + -0x30;
    ppppplVar42 = ppppplVar39;
    (*(code *)pppplVar57[1][2])(pppplVar57[1][1]);
  } while (*(char *)((long)ppppplVar23 + -0x16c) != '\0');
  iVar18 = 0xc;
  goto joined_r0x03d54c9c;
  while( true ) {
    uVar50 = uVar50 - 1;
    ppplVar34 = ppplVar34 + 2;
    if (uVar50 == 0) break;
LAB_03d54c48:
    if ((long ***)ppplVar34[-1] == *pppplVar59) {
      pppplVar57 = pppplVar57 + (long)*(int *)ppplVar34 * 2 + 0x27;
      goto LAB_03d54c7c;
    }
  }
LAB_03d54c60:
  ppppplVar42 = (long *****)0x0;
  pppplVar57 = (long ****)func_0x03256b10(ppppplVar63);
LAB_03d54c7c:
  uVar50 = (*(code *)*pppplVar57)(ppppplVar63,pppplVar57[1]);
  iVar18 = 0xc;
  if ((uVar50 & 1) == 0) {
    iVar18 = 0xe;
  }
joined_r0x03d54c9c:
  ppppplVar39 = (long *****)0x0;
joined_r0x03d54c9c:
  if (ppppplVar63 != (long *****)0x0) {
    plVar33 = auVar6._8_8_;
    lVar41 = *plVar33;
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
    ppppplVar42 = (long *****)0x0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d54cf4:
    (*(code *)*puVar19)(plVar33,puVar19[1]);
  }
  pppplVar57 = auVar6._0_8_;
  if (ppppplVar39 != (long *****)0x0) goto LAB_03d54df4;
  ppppplVar63 = (long *****)0x0;
  ppppplVar40 = (long *****)0x0;
  if (iVar18 == 0) goto LAB_03d54d10;
  do {
    auVar74._8_8_ = ppppplVar40;
    auVar74._0_8_ = pppplVar57;
    if (pppplVar57 != (long ****)0x0) {
      ppplVar34 = *pppplVar57;
      uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
      if (uVar50 != 0) {
        pplVar36 = ppplVar34[0x16] + 1;
        do {
          if (pplVar36[-1] == *(long **)PTR_DAT_0774e8c8) {
            ppplVar34 = ppplVar34 + (long)*(int *)pplVar36 * 2 + 0x27;
            goto LAB_03d54d70;
          }
          uVar50 = uVar50 - 1;
          pplVar36 = pplVar36 + 2;
        } while (uVar50 != 0);
      }
      ppppplVar42 = (long *****)0x0;
      ppplVar34 = (long ***)func_0x03256b10(pppplVar57);
LAB_03d54d70:
      (*(code *)*ppplVar34)(pppplVar57,ppplVar34[1]);
    }
    if (ppppplVar40 == (long *****)0x0) {
      ppppplVar40 = (long *****)(ulong)(iVar18 != 0xc);
      auVar7 = auVar74;
      if ((long ****)pppplVar55[5] == ppppplVar23[-0x2d]) {
        return ppppplVar40;
      }
    }
    else {
LAB_03d54de8:
      func_0x03280ca4(ppppplVar40);
      pppplVar57 = pppplVar59;
      auVar6 = auVar74;
LAB_03d54df0:
      func_0x03280cac();
      pppplVar59 = pppplVar57;
LAB_03d54df4:
      func_0x03280ca4(ppppplVar39);
      auVar7 = auVar6;
LAB_03d54dfc:
      ppppplVar40 = (long *****)func_0x03280cac();
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
    auVar72 = func_0x072ce990(ppppplVar40);
    pppplVar62 = auVar72._0_8_;
    if (auVar72._8_4_ == 1) break;
    ppppplVar39 = (long *****)0x0;
    if (ppppplVar63 != (long *****)0x0) {
      pppplVar65 = *ppppplVar63;
      uVar50 = (ulong)*(ushort *)((long)pppplVar65 + 0x12e);
      if (uVar50 != 0) {
        ppplVar34 = pppplVar65[0x16] + 1;
        do {
          if (ppplVar34[-1] == *(long ***)PTR_DAT_0774e8c8) {
            pppplVar65 = pppplVar65 + (long)*(int *)ppplVar34 * 2 + 0x27;
            goto LAB_03d54ec0;
          }
          uVar50 = uVar50 - 1;
          ppplVar34 = ppplVar34 + 2;
        } while (uVar50 != 0);
      }
      ppppplVar42 = (long *****)0x0;
      pppplVar65 = (long ****)func_0x03256b10(ppppplVar63);
LAB_03d54ec0:
      (*(code *)*pppplVar65)(ppppplVar63,pppplVar65[1]);
    }
    if (auVar72._8_4_ != 1) {
      if (pppplVar57 == (long ****)0x0) goto LAB_03d54f74;
      ppplVar34 = *pppplVar57;
      uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
      if (uVar50 == 0) goto LAB_03d54f4c;
      pplVar36 = ppplVar34[0x16] + 1;
      goto LAB_03d54f34;
    }
    puVar19 = (undefined8 *)func_0x072ce910(pppplVar62);
    ppppplVar63 = (long *****)*puVar19;
    func_0x072ce920();
LAB_03d54d10:
    iVar18 = 0;
    ppppplVar40 = ppppplVar63;
  } while( true );
  plVar33 = (long *)func_0x072ce910(pppplVar62);
  ppppplVar39 = (long *****)*plVar33;
  func_0x072ce920();
  iVar18 = 0;
  auVar6 = auVar7;
  goto joined_r0x03d54c9c;
  while( true ) {
    uVar50 = uVar50 - 1;
    pplVar36 = pplVar36 + 2;
    if (uVar50 == 0) break;
LAB_03d54f34:
    if (pplVar36[-1] == *(long **)PTR_DAT_0774e8c8) {
      ppplVar34 = ppplVar34 + (long)*(int *)pplVar36 * 2 + 0x27;
      goto LAB_03d54f68;
    }
  }
LAB_03d54f4c:
  ppppplVar42 = (long *****)0x0;
  ppplVar34 = (long ***)func_0x03256b10(pppplVar57);
LAB_03d54f68:
  (*(code *)*ppplVar34)(pppplVar57,ppplVar34[1]);
LAB_03d54f74:
  func_0x03365958(pppplVar62);
  func_0x03280ca4(0);
  auVar75 = func_0x02f09514();
  plVar30 = auVar75._8_8_;
  plVar33 = auVar75._0_8_;
  ppppplVar26[-10] = (long ****)0x3d54f8c;
  ppppplVar26[-9] = pppplVar22;
  ppppplVar26[-8] = pppplVar59;
  ppppplVar26[-7] = pppplVar55;
  ppppplVar26[-6] = (long ****)ppppplVar26;
  ppppplVar26[-5] = auVar72._8_8_;
  ppppplVar26[-4] = (long ****)0x0;
  ppppplVar26[-3] = pppplVar62;
  ppppplVar26[-2] = (long ****)0x0;
  ppppplVar26[-1] = pppplVar57;
  ppppplVar40 = ppppplVar42;
  ppppplVar39 = ppppplVar25;
  if (ppppplVar25[7] == (long ****)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (ppppplVar25[7] == (long ****)0x0) {
      func_0x03256878(ppppplVar25);
    }
  }
  if (ppppplVar42 == (long *****)0x0) {
    ppppplVar42 = (long *****)func_0x03d6108c(ppppplVar25[7][1]);
  }
  puVar32 = PTR_DAT_07779d10;
  ppppplVar63 = ppppplVar26;
  pppplVar55 = pppplVar22;
  if ((plVar33 == (long *)0x0) ||
     (puVar32 = PTR_DAT_07779d18, auVar12 = auVar13, plVar30 == (long *)0x0)) {
LAB_03d554cc:
    uVar20 = func_0x03280a2c(puVar32);
    uVar20 = func_0x05ac7464(uVar20,0);
    func_0x03280b7c(uVar20,ppppplVar25);
    goto LAB_03d554e0;
  }
  ppplVar34 = ppppplVar25[7][4];
  if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
    ppplVar34 = (long ***)func_0x0325681c(ppplVar34);
  }
  lVar41 = *plVar33;
  uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
  if (uVar50 != 0) {
    piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
    do {
      if (*(long ****)(piVar54 + -2) == ppplVar34) {
        puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
        goto LAB_03d55058;
      }
      uVar50 = uVar50 - 1;
      piVar54 = piVar54 + 4;
    } while (uVar50 != 0);
  }
  ppppplVar40 = (long *****)0x0;
  puVar19 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d55058:
  plVar33 = (long *)(*(code *)*puVar19)(plVar33,puVar19[1]);
  ppplVar34 = ppppplVar25[7][4];
  if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
    ppplVar34 = (long ***)func_0x0325681c(ppplVar34);
  }
  lVar41 = *plVar30;
  uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
  if (uVar50 != 0) {
    piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
    do {
      if (*(long ****)(piVar54 + -2) == ppplVar34) {
        puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
        goto LAB_03d550cc;
      }
      uVar50 = uVar50 - 1;
      piVar54 = piVar54 + 4;
    } while (uVar50 != 0);
  }
  ppppplVar40 = (long *****)0x0;
  puVar19 = (undefined8 *)func_0x03256b10(plVar30);
LAB_03d550cc:
  plVar30 = (long *)(*(code *)*puVar19)(plVar30,puVar19[1]);
  pppplVar55 = (long ****)PTR_DAT_0774e8e0;
  auVar10._8_8_ = plVar30;
  auVar10._0_8_ = plVar33;
  auVar9._8_8_ = plVar30;
  auVar9._0_8_ = plVar33;
  auVar75._8_8_ = plVar30;
  auVar75._0_8_ = plVar33;
  if (plVar33 == (long *)0x0) goto LAB_03d554e8;
  do {
    lVar41 = *plVar33;
    uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
      do {
        if ((long ***)*(long *)(piVar54 + -2) == *pppplVar55) {
          puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
          ppppplVar27 = ppppplVar39;
          goto LAB_03d55134;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    ppppplVar40 = (long *****)0x0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar33);
    ppppplVar27 = ppppplVar39;
LAB_03d55134:
    uVar50 = (*(code *)*puVar19)(plVar33,puVar19[1]);
    if ((uVar50 & 1) == 0) {
      if (plVar30 == (long *)0x0) goto LAB_03d554f4;
      lVar41 = *plVar30;
      uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
      if (uVar50 == 0) goto LAB_03d55360;
      piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
      goto LAB_03d55348;
    }
    if (plVar30 == (long *)0x0) {
      func_0x03280cac();
LAB_03d554b4:
      func_0x03280cac();
      puVar32 = PTR_DAT_07779d10;
      ppppplVar39 = ppppplVar27;
      auVar12 = auVar8;
      goto LAB_03d554cc;
    }
    lVar41 = *plVar30;
    uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
      do {
        if ((long ***)*(long *)(piVar54 + -2) == *pppplVar55) {
          puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
          ppppplVar39 = ppppplVar27;
          goto LAB_03d55194;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    ppppplVar40 = (long *****)0x0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar30);
    ppppplVar39 = ppppplVar27;
LAB_03d55194:
    uVar50 = (*(code *)*puVar19)(plVar30,puVar19[1]);
    auVar72 = auVar8;
    if ((uVar50 & 1) == 0) break;
    ppplVar34 = ppppplVar25[7][6];
    ppppplVar27 = ppppplVar39;
    if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
      ppplVar34 = (long ***)func_0x0325681c(ppplVar34);
      ppppplVar27 = ppppplVar39;
    }
    lVar41 = *plVar33;
    uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
      do {
        if (*(long ****)(piVar54 + -2) == ppplVar34) {
          puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
          goto LAB_03d55208;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    ppppplVar40 = (long *****)0x0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d55208:
    auVar73 = (*(code *)*puVar19)(plVar33,puVar19[1]);
    ppppplVar63 = auVar73._8_8_;
    ppplVar34 = ppppplVar25[7][6];
    if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
      ppplVar34 = (long ***)func_0x0325681c(ppplVar34);
    }
    lVar41 = *plVar30;
    uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
      do {
        if (*(long ****)(piVar54 + -2) == ppplVar34) {
          puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
          goto LAB_03d55280;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    ppppplVar40 = (long *****)0x0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar30);
LAB_03d55280:
    auVar72 = (*(code *)*puVar19)(plVar30,puVar19[1]);
    ppppplVar39 = auVar72._0_8_;
    if (ppppplVar42 == (long *****)0x0) goto LAB_03d554b4;
    ppplVar34 = *ppppplVar25[7];
    if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
      ppplVar34 = (long ***)func_0x0325681c(ppplVar34);
    }
    pppplVar22 = *ppppplVar42;
    uVar50 = (ulong)*(ushort *)((long)pppplVar22 + 0x12e);
    if (uVar50 != 0) {
      ppplVar35 = pppplVar22[0x16] + 1;
      do {
        if ((long ***)ppplVar35[-1] == ppplVar34) {
          pppplVar22 = pppplVar22 + (long)*(int *)ppplVar35 * 2 + 0x27;
          goto LAB_03d552fc;
        }
        uVar50 = uVar50 - 1;
        ppplVar35 = ppplVar35 + 2;
      } while (uVar50 != 0);
    }
    pppplVar22 = (long ****)func_0x03256b10(ppppplVar42,ppplVar34,0);
LAB_03d552fc:
    ppppplVar40 = ppppplVar63;
    uVar50 = (*(code *)*pppplVar22)
                       (ppppplVar42,auVar73._0_8_,ppppplVar63,ppppplVar39,auVar72._8_8_,
                        pppplVar22[1]);
    auVar8 = auVar72;
  } while ((uVar50 & 1) != 0);
  iVar18 = 0xc;
  ppppplVar27 = ppppplVar39;
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
  ppppplVar40 = (long *****)0x0;
  puVar19 = (undefined8 *)func_0x03256b10(plVar30);
LAB_03d5538c:
  uVar50 = (*(code *)*puVar19)(plVar30,puVar19[1]);
  iVar18 = 0xc;
  if ((uVar50 & 1) == 0) {
    iVar18 = 0xe;
  }
joined_r0x03d553ac:
  ppppplVar42 = (long *****)0x0;
joined_r0x03d553ac:
  if (plVar30 != (long *)0x0) {
    plVar33 = auVar9._8_8_;
    lVar41 = *plVar33;
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
    ppppplVar40 = (long *****)0x0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d55404:
    (*(code *)*puVar19)(plVar33,puVar19[1]);
  }
  pppplVar22 = auVar9._0_8_;
  if (ppppplVar42 != (long *****)0x0) goto LAB_03d554ec;
  ppppplVar56 = (long *****)0x0;
  ppppplVar39 = ppppplVar27;
  ppppplVar25 = (long *****)0x0;
  if (iVar18 == 0) goto LAB_03d55420;
  do {
    auVar75._8_8_ = ppppplVar25;
    auVar75._0_8_ = pppplVar22;
    if (pppplVar22 != (long ****)0x0) {
      ppplVar34 = *pppplVar22;
      uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
      if (uVar50 != 0) {
        pplVar36 = ppplVar34[0x16] + 1;
        do {
          if (pplVar36[-1] == *(long **)PTR_DAT_0774e8c8) {
            ppplVar34 = ppplVar34 + (long)*(int *)pplVar36 * 2 + 0x27;
            goto LAB_03d55480;
          }
          uVar50 = uVar50 - 1;
          pplVar36 = pplVar36 + 2;
        } while (uVar50 != 0);
      }
      ppppplVar40 = (long *****)0x0;
      ppplVar34 = (long ***)func_0x03256b10(pppplVar22);
LAB_03d55480:
      (*(code *)*ppplVar34)(pppplVar22,ppplVar34[1]);
    }
    auVar12 = auVar8;
    if (ppppplVar25 == (long *****)0x0) {
      return (long *****)(ulong)(iVar18 != 0xc);
    }
LAB_03d554e0:
    func_0x03280ca4(ppppplVar25);
    pppplVar22 = pppplVar55;
    auVar9 = auVar75;
    auVar14 = auVar12;
LAB_03d554e8:
    auVar8 = auVar14;
    func_0x03280cac();
    ppppplVar27 = ppppplVar39;
    pppplVar55 = pppplVar22;
LAB_03d554ec:
    func_0x03280ca4(ppppplVar42);
    auVar10 = auVar9;
LAB_03d554f4:
    plVar30 = auVar10._8_8_;
    pppplVar22 = auVar10._0_8_;
    auVar72 = func_0x03280cac();
    pppplVar59 = auVar72._8_8_;
    pppplVar57 = auVar72._0_8_;
    if (auVar72._8_4_ == 1) break;
    ppppplVar42 = (long *****)0x0;
    if (plVar30 != (long *)0x0) {
      lVar41 = *plVar30;
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
      ppppplVar40 = (long *****)0x0;
      puVar19 = (undefined8 *)func_0x03256b10(plVar30);
LAB_03d555b4:
      (*(code *)*puVar19)(plVar30,puVar19[1]);
    }
    if (auVar72._8_4_ != 1) {
      pppplVar62 = (long ****)0x0;
      if (pppplVar22 == (long ****)0x0) goto LAB_03d55668;
      ppplVar34 = *pppplVar22;
      uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
      if (uVar50 == 0) goto LAB_03d55640;
      pplVar36 = ppplVar34[0x16] + 1;
      goto LAB_03d55628;
    }
    puVar19 = (undefined8 *)func_0x072ce910(pppplVar57);
    ppppplVar56 = (long *****)*puVar19;
    func_0x072ce920();
LAB_03d55420:
    iVar18 = 0;
    ppppplVar39 = ppppplVar27;
    ppppplVar25 = ppppplVar56;
  } while( true );
  plVar33 = (long *)func_0x072ce910(pppplVar57);
  ppppplVar42 = (long *****)*plVar33;
  func_0x072ce920();
  iVar18 = 0;
  auVar9 = auVar10;
  goto joined_r0x03d553ac;
  while( true ) {
    uVar50 = uVar50 - 1;
    pplVar36 = pplVar36 + 2;
    if (uVar50 == 0) break;
LAB_03d55628:
    if (pplVar36[-1] == *(long **)PTR_DAT_0774e8c8) {
      ppplVar34 = ppplVar34 + (long)*(int *)pplVar36 * 2 + 0x27;
      goto LAB_03d5565c;
    }
  }
LAB_03d55640:
  ppppplVar40 = (long *****)0x0;
  ppplVar34 = (long ***)func_0x03256b10(pppplVar22);
LAB_03d5565c:
  (*(code *)*ppplVar34)(pppplVar22,ppplVar34[1]);
LAB_03d55668:
  func_0x03365958(pppplVar57);
  func_0x03280ca4(0);
  auVar72 = func_0x02f09514();
  pppplVar65 = auVar72._8_8_;
  plVar33 = auVar72._0_8_;
  ppppplVar26[-0x10] = (long ****)0x3d55680;
  ppppplVar26[-0xf] = pppplVar59;
  ppppplVar26[-0xe] = (long ****)0x0;
  ppppplVar26[-0xd] = pppplVar57;
  ppppplVar26[-0xc] = (long ****)0x0;
  ppppplVar26[-0xb] = pppplVar22;
  if (pppplVar65[7] == (long ***)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (pppplVar65[7] == (long ***)0x0) {
      func_0x03256878(pppplVar65);
    }
  }
  if (plVar33 == (long *)0x0) {
    uVar20 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar20 = func_0x05ac7464(uVar20,0);
  }
  else {
    pplVar36 = pppplVar65[7][1];
    if ((*(byte *)((long)pplVar36 + 0x135) & 1) == 0) {
      pplVar36 = (long **)func_0x0325681c(pplVar36);
    }
    pppplVar62 = (long ****)func_0x03280b90(plVar33,pplVar36);
    if (pppplVar62 == (long ****)0x0) {
      pplVar36 = *pppplVar65[7];
      if ((*(byte *)((long)pplVar36 + 0x135) & 1) == 0) {
        pplVar36 = (long **)func_0x0325681c(pplVar36);
      }
      lVar41 = *plVar33;
      uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
      if (uVar50 != 0) {
        piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
        do {
          if (*(long ***)(piVar54 + -2) == pplVar36) {
            puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
            goto LAB_03d55850;
          }
          uVar50 = uVar50 - 1;
          piVar54 = piVar54 + 4;
        } while (uVar50 != 0);
      }
      ppppplVar40 = (long *****)0x0;
      puVar19 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d55850:
      pppplVar62 = (long ****)(*(code *)*puVar19)(plVar33,puVar19[1]);
      puVar32 = PTR_DAT_0774e8e0;
      if (pppplVar62 == (long ****)0x0) goto LAB_03d55a6c;
      ppplVar34 = *pppplVar62;
      uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
      if (uVar50 != 0) {
        pplVar36 = ppplVar34[0x16] + 1;
        do {
          if (pplVar36[-1] == *(long **)PTR_DAT_0774e8e0) {
            ppplVar34 = ppplVar34 + (long)*(int *)pplVar36 * 2 + 0x27;
            goto LAB_03d558b8;
          }
          uVar50 = uVar50 - 1;
          pplVar36 = pplVar36 + 2;
        } while (uVar50 != 0);
      }
      ppppplVar40 = (long *****)0x0;
      ppplVar34 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d558b8:
      uVar50 = (*(code *)*ppplVar34)(pppplVar62,ppplVar34[1]);
      if ((uVar50 & 1) == 0) goto LAB_03d55a78;
      pplVar36 = pppplVar65[7][7];
      if ((*(byte *)((long)pplVar36 + 0x135) & 1) == 0) {
        pplVar36 = (long **)func_0x0325681c(pplVar36);
      }
      ppplVar34 = *pppplVar62;
      uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
      if (uVar50 != 0) {
        pplVar53 = ppplVar34[0x16] + 1;
        do {
          if ((long **)pplVar53[-1] == pplVar36) {
            ppplVar34 = ppplVar34 + (long)*(int *)pplVar53 * 2 + 0x27;
            goto LAB_03d5592c;
          }
          uVar50 = uVar50 - 1;
          pplVar53 = pplVar53 + 2;
        } while (uVar50 != 0);
      }
      ppppplVar40 = (long *****)0x0;
      ppplVar34 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d5592c:
      uVar17 = (*(code *)*ppplVar34)(pppplVar62,ppplVar34[1]);
      ppplVar34 = *pppplVar62;
      uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
      if (uVar50 != 0) {
        pplVar36 = ppplVar34[0x16] + 1;
        do {
          if (pplVar36[-1] == *(long **)puVar32) {
            ppplVar34 = ppplVar34 + (long)*(int *)pplVar36 * 2 + 0x27;
            goto LAB_03d55988;
          }
          uVar50 = uVar50 - 1;
          pplVar36 = pplVar36 + 2;
        } while (uVar50 != 0);
      }
      ppppplVar40 = (long *****)0x0;
      ppplVar34 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d55988:
      uVar50 = (*(code *)*ppplVar34)(pppplVar62,ppplVar34[1]);
      bVar16 = (uVar50 & 1) == 0;
      plVar33 = (long *)0x0;
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
    pplVar36 = pppplVar65[7][2];
    if ((*(byte *)((long)pplVar36 + 0x135) & 1) == 0) {
      pplVar36 = (long **)func_0x0325681c(pplVar36);
    }
    ppplVar34 = *pppplVar62;
    uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
    if (uVar50 != 0) {
      pplVar53 = ppplVar34[0x16] + 1;
      do {
        if ((long **)pplVar53[-1] == pplVar36) {
          ppplVar34 = ppplVar34 + (long)*(int *)pplVar53 * 2 + 0x27;
          goto LAB_03d557b0;
        }
        uVar50 = uVar50 - 1;
        pplVar53 = pplVar53 + 2;
      } while (uVar50 != 0);
    }
    ppppplVar40 = (long *****)0x0;
    ppplVar34 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d557b0:
    iVar18 = (*(code *)*ppplVar34)(pppplVar62,ppplVar34[1]);
    if (iVar18 == 1) {
      pplVar36 = pppplVar65[7][1];
      if ((*(byte *)((long)pplVar36 + 0x135) & 1) == 0) {
        pplVar36 = (long **)func_0x0325681c(pplVar36);
      }
      ppplVar34 = *pppplVar62;
      uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
      if (uVar50 != 0) {
        pplVar53 = ppplVar34[0x16] + 1;
        do {
          if ((long **)pplVar53[-1] == pplVar36) {
            ppplVar34 = ppplVar34 + (long)*(int *)pplVar53 * 2 + 0x27;
            goto LAB_03d55828;
          }
          uVar50 = uVar50 - 1;
          pplVar53 = pplVar53 + 2;
        } while (uVar50 != 0);
      }
      ppplVar34 = (long ***)func_0x03256b10(pppplVar62,pplVar36,0);
LAB_03d55828:
                    /* WARNING: Could not recover jumptable at 0x03d55840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppppplVar67 = (long *****)(*(code *)*ppplVar34)(pppplVar62,0,ppplVar34[1]);
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
      func_0x03280ca4(plVar33);
LAB_03d55a78:
      uVar20 = func_0x05ac75f4(0);
      auVar77 = func_0x03280b7c(uVar20,pppplVar65);
      pppplVar22 = auVar77._0_8_;
      if (auVar77._8_4_ != 1) {
        if (pppplVar62 == (long ****)0x0) goto LAB_03d55b34;
        ppplVar34 = *pppplVar62;
        uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
        if (uVar50 == 0) goto LAB_03d55b0c;
        pplVar36 = ppplVar34[0x16] + 1;
        goto LAB_03d55af4;
      }
      puVar19 = (undefined8 *)func_0x072ce910(pppplVar22);
      plVar33 = (long *)*puVar19;
      func_0x072ce920();
      pppplVar59 = (long ****)0x0;
      uVar43 = 0;
      if (pppplVar62 != (long ****)0x0) {
LAB_03d559b0:
        ppplVar34 = *pppplVar62;
        uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
        if (uVar50 != 0) {
          pplVar36 = ppplVar34[0x16] + 1;
          do {
            if (pplVar36[-1] == *(long **)PTR_DAT_0774e8c8) {
              ppplVar34 = ppplVar34 + (long)*(int *)pplVar36 * 2 + 0x27;
              goto LAB_03d55a04;
            }
            uVar50 = uVar50 - 1;
            pplVar36 = pplVar36 + 2;
          } while (uVar50 != 0);
        }
        ppppplVar40 = (long *****)0x0;
        ppplVar34 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d55a04:
        (*(code *)*ppplVar34)(pppplVar62,ppplVar34[1]);
      }
LAB_03d55a10:
    } while (plVar33 != (long *)0x0);
    if (((uint)pppplVar59 | 8) != 8) {
      return (long *****)(ulong)uVar43;
    }
LAB_03d55a44:
    uVar20 = func_0x05ac751c(0);
  } while( true );
  while( true ) {
    uVar50 = uVar50 - 1;
    pplVar36 = pplVar36 + 2;
    if (uVar50 == 0) break;
LAB_03d55af4:
    if (pplVar36[-1] == *(long **)PTR_DAT_0774e8c8) {
      ppplVar34 = ppplVar34 + (long)*(int *)pplVar36 * 2 + 0x27;
      goto LAB_03d55b28;
    }
  }
LAB_03d55b0c:
  ppppplVar40 = (long *****)0x0;
  ppplVar34 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d55b28:
  (*(code *)*ppplVar34)(pppplVar62,ppplVar34[1]);
LAB_03d55b34:
  func_0x03365958(pppplVar22);
  func_0x03280ca4(0);
  auVar72 = func_0x02f09514();
  pppplVar57 = auVar72._8_8_;
  plVar33 = auVar72._0_8_;
  ppppplVar26[-0x16] = (long ****)0x3d55b4c;
  ppppplVar26[-0x15] = pppplVar59;
  ppppplVar26[-0x14] = pppplVar22;
  ppppplVar26[-0x13] = (long ****)0x0;
  ppppplVar26[-0x12] = pppplVar62;
  ppppplVar26[-0x11] = pppplVar65;
  if (pppplVar57[7] == (long ***)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (pppplVar57[7] == (long ***)0x0) {
      func_0x03256878(pppplVar57);
    }
  }
  if (plVar33 == (long *)0x0) {
    uVar20 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar20 = func_0x05ac7464(uVar20,0);
  }
  else {
    pplVar36 = pppplVar57[7][1];
    if ((*(byte *)((long)pplVar36 + 0x135) & 1) == 0) {
      pplVar36 = (long **)func_0x0325681c(pplVar36);
    }
    pppplVar62 = (long ****)func_0x03280b90(plVar33,pplVar36);
    if (pppplVar62 == (long ****)0x0) {
      pplVar36 = *pppplVar57[7];
      if ((*(byte *)((long)pplVar36 + 0x135) & 1) == 0) {
        pplVar36 = (long **)func_0x0325681c(pplVar36);
      }
      lVar41 = *plVar33;
      uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
      if (uVar50 != 0) {
        piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
        do {
          if (*(long ***)(piVar54 + -2) == pplVar36) {
            puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
            goto LAB_03d55d1c;
          }
          uVar50 = uVar50 - 1;
          piVar54 = piVar54 + 4;
        } while (uVar50 != 0);
      }
      ppppplVar40 = (long *****)0x0;
      puVar19 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d55d1c:
      pppplVar62 = (long ****)(*(code *)*puVar19)(plVar33,puVar19[1]);
      puVar32 = PTR_DAT_0774e8e0;
      if (pppplVar62 == (long ****)0x0) goto LAB_03d55f38;
      ppplVar34 = *pppplVar62;
      uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
      if (uVar50 != 0) {
        pplVar36 = ppplVar34[0x16] + 1;
        do {
          if (pplVar36[-1] == *(long **)PTR_DAT_0774e8e0) {
            ppplVar34 = ppplVar34 + (long)*(int *)pplVar36 * 2 + 0x27;
            goto LAB_03d55d84;
          }
          uVar50 = uVar50 - 1;
          pplVar36 = pplVar36 + 2;
        } while (uVar50 != 0);
      }
      ppppplVar40 = (long *****)0x0;
      ppplVar34 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d55d84:
      uVar50 = (*(code *)*ppplVar34)(pppplVar62,ppplVar34[1]);
      if ((uVar50 & 1) == 0) goto LAB_03d55f44;
      pplVar36 = pppplVar57[7][7];
      if ((*(byte *)((long)pplVar36 + 0x135) & 1) == 0) {
        pplVar36 = (long **)func_0x0325681c(pplVar36);
      }
      ppplVar34 = *pppplVar62;
      uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
      if (uVar50 != 0) {
        pplVar53 = ppplVar34[0x16] + 1;
        do {
          if ((long **)pplVar53[-1] == pplVar36) {
            ppplVar34 = ppplVar34 + (long)*(int *)pplVar53 * 2 + 0x27;
            goto LAB_03d55df8;
          }
          uVar50 = uVar50 - 1;
          pplVar53 = pplVar53 + 2;
        } while (uVar50 != 0);
      }
      ppppplVar40 = (long *****)0x0;
      ppplVar34 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d55df8:
      ppppplVar42 = (long *****)(*(code *)*ppplVar34)(pppplVar62,ppplVar34[1]);
      ppplVar34 = *pppplVar62;
      uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
      if (uVar50 != 0) {
        pplVar36 = ppplVar34[0x16] + 1;
        do {
          if (pplVar36[-1] == *(long **)puVar32) {
            ppplVar34 = ppplVar34 + (long)*(int *)pplVar36 * 2 + 0x27;
            goto LAB_03d55e54;
          }
          uVar50 = uVar50 - 1;
          pplVar36 = pplVar36 + 2;
        } while (uVar50 != 0);
      }
      ppppplVar40 = (long *****)0x0;
      ppplVar34 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d55e54:
      uVar50 = (*(code *)*ppplVar34)(pppplVar62,ppplVar34[1]);
      bVar16 = (uVar50 & 1) == 0;
      plVar33 = (long *)0x0;
      uVar17 = 8;
      if (bVar16) {
        uVar17 = 0xf;
      }
      pppplVar59 = (long ****)(ulong)uVar17;
      ppppplVar39 = (long *****)0x0;
      if (bVar16) {
        ppppplVar39 = ppppplVar42;
      }
      if (pppplVar62 == (long ****)0x0) goto LAB_03d55edc;
      goto LAB_03d55e7c;
    }
    pplVar36 = pppplVar57[7][2];
    if ((*(byte *)((long)pplVar36 + 0x135) & 1) == 0) {
      pplVar36 = (long **)func_0x0325681c(pplVar36);
    }
    ppplVar34 = *pppplVar62;
    uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
    if (uVar50 != 0) {
      pplVar53 = ppplVar34[0x16] + 1;
      do {
        if ((long **)pplVar53[-1] == pplVar36) {
          ppplVar34 = ppplVar34 + (long)*(int *)pplVar53 * 2 + 0x27;
          goto LAB_03d55c7c;
        }
        uVar50 = uVar50 - 1;
        pplVar53 = pplVar53 + 2;
      } while (uVar50 != 0);
    }
    ppppplVar40 = (long *****)0x0;
    ppplVar34 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d55c7c:
    iVar18 = (*(code *)*ppplVar34)(pppplVar62,ppplVar34[1]);
    if (iVar18 == 1) {
      pplVar36 = pppplVar57[7][1];
      if ((*(byte *)((long)pplVar36 + 0x135) & 1) == 0) {
        pplVar36 = (long **)func_0x0325681c(pplVar36);
      }
      ppplVar34 = *pppplVar62;
      uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
      if (uVar50 != 0) {
        pplVar53 = ppplVar34[0x16] + 1;
        do {
          if ((long **)pplVar53[-1] == pplVar36) {
            ppplVar34 = ppplVar34 + (long)*(int *)pplVar53 * 2 + 0x27;
            goto LAB_03d55cf4;
          }
          uVar50 = uVar50 - 1;
          pplVar53 = pplVar53 + 2;
        } while (uVar50 != 0);
      }
      ppplVar34 = (long ***)func_0x03256b10(pppplVar62,pplVar36,0);
LAB_03d55cf4:
                    /* WARNING: Could not recover jumptable at 0x03d55d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppppplVar67 = (long *****)(*(code *)*ppplVar34)(pppplVar62,0,ppplVar34[1]);
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
      func_0x03280ca4(plVar33);
LAB_03d55f44:
      uVar20 = func_0x05ac75f4(0);
      auVar77 = func_0x03280b7c(uVar20,pppplVar57);
      pppplVar22 = auVar77._0_8_;
      if (auVar77._8_4_ != 1) {
        if (pppplVar62 == (long ****)0x0) goto LAB_03d56000;
        ppplVar34 = *pppplVar62;
        uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
        if (uVar50 == 0) goto LAB_03d55fd8;
        pplVar36 = ppplVar34[0x16] + 1;
        goto LAB_03d55fc0;
      }
      puVar19 = (undefined8 *)func_0x072ce910(pppplVar22);
      plVar33 = (long *)*puVar19;
      func_0x072ce920();
      pppplVar59 = (long ****)0x0;
      ppppplVar39 = (long *****)0x0;
      if (pppplVar62 != (long ****)0x0) {
LAB_03d55e7c:
        ppplVar34 = *pppplVar62;
        uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
        if (uVar50 != 0) {
          pplVar36 = ppplVar34[0x16] + 1;
          do {
            if (pplVar36[-1] == *(long **)PTR_DAT_0774e8c8) {
              ppplVar34 = ppplVar34 + (long)*(int *)pplVar36 * 2 + 0x27;
              goto LAB_03d55ed0;
            }
            uVar50 = uVar50 - 1;
            pplVar36 = pplVar36 + 2;
          } while (uVar50 != 0);
        }
        ppppplVar40 = (long *****)0x0;
        ppplVar34 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d55ed0:
        (*(code *)*ppplVar34)(pppplVar62,ppplVar34[1]);
      }
LAB_03d55edc:
    } while (plVar33 != (long *)0x0);
    if (((uint)pppplVar59 | 8) != 8) {
      return ppppplVar39;
    }
LAB_03d55f10:
    uVar20 = func_0x05ac751c(0);
  } while( true );
  while( true ) {
    uVar50 = uVar50 - 1;
    pplVar36 = pplVar36 + 2;
    if (uVar50 == 0) break;
LAB_03d55fc0:
    if (pplVar36[-1] == *(long **)PTR_DAT_0774e8c8) {
      ppplVar34 = ppplVar34 + (long)*(int *)pplVar36 * 2 + 0x27;
      goto LAB_03d55ff4;
    }
  }
LAB_03d55fd8:
  ppppplVar40 = (long *****)0x0;
  ppplVar34 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d55ff4:
  (*(code *)*ppplVar34)(pppplVar62,ppplVar34[1]);
LAB_03d56000:
  func_0x03365958(pppplVar22);
  func_0x03280ca4(0);
  auVar72 = func_0x02f09514();
  plVar33 = auVar72._0_8_;
  ppppplVar26[-0x22] = (long ****)(ppppplVar23 + -0x2c);
  ppppplVar26[-0x21] = (long ****)0x3d56018;
  ppppplVar26[-0x20] = pppplVar55;
  ppppplVar26[-0x1e] = auVar8._8_8_;
  ppppplVar26[-0x1d] = auVar8._0_8_;
  ppppplVar26[-0x1c] = (long ****)ppppplVar63;
  ppppplVar26[-0x1b] = pppplVar59;
  ppppplVar26[-0x1a] = pppplVar22;
  ppppplVar26[-0x19] = (long ****)0x0;
  ppppplVar26[-0x18] = pppplVar62;
  ppppplVar26[-0x17] = pppplVar57;
  pppplVar22 = (long ****)tpidr_el0;
  ppppplVar26[-0x23] = (long ****)pppplVar22[5];
  pppplVar55 = ppppplVar40[7];
  if (pppplVar55 == (long ****)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    pppplVar55 = ppppplVar40[7];
    if (pppplVar55 == (long ****)0x0) {
      func_0x03256878(ppppplVar40);
      pppplVar55 = ppppplVar40[7];
    }
  }
  pppplVar59 = (long ****)(ulong)*(uint *)((long)pppplVar55[5] + 0xfc);
  uVar50 = (long)pppplVar59 + 0xfU & 0x1fffffff0;
  pppplVar62 = (long ****)((long)ppppplVar26 + (-0x130 - uVar50));
  lVar41 = (long)pppplVar62 - uVar50;
  func_0x072ce9a0(lVar41,0,pppplVar59);
  ppppplVar42 = (long *****)(lVar41 - uVar50);
  pppplVar57 = pppplVar59;
  func_0x072ce9a0(ppppplVar42,0);
  if (plVar33 == (long *)0x0) {
    uVar20 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar20 = func_0x05ac7464(uVar20,0);
    goto LAB_03d56508;
  }
  ppplVar34 = pppplVar55[1];
  if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
    ppplVar34 = (long ***)func_0x0325681c(ppplVar34);
  }
  pppplVar55 = (long ****)func_0x03280b90(plVar33,ppplVar34);
  if (pppplVar55 == (long ****)0x0) {
    ppplVar34 = *ppppplVar40[7];
    if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
      ppplVar34 = (long ***)func_0x0325681c(ppplVar34);
    }
    lVar45 = *plVar33;
    uVar50 = (ulong)*(ushort *)(lVar45 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar45 + 0xb0) + 8);
      do {
        if (*(long ****)(piVar54 + -2) == ppplVar34) {
          puVar19 = (undefined8 *)(lVar45 + (long)*piVar54 * 0x10 + 0x138);
          goto LAB_03d5626c;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    pppplVar57 = (long ****)0x0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d5626c:
    pppplVar55 = (long ****)(*(code *)*puVar19)(plVar33,puVar19[1]);
    puVar32 = PTR_DAT_0774e8e0;
    if (pppplVar55 == (long ****)0x0) goto LAB_03d56510;
    ppplVar34 = *pppplVar55;
    uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
    if (uVar50 != 0) {
      pplVar36 = ppplVar34[0x16] + 1;
      do {
        if (pplVar36[-1] == *(long **)PTR_DAT_0774e8e0) {
          ppplVar34 = ppplVar34 + (long)*(int *)pplVar36 * 2 + 0x27;
          goto LAB_03d562d4;
        }
        uVar50 = uVar50 - 1;
        pplVar36 = pplVar36 + 2;
      } while (uVar50 != 0);
    }
    pppplVar57 = (long ****)0x0;
    ppplVar34 = (long ***)func_0x03256b10(pppplVar55);
LAB_03d562d4:
    uVar50 = (*(code *)*ppplVar34)(pppplVar55,ppplVar34[1]);
    if ((uVar50 & 1) == 0) goto LAB_03d5651c;
    ppplVar34 = ppppplVar40[7][7];
    if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
      ppplVar34 = (long ***)func_0x0325681c(ppplVar34);
    }
    ppplVar35 = *pppplVar55;
    uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
    if (uVar50 != 0) {
      pplVar36 = ppplVar35[0x16] + 1;
      do {
        if ((long ***)pplVar36[-1] == ppplVar34) {
          ppplVar35 = ppplVar35 + (long)*(int *)pplVar36 * 2 + 0x27;
          goto LAB_03d56348;
        }
        uVar50 = uVar50 - 1;
        pplVar36 = pplVar36 + 2;
      } while (uVar50 != 0);
    }
    ppplVar35 = (long ***)func_0x03256b10(pppplVar55,ppplVar34,0);
LAB_03d56348:
    ppppplVar26[-0x26] = pppplVar62;
    pplVar36 = ppplVar35[1];
    ppppplVar27 = ppppplVar26 + -0x26;
    (*(code *)pplVar36[2])(pplVar36[1],pplVar36,pppplVar55,ppppplVar27,pppplVar62);
    pppplVar57 = pppplVar59;
    func_0x072ce970(lVar41,pppplVar62);
    ppplVar34 = *pppplVar55;
    uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
    if (uVar50 != 0) {
      pplVar36 = ppplVar34[0x16] + 1;
      do {
        if (pplVar36[-1] == *(long **)puVar32) {
          ppplVar34 = ppplVar34 + (long)*(int *)pplVar36 * 2 + 0x27;
          goto LAB_03d563c0;
        }
        uVar50 = uVar50 - 1;
        pplVar36 = pplVar36 + 2;
      } while (uVar50 != 0);
    }
    pppplVar57 = (long ****)0x0;
    ppplVar34 = (long ***)func_0x03256b10(pppplVar55);
LAB_03d563c0:
    ppppplVar39 = (long *****)(*(code *)*ppplVar34)(pppplVar55,ppplVar34[1]);
    if (((ulong)ppppplVar39 & 1) != 0) {
      lVar41 = 0;
      iVar44 = 8;
      iVar18 = 8;
      goto joined_r0x03d563d8;
    }
    func_0x072ce970(pppplVar62,lVar41,pppplVar59);
    pppplVar57 = pppplVar59;
    ppppplVar39 = (long *****)func_0x072ce970(ppppplVar42,pppplVar62);
    lVar41 = 0;
    iVar18 = 0xf;
    iVar44 = 0xf;
    if (pppplVar55 == (long ****)0x0) goto LAB_03d5646c;
    goto LAB_03d5640c;
  }
  ppplVar34 = ppppplVar40[7][2];
  if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
    ppplVar34 = (long ***)func_0x0325681c(ppplVar34);
  }
  ppplVar35 = *pppplVar55;
  uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
  if (uVar50 != 0) {
    pplVar36 = ppplVar35[0x16] + 1;
    do {
      if ((long ***)pplVar36[-1] == ppplVar34) {
        ppplVar35 = ppplVar35 + (long)*(int *)pplVar36 * 2 + 0x27;
        goto LAB_03d561c0;
      }
      uVar50 = uVar50 - 1;
      pplVar36 = pplVar36 + 2;
    } while (uVar50 != 0);
  }
  pppplVar57 = (long ****)0x0;
  ppplVar35 = (long ***)func_0x03256b10(pppplVar55);
LAB_03d561c0:
  iVar18 = (*(code *)*ppplVar35)(pppplVar55,ppplVar35[1]);
  if (iVar18 != 1) {
    if (iVar18 != 0) goto LAB_03d56500;
    uVar20 = func_0x05ac75f4(0);
    goto LAB_03d56508;
  }
  ppplVar34 = ppppplVar40[7][1];
  if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
    ppplVar34 = (long ***)func_0x0325681c(ppplVar34);
  }
  *(undefined4 *)((long)ppppplVar26 + -0x11c) = 0;
  ppplVar35 = *pppplVar55;
  uVar50 = (ulong)*(ushort *)((long)ppplVar35 + 0x12e);
  if (uVar50 != 0) {
    pplVar36 = ppplVar35[0x16] + 1;
    do {
      if ((long ***)pplVar36[-1] == ppplVar34) {
        ppplVar35 = ppplVar35 + (long)*(int *)pplVar36 * 2 + 0x27;
        goto LAB_03d5623c;
      }
      uVar50 = uVar50 - 1;
      pplVar36 = pplVar36 + 2;
    } while (uVar50 != 0);
  }
  ppplVar35 = (long ***)func_0x03256b10(pppplVar55,ppplVar34,0);
LAB_03d5623c:
  ppppplVar26[-0x26] = (long ****)((long)ppppplVar26 + -0x11c);
  ppppplVar26[-0x25] = pppplVar62;
  pplVar36 = ppplVar35[1];
  ppppplVar27 = ppppplVar26 + -0x26;
  (*(code *)pplVar36[2])(pplVar36[1],pplVar36,pppplVar55,ppppplVar27,pppplVar62);
LAB_03d56498:
  pppplVar57 = pppplVar59;
  ppppplVar39 = (long *****)func_0x072ce970(auVar72._8_8_,pppplVar62);
LAB_03d564a8:
  if ((long ****)pppplVar22[5] == ppppplVar26[-0x23]) {
    return ppppplVar39;
  }
  do {
    auVar77 = func_0x072ce990();
    pppplVar65 = auVar77._0_8_;
    if (auVar77._8_4_ != 1) {
      if (pppplVar55 == (long ****)0x0) goto LAB_03d565d8;
      ppplVar34 = *pppplVar55;
      uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
      if (uVar50 == 0) goto LAB_03d565b0;
      pplVar36 = ppplVar34[0x16] + 1;
      break;
    }
    plVar33 = (long *)func_0x072ce910(pppplVar65);
    lVar41 = *plVar33;
    ppppplVar39 = (long *****)func_0x072ce920();
    iVar44 = 0;
    iVar18 = 0;
joined_r0x03d563d8:
    if (pppplVar55 != (long ****)0x0) {
LAB_03d5640c:
      iVar18 = iVar44;
      ppplVar34 = *pppplVar55;
      uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
      if (uVar50 != 0) {
        pplVar36 = ppplVar34[0x16] + 1;
        do {
          if (pplVar36[-1] == *(long **)PTR_DAT_0774e8c8) {
            ppplVar34 = ppplVar34 + (long)*(int *)pplVar36 * 2 + 0x27;
            goto LAB_03d56460;
          }
          uVar50 = uVar50 - 1;
          pplVar36 = pplVar36 + 2;
        } while (uVar50 != 0);
      }
      pppplVar57 = (long ****)0x0;
      ppplVar34 = (long ***)func_0x03256b10(pppplVar55);
LAB_03d56460:
      ppppplVar39 = (long *****)(*(code *)*ppplVar34)(pppplVar55,ppplVar34[1]);
    }
LAB_03d5646c:
    if (lVar41 == 0) {
      if (iVar18 == 0xf) {
        func_0x072ce970(pppplVar62,ppppplVar42,pppplVar59);
        goto LAB_03d56498;
      }
      if ((iVar18 != 8) && (iVar18 != 0)) goto LAB_03d564a8;
LAB_03d56500:
      uVar20 = func_0x05ac751c(0);
LAB_03d56508:
      func_0x03280b7c(uVar20,ppppplVar40);
LAB_03d56510:
      func_0x03280cac();
    }
    func_0x03280ca4(lVar41);
LAB_03d5651c:
    uVar20 = func_0x05ac75f4(0);
    func_0x03280b7c(uVar20,ppppplVar40);
  } while( true );
  while( true ) {
    uVar50 = uVar50 - 1;
    pplVar36 = pplVar36 + 2;
    if (uVar50 == 0) break;
    if (pplVar36[-1] == *(long **)PTR_DAT_0774e8c8) {
      ppplVar34 = ppplVar34 + (long)*(int *)pplVar36 * 2 + 0x27;
      goto LAB_03d565cc;
    }
  }
LAB_03d565b0:
  pppplVar57 = (long ****)0x0;
  ppplVar34 = (long ***)func_0x03256b10(pppplVar55);
LAB_03d565cc:
  (*(code *)*ppplVar34)(pppplVar55,ppplVar34[1]);
LAB_03d565d8:
  func_0x03365958(pppplVar65);
  func_0x03280ca4(0);
  auVar73 = func_0x02f09514();
  pppplVar47 = auVar73._8_8_;
  plVar33 = auVar73._0_8_;
  ppppplVar42[-8] = (long ****)0x3d565f0;
  ppppplVar42[-6] = pppplVar55;
  ppppplVar42[-5] = (long ****)ppppplVar42;
  ppppplVar42[-4] = (long ****)ppppplVar40;
  ppppplVar42[-3] = pppplVar62;
  ppppplVar42[-2] = pppplVar59;
  ppppplVar42[-1] = auVar72._8_8_;
  if (pppplVar47[7] == (long ***)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (pppplVar47[7] == (long ***)0x0) {
      func_0x03256878(pppplVar47);
    }
  }
  ppppplVar40 = ppppplVar42;
  if (plVar33 == (long *)0x0) {
    uVar20 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar20 = func_0x05ac7464(uVar20,0);
  }
  else {
    pplVar36 = pppplVar47[7][1];
    if ((*(byte *)((long)pplVar36 + 0x135) & 1) == 0) {
      pplVar36 = (long **)func_0x0325681c(pplVar36);
    }
    pppplVar59 = (long ****)func_0x03280b90(plVar33,pplVar36);
    if (pppplVar59 == (long ****)0x0) {
      pplVar36 = *pppplVar47[7];
      if ((*(byte *)((long)pplVar36 + 0x135) & 1) == 0) {
        pplVar36 = (long **)func_0x0325681c(pplVar36);
      }
      lVar41 = *plVar33;
      uVar50 = (ulong)*(ushort *)(lVar41 + 0x12e);
      if (uVar50 != 0) {
        piVar54 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
        do {
          if (*(long ***)(piVar54 + -2) == pplVar36) {
            puVar19 = (undefined8 *)(lVar41 + (long)*piVar54 * 0x10 + 0x138);
            goto LAB_03d567c4;
          }
          uVar50 = uVar50 - 1;
          piVar54 = piVar54 + 4;
        } while (uVar50 != 0);
      }
      pppplVar57 = (long ****)0x0;
      puVar19 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d567c4:
      pppplVar59 = (long ****)(*(code *)*puVar19)(plVar33,puVar19[1]);
      puVar32 = PTR_DAT_0774e8e0;
      if (pppplVar59 == (long ****)0x0) goto LAB_03d569f0;
      ppplVar34 = *pppplVar59;
      uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
      if (uVar50 != 0) {
        pplVar36 = ppplVar34[0x16] + 1;
        do {
          if (pplVar36[-1] == *(long **)PTR_DAT_0774e8e0) {
            ppplVar34 = ppplVar34 + (long)*(int *)pplVar36 * 2 + 0x27;
            goto LAB_03d5682c;
          }
          uVar50 = uVar50 - 1;
          pplVar36 = pplVar36 + 2;
        } while (uVar50 != 0);
      }
      pppplVar57 = (long ****)0x0;
      ppplVar34 = (long ***)func_0x03256b10(pppplVar59);
LAB_03d5682c:
      uVar50 = (*(code *)*ppplVar34)(pppplVar59,ppplVar34[1]);
      if ((uVar50 & 1) == 0) goto LAB_03d569fc;
      pplVar36 = pppplVar47[7][7];
      if ((*(byte *)((long)pplVar36 + 0x135) & 1) == 0) {
        pplVar36 = (long **)func_0x0325681c(pplVar36);
      }
      ppplVar34 = *pppplVar59;
      uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
      if (uVar50 != 0) {
        pplVar53 = ppplVar34[0x16] + 1;
        do {
          if ((long **)pplVar53[-1] == pplVar36) {
            ppplVar34 = ppplVar34 + (long)*(int *)pplVar53 * 2 + 0x27;
            goto LAB_03d568a0;
          }
          uVar50 = uVar50 - 1;
          pplVar53 = pplVar53 + 2;
        } while (uVar50 != 0);
      }
      pppplVar57 = (long ****)0x0;
      ppplVar34 = (long ***)func_0x03256b10(pppplVar59);
LAB_03d568a0:
      ppppplVar39 = (long *****)(*(code *)*ppplVar34)(pppplVar59,ppplVar34[1]);
      ppplVar34 = *pppplVar59;
      uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
      if (uVar50 != 0) {
        pplVar36 = ppplVar34[0x16] + 1;
        do {
          if (pplVar36[-1] == *(long **)puVar32) {
            ppplVar34 = ppplVar34 + (long)*(int *)pplVar36 * 2 + 0x27;
            goto LAB_03d56900;
          }
          uVar50 = uVar50 - 1;
          pplVar36 = pplVar36 + 2;
        } while (uVar50 != 0);
      }
      pppplVar57 = (long ****)0x0;
      ppplVar34 = (long ***)func_0x03256b10(pppplVar59);
LAB_03d56900:
      uVar50 = (*(code *)*ppplVar34)(pppplVar59,ppplVar34[1]);
      bVar16 = (uVar50 & 1) == 0;
      plVar33 = (long *)0x0;
      uVar17 = 8;
      if (bVar16) {
        uVar17 = 0xf;
      }
      pppplVar55 = (long ****)(ulong)uVar17;
      ppppplVar40 = (long *****)0x0;
      if (bVar16) {
        ppppplVar40 = ppppplVar39;
      }
      if (pppplVar59 == (long ****)0x0) goto LAB_03d5698c;
      goto LAB_03d5692c;
    }
    pplVar36 = pppplVar47[7][2];
    if ((*(byte *)((long)pplVar36 + 0x135) & 1) == 0) {
      pplVar36 = (long **)func_0x0325681c(pplVar36);
    }
    ppplVar34 = *pppplVar59;
    uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
    if (uVar50 != 0) {
      pplVar53 = ppplVar34[0x16] + 1;
      do {
        if ((long **)pplVar53[-1] == pplVar36) {
          ppplVar34 = ppplVar34 + (long)*(int *)pplVar53 * 2 + 0x27;
          goto LAB_03d56724;
        }
        uVar50 = uVar50 - 1;
        pplVar53 = pplVar53 + 2;
      } while (uVar50 != 0);
    }
    pppplVar57 = (long ****)0x0;
    ppplVar34 = (long ***)func_0x03256b10(pppplVar59);
LAB_03d56724:
    iVar18 = (*(code *)*ppplVar34)(pppplVar59,ppplVar34[1]);
    if (iVar18 == 1) {
      pplVar36 = pppplVar47[7][1];
      if ((*(byte *)((long)pplVar36 + 0x135) & 1) == 0) {
        pplVar36 = (long **)func_0x0325681c(pplVar36);
      }
      ppplVar34 = *pppplVar59;
      uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
      if (uVar50 != 0) {
        pplVar53 = ppplVar34[0x16] + 1;
        do {
          if ((long **)pplVar53[-1] == pplVar36) {
            ppplVar34 = ppplVar34 + (long)*(int *)pplVar53 * 2 + 0x27;
            goto LAB_03d5679c;
          }
          uVar50 = uVar50 - 1;
          pplVar53 = pplVar53 + 2;
        } while (uVar50 != 0);
      }
      ppplVar34 = (long ***)func_0x03256b10(pppplVar59,pplVar36,0);
LAB_03d5679c:
      ppppplVar67 = (long *****)(*(code *)*ppplVar34)(pppplVar59,0,ppplVar34[1]);
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
      func_0x03280ca4(plVar33);
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
        ppplVar34 = *pppplVar59;
        uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
        if (uVar50 == 0) goto LAB_03d56a94;
        pplVar36 = ppplVar34[0x16] + 1;
        goto LAB_03d56a7c;
      }
      puVar19 = (undefined8 *)func_0x072ce910(pppplVar62);
      plVar33 = (long *)*puVar19;
      func_0x072ce920();
      pppplVar55 = (long ****)0x0;
      ppppplVar40 = (long *****)0x0;
      if (pppplVar59 != (long ****)0x0) {
LAB_03d5692c:
        ppplVar34 = *pppplVar59;
        uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
        if (uVar50 != 0) {
          pplVar36 = ppplVar34[0x16] + 1;
          do {
            if (pplVar36[-1] == *(long **)PTR_DAT_0774e8c8) {
              ppplVar34 = ppplVar34 + (long)*(int *)pplVar36 * 2 + 0x27;
              goto LAB_03d56980;
            }
            uVar50 = uVar50 - 1;
            pplVar36 = pplVar36 + 2;
          } while (uVar50 != 0);
        }
        pppplVar57 = (long ****)0x0;
        ppplVar34 = (long ***)func_0x03256b10(pppplVar59);
LAB_03d56980:
        (*(code *)*ppplVar34)(pppplVar59,ppplVar34[1]);
      }
LAB_03d5698c:
    } while (plVar33 != (long *)0x0);
    if (((uint)pppplVar55 | 8) != 8) {
      return ppppplVar40;
    }
LAB_03d569c8:
    uVar20 = func_0x05ac751c(0);
  } while( true );
  while( true ) {
    uVar50 = uVar50 - 1;
    pplVar36 = pplVar36 + 2;
    if (uVar50 == 0) break;
LAB_03d56a7c:
    if (pplVar36[-1] == *(long **)PTR_DAT_0774e8c8) {
      ppplVar34 = ppplVar34 + (long)*(int *)pplVar36 * 2 + 0x27;
      goto LAB_03d56ab0;
    }
  }
LAB_03d56a94:
  pppplVar57 = (long ****)0x0;
  ppplVar34 = (long ***)func_0x03256b10(pppplVar59);
LAB_03d56ab0:
  (*(code *)*ppplVar34)(pppplVar59,ppplVar34[1]);
LAB_03d56abc:
  func_0x03365958(pppplVar62);
  func_0x03280ca4(0);
  auVar72 = func_0x02f09514();
  lVar41 = auVar72._8_8_;
  pppplVar31 = auVar72._0_8_;
  ppppplVar42[-0x14] = (long ****)0x3d56ad4;
  ppppplVar42[-0x12] = (long ****)ppppplVar67;
  ppppplVar42[-0x11] = pppplVar22;
  ppppplVar42[-0x10] = pppplVar65;
  ppppplVar42[-0xf] = (long ****)0x0;
  ppppplVar42[-0xe] = pppplVar55;
  ppppplVar42[-0xd] = (long ****)ppppplVar40;
  ppppplVar42[-0xc] = pppplVar62;
  ppppplVar42[-0xb] = (long ****)0x0;
  ppppplVar42[-10] = pppplVar59;
  ppppplVar42[-9] = pppplVar47;
  pppplVar55 = pppplVar57;
  if (pppplVar57[7] == (long ***)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (pppplVar57[7] == (long ***)0x0) {
      func_0x03256878(pppplVar57);
    }
  }
  puVar32 = PTR_DAT_07774b08;
  if ((pppplVar31 != (long ****)0x0) && (puVar32 = PTR_DAT_077799b8, lVar41 != 0)) {
    pplVar36 = *pppplVar57[7];
    if ((*(byte *)((long)pplVar36 + 0x135) & 1) == 0) {
      pplVar36 = (long **)func_0x0325681c(pplVar36);
    }
    ppplVar34 = *pppplVar31;
    uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
    if (uVar50 != 0) {
      pplVar53 = ppplVar34[0x16] + 1;
      do {
        if ((long **)pplVar53[-1] == pplVar36) {
          ppplVar34 = ppplVar34 + (long)*(int *)pplVar53 * 2 + 0x27;
          goto LAB_03d56b94;
        }
        uVar50 = uVar50 - 1;
        pplVar53 = pplVar53 + 2;
      } while (uVar50 != 0);
    }
    pppplVar55 = (long ****)0x0;
    ppplVar34 = (long ***)func_0x03256b10(pppplVar31);
LAB_03d56b94:
    pppplVar31 = (long ****)(*(code *)*ppplVar34)(pppplVar31,ppplVar34[1]);
    pppplVar22 = (long ****)PTR_DAT_0774e8e0;
    lVar45 = 0;
    ppppplVar67 = (long *****)0x7fffffffffffffff;
    uVar20 = 0;
    do {
      auVar11._8_8_ = auVar76._8_8_;
      auVar11._0_8_ = uVar20;
      if (pppplVar31 == (long ****)0x0) {
        func_0x03280cac();
        goto LAB_03d56d74;
      }
      ppplVar34 = *pppplVar31;
      uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
      if (uVar50 != 0) {
        pplVar36 = ppplVar34[0x16] + 1;
        do {
          if ((long ***)pplVar36[-1] == *pppplVar22) {
            ppplVar34 = ppplVar34 + (long)*(int *)pplVar36 * 2 + 0x27;
            goto LAB_03d56c0c;
          }
          uVar50 = uVar50 - 1;
          pplVar36 = pplVar36 + 2;
        } while (uVar50 != 0);
      }
      pppplVar55 = (long ****)0x0;
      ppplVar34 = (long ***)func_0x03256b10(pppplVar31);
LAB_03d56c0c:
      uVar50 = (*(code *)*ppplVar34)(pppplVar31,ppplVar34[1]);
      if ((uVar50 & 1) == 0) {
        lVar41 = 0;
        uVar20 = 0xc;
        if (pppplVar31 == (long ****)0x0) goto LAB_03d56d34;
        goto LAB_03d56cd4;
      }
      pplVar36 = pppplVar57[7][4];
      if ((*(byte *)((long)pplVar36 + 0x135) & 1) == 0) {
        pplVar36 = (long **)func_0x0325681c(pplVar36);
      }
      ppplVar34 = *pppplVar31;
      uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
      if (uVar50 != 0) {
        pplVar53 = ppplVar34[0x16] + 1;
        do {
          if ((long **)pplVar53[-1] == pplVar36) {
            ppplVar34 = ppplVar34 + (long)*(int *)pplVar53 * 2 + 0x27;
            goto LAB_03d56c80;
          }
          uVar50 = uVar50 - 1;
          pplVar53 = pplVar53 + 2;
        } while (uVar50 != 0);
      }
      ppplVar34 = (long ***)func_0x03256b10(pppplVar31,pplVar36,0);
LAB_03d56c80:
      auVar76 = (*(code *)*ppplVar34)(pppplVar31,ppplVar34[1]);
      pppplVar55 = auVar76._8_8_;
      ppppplVar27 = *(long ******)(lVar41 + 0x28);
      uVar50 = (**(code **)(lVar41 + 0x18))(*(undefined8 *)(lVar41 + 0x40),auVar76._0_8_);
      if ((uVar50 & 1) != 0) {
        if (lVar45 == 0x7fffffffffffffff) goto LAB_03d56db0;
        lVar45 = lVar45 + 1;
        uVar20 = auVar76._0_8_;
      }
    } while( true );
  }
  uVar20 = func_0x03280a2c(puVar32);
  uVar20 = func_0x05ac7464(uVar20,0);
  while( true ) {
    pppplVar59 = auVar11._8_8_;
    auVar77 = func_0x03280b7c(uVar20,pppplVar57);
    lVar45 = 0x7fffffffffffffff;
    if (auVar77._8_4_ != 1) break;
    plVar33 = (long *)func_0x072ce910();
    lVar41 = *plVar33;
    func_0x072ce920();
    uVar20 = 0;
    if (pppplVar31 != (long ****)0x0) {
LAB_03d56cd4:
      ppplVar34 = *pppplVar31;
      uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
      if (uVar50 != 0) {
        pplVar36 = ppplVar34[0x16] + 1;
        do {
          if (pplVar36[-1] == *(long **)PTR_DAT_0774e8c8) {
            ppplVar34 = ppplVar34 + (long)*(int *)pplVar36 * 2 + 0x27;
            goto LAB_03d56d28;
          }
          uVar50 = uVar50 - 1;
          pplVar36 = pplVar36 + 2;
        } while (uVar50 != 0);
      }
      pppplVar55 = (long ****)0x0;
      ppplVar34 = (long ***)func_0x03256b10(pppplVar31);
LAB_03d56d28:
      (*(code *)*ppplVar34)(pppplVar31,ppplVar34[1]);
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
  ppppplVar40 = (long *****)0x0;
  if (pppplVar31 != (long ****)0x0) {
    ppplVar34 = *pppplVar31;
    uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
    if (uVar50 != 0) {
      pplVar36 = ppplVar34[0x16] + 1;
      do {
        if (pplVar36[-1] == *(long **)PTR_DAT_0774e8c8) {
          ppplVar34 = ppplVar34 + (long)*(int *)pplVar36 * 2 + 0x27;
          goto LAB_03d56e78;
        }
        uVar50 = uVar50 - 1;
        pplVar36 = pplVar36 + 2;
      } while (uVar50 != 0);
    }
    pppplVar55 = (long ****)0x0;
    ppplVar34 = (long ***)func_0x03256b10(pppplVar31);
LAB_03d56e78:
    (*(code *)*ppplVar34)(pppplVar31,ppplVar34[1]);
  }
  func_0x03365958(auVar77._0_8_);
  func_0x03280ca4(0);
  auVar72 = func_0x02f09514();
  lVar41 = auVar72._8_8_;
  pppplVar62 = auVar72._0_8_;
  ppppplVar42[-0x1e] = (long ****)0x3d56e9c;
  ppppplVar42[-0x1c] = (long ****)0x7fffffffffffffff;
  ppppplVar42[-0x1b] = pppplVar59;
  ppppplVar42[-0x1a] = auVar11._0_8_;
  ppppplVar42[-0x19] = (long ****)0x0;
  *(undefined1 (*) [16])(ppppplVar42 + -0x18) = auVar11;
  ppppplVar42[-0x16] = pppplVar31;
  ppppplVar42[-0x15] = auVar77._0_8_;
  pppplVar57 = pppplVar55;
  if (pppplVar55[7] == (long ***)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (pppplVar55[7] == (long ***)0x0) {
      func_0x03256878(pppplVar55);
    }
  }
  puVar32 = PTR_DAT_07774b08;
  if ((pppplVar62 != (long ****)0x0) && (puVar32 = PTR_DAT_077799b8, lVar41 != 0)) {
    pplVar36 = *pppplVar55[7];
    if ((*(byte *)((long)pplVar36 + 0x135) & 1) == 0) {
      pplVar36 = (long **)func_0x0325681c(pplVar36);
    }
    ppplVar34 = *pppplVar62;
    uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
    if (uVar50 != 0) {
      pplVar53 = ppplVar34[0x16] + 1;
      do {
        if ((long **)pplVar53[-1] == pplVar36) {
          ppplVar34 = ppplVar34 + (long)*(int *)pplVar53 * 2 + 0x27;
          goto LAB_03d56f58;
        }
        uVar50 = uVar50 - 1;
        pplVar53 = pplVar53 + 2;
      } while (uVar50 != 0);
    }
    pppplVar57 = (long ****)0x0;
    ppplVar34 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d56f58:
    pppplVar62 = (long ****)(*(code *)*ppplVar34)(pppplVar62,ppplVar34[1]);
    pppplVar59 = (long ****)PTR_DAT_0774e8e0;
    lVar45 = 0;
    ppppplVar39 = (long *****)0x0;
    do {
      if (pppplVar62 == (long ****)0x0) {
        func_0x03280cac();
        goto LAB_03d57120;
      }
      ppplVar34 = *pppplVar62;
      uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
      if (uVar50 != 0) {
        pplVar36 = ppplVar34[0x16] + 1;
        do {
          if ((long ***)pplVar36[-1] == *pppplVar59) {
            ppplVar34 = ppplVar34 + (long)*(int *)pplVar36 * 2 + 0x27;
            goto LAB_03d56fcc;
          }
          uVar50 = uVar50 - 1;
          pplVar36 = pplVar36 + 2;
        } while (uVar50 != 0);
      }
      pppplVar57 = (long ****)0x0;
      ppplVar34 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d56fcc:
      uVar50 = (*(code *)*ppplVar34)(pppplVar62,ppplVar34[1]);
      if ((uVar50 & 1) == 0) {
        lVar41 = 0;
        ppppplVar40 = (long *****)0xc;
        if (pppplVar62 == (long ****)0x0) goto LAB_03d570e8;
        goto LAB_03d57088;
      }
      pplVar36 = pppplVar55[7][4];
      if ((*(byte *)((long)pplVar36 + 0x135) & 1) == 0) {
        pplVar36 = (long **)func_0x0325681c(pplVar36);
      }
      ppplVar34 = *pppplVar62;
      uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
      if (uVar50 != 0) {
        pplVar53 = ppplVar34[0x16] + 1;
        do {
          if ((long **)pplVar53[-1] == pplVar36) {
            ppplVar34 = ppplVar34 + (long)*(int *)pplVar53 * 2 + 0x27;
            goto LAB_03d57040;
          }
          uVar50 = uVar50 - 1;
          pplVar53 = pplVar53 + 2;
        } while (uVar50 != 0);
      }
      ppplVar34 = (long ***)func_0x03256b10(pppplVar62,pplVar36,0);
LAB_03d57040:
      ppppplVar40 = (long *****)(*(code *)*ppplVar34)(pppplVar62,ppplVar34[1]);
      pppplVar57 = *(long *****)(lVar41 + 0x28);
      uVar50 = (**(code **)(lVar41 + 0x18))(*(undefined8 *)(lVar41 + 0x40),ppppplVar40);
      if ((uVar50 & 1) != 0) {
        if (lVar45 == 0x7fffffffffffffff) goto LAB_03d5715c;
        lVar45 = lVar45 + 1;
        ppppplVar39 = ppppplVar40;
      }
    } while( true );
  }
  uVar20 = func_0x03280a2c(puVar32);
  uVar20 = func_0x05ac7464(uVar20,0);
  ppppplVar39 = ppppplVar40;
  while( true ) {
    auVar77 = func_0x03280b7c(uVar20,pppplVar55);
    lVar45 = 0x7fffffffffffffff;
    if (auVar77._8_4_ != 1) break;
    plVar33 = (long *)func_0x072ce910();
    lVar41 = *plVar33;
    func_0x072ce920();
    ppppplVar40 = (long *****)0x0;
    if (pppplVar62 != (long ****)0x0) {
LAB_03d57088:
      ppplVar34 = *pppplVar62;
      uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
      if (uVar50 != 0) {
        pplVar36 = ppplVar34[0x16] + 1;
        do {
          if (pplVar36[-1] == *(long **)PTR_DAT_0774e8c8) {
            ppplVar34 = ppplVar34 + (long)*(int *)pplVar36 * 2 + 0x27;
            goto LAB_03d570dc;
          }
          uVar50 = uVar50 - 1;
          pplVar36 = pplVar36 + 2;
        } while (uVar50 != 0);
      }
      pppplVar57 = (long ****)0x0;
      ppplVar34 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d570dc:
      (*(code *)*ppplVar34)(pppplVar62,ppplVar34[1]);
    }
LAB_03d570e8:
    if (lVar41 == 0) {
      if ((((int)ppppplVar40 != 0xc) && ((int)ppppplVar40 != 0)) || (lVar45 == 1)) {
        return ppppplVar39;
      }
LAB_03d57120:
      uVar20 = 0;
      if (lVar45 != 0) goto LAB_03d57168;
      uVar20 = func_0x05ac7660();
      ppppplVar39 = ppppplVar40;
    }
    else {
      func_0x03280ca4(lVar41);
LAB_03d5715c:
      uVar20 = func_0x03280cbc();
      uVar20 = func_0x03280b7c(uVar20,pppplVar55);
LAB_03d57168:
      uVar20 = func_0x05ac7588(uVar20);
      ppppplVar39 = ppppplVar40;
    }
  }
  if (pppplVar62 != (long ****)0x0) {
    ppplVar34 = *pppplVar62;
    uVar50 = (ulong)*(ushort *)((long)ppplVar34 + 0x12e);
    if (uVar50 != 0) {
      pplVar36 = ppplVar34[0x16] + 1;
      do {
        if (pplVar36[-1] == *(long **)PTR_DAT_0774e8c8) {
          ppplVar34 = ppplVar34 + (long)*(int *)pplVar36 * 2 + 0x27;
          goto LAB_03d5721c;
        }
        uVar50 = uVar50 - 1;
        pplVar36 = pplVar36 + 2;
      } while (uVar50 != 0);
    }
    pppplVar57 = (long ****)0x0;
    ppplVar34 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d5721c:
    (*(code *)*ppplVar34)(pppplVar62,ppplVar34[1]);
  }
  func_0x03365958(auVar77._0_8_);
  func_0x03280ca4(0);
  auVar72 = func_0x02f09514();
  uVar50 = auVar72._8_8_;
  plVar33 = auVar72._0_8_;
  ppppplVar42[-0x2a] = (long ****)(ppppplVar26 + -0x22);
  ppppplVar42[-0x29] = (long ****)0x3d57240;
  ppppplVar42[-0x28] = (long ****)ppppplVar67;
  ppppplVar42[-0x27] = pppplVar22;
  ppppplVar42[-0x26] = (long ****)0x7fffffffffffffff;
  ppppplVar42[-0x25] = pppplVar59;
  ppppplVar42[-0x24] = (long ****)0x7fffffffffffffff;
  ppppplVar42[-0x23] = (long ****)ppppplVar39;
  ppppplVar42[-0x22] = (long ****)0x0;
  ppppplVar42[-0x21] = (long ****)ppppplVar39;
  ppppplVar42[-0x20] = pppplVar62;
  ppppplVar42[-0x1f] = auVar77._0_8_;
  pppplVar22 = (long ****)tpidr_el0;
  ppppplVar42[-0x2f] = pppplVar57;
  ppppplVar42[-0x2e] = pppplVar22;
  ppppplVar42[-0x2b] = (long ****)pppplVar22[5];
  pppplVar22 = ppppplVar27[7];
  if (pppplVar22 == (long ****)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    pppplVar22 = ppppplVar27[7];
    if (pppplVar22 == (long ****)0x0) {
      func_0x03256878(ppppplVar27);
      pppplVar22 = ppppplVar27[7];
    }
  }
  uVar58 = (ulong)*(uint *)((long)pppplVar22[2] + 0xfc);
  uVar66 = uVar58 + 0xf & 0x1fffffff0;
  pppplVar55 = (long ****)((long)ppppplVar42 + (-0x180 - uVar66));
  pppplVar57 = (long ****)((long)pppplVar55 - uVar66);
  uVar60 = (long)pppplVar57 - uVar66;
  func_0x072ce9a0(uVar60,0,uVar58);
  lVar41 = uVar60 - uVar66;
  uVar66 = uVar58;
  func_0x072ce9a0(lVar41,0);
  puVar32 = PTR_DAT_07774b08;
  if ((plVar33 != (long *)0x0) && (puVar32 = PTR_DAT_077799b8, uVar50 != 0)) {
    uVar66 = uVar58;
    func_0x072ce9a0(uVar60,0);
    ppplVar34 = *pppplVar22;
    if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
      ppplVar34 = (long ***)func_0x0325681c(ppplVar34);
    }
    lVar45 = *plVar33;
    uVar51 = (ulong)*(ushort *)(lVar45 + 0x12e);
    if (uVar51 != 0) {
      piVar54 = (int *)(*(long *)(lVar45 + 0xb0) + 8);
      do {
        if (*(long ****)(piVar54 + -2) == ppplVar34) {
          puVar19 = (undefined8 *)(lVar45 + (long)*piVar54 * 0x10 + 0x138);
          goto LAB_03d57388;
        }
        uVar51 = uVar51 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar51 != 0);
    }
    uVar66 = 0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d57388:
    plVar33 = (long *)(*(code *)*puVar19)(plVar33,puVar19[1]);
    puVar32 = PTR_DAT_0774e8e0;
    plVar30 = (long *)0x0;
    do {
      if (plVar33 == (long *)0x0) {
        func_0x03280cac();
        goto LAB_03d575f4;
      }
      lVar45 = *plVar33;
      uVar51 = (ulong)*(ushort *)(lVar45 + 0x12e);
      if (uVar51 != 0) {
        piVar54 = (int *)(*(long *)(lVar45 + 0xb0) + 8);
        do {
          if (*(long *)(piVar54 + -2) == *(long *)puVar32) {
            puVar19 = (undefined8 *)(lVar45 + (long)*piVar54 * 0x10 + 0x138);
            goto LAB_03d573f4;
          }
          uVar51 = uVar51 - 1;
          piVar54 = piVar54 + 4;
        } while (uVar51 != 0);
      }
      uVar66 = 0;
      puVar19 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d573f4:
      ppppplVar67 = (long *****)(*(code *)*puVar19)(plVar33,puVar19[1]);
      if (((ulong)ppppplVar67 & 1) == 0) {
        lVar45 = 0;
        iVar44 = 0xc;
        iVar18 = 0xc;
        if (plVar33 == (long *)0x0) goto LAB_03d57584;
        goto LAB_03d57524;
      }
      ppplVar34 = ppppplVar27[7][4];
      if ((*(byte *)((long)ppplVar34 + 0x135) & 1) == 0) {
        ppplVar34 = (long ***)func_0x0325681c(ppplVar34);
      }
      lVar45 = *plVar33;
      uVar66 = (ulong)*(ushort *)(lVar45 + 0x12e);
      if (uVar66 != 0) {
        piVar54 = (int *)(*(long *)(lVar45 + 0xb0) + 8);
        do {
          if (*(long ****)(piVar54 + -2) == ppplVar34) {
            lVar45 = lVar45 + (long)*piVar54 * 0x10 + 0x138;
            goto LAB_03d57468;
          }
          uVar66 = uVar66 - 1;
          piVar54 = piVar54 + 4;
        } while (uVar66 != 0);
      }
      lVar45 = func_0x03256b10(plVar33,ppplVar34,0);
LAB_03d57468:
      ppppplVar42[-0x2d] = pppplVar55;
      lVar45 = *(long *)(lVar45 + 8);
      (**(code **)(lVar45 + 0x10))
                (*(undefined8 *)(lVar45 + 8),lVar45,plVar33,ppppplVar42 + -0x2d,pppplVar55);
      func_0x072ce970(lVar41,pppplVar55,uVar58);
      func_0x072ce970(pppplVar57,lVar41,uVar58);
      pppplVar22 = pppplVar57;
      if (-1 < *(int *)(ppppplVar27[7][2] + 5)) {
        pppplVar22 = (long ****)*pppplVar57;
      }
      ppplVar34 = ppppplVar27[7][6];
      pplVar36 = *ppplVar34;
      ppppplVar42[-0x2d] = pppplVar22;
      uVar66 = uVar50;
      (*(code *)ppplVar34[2])
                (pplVar36,ppplVar34,uVar50,ppppplVar42 + -0x2d,(long)ppppplVar42 + -0x15c);
      if (*(char *)((long)ppppplVar42 + -0x15c) != '\0') {
        func_0x072ce970(pppplVar55,lVar41,uVar58);
        uVar66 = uVar58;
        func_0x072ce970(uVar60,pppplVar55);
        if (plVar30 == (long *)0x7fffffffffffffff) goto LAB_03d57630;
        plVar30 = (long *)((long)plVar30 + 1);
      }
    } while( true );
  }
  uVar20 = func_0x03280a2c(puVar32);
  uVar20 = func_0x05ac7464(uVar20,0);
LAB_03d57640:
  func_0x03280b7c(uVar20,ppppplVar27);
  do {
    auVar77 = func_0x072ce990();
    uVar20 = auVar77._0_8_;
    plVar30 = (long *)0x7fffffffffffffff;
    if (auVar77._8_4_ != 1) {
      if (plVar33 == (long *)0x0) goto LAB_03d57704;
      lVar45 = *plVar33;
      uVar50 = (ulong)*(ushort *)(lVar45 + 0x12e);
      if (uVar50 == 0) goto LAB_03d576dc;
      piVar54 = (int *)(*(long *)(lVar45 + 0xb0) + 8);
      goto LAB_03d576c4;
    }
    plVar29 = (long *)func_0x072ce910(uVar20);
    lVar45 = *plVar29;
    ppppplVar67 = (long *****)func_0x072ce920();
    iVar44 = 0;
    iVar18 = 0;
    if (plVar33 != (long *)0x0) {
LAB_03d57524:
      iVar44 = iVar18;
      lVar28 = *plVar33;
      uVar50 = (ulong)*(ushort *)(lVar28 + 0x12e);
      if (uVar50 != 0) {
        piVar54 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
        do {
          if (*(long *)(piVar54 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar19 = (undefined8 *)(lVar28 + (long)*piVar54 * 0x10 + 0x138);
            goto LAB_03d57578;
          }
          uVar50 = uVar50 - 1;
          piVar54 = piVar54 + 4;
        } while (uVar50 != 0);
      }
      uVar66 = 0;
      puVar19 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d57578:
      ppppplVar67 = (long *****)(*(code *)*puVar19)(plVar33,puVar19[1]);
    }
LAB_03d57584:
    if (lVar45 != 0) {
      func_0x03280ca4(lVar45);
LAB_03d57630:
      uVar20 = func_0x03280cbc();
      uVar20 = func_0x03280b7c(uVar20,ppppplVar27);
      goto LAB_03d5763c;
    }
    if ((iVar44 == 0xc) || (iVar44 == 0)) {
      if (plVar30 != (long *)0x1) goto LAB_03d575f4;
      func_0x072ce970(pppplVar55,uVar60,uVar58);
      uVar66 = uVar58;
      ppppplVar67 = (long *****)func_0x072ce970(ppppplVar42[-0x2f],pppplVar55);
    }
    if ((long ****)ppppplVar42[-0x2e][5] == ppppplVar42[-0x2b]) {
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
  puVar19 = (undefined8 *)func_0x03256b10(plVar30);
LAB_03d58088:
  (*(code *)*puVar19)(plVar30,puVar19[1]);
LAB_03d58094:
  func_0x03365958(uVar21);
  func_0x03280ca4(0);
  auVar72 = func_0x02f09514();
  plVar29 = auVar72._0_8_;
  *(long ******)(lVar41 + -0xc0) = ppppplVar42 + -0x2a;
  *(undefined8 *)(lVar41 + -0xb8) = 0x3d580ac;
  *(long *)(lVar41 + -0xb0) = lVar41;
  *(undefined8 *)(lVar41 + -0xa0) = uVar20;
  *(undefined8 *)(lVar41 + -0x98) = 0;
  *(long **)(lVar41 + -0x90) = plVar33;
  *(ulong *)(lVar41 + -0x88) = uVar60;
  *(undefined8 *)(lVar41 + -0x80) = uVar21;
  *(undefined8 *)(lVar41 + -0x78) = 0;
  *(long **)(lVar41 + -0x70) = plVar30;
  *(long *)(lVar41 + -0x68) = lVar28;
  lVar45 = tpidr_el0;
  *(undefined8 *)(lVar41 + -200) = *(undefined8 *)(lVar45 + 0x28);
  plVar33 = *(long **)(uVar66 + 0x38);
  if (plVar33 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar33 = *(long **)(uVar66 + 0x38);
    if (plVar33 == (long *)0x0) {
      func_0x03256878(uVar66);
      plVar33 = *(long **)(uVar66 + 0x38);
    }
  }
  uVar60 = (ulong)*(uint *)(plVar33[4] + 0xfc);
  uVar50 = uVar60 + 0xf & 0x1fffffff0;
  lVar48 = (lVar41 + -0xe0) - uVar50;
  lVar61 = lVar48 - uVar50;
  func_0x072ce9a0(lVar61,0,uVar60);
  lVar64 = lVar61 - uVar50;
  uVar50 = uVar60;
  func_0x072ce9a0(lVar64,0);
  lVar28 = lVar64;
  if (plVar29 == (long *)0x0) {
    uVar20 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar20 = func_0x05ac7464(uVar20,0);
    goto LAB_03d585bc;
  }
  lVar38 = plVar33[1];
  if ((*(byte *)(lVar38 + 0x135) & 1) == 0) {
    lVar38 = func_0x0325681c(lVar38);
  }
  plVar33 = (long *)func_0x03280b90(plVar29,lVar38);
  if (plVar33 == (long *)0x0) {
    lVar38 = **(long **)(uVar66 + 0x38);
    if ((*(byte *)(lVar38 + 0x135) & 1) == 0) {
      lVar38 = func_0x0325681c(lVar38);
    }
    lVar49 = *plVar29;
    uVar58 = (ulong)*(ushort *)(lVar49 + 0x12e);
    if (uVar58 != 0) {
      piVar54 = (int *)(*(long *)(lVar49 + 0xb0) + 8);
      do {
        if (*(long *)(piVar54 + -2) == lVar38) {
          puVar19 = (undefined8 *)(lVar49 + (long)*piVar54 * 0x10 + 0x138);
          goto LAB_03d582e8;
        }
        uVar58 = uVar58 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar58 != 0);
    }
    uVar50 = 0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar29);
LAB_03d582e8:
    plVar33 = (long *)(*(code *)*puVar19)(plVar29,puVar19[1]);
    puVar32 = PTR_DAT_0774e8e0;
    if (plVar33 == (long *)0x0) goto LAB_03d585c4;
    lVar28 = *plVar33;
    uVar50 = (ulong)*(ushort *)(lVar28 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
      do {
        if (*(long *)(piVar54 + -2) == *(long *)PTR_DAT_0774e8e0) {
          puVar19 = (undefined8 *)(lVar28 + (long)*piVar54 * 0x10 + 0x138);
          goto LAB_03d58350;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    puVar19 = (undefined8 *)func_0x03256b10(plVar33,*(long *)PTR_DAT_0774e8e0,0);
LAB_03d58350:
    uVar50 = (*(code *)*puVar19)(plVar33,puVar19[1]);
    if ((uVar50 & 1) == 0) {
      func_0x072ce9a0(lVar61,0,uVar60);
      lVar28 = lVar61;
    }
    else {
      lVar28 = *(long *)(*(long *)(uVar66 + 0x38) + 0x38);
      if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
        lVar28 = func_0x0325681c(lVar28);
      }
      lVar38 = *plVar33;
      uVar50 = (ulong)*(ushort *)(lVar38 + 0x12e);
      if (uVar50 != 0) {
        piVar54 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
        do {
          if (*(long *)(piVar54 + -2) == lVar28) {
            lVar28 = lVar38 + (long)*piVar54 * 0x10 + 0x138;
            goto LAB_03d58410;
          }
          uVar50 = uVar50 - 1;
          piVar54 = piVar54 + 4;
        } while (uVar50 != 0);
      }
      lVar28 = func_0x03256b10(plVar33,lVar28,0);
LAB_03d58410:
      *(long *)(lVar41 + -0xe0) = lVar48;
      lVar28 = *(long *)(lVar28 + 8);
      (**(code **)(lVar28 + 0x10))(*(undefined8 *)(lVar28 + 8),lVar28,plVar33,lVar41 + -0xe0,lVar48)
      ;
      uVar50 = uVar60;
      func_0x072ce970(lVar64,lVar48);
      lVar28 = *plVar33;
      uVar58 = (ulong)*(ushort *)(lVar28 + 0x12e);
      if (uVar58 != 0) {
        piVar54 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
        do {
          if (*(long *)(piVar54 + -2) == *(long *)puVar32) {
            puVar19 = (undefined8 *)(lVar28 + (long)*piVar54 * 0x10 + 0x138);
            goto LAB_03d58488;
          }
          uVar58 = uVar58 - 1;
          piVar54 = piVar54 + 4;
        } while (uVar58 != 0);
      }
      uVar50 = 0;
      puVar19 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d58488:
      ppppplVar67 = (long *****)(*(code *)*puVar19)(plVar33,puVar19[1]);
      lVar28 = lVar64;
      if (((ulong)ppppplVar67 & 1) != 0) {
        lVar28 = 0;
        iVar44 = 8;
        iVar18 = 8;
        goto joined_r0x03d584a0;
      }
    }
    func_0x072ce970(lVar48,lVar28,uVar60);
    uVar50 = uVar60;
    ppppplVar67 = (long *****)func_0x072ce970(lVar61,lVar48);
    lVar28 = 0;
    iVar18 = 10;
    iVar44 = 10;
    if (plVar33 == (long *)0x0) goto LAB_03d58534;
    goto LAB_03d584d4;
  }
  lVar38 = *(long *)(*(long *)(uVar66 + 0x38) + 0x10);
  if ((*(byte *)(lVar38 + 0x135) & 1) == 0) {
    lVar38 = func_0x0325681c(lVar38);
  }
  lVar49 = *plVar33;
  uVar58 = (ulong)*(ushort *)(lVar49 + 0x12e);
  if (uVar58 != 0) {
    piVar54 = (int *)(*(long *)(lVar49 + 0xb0) + 8);
    do {
      if (*(long *)(piVar54 + -2) == lVar38) {
        puVar19 = (undefined8 *)(lVar49 + (long)*piVar54 * 0x10 + 0x138);
        goto LAB_03d58254;
      }
      uVar58 = uVar58 - 1;
      piVar54 = piVar54 + 4;
    } while (uVar58 != 0);
  }
  uVar50 = 0;
  puVar19 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d58254:
  iVar18 = (*(code *)*puVar19)(plVar33,puVar19[1]);
  if (iVar18 != 1) {
    if (iVar18 != 0) goto LAB_03d5854c;
    func_0x072ce9a0(lVar61,0,uVar60);
    goto LAB_03d58558;
  }
  lVar28 = *(long *)(*(long *)(uVar66 + 0x38) + 8);
  if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
    lVar28 = func_0x0325681c(lVar28);
  }
  *(undefined4 *)(lVar41 + -0xcc) = 0;
  lVar38 = *plVar33;
  uVar50 = (ulong)*(ushort *)(lVar38 + 0x12e);
  if (uVar50 != 0) {
    piVar54 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
    do {
      if (*(long *)(piVar54 + -2) == lVar28) {
        lVar28 = lVar38 + (long)*piVar54 * 0x10 + 0x138;
        goto LAB_03d583e0;
      }
      uVar50 = uVar50 - 1;
      piVar54 = piVar54 + 4;
    } while (uVar50 != 0);
  }
  lVar28 = func_0x03256b10(plVar33,lVar28,0);
LAB_03d583e0:
  *(long *)(lVar41 + -0xe0) = lVar41 + -0xcc;
  *(long *)(lVar41 + -0xd8) = lVar48;
  lVar28 = *(long *)(lVar28 + 8);
  (**(code **)(lVar28 + 0x10))(*(undefined8 *)(lVar28 + 8),lVar28,plVar33,lVar41 + -0xe0,lVar48);
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
      if (plVar33 == (long *)0x0) goto LAB_03d58678;
      lVar45 = *plVar33;
      uVar58 = (ulong)*(ushort *)(lVar45 + 0x12e);
      if (uVar58 == 0) goto LAB_03d58650;
      piVar54 = (int *)(*(long *)(lVar45 + 0xb0) + 8);
      break;
    }
    plVar30 = (long *)func_0x072ce910(auVar77._0_8_);
    lVar28 = *plVar30;
    ppppplVar67 = (long *****)func_0x072ce920();
    iVar44 = 0;
    iVar18 = 0;
joined_r0x03d584a0:
    if (plVar33 != (long *)0x0) {
LAB_03d584d4:
      iVar18 = iVar44;
      lVar38 = *plVar33;
      uVar58 = (ulong)*(ushort *)(lVar38 + 0x12e);
      if (uVar58 != 0) {
        piVar54 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
        do {
          if (*(long *)(piVar54 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar19 = (undefined8 *)(lVar38 + (long)*piVar54 * 0x10 + 0x138);
            goto LAB_03d58528;
          }
          uVar58 = uVar58 - 1;
          piVar54 = piVar54 + 4;
        } while (uVar58 != 0);
      }
      uVar50 = 0;
      puVar19 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d58528:
      ppppplVar67 = (long *****)(*(code *)*puVar19)(plVar33,puVar19[1]);
    }
LAB_03d58534:
    if (lVar28 == 0) {
      if (iVar18 == 10) goto LAB_03d58558;
      if ((iVar18 != 8) && (iVar18 != 0)) goto LAB_03d58578;
LAB_03d5854c:
      uVar20 = func_0x05ac751c(0);
LAB_03d585bc:
      func_0x03280b7c(uVar20,uVar66);
LAB_03d585c4:
      func_0x03280cac();
    }
    func_0x03280ca4(lVar28);
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
  puVar19 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d5866c:
  (*(code *)*puVar19)(plVar33,puVar19[1]);
LAB_03d58678:
  func_0x03365958(auVar77._0_8_);
  func_0x03280ca4(0);
  auVar73 = func_0x02f09514();
  lVar45 = auVar73._8_8_;
  plVar30 = auVar73._0_8_;
  *(long *)(lVar64 + -0x50) = lVar41 + -0xc0;
  *(undefined8 *)(lVar64 + -0x40) = 0x3d58690;
  *(undefined8 *)(lVar64 + -0x38) = 0;
  *(long **)(lVar64 + -0x30) = plVar33;
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
  puVar32 = PTR_DAT_07774b08;
  if ((plVar30 != (long *)0x0) && (puVar32 = PTR_DAT_077799b8, lVar45 != 0)) {
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
    lVar28 = *plVar30;
    uVar60 = (ulong)*(ushort *)(lVar28 + 0x12e);
    if (uVar60 != 0) {
      piVar54 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
      do {
        if (*(long *)(piVar54 + -2) == lVar41) {
          puVar19 = (undefined8 *)(lVar28 + (long)*piVar54 * 0x10 + 0x138);
          goto LAB_03d58774;
        }
        uVar60 = uVar60 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar60 != 0);
    }
    puVar19 = (undefined8 *)func_0x03256b10(plVar30,lVar41,0);
LAB_03d58774:
    plVar33 = (long *)(*(code *)*puVar19)(plVar30,puVar19[1]);
    puVar32 = PTR_DAT_0774e8e0;
    lVar41 = 0;
    while (plVar33 != (long *)0x0) {
      lVar28 = *plVar33;
      uVar60 = (ulong)*(ushort *)(lVar28 + 0x12e);
      if (uVar60 != 0) {
        piVar54 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
        do {
          if (*(long *)(piVar54 + -2) == *(long *)puVar32) {
            puVar19 = (undefined8 *)(lVar28 + (long)*piVar54 * 0x10 + 0x138);
            goto LAB_03d587e4;
          }
          uVar60 = uVar60 - 1;
          piVar54 = piVar54 + 4;
        } while (uVar60 != 0);
      }
      puVar19 = (undefined8 *)func_0x03256b10(plVar33,*(long *)puVar32,0);
LAB_03d587e4:
      ppppplVar67 = (long *****)(*(code *)*puVar19)(plVar33,puVar19[1]);
      if (((ulong)ppppplVar67 & 1) == 0) {
        lVar45 = 0;
        if (plVar33 == (long *)0x0) goto LAB_03d58938;
        lVar28 = *plVar33;
        uVar60 = (ulong)*(ushort *)(lVar28 + 0x12e);
        if (uVar60 == 0) goto LAB_03d58910;
        piVar54 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
        goto LAB_03d588f8;
      }
      lVar28 = *(long *)(*(long *)(uVar50 + 0x38) + 0x20);
      if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
        lVar28 = func_0x0325681c(lVar28);
      }
      lVar48 = *plVar33;
      uVar60 = (ulong)*(ushort *)(lVar48 + 0x12e);
      if (uVar60 != 0) {
        piVar54 = (int *)(*(long *)(lVar48 + 0xb0) + 8);
        do {
          if (*(long *)(piVar54 + -2) == lVar28) {
            puVar19 = (undefined8 *)(lVar48 + (long)*piVar54 * 0x10 + 0x138);
            goto LAB_03d58858;
          }
          uVar60 = uVar60 - 1;
          piVar54 = piVar54 + 4;
        } while (uVar60 != 0);
      }
      puVar19 = (undefined8 *)func_0x03256b10(plVar33,lVar28,0);
LAB_03d58858:
      (*(code *)*puVar19)(lVar64 + -0x90,plVar33,puVar19[1]);
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
    puVar32 = PTR_DAT_07774b08;
  }
  uVar20 = func_0x03280a2c(puVar32);
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
  if (plVar30 == (long *)0x0) {
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
  puVar19 = (undefined8 *)func_0x03256b10(plVar33);
LAB_03d576f8:
  (*(code *)*puVar19)(plVar33,puVar19[1]);
LAB_03d57704:
  func_0x03365958(uVar20);
  func_0x03280ca4(0);
  auVar72 = func_0x02f09514();
  lVar45 = auVar72._8_8_;
  plVar29 = auVar72._0_8_;
  *(undefined8 *)(lVar41 + -0x30) = 0x3d5771c;
  *(ulong *)(lVar41 + -0x28) = uVar60;
  *(long *****)(lVar41 + -0x20) = pppplVar55;
  *(ulong *)(lVar41 + -0x18) = uVar58;
  *(undefined8 *)(lVar41 + -0x10) = 0x7fffffffffffffff;
  *(long ******)(lVar41 + -8) = ppppplVar27;
  if (*(long *)(lVar45 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(lVar45 + 0x38) == 0) {
      func_0x03256878(lVar45);
    }
  }
  if (plVar29 == (long *)0x0) {
    uVar21 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar21 = func_0x05ac7464(uVar21,0);
    goto LAB_03d57b10;
  }
  lVar28 = *(long *)(*(long *)(lVar45 + 0x38) + 8);
  if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
    lVar28 = func_0x0325681c(lVar28);
  }
  plVar30 = (long *)func_0x03280b90(plVar29,lVar28);
  if (plVar30 == (long *)0x0) {
    lVar28 = **(long **)(lVar45 + 0x38);
    if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
      lVar28 = func_0x0325681c(lVar28);
    }
    lVar48 = *plVar29;
    uVar50 = (ulong)*(ushort *)(lVar48 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar48 + 0xb0) + 8);
      do {
        if (*(long *)(piVar54 + -2) == lVar28) {
          puVar19 = (undefined8 *)(lVar48 + (long)*piVar54 * 0x10 + 0x138);
          goto LAB_03d578d0;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    uVar66 = 0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar29);
LAB_03d578d0:
    plVar30 = (long *)(*(code *)*puVar19)(plVar29,puVar19[1]);
    puVar32 = PTR_DAT_0774e8e0;
    if (plVar30 == (long *)0x0) goto LAB_03d57b18;
    lVar28 = *plVar30;
    uVar50 = (ulong)*(ushort *)(lVar28 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
      do {
        if (*(long *)(piVar54 + -2) == *(long *)PTR_DAT_0774e8e0) {
          puVar19 = (undefined8 *)(lVar28 + (long)*piVar54 * 0x10 + 0x138);
          goto LAB_03d57938;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    uVar66 = 0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar30);
LAB_03d57938:
    uVar50 = (*(code *)*puVar19)(plVar30,puVar19[1]);
    if ((uVar50 & 1) == 0) {
      plVar29 = (long *)0x0;
      uVar60 = 10;
      goto joined_r0x03d579ac;
    }
    lVar28 = *(long *)(*(long *)(lVar45 + 0x38) + 0x38);
    if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
      lVar28 = func_0x0325681c(lVar28);
    }
    lVar48 = *plVar30;
    uVar50 = (ulong)*(ushort *)(lVar48 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar48 + 0xb0) + 8);
      do {
        if (*(long *)(piVar54 + -2) == lVar28) {
          puVar19 = (undefined8 *)(lVar48 + (long)*piVar54 * 0x10 + 0x138);
          goto LAB_03d579e8;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    uVar66 = 0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar30);
LAB_03d579e8:
    ppppplVar67 = (long *****)(*(code *)*puVar19)(plVar30,puVar19[1]);
    lVar28 = *plVar30;
    uVar50 = (ulong)*(ushort *)(lVar28 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
      do {
        if (*(long *)(piVar54 + -2) == *(long *)puVar32) {
          puVar19 = (undefined8 *)(lVar28 + (long)*piVar54 * 0x10 + 0x138);
          goto LAB_03d57a44;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    uVar66 = 0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar30);
LAB_03d57a44:
    uVar50 = (*(code *)*puVar19)(plVar30,puVar19[1]);
    bVar16 = (uVar50 & 1) == 0;
    plVar29 = (long *)0x0;
    ppppplVar40 = (long *****)0x0;
    if (bVar16) {
      ppppplVar40 = ppppplVar67;
    }
    uVar17 = 8;
    if (bVar16) {
      uVar17 = 10;
    }
    uVar60 = (ulong)uVar17;
    if (plVar30 == (long *)0x0) goto LAB_03d57acc;
    goto LAB_03d57a6c;
  }
  lVar28 = *(long *)(*(long *)(lVar45 + 0x38) + 0x10);
  if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
    lVar28 = func_0x0325681c(lVar28);
  }
  lVar48 = *plVar30;
  uVar50 = (ulong)*(ushort *)(lVar48 + 0x12e);
  if (uVar50 != 0) {
    piVar54 = (int *)(*(long *)(lVar48 + 0xb0) + 8);
    do {
      if (*(long *)(piVar54 + -2) == lVar28) {
        puVar19 = (undefined8 *)(lVar48 + (long)*piVar54 * 0x10 + 0x138);
        goto LAB_03d5784c;
      }
      uVar50 = uVar50 - 1;
      piVar54 = piVar54 + 4;
    } while (uVar50 != 0);
  }
  uVar66 = 0;
  puVar19 = (undefined8 *)func_0x03256b10(plVar30);
LAB_03d5784c:
  iVar18 = (*(code *)*puVar19)(plVar30,puVar19[1]);
  if (iVar18 == 0) {
    ppppplVar40 = (long *****)0x0;
  }
  else {
    if (iVar18 == 1) {
      lVar41 = *(long *)(*(long *)(lVar45 + 0x38) + 8);
      if ((*(byte *)(lVar41 + 0x135) & 1) == 0) {
        lVar41 = func_0x0325681c(lVar41);
      }
      lVar45 = *plVar30;
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
      puVar19 = (undefined8 *)func_0x03256b10(plVar30,lVar41,0);
LAB_03d579c0:
                    /* WARNING: Could not recover jumptable at 0x03d579d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppppplVar67 = (long *****)(*(code *)*puVar19)(plVar30,0,puVar19[1]);
      return ppppplVar67;
    }
    do {
      uVar21 = func_0x05ac751c(0);
LAB_03d57b10:
      func_0x03280b7c(uVar21,lVar45);
LAB_03d57b18:
      func_0x03280cac();
      do {
        auVar77 = func_0x03280ca4(plVar29);
        uVar21 = auVar77._0_8_;
        if (auVar77._8_4_ != 1) {
          if (plVar30 == (long *)0x0) goto LAB_03d57bcc;
          lVar28 = *plVar30;
          uVar50 = (ulong)*(ushort *)(lVar28 + 0x12e);
          if (uVar50 == 0) goto LAB_03d57ba4;
          piVar54 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
          goto LAB_03d57b8c;
        }
        puVar19 = (undefined8 *)func_0x072ce910(uVar21);
        plVar29 = (long *)*puVar19;
        func_0x072ce920();
        uVar60 = 0;
joined_r0x03d579ac:
        ppppplVar40 = (long *****)0x0;
        if (plVar30 != (long *)0x0) {
LAB_03d57a6c:
          lVar28 = *plVar30;
          uVar50 = (ulong)*(ushort *)(lVar28 + 0x12e);
          if (uVar50 != 0) {
            piVar54 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
            do {
              if (*(long *)(piVar54 + -2) == *(long *)PTR_DAT_0774e8c8) {
                puVar19 = (undefined8 *)(lVar28 + (long)*piVar54 * 0x10 + 0x138);
                goto LAB_03d57ac0;
              }
              uVar50 = uVar50 - 1;
              piVar54 = piVar54 + 4;
            } while (uVar50 != 0);
          }
          uVar66 = 0;
          puVar19 = (undefined8 *)func_0x03256b10(plVar30);
LAB_03d57ac0:
          (*(code *)*puVar19)(plVar30,puVar19[1]);
        }
LAB_03d57acc:
      } while (plVar29 != (long *)0x0);
    } while (((uint)uVar60 | 8) == 8);
  }
  return ppppplVar40;
  while( true ) {
    uVar50 = uVar50 - 1;
    piVar54 = piVar54 + 4;
    if (uVar50 == 0) break;
LAB_03d57b8c:
    if (*(long *)(piVar54 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar19 = (undefined8 *)(lVar28 + (long)*piVar54 * 0x10 + 0x138);
      goto LAB_03d57bc0;
    }
  }
LAB_03d57ba4:
  uVar66 = 0;
  puVar19 = (undefined8 *)func_0x03256b10(plVar30);
LAB_03d57bc0:
  (*(code *)*puVar19)(plVar30,puVar19[1]);
LAB_03d57bcc:
  func_0x03365958(uVar21);
  func_0x03280ca4(0);
  auVar72 = func_0x02f09514();
  lVar28 = auVar72._8_8_;
  plVar29 = auVar72._0_8_;
  *(undefined8 *)(lVar41 + -0x60) = 0x3d57be4;
  *(ulong *)(lVar41 + -0x58) = uVar60;
  *(undefined8 *)(lVar41 + -0x50) = uVar21;
  *(undefined8 *)(lVar41 + -0x48) = 0;
  *(long **)(lVar41 + -0x40) = plVar30;
  *(long *)(lVar41 + -0x38) = lVar45;
  if (*(long *)(lVar28 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(lVar28 + 0x38) == 0) {
      func_0x03256878(lVar28);
    }
  }
  if (plVar29 == (long *)0x0) {
    uVar21 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar21 = func_0x05ac7464(uVar21,0);
    goto LAB_03d57fd8;
  }
  lVar45 = *(long *)(*(long *)(lVar28 + 0x38) + 8);
  if ((*(byte *)(lVar45 + 0x135) & 1) == 0) {
    lVar45 = func_0x0325681c(lVar45);
  }
  plVar30 = (long *)func_0x03280b90(plVar29,lVar45);
  if (plVar30 == (long *)0x0) {
    lVar45 = **(long **)(lVar28 + 0x38);
    if ((*(byte *)(lVar45 + 0x135) & 1) == 0) {
      lVar45 = func_0x0325681c(lVar45);
    }
    lVar48 = *plVar29;
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
    puVar19 = (undefined8 *)func_0x03256b10(plVar29);
LAB_03d57d98:
    plVar30 = (long *)(*(code *)*puVar19)(plVar29,puVar19[1]);
    puVar32 = PTR_DAT_0774e8e0;
    if (plVar30 == (long *)0x0) goto LAB_03d57fe0;
    lVar45 = *plVar30;
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
    puVar19 = (undefined8 *)func_0x03256b10(plVar30);
LAB_03d57e00:
    uVar50 = (*(code *)*puVar19)(plVar30,puVar19[1]);
    if ((uVar50 & 1) == 0) {
      plVar29 = (long *)0x0;
      uVar60 = 10;
      goto joined_r0x03d57e74;
    }
    lVar45 = *(long *)(*(long *)(lVar28 + 0x38) + 0x38);
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
          goto LAB_03d57eb0;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    uVar66 = 0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar30);
LAB_03d57eb0:
    ppppplVar67 = (long *****)(*(code *)*puVar19)(plVar30,puVar19[1]);
    lVar45 = *plVar30;
    uVar50 = (ulong)*(ushort *)(lVar45 + 0x12e);
    if (uVar50 != 0) {
      piVar54 = (int *)(*(long *)(lVar45 + 0xb0) + 8);
      do {
        if (*(long *)(piVar54 + -2) == *(long *)puVar32) {
          puVar19 = (undefined8 *)(lVar45 + (long)*piVar54 * 0x10 + 0x138);
          goto LAB_03d57f0c;
        }
        uVar50 = uVar50 - 1;
        piVar54 = piVar54 + 4;
      } while (uVar50 != 0);
    }
    uVar66 = 0;
    puVar19 = (undefined8 *)func_0x03256b10(plVar30);
LAB_03d57f0c:
    uVar50 = (*(code *)*puVar19)(plVar30,puVar19[1]);
    bVar16 = (uVar50 & 1) == 0;
    plVar29 = (long *)0x0;
    ppppplVar40 = (long *****)0x0;
    if (bVar16) {
      ppppplVar40 = ppppplVar67;
    }
    uVar17 = 8;
    if (bVar16) {
      uVar17 = 10;
    }
    uVar60 = (ulong)uVar17;
    if (plVar30 == (long *)0x0) goto LAB_03d57f94;
    goto LAB_03d57f34;
  }
  lVar45 = *(long *)(*(long *)(lVar28 + 0x38) + 0x10);
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
        goto LAB_03d57d14;
      }
      uVar50 = uVar50 - 1;
      piVar54 = piVar54 + 4;
    } while (uVar50 != 0);
  }
  uVar66 = 0;
  puVar19 = (undefined8 *)func_0x03256b10(plVar30);
LAB_03d57d14:
  iVar18 = (*(code *)*puVar19)(plVar30,puVar19[1]);
  if (iVar18 == 0) {
    ppppplVar40 = (long *****)0x0;
  }
  else {
    if (iVar18 == 1) {
      lVar41 = *(long *)(*(long *)(lVar28 + 0x38) + 8);
      if ((*(byte *)(lVar41 + 0x135) & 1) == 0) {
        lVar41 = func_0x0325681c(lVar41);
      }
      lVar45 = *plVar30;
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
      puVar19 = (undefined8 *)func_0x03256b10(plVar30,lVar41,0);
LAB_03d57e88:
                    /* WARNING: Could not recover jumptable at 0x03d57ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppppplVar67 = (long *****)(*(code *)*puVar19)(plVar30,0,puVar19[1]);
      return ppppplVar67;
    }
    do {
      uVar21 = func_0x05ac751c(0);
LAB_03d57fd8:
      func_0x03280b7c(uVar21,lVar28);
LAB_03d57fe0:
      func_0x03280cac();
      do {
        auVar77 = func_0x03280ca4(plVar29);
        uVar21 = auVar77._0_8_;
        if (auVar77._8_4_ != 1) {
          if (plVar30 == (long *)0x0) goto LAB_03d58094;
          lVar45 = *plVar30;
          uVar50 = (ulong)*(ushort *)(lVar45 + 0x12e);
          if (uVar50 == 0) goto LAB_03d5806c;
          piVar54 = (int *)(*(long *)(lVar45 + 0xb0) + 8);
          goto LAB_03d58054;
        }
        puVar19 = (undefined8 *)func_0x072ce910(uVar21);
        plVar29 = (long *)*puVar19;
        func_0x072ce920();
        uVar60 = 0;
joined_r0x03d57e74:
        ppppplVar40 = (long *****)0x0;
        if (plVar30 != (long *)0x0) {
LAB_03d57f34:
          lVar45 = *plVar30;
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
          puVar19 = (undefined8 *)func_0x03256b10(plVar30);
LAB_03d57f88:
          (*(code *)*puVar19)(plVar30,puVar19[1]);
        }
LAB_03d57f94:
      } while (plVar29 != (long *)0x0);
    } while (((uint)uVar60 | 8) == 8);
  }
  return ppppplVar40;
  while( true ) {
    uVar60 = uVar60 - 1;
    piVar54 = piVar54 + 4;
    if (uVar60 == 0) break;
LAB_03d588f8:
    if (*(long *)(piVar54 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar19 = (undefined8 *)(lVar28 + (long)*piVar54 * 0x10 + 0x138);
      goto LAB_03d5892c;
    }
  }
LAB_03d58910:
  puVar19 = (undefined8 *)func_0x03256b10(plVar33,*(long *)PTR_DAT_0774e8c8,0);
LAB_03d5892c:
  ppppplVar67 = (long *****)(*(code *)*puVar19)(plVar33,puVar19[1]);
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

