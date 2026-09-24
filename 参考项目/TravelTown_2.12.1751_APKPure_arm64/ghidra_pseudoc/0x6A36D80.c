/* Ghidra 12.1.2 native pseudocode; RVA 0x6A36D80; Merger.MergeBoard.View.Layout.MergeBoardLayout.GetIndexForTransform; status ok */


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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long *****
Merger_MergeBoard_View_Layout_MergeBoardLayout__GetIndexForTransform
          (undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,long param_4,long param_5,
          undefined8 param_6,undefined8 param_7,long ****param_8)

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
  float fVar15;
  undefined *puVar16;
  long *****ppppplVar17;
  bool bVar18;
  uint uVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  long *****ppppplVar23;
  long ****pppplVar24;
  long *****ppppplVar25;
  long ***ppplVar26;
  long *****ppppplVar27;
  long *****ppppplVar28;
  long *****ppppplVar29;
  long lVar30;
  long *plVar31;
  long *plVar32;
  long ****pppplVar33;
  undefined *puVar34;
  ulong uVar35;
  long *plVar36;
  undefined8 uVar37;
  long ***ppplVar38;
  long ***ppplVar39;
  long **pplVar40;
  long ***ppplVar41;
  long lVar42;
  long *****ppppplVar43;
  long *****ppppplVar44;
  uint uVar45;
  int iVar46;
  long lVar47;
  long ***ppplVar48;
  long ****pppplVar49;
  long lVar50;
  long lVar51;
  undefined8 *extraout_x8;
  ulong uVar52;
  ulong uVar53;
  code *pcVar54;
  long **pplVar55;
  int *piVar56;
  long ****pppplVar57;
  long *****ppppplVar58;
  long lVar59;
  long ****pppplVar60;
  ulong uVar61;
  long ****pppplVar62;
  undefined *unaff_x22;
  long lVar63;
  long ****pppplVar64;
  long *****ppppplVar65;
  long lVar66;
  long ****pppplVar67;
  ulong uVar68;
  long *****ppppplVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  float fVar76;
  float fVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  undefined1 auVar80 [12];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined8 auStack_a40 [16];
  undefined8 auStack_9c0 [8];
  undefined1 auStack_980 [16];
  long alStack_970 [8];
  long alStack_930 [2];
  undefined4 uStack_91c;
  long lStack_918;
  undefined1 auStack_910 [8];
  long alStack_908 [23];
  long ***ppplStack_850;
  long ****apppplStack_848 [3];
  char acStack_82c [4];
  long ****apppplStack_828 [19];
  undefined1 auStack_790 [16];
  long ****apppplStack_780 [22];
  long ****apppplStack_6d0 [2];
  undefined1 auStack_6bc [12];
  long ****apppplStack_6b0 [36];
  char acStack_58c [4];
  long ****apppplStack_588 [19];
  long ****apppplStack_4f0 [4];
  long ****apppplStack_4d0 [32];
  undefined1 auStack_3d0 [16];
  long ****apppplStack_3c0 [5];
  long **applStack_398 [18];
  long ***appplStack_308 [5];
  byte abStack_2dc [4];
  long ***appplStack_2d8 [20];
  long ****apppplStack_238 [3];
  byte abStack_21c [4];
  long ****apppplStack_218 [19];
  long *****appppplStack_180 [4];
  long ****pppplStack_160;
  long *****ppppplStack_158;
  char acStack_14c [4];
  long ***ppplStack_148;
  long *****ppppplStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long *****ppppplStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long *****ppppplStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  
  if ((bRam0000000007e2a544 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f5e0);
    func_0x03280a18(PTR_DAT_0782f5e8);
    func_0x03280a18(PTR_DAT_0782f5f0);
    func_0x03280a18(PTR_DAT_0782f5f8);
    func_0x03280a18(PTR_DAT_0782f600);
    func_0x03280a18(PTR_DAT_0782f608);
    func_0x03280a18(PTR_DAT_07750da0);
    bRam0000000007e2a544 = 1;
  }
  puVar16 = PTR_DAT_0782f5f0;
  puVar34 = PTR_DAT_0782f5e8;
  uStack_60 = 0;
  uStack_78 = 0;
  ppppplStack_80 = (long *****)0x0;
  lStack_68 = 0;
  uStack_70 = 0;
  puVar21 = (undefined8 *)0x7e2a000;
  if (*(long *)(param_4 + 0x30) != 0) {
    func_0x04f35f90(&ppppplStack_a8,*(long *)(param_4 + 0x30),*(undefined8 *)PTR_DAT_0782f5e0);
    fVar15 = _UNK_017be600;
    uStack_78 = uStack_a0;
    ppppplStack_80 = ppppplStack_a8;
    lStack_68 = lStack_90;
    uStack_70 = uStack_98;
    uStack_60 = uStack_88;
    while( true ) {
      fVar72 = (float)uStack_98;
      fVar77 = (float)param_3;
      uVar35 = func_0x05147e9c(&ppppplStack_80,*(undefined8 *)puVar16);
      uVar52 = uStack_70;
      if ((uVar35 & 1) == 0) {
        ppppplVar69 = (long *****)0x0;
        goto LAB_06b36eec;
      }
      if (lStack_68 == 0) break;
      fVar70 = (float)func_0x06fe9aec(lStack_68,0);
      if (param_5 == 0) goto LAB_06b36f1c;
      fVar73 = fVar72;
      fVar76 = fVar77;
      fVar71 = (float)func_0x06fe9aec(param_5,0);
      fVar77 = fVar77 - fVar76;
      param_3 = (ulong)(uint)fVar77;
      uStack_98 = (ulong)(uint)(fVar77 * fVar77);
      if (fVar77 * fVar77 +
          (fVar70 - fVar71) * (fVar70 - fVar71) + (fVar72 - fVar73) * (fVar72 - fVar73) < fVar15) {
        ppppplStack_a8 = (long *****)0x0;
        func_0x0437b6e0(&ppppplStack_a8,uVar52 & 0xffffffff,*(undefined8 *)PTR_DAT_07750da0);
        ppppplVar69 = ppppplStack_a8;
LAB_06b36eec:
        func_0x05147fc0(&ppppplStack_80,*(undefined8 *)puVar34);
        return ppppplVar69;
      }
    }
    func_0x03280cac();
LAB_06b36f1c:
    func_0x03280cac();
    puVar21 = (undefined8 *)puVar34;
    unaff_x22 = puVar16;
  }
  auVar80 = func_0x03280cac();
  uVar37 = auVar80._0_8_;
  if (auVar80._8_4_ == 1) {
    plVar36 = (long *)func_0x072ce910(uVar37);
    lVar59 = *plVar36;
    func_0x072ce920();
    func_0x05147fc0(&ppppplStack_80,*puVar21);
    if (lVar59 == 0) {
      return (long *****)0x0;
    }
    uVar37 = func_0x03280ca4(lVar59);
  }
  else {
    lVar59 = 0;
  }
  func_0x05147fc0(&ppppplStack_80,*puVar21);
  if (lVar59 == 0) {
    func_0x03365958(uVar37);
  }
  func_0x03280ca4(lVar59);
  auVar85 = func_0x02f09514();
  puVar34 = PTR_DAT_0782f610;
  puStack_d0 = unaff_x22;
  puStack_c8 = puVar21;
  lStack_c0 = lVar59;
  uStack_b8 = uVar37;
  if ((bRam0000000007e2a560 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f610);
    bRam0000000007e2a560 = 1;
  }
  puVar16 = puStack_d0;
  plVar36 = *(long **)(auVar85._0_8_ + 0x48);
  lVar59 = *(long *)puVar34;
  puStack_d0 = (undefined *)0x6b36fa4;
  lVar47 = *(long *)(lVar59 + 0x38);
  if (lVar47 == 0) {
    func_0x03256878(lVar59);
    lVar47 = *(long *)(lVar59 + 0x38);
  }
  ppppplVar44 = *(long ******)(lVar47 + 0x18);
  ppppplVar69 = ppppplVar44;
  puStack_d0 = puVar16;
  if (ppppplVar44[7] == (long ****)0x0) {
    func_0x03256878(ppppplVar44);
  }
  ppppplStack_d8 = (long *****)0x0;
  if (plVar36 != (long *)0x0) {
    ppplVar38 = *ppppplVar44[7];
    if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
      ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
    }
    lVar59 = *plVar36;
    uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
    if (uVar52 != 0) {
      piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
      do {
        if (*(long ****)(piVar56 + -2) == ppplVar38) {
          puVar21 = (undefined8 *)(lVar59 + (long)(*piVar56 + 1) * 0x10 + 0x138);
          goto LAB_03ce2bb4;
        }
        uVar52 = uVar52 - 1;
        piVar56 = piVar56 + 4;
      } while (uVar52 != 0);
    }
    puVar21 = (undefined8 *)func_0x03256b10(plVar36,ppplVar38,1);
LAB_03ce2bb4:
    uVar52 = (*(code *)*puVar21)(plVar36,auVar85._8_8_,&ppppplStack_d8,puVar21[1]);
    if ((uVar52 & 1) == 0) {
      ppppplStack_d8 = (long *****)0x0;
    }
    return ppppplStack_d8;
  }
  func_0x03280a2c(PTR_DAT_0774e5b0);
  uVar37 = func_0x03280ca0();
  uVar22 = func_0x03280a2c(PTR_DAT_07779930);
  ppppplVar43 = (long *****)0x0;
  func_0x056e7310(uVar37,uVar22);
  auVar85 = func_0x03280b7c(uVar37,ppppplVar44);
  ppppplVar44 = auVar85._8_8_;
  pppplVar57 = auVar85._0_8_;
  pppplVar24 = (long ****)tpidr_el0;
  ppplStack_148 = pppplVar24[5];
  pppplVar60 = (long ****)param_8[7];
  appppplStack_180[0] = ppppplVar43;
  appppplStack_180[1] = ppppplVar69;
  appppplStack_180[2] = ppppplVar43;
  appppplStack_180[3] = ppppplVar44;
  if (pppplVar60 == (long ****)0x0) {
    func_0x03256878(param_8);
    pppplVar60 = (long ****)param_8[7];
  }
  ppplVar38 = (long ***)(ulong)*(uint *)((long)pppplVar60[1] + 0xfc);
  pppplVar62 = (long ****)(ulong)*(uint *)((long)pppplVar60[4] + 0xfc);
  pppplVar67 = (long ****)((long)appppplStack_180 - ((long)ppplVar38 + 0xfU & 0x1fffffff0));
  uVar52 = (long)pppplVar62 + 0xfU & 0x1fffffff0;
  pppplVar64 = (long ****)((long)pppplVar67 - uVar52);
  ppppplVar43 = (long *****)((long)pppplVar64 - uVar52);
  func_0x072ce9a0(ppppplVar43,0,pppplVar62);
  if (pppplVar57 == (long ****)0x0) {
    func_0x03280a2c(PTR_DAT_0774e5b0);
    pppplVar24 = (long ****)func_0x03280ca0();
    uVar37 = func_0x03280a2c(PTR_DAT_07779930);
    pppplVar49 = (long ****)0x0;
    func_0x056e7310(pppplVar24,uVar37);
    func_0x03280b7c(pppplVar24,param_8);
  }
  else {
    ppppplVar69 = ppppplVar44;
    if (-1 < *(int *)(pppplVar60[1] + 5)) {
      ppppplVar69 = (long *****)(appppplStack_180 + 3);
    }
    func_0x072ce970(pppplVar67,ppppplVar69,ppplVar38);
    ppplVar39 = *pppplVar60;
    if ((*(byte *)((long)ppplVar39 + 0x135) & 1) == 0) {
      ppplVar39 = (long ***)func_0x0325681c(ppplVar39);
      pppplVar60 = (long ****)param_8[7];
    }
    if (-1 < *(int *)(pppplVar60[1] + 5)) {
      pppplVar67 = (long ****)*pppplVar67;
    }
    ppplVar48 = *pppplVar57;
    uVar52 = (ulong)*(ushort *)((long)ppplVar48 + 0x12e);
    if (uVar52 != 0) {
      pplVar40 = ppplVar48[0x16] + 1;
      do {
        if ((long ***)pplVar40[-1] == ppplVar39) {
          ppplVar48 = ppplVar48 + (long)(*(int *)pplVar40 + 1) * 2 + 0x27;
          goto LAB_03ce2d68;
        }
        uVar52 = uVar52 - 1;
        pplVar40 = pplVar40 + 2;
      } while (uVar52 != 0);
    }
    ppplVar48 = (long ***)func_0x03256b10(pppplVar57,ppplVar39,1);
LAB_03ce2d68:
    pplVar40 = ppplVar48[1];
    ppppplVar69 = &pppplStack_160;
    pppplStack_160 = pppplVar67;
    ppppplStack_158 = ppppplVar43;
    (*(code *)pplVar40[2])(pplVar40[1],pplVar40,pppplVar57,ppppplVar69,acStack_14c);
    ppppplVar23 = ppppplVar43;
    if ((acStack_14c[0] == '\0') &&
       (ppppplVar23 = appppplStack_180[0], -1 < *(int *)(param_8[7][4] + 5))) {
      ppppplVar23 = (long *****)(appppplStack_180 + 2);
    }
    func_0x072ce970(pppplVar64,ppppplVar23,pppplVar62);
    pppplVar49 = pppplVar62;
    ppppplVar23 = (long *****)func_0x072ce970(appppplStack_180[1],pppplVar64);
    if (pppplVar24[5] == ppplStack_148) {
      return ppppplVar23;
    }
  }
  auVar85 = func_0x072ce990();
  plVar36 = auVar85._0_8_;
  ppppplVar43[-6] = (long ****)0x3ce2e40;
  ppppplVar43[-5] = pppplVar57;
  ppppplVar43[-4] = pppplVar62;
  ppppplVar43[-3] = pppplVar60;
  ppppplVar43[-2] = pppplVar24;
  ppppplVar43[-1] = param_8;
  ppppplVar23 = ppppplVar69;
  if (ppppplVar69[7] == (long ****)0x0) {
    func_0x03256878(ppppplVar69);
  }
  if (plVar36 != (long *)0x0) {
    ppplVar38 = *ppppplVar69[7];
    if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
      ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
    }
    lVar59 = *plVar36;
    uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
    if (uVar52 != 0) {
      piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
      do {
        if (*(long ****)(piVar56 + -2) == ppplVar38) {
          puVar21 = (undefined8 *)(lVar59 + (long)(*piVar56 + 7) * 0x10 + 0x138);
          goto LAB_03ce2ed8;
        }
        uVar52 = uVar52 - 1;
        piVar56 = piVar56 + 4;
      } while (uVar52 != 0);
    }
    puVar21 = (undefined8 *)func_0x03256b10(plVar36,ppplVar38,7);
LAB_03ce2ed8:
    uVar19 = (*(code *)*puVar21)(plVar36,auVar85._8_8_,pppplVar49,puVar21[1]);
    if ((uVar19 & 1) == 0) {
      *pppplVar49 = (long ***)0x0;
    }
    else {
      ppplVar38 = *ppppplVar69[7];
      if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
        ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
      }
      lVar59 = *plVar36;
      uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
      if (uVar52 != 0) {
        piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
        do {
          if (*(long ****)(piVar56 + -2) == ppplVar38) {
            puVar21 = (undefined8 *)(lVar59 + (long)(*piVar56 + 6) * 0x10 + 0x138);
            goto LAB_03ce2f64;
          }
          uVar52 = uVar52 - 1;
          piVar56 = piVar56 + 4;
        } while (uVar52 != 0);
      }
      puVar21 = (undefined8 *)func_0x03256b10(plVar36,ppplVar38,6);
LAB_03ce2f64:
      (*(code *)*puVar21)(plVar36,auVar85._8_8_,puVar21[1]);
    }
    return (long *****)(ulong)(uVar19 & 1);
  }
  func_0x03280a2c(PTR_DAT_0774e5b0);
  pppplVar24 = (long ****)func_0x03280ca0();
  uVar37 = func_0x03280a2c(PTR_DAT_07779930);
  pppplVar60 = (long ****)0x0;
  func_0x056e7310(pppplVar24,uVar37);
  auVar85 = func_0x03280b7c(pppplVar24,ppppplVar69);
  ppppplVar28 = auVar85._8_8_;
  ppppplVar27 = auVar85._0_8_;
  ppppplVar17 = ppppplVar43 + -0x12;
  ppppplVar43[-0x12] = (long ****)&stack0xfffffffffffffec0;
  ppppplVar43[-0x11] = (long ****)0x3ce2fc4;
  ppppplVar43[-0x10] = (long ****)ppppplVar44;
  ppppplVar43[-0xe] = pppplVar67;
  ppppplVar43[-0xd] = (long ****)ppppplVar43;
  ppppplVar43[-0xc] = pppplVar64;
  ppppplVar43[-0xb] = pppplVar57;
  ppppplVar43[-10] = pppplVar49;
  ppppplVar43[-9] = (long ****)ppppplVar69;
  ppppplVar43[-8] = (long ****)0x0;
  ppppplVar43[-7] = pppplVar24;
  ppplVar39 = (long ***)tpidr_el0;
  ppppplVar43[-0x13] = (long ****)ppplVar39[5];
  ppppplVar43[-0x17] = (long ****)ppppplVar28;
  pppplVar24 = ppppplVar23[7];
  ppppplVar69 = ppppplVar23;
  if (pppplVar24 == (long ****)0x0) {
    func_0x03256878(ppppplVar23);
    pppplVar24 = ppppplVar23[7];
  }
  ppplVar48 = (long ***)(ulong)*(uint *)((long)pppplVar24[1] + 0xfc);
  pppplVar62 = (long ****)((long)ppppplVar43 + (-0xc0 - ((long)ppplVar48 + 0xfU & 0x1fffffff0)));
  pppplVar57 = pppplVar62;
  if (ppppplVar27 == (long *****)0x0) {
    func_0x03280a2c(PTR_DAT_0774e5b0);
    ppppplVar27 = (long *****)func_0x03280ca0();
    uVar37 = func_0x03280a2c(PTR_DAT_07779930);
    ppppplVar44 = (long *****)0x0;
    func_0x056e7310(ppppplVar27,uVar37,0);
    ppppplVar25 = (long *****)func_0x03280b7c(ppppplVar27,ppppplVar23);
  }
  else {
    ppppplVar65 = (long *****)(ulong)*(uint *)((long)pppplVar24[5] + 0xfc);
    ppppplVar69 = ppppplVar28;
    if (-1 < *(int *)(pppplVar24[1] + 5)) {
      ppppplVar69 = ppppplVar43 + -0x17;
    }
    func_0x072ce970(pppplVar62,ppppplVar69,ppplVar48);
    ppplVar41 = *pppplVar24;
    if ((*(byte *)((long)ppplVar41 + 0x135) & 1) == 0) {
      ppplVar41 = (long ***)func_0x0325681c(ppplVar41);
      pppplVar24 = ppppplVar23[7];
    }
    pppplVar64 = pppplVar62;
    if (-1 < *(int *)(pppplVar24[1] + 5)) {
      pppplVar64 = (long ****)*pppplVar62;
    }
    pppplVar24 = *ppppplVar27;
    uVar52 = (ulong)*(ushort *)((long)pppplVar24 + 0x12e);
    if (uVar52 != 0) {
      ppplVar26 = pppplVar24[0x16] + 1;
      do {
        if ((long ***)ppplVar26[-1] == ppplVar41) {
          pppplVar24 = pppplVar24 + (long)(*(int *)ppplVar26 + 7) * 2 + 0x27;
          goto LAB_03ce30d8;
        }
        uVar52 = uVar52 - 1;
        ppplVar26 = ppplVar26 + 2;
      } while (uVar52 != 0);
    }
    pppplVar24 = (long ****)func_0x03256b10(ppppplVar27,ppplVar41,7);
LAB_03ce30d8:
    ppppplVar43[-0x16] = pppplVar64;
    ppppplVar43[-0x15] = pppplVar60;
    ppplVar41 = pppplVar24[1];
    ppppplVar69 = ppppplVar43 + -0x16;
    (*(code *)ppplVar41[2])
              (ppplVar41[1],ppplVar41,ppppplVar27,ppppplVar69,(long)ppppplVar43 + -0x9c);
    bVar3 = *(byte *)((long)ppppplVar43 + -0x9c);
    pppplVar24 = (long ****)(ulong)bVar3;
    if (bVar3 == 0) {
      ppppplVar44 = ppppplVar65;
      func_0x072ce9a0(pppplVar60,0,ppppplVar65);
    }
    else {
      pppplVar60 = ppppplVar23[7];
      ppppplVar69 = ppppplVar28;
      if (-1 < *(int *)(pppplVar60[1] + 5)) {
        ppppplVar69 = ppppplVar43 + -0x17;
      }
      func_0x072ce970(pppplVar62,ppppplVar69,ppplVar48);
      ppplVar41 = *pppplVar60;
      if ((*(byte *)((long)ppplVar41 + 0x135) & 1) == 0) {
        ppplVar41 = (long ***)func_0x0325681c(ppplVar41);
        pppplVar60 = ppppplVar23[7];
      }
      if (-1 < *(int *)(pppplVar60[1] + 5)) {
        pppplVar57 = (long ****)*pppplVar62;
      }
      pppplVar64 = *ppppplVar27;
      uVar52 = (ulong)*(ushort *)((long)pppplVar64 + 0x12e);
      if (uVar52 != 0) {
        ppplVar26 = pppplVar64[0x16] + 1;
        do {
          if ((long ***)ppplVar26[-1] == ppplVar41) {
            pppplVar64 = pppplVar64 + (long)(*(int *)ppplVar26 + 6) * 2 + 0x27;
            goto LAB_03ce31ac;
          }
          uVar52 = uVar52 - 1;
          ppplVar26 = ppplVar26 + 2;
        } while (uVar52 != 0);
      }
      pppplVar64 = (long ****)func_0x03256b10(ppppplVar27,ppplVar41,6);
LAB_03ce31ac:
      ppppplVar43[-0x16] = pppplVar57;
      ppplVar41 = pppplVar64[1];
      ppppplVar69 = ppppplVar43 + -0x16;
      ppppplVar44 = ppppplVar27;
      (*(code *)ppplVar41[2])
                (ppplVar41[1],ppplVar41,ppppplVar27,ppppplVar69,(long)ppppplVar43 + -0x9c);
    }
    ppppplVar29 = ppppplVar43 + -0x13;
    ppppplVar25 = (long *****)(ulong)(bVar3 != 0);
    ppppplVar43 = ppppplVar65;
    if ((long ****)ppplVar39[5] == *ppppplVar29) {
      return ppppplVar25;
    }
  }
  auVar85 = func_0x072ce990(ppppplVar25);
  ppplVar41 = auVar85._8_8_;
  plVar36 = auVar85._0_8_;
  pppplVar62[-6] = (long ***)0x3ce3240;
  pppplVar62[-5] = (long ***)pppplVar60;
  pppplVar62[-4] = (long ***)ppppplVar28;
  pppplVar62[-3] = (long ***)ppppplVar23;
  pppplVar62[-2] = (long ***)pppplVar57;
  pppplVar62[-1] = (long ***)ppppplVar27;
  ppppplVar23 = ppppplVar69;
  if (ppppplVar69[7] == (long ****)0x0) {
    func_0x03256878(ppppplVar69);
  }
  if (plVar36 != (long *)0x0) {
    ppplVar38 = *ppppplVar69[7];
    if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
      ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
    }
    lVar59 = *plVar36;
    uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
    if (uVar52 != 0) {
      piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
      do {
        if (*(long ****)(piVar56 + -2) == ppplVar38) {
          puVar21 = (undefined8 *)(lVar59 + (long)(*piVar56 + 4) * 0x10 + 0x138);
          goto LAB_03ce32d8;
        }
        uVar52 = uVar52 - 1;
        piVar56 = piVar56 + 4;
      } while (uVar52 != 0);
    }
    puVar21 = (undefined8 *)func_0x03256b10(plVar36,ppplVar38,4);
LAB_03ce32d8:
    uVar19 = (*(code *)*puVar21)(plVar36,ppplVar41,puVar21[1]);
    if ((uVar19 & 1) == 0) {
      ppplVar38 = *ppppplVar69[7];
      if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
        ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
      }
      lVar59 = *plVar36;
      uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
      if (uVar52 != 0) {
        piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
        do {
          if (*(long ****)(piVar56 + -2) == ppplVar38) {
            puVar21 = (undefined8 *)(lVar59 + (long)(*piVar56 + 5) * 0x10 + 0x138);
            goto LAB_03ce3358;
          }
          uVar52 = uVar52 - 1;
          piVar56 = piVar56 + 4;
        } while (uVar52 != 0);
      }
      puVar21 = (undefined8 *)func_0x03256b10(plVar36,ppplVar38,5);
LAB_03ce3358:
      (*(code *)*puVar21)(plVar36,ppplVar41,ppppplVar44,puVar21[1]);
    }
    return (long *****)(ulong)(~uVar19 & 1);
  }
  func_0x03280a2c(PTR_DAT_0774e5b0);
  ppplVar26 = (long ***)func_0x03280ca0();
  uVar37 = func_0x03280a2c(PTR_DAT_07779930);
  pppplVar64 = (long ****)0x0;
  func_0x056e7310(ppplVar26,uVar37);
  auVar85 = func_0x03280b7c(ppplVar26,ppppplVar69);
  pppplVar57 = auVar85._8_8_;
  ppppplVar44 = auVar85._0_8_;
  pppplVar62[-0x12] = (long ***)ppppplVar17;
  pppplVar62[-0x11] = (long ***)0x3ce33c0;
  pppplVar62[-0x10] = ppplVar38;
  pppplVar62[-0xf] = (long ***)pppplVar24;
  pppplVar62[-0xe] = ppplVar39;
  pppplVar62[-0xd] = (long ***)ppppplVar43;
  pppplVar62[-0xc] = ppplVar48;
  pppplVar62[-0xb] = (long ***)pppplVar60;
  pppplVar62[-10] = (long ***)ppppplVar69;
  pppplVar62[-9] = (long ***)0x0;
  pppplVar62[-8] = ppplVar41;
  pppplVar62[-7] = ppplVar26;
  pppplVar24 = (long ****)tpidr_el0;
  pppplVar62[-0x13] = pppplVar24[5];
  pppplVar62[-0x18] = (long ***)pppplVar64;
  pppplVar62[-0x17] = (long ***)pppplVar57;
  ppppplVar69 = (long *****)ppppplVar23[7];
  if (ppppplVar69 == (long *****)0x0) {
    func_0x03256878(ppppplVar23);
    ppppplVar69 = (long *****)ppppplVar23[7];
  }
  pppplVar60 = (long ****)(ulong)*(uint *)((long)ppppplVar69[1] + 0xfc);
  pplVar40 = (long **)(ulong)*(uint *)((long)ppppplVar69[3] + 0xfc);
  ppplVar48 = (long ***)
              ((long)pppplVar62 + (-0xd0 - ((ulong)((long)pppplVar60 + 0xfU) & 0x1fffffff0)));
  ppplVar39 = (long ***)((long)ppplVar48 - ((long)pplVar40 + 0xfU & 0x1fffffff0));
  ppplVar38 = ppplVar39;
  if (ppppplVar44 == (long *****)0x0) {
    func_0x03280a2c(PTR_DAT_0774e5b0);
    ppppplVar44 = (long *****)func_0x03280ca0();
    uVar37 = func_0x03280a2c(PTR_DAT_07779930);
    ppppplVar43 = (long *****)0x0;
    func_0x056e7310(ppppplVar44,uVar37);
    ppppplVar27 = (long *****)func_0x03280b7c(ppppplVar44,ppppplVar23);
  }
  else {
    pppplVar67 = pppplVar57;
    if (-1 < *(int *)(ppppplVar69[1] + 5)) {
      pppplVar67 = pppplVar62 + -0x17;
    }
    func_0x072ce970(ppplVar48,pppplVar67,pppplVar60);
    pppplVar67 = *ppppplVar69;
    if ((*(byte *)((long)pppplVar67 + 0x135) & 1) == 0) {
      pppplVar67 = (long ****)func_0x0325681c(pppplVar67);
      ppppplVar69 = (long *****)ppppplVar23[7];
    }
    ppplVar41 = ppplVar48;
    if (-1 < *(int *)(ppppplVar69[1] + 5)) {
      ppplVar41 = (long ***)*ppplVar48;
    }
    pppplVar49 = *ppppplVar44;
    uVar52 = (ulong)*(ushort *)((long)pppplVar49 + 0x12e);
    if (uVar52 != 0) {
      ppplVar26 = pppplVar49[0x16] + 1;
      do {
        if ((long ****)ppplVar26[-1] == pppplVar67) {
          pppplVar49 = pppplVar49 + (long)(*(int *)ppplVar26 + 4) * 2 + 0x27;
          goto LAB_03ce34e8;
        }
        uVar52 = uVar52 - 1;
        ppplVar26 = ppplVar26 + 2;
      } while (uVar52 != 0);
    }
    pppplVar49 = (long ****)func_0x03256b10(ppppplVar44,pppplVar67,4);
LAB_03ce34e8:
    pppplVar62[-0x16] = ppplVar41;
    ppplVar41 = pppplVar49[1];
    ppppplVar43 = ppppplVar44;
    (*(code *)ppplVar41[2])
              (ppplVar41[1],ppplVar41,ppppplVar44,pppplVar62 + -0x16,(long)pppplVar62 + -0x9c);
    bVar3 = *(byte *)((long)pppplVar62 + -0x9c);
    ppppplVar69 = (long *****)(ulong)bVar3;
    if (bVar3 == 0) {
      pppplVar62[-0x19] = (long ***)pppplVar24;
      pppplVar67 = ppppplVar23[7];
      pppplVar24 = pppplVar57;
      if (-1 < *(int *)(pppplVar67[1] + 5)) {
        pppplVar24 = pppplVar62 + -0x17;
      }
      func_0x072ce970(ppplVar48,pppplVar24,pppplVar60);
      pppplVar24 = pppplVar64;
      if (-1 < *(int *)(pppplVar67[3] + 5)) {
        pppplVar24 = pppplVar62 + -0x18;
      }
      func_0x072ce970(ppplVar39,pppplVar24,pplVar40);
      ppplVar41 = *pppplVar67;
      if ((*(byte *)((long)ppplVar41 + 0x135) & 1) == 0) {
        ppplVar41 = (long ***)func_0x0325681c(ppplVar41);
        pppplVar67 = ppppplVar23[7];
      }
      if (-1 < *(int *)(pppplVar67[1] + 5)) {
        ppplVar48 = (long ***)*ppplVar48;
      }
      if (-1 < *(int *)(pppplVar67[3] + 5)) {
        ppplVar38 = (long ***)*ppplVar39;
      }
      pppplVar67 = *ppppplVar44;
      pppplVar24 = (long ****)pppplVar62[-0x19];
      uVar52 = (ulong)*(ushort *)((long)pppplVar67 + 0x12e);
      if (uVar52 != 0) {
        ppplVar26 = pppplVar67[0x16] + 1;
        do {
          if ((long ***)ppplVar26[-1] == ppplVar41) {
            pppplVar67 = pppplVar67 + (long)(*(int *)ppplVar26 + 5) * 2 + 0x27;
            goto LAB_03ce35e0;
          }
          uVar52 = uVar52 - 1;
          ppplVar26 = ppplVar26 + 2;
        } while (uVar52 != 0);
      }
      pppplVar67 = (long ****)func_0x03256b10(ppppplVar44,ppplVar41,5);
LAB_03ce35e0:
      pppplVar62[-0x16] = ppplVar48;
      pppplVar62[-0x15] = ppplVar38;
      ppplVar41 = pppplVar67[1];
      ppppplVar43 = ppppplVar44;
      (*(code *)ppplVar41[2])(ppplVar41[1],ppplVar41,ppppplVar44,pppplVar62 + -0x16,ppplVar38);
    }
    ppppplVar27 = (long *****)(ulong)(bVar3 == 0);
    if (pppplVar24[5] == pppplVar62[-0x13]) {
      return ppppplVar27;
    }
  }
  auVar85 = func_0x072ce990(ppppplVar27);
  pppplVar67 = auVar85._8_8_;
  pplVar55 = auVar85._0_8_;
  ppplVar39[-6] = (long **)0x3ce3674;
  ppplVar39[-4] = (long **)ppppplVar23;
  ppplVar39[-3] = (long **)ppplVar48;
  ppplVar39[-2] = (long **)ppplVar38;
  ppplVar39[-1] = (long **)ppppplVar44;
  ppppplVar44 = ppppplVar43;
  if (ppppplVar43[7] == (long ****)0x0) {
    func_0x03256878(ppppplVar43);
  }
  if (pplVar55 == (long **)0x0) {
LAB_03ce3754:
    ppppplVar27 = ppppplVar23;
    func_0x03280cac();
  }
  else {
    uVar19 = func_0x04545968(pplVar55,ppppplVar43[7][1]);
    ppplVar38 = ppppplVar43[7][2];
    if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
      ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
    }
    ppppplVar27 = (long *****)func_0x03280afc(ppplVar38,uVar19 + 1);
    ppppplVar23 = (long *****)(ulong)uVar19;
    if (ppppplVar27 == (long *****)0x0) goto LAB_03ce3754;
    if (*(int *)(ppppplVar27 + 3) != 0) {
      ppppplVar27 = ppppplVar27 + 4;
      *ppppplVar27 = pppplVar67;
      goto SUB_032809c4;
    }
  }
  auVar85 = func_0x03280cb4();
  pppplVar49 = auVar85._8_8_;
  pppplVar33 = auVar85._0_8_;
  ppplVar39[-0x10] = (long **)(pppplVar62 + -0x12);
  ppplVar39[-0xf] = (long **)0x3ce375c;
  ppplVar39[-0xe] = (long **)pppplVar60;
  ppplVar39[-0xd] = pplVar40;
  ppplVar39[-0xc] = (long **)pppplVar57;
  ppplVar39[-0xb] = (long **)pppplVar64;
  ppplVar39[-10] = (long **)ppppplVar27;
  ppplVar39[-9] = (long **)pppplVar67;
  ppplVar39[-8] = pplVar55;
  ppplVar39[-7] = (long **)ppppplVar43;
  pppplVar57 = (long ****)tpidr_el0;
  ppplVar39[-0x11] = (long **)pppplVar57[5];
  ppplVar39[-0x12] = (long **)pppplVar49;
  pppplVar62 = ppppplVar44[7];
  ppppplVar27 = ppppplVar44;
  if (pppplVar62 == (long ****)0x0) {
    func_0x03256878(ppppplVar44);
    pppplVar62 = ppppplVar44[7];
  }
  ppppplVar23 = (long *****)(ulong)*(uint *)((long)pppplVar62[3] + 0xfc);
  ppppplVar43 = (long *****)((long)ppplVar39 + (-0x90 - ((long)ppppplVar23 + 0xfU & 0x1fffffff0)));
  if (pppplVar33 == (long ****)0x0) {
LAB_03ce38f0:
    func_0x03280cac();
LAB_03ce38f4:
    func_0x03280cb4();
  }
  else {
    iVar20 = (*(code *)*pppplVar62[1])(pppplVar33);
    ppplVar38 = ppppplVar44[7][2];
    if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
      ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
    }
    pppplVar67 = (long ****)func_0x03280afc(ppplVar38,iVar20 + 1);
    pppplVar62 = pppplVar49;
    if (-1 < *(int *)(ppppplVar44[7][3] + 5)) {
      pppplVar62 = (long ****)(ppplVar39 + -0x12);
    }
    ppppplVar27 = ppppplVar23;
    func_0x072ce970(ppppplVar43,pppplVar62);
    if (pppplVar67 == (long ****)0x0) goto LAB_03ce38f0;
    pppplVar60 = (long ****)pppplVar67[3];
    if ((int)pppplVar60 == 0) goto LAB_03ce38f4;
    pppplVar49 = pppplVar67 + 4;
    ppppplVar27 = ppppplVar23;
    func_0x072ce970(pppplVar49,ppppplVar43);
    ppplVar38 = ppppplVar44[7][3];
    if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
      ppplVar38 = (long ***)func_0x0325681c();
      pppplVar60 = (long ****)pppplVar67[3];
    }
    if ((int)pppplVar60 == 0) goto LAB_03ce38f4;
    func_0x032809c8(ppplVar38,pppplVar49,ppppplVar43);
    (*(code *)*ppppplVar44[7][4])(pppplVar33,pppplVar67,1);
    if ((*(byte *)((long)ppppplVar44[7][6] + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    ppppplVar28 = (long *****)func_0x03280ca0();
    ppppplVar27 = (long *****)ppppplVar44[7][7];
    (*(code *)*ppppplVar27)(ppppplVar28,pppplVar67);
    ppppplVar44 = ppppplVar28;
    if (pppplVar57[5] == (long ***)ppplVar39[-0x11]) {
      return ppppplVar28;
    }
  }
  auVar85 = func_0x072ce990();
  lVar59 = auVar85._0_8_;
  ppppplVar43[-4] = (long ****)0x3ce38fc;
  ppppplVar43[-3] = pppplVar67;
  ppppplVar43[-2] = pppplVar33;
  ppppplVar43[-1] = (long ****)ppppplVar44;
  ppppplVar44 = ppppplVar27;
  if (ppppplVar27[7] == (long ****)0x0) {
    func_0x03256878(ppppplVar27);
  }
  if (lVar59 == 0) {
LAB_03ce3994:
    func_0x03280cac();
  }
  else {
    ppplVar38 = ppppplVar27[7][1];
    if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
      ppplVar38 = (long ***)func_0x0325681c();
    }
    ppppplVar27 = (long *****)func_0x03280afc(ppplVar38,*(int *)(lVar59 + 0x18) + 1);
    ppppplVar44 = (long *****)0x0;
    func_0x057b9e7c(lVar59,ppppplVar27,0,0);
    if (ppppplVar27 == (long *****)0x0) goto LAB_03ce3994;
    if ((uint)*(long *)(lVar59 + 0x18) < *(uint *)(ppppplVar27 + 3)) {
      ppppplVar27 = (long *****)
                    ((long)ppppplVar27 + ((*(long *)(lVar59 + 0x18) << 0x20) >> 0x1d) + 0x20);
      *ppppplVar27 = auVar85._8_8_;
      goto SUB_032809c4;
    }
  }
  auVar81 = func_0x03280cb4();
  ppppplVar28 = auVar81._8_8_;
  pppplVar62 = auVar81._0_8_;
  ppppplVar43[-0xe] = (long ****)(ppplVar39 + -0x10);
  ppppplVar43[-0xd] = (long ****)0x3ce399c;
  ppppplVar43[-0xc] = pppplVar57;
  ppppplVar43[-10] = (long ****)ppppplVar23;
  ppppplVar43[-9] = pppplVar49;
  ppppplVar43[-8] = (long ****)ppppplVar43;
  ppppplVar43[-7] = (long ****)ppppplVar27;
  *(undefined1 (*) [16])(ppppplVar43 + -6) = auVar85;
  pppplVar57 = (long ****)tpidr_el0;
  ppppplVar43[-0xf] = (long ****)pppplVar57[5];
  ppppplVar43[-0x10] = (long ****)ppppplVar28;
  pppplVar64 = ppppplVar44[7];
  ppppplVar23 = ppppplVar44;
  if (pppplVar64 == (long ****)0x0) {
    func_0x03256878(ppppplVar44);
    pppplVar64 = ppppplVar44[7];
  }
  ppppplVar65 = (long *****)(ulong)*(uint *)((long)pppplVar64[2] + 0xfc);
  ppppplVar25 = (long *****)((long)ppppplVar43 + (-0x80 - ((long)ppppplVar65 + 0xfU & 0x1fffffff0)))
  ;
  ppppplVar27 = ppppplVar43;
  if (pppplVar62 == (long ****)0x0) {
LAB_03ce3b0c:
    func_0x03280cac();
LAB_03ce3b10:
    func_0x03280cb4();
  }
  else {
    ppplVar38 = pppplVar64[1];
    if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
      ppplVar38 = (long ***)func_0x0325681c();
    }
    ppppplVar27 = (long *****)func_0x03280afc(ppplVar38,*(int *)(pppplVar62 + 3) + 1);
    func_0x057b9e7c(pppplVar62,ppppplVar27,0,0);
    ppppplVar29 = ppppplVar28;
    if (-1 < *(int *)(ppppplVar44[7][2] + 5)) {
      ppppplVar29 = ppppplVar43 + -0x10;
    }
    ppppplVar23 = ppppplVar65;
    func_0x072ce970(ppppplVar25,ppppplVar29);
    if (ppppplVar27 == (long *****)0x0) goto LAB_03ce3b0c;
    if (*(uint *)(ppppplVar27 + 3) <= (uint)pppplVar62[3]) goto LAB_03ce3b10;
    ppppplVar23 = ppppplVar65;
    func_0x072ce970((long)ppppplVar27 +
                    (long)(int)(uint)pppplVar62[3] * (ulong)*(uint *)((long)*ppppplVar27 + 0x104) +
                    0x20,ppppplVar25);
    ppplVar38 = ppppplVar44[7][2];
    if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
      ppplVar38 = (long ***)func_0x0325681c();
    }
    if (*(uint *)(ppppplVar27 + 3) <= (uint)pppplVar62[3]) goto LAB_03ce3b10;
    ppppplVar23 = ppppplVar25;
    func_0x032809c8(ppplVar38,
                    (long)ppppplVar27 +
                    (long)(int)(uint)pppplVar62[3] * (ulong)*(uint *)((long)*ppppplVar27 + 0x104) +
                    0x20);
    if ((long ****)pppplVar57[5] == ppppplVar43[-0xf]) {
      return ppppplVar27;
    }
  }
  auVar85 = func_0x072ce990();
  pppplVar67 = auVar85._8_8_;
  pppplVar64 = auVar85._0_8_;
  ppppplVar25[-4] = (long ****)0x3ce3b18;
  ppppplVar25[-2] = (long ****)ppppplVar25;
  ppppplVar25[-1] = pppplVar62;
  if (pppplVar67[7] == (long ***)0x0) {
    func_0x03256878(pppplVar67);
  }
  if (pppplVar64 != (long ****)0x0) {
    pplVar40 = pppplVar67[7][1];
    if ((*(byte *)((long)pplVar40 + 0x135) & 1) == 0) {
      pplVar40 = (long **)func_0x0325681c();
    }
    ppppplVar29 = (long *****)func_0x03280afc(pplVar40,*(int *)(pppplVar64 + 3) + -1);
    if (ppppplVar29 != (long *****)0x0) {
      func_0x057b9f30(pppplVar64,1,ppppplVar29,0,*(undefined4 *)(ppppplVar29 + 3),0);
      return ppppplVar29;
    }
  }
  auVar85 = func_0x03280cac();
  pppplVar49 = auVar85._8_8_;
  pppplVar62 = auVar85._0_8_;
  ppppplVar25[-8] = (long ****)0x3ce3b94;
  ppppplVar25[-6] = pppplVar67;
  ppppplVar25[-5] = pppplVar64;
  if (pppplVar49[7] == (long ***)0x0) {
    func_0x03256878(pppplVar49);
  }
  if (pppplVar62 != (long ****)0x0) {
    pplVar40 = pppplVar49[7][1];
    if ((*(byte *)((long)pplVar40 + 0x135) & 1) == 0) {
      pplVar40 = (long **)func_0x0325681c();
    }
    ppppplVar29 = (long *****)func_0x03280afc(pplVar40,*(int *)(pppplVar62 + 3) + -1);
    if (ppppplVar29 != (long *****)0x0) {
      func_0x057b9f30(pppplVar62,1,ppppplVar29,0,*(undefined4 *)(ppppplVar29 + 3),0);
      return ppppplVar29;
    }
  }
  auVar85 = func_0x03280cac();
  pppplVar67 = auVar85._8_8_;
  pppplVar64 = auVar85._0_8_;
  ppppplVar25[-0xc] = (long ****)0x3ce3c10;
  ppppplVar25[-10] = pppplVar49;
  ppppplVar25[-9] = pppplVar62;
  if (pppplVar67[7] == (long ***)0x0) {
    func_0x03256878(pppplVar67);
  }
  if (pppplVar64 != (long ****)0x0) {
    pplVar40 = pppplVar67[7][1];
    if ((*(byte *)((long)pplVar40 + 0x135) & 1) == 0) {
      pplVar40 = (long **)func_0x0325681c();
    }
    ppppplVar29 = (long *****)func_0x03280afc(pplVar40,*(int *)(pppplVar64 + 3) + -1);
    if (ppppplVar29 != (long *****)0x0) {
      func_0x057b9f30(pppplVar64,0,ppppplVar29,0,*(undefined4 *)(ppppplVar29 + 3),0);
      return ppppplVar29;
    }
  }
  auVar85 = func_0x03280cac();
  pppplVar49 = auVar85._8_8_;
  pppplVar62 = auVar85._0_8_;
  ppppplVar25[-0x10] = (long ****)0x3ce3c8c;
  ppppplVar25[-0xe] = pppplVar67;
  ppppplVar25[-0xd] = pppplVar64;
  if (pppplVar49[7] == (long ***)0x0) {
    func_0x03256878(pppplVar49);
  }
  if (pppplVar62 != (long ****)0x0) {
    pplVar40 = pppplVar49[7][1];
    if ((*(byte *)((long)pplVar40 + 0x135) & 1) == 0) {
      pplVar40 = (long **)func_0x0325681c();
    }
    ppppplVar29 = (long *****)func_0x03280afc(pplVar40,*(int *)(pppplVar62 + 3) + -1);
    if (ppppplVar29 != (long *****)0x0) {
      func_0x057b9f30(pppplVar62,0,ppppplVar29,0,*(undefined4 *)(ppppplVar29 + 3),0);
      return ppppplVar29;
    }
  }
  auVar85 = func_0x03280cac();
  lVar47 = auVar85._8_8_;
  ppppplVar29 = auVar85._0_8_;
  ppppplVar25[-0x14] = (long ****)0x3ce3d08;
  ppppplVar25[-0x13] = (long ****)ppppplVar44;
  ppppplVar25[-0x12] = pppplVar49;
  ppppplVar25[-0x11] = pppplVar62;
  lVar59 = *(long *)(lVar47 + 0x38);
  if (lVar59 == 0) {
    func_0x03256878(lVar47);
    lVar59 = *(long *)(lVar47 + 0x38);
  }
  if (ppppplVar29 != (long *****)0x0) {
    pppplVar62 = *(long *****)(lVar59 + 0x20);
    if ((*(byte *)((long)pppplVar62 + 0x135) & 1) == 0) {
      pppplVar62 = (long ****)func_0x0325681c();
    }
    pppplVar64 = *ppppplVar29;
    if (pppplVar64 == pppplVar62) {
      return ppppplVar29;
    }
    pppplVar62 = *(long *****)(*(long *)(lVar47 + 0x38) + 0x28);
    if ((*(byte *)((long)pppplVar62 + 0x135) & 1) == 0) {
      pppplVar62 = (long ****)func_0x0325681c();
      pppplVar64 = *ppppplVar29;
    }
    if (pppplVar64 == pppplVar62) {
      pppplVar24 = ppppplVar25[-0x11];
      lVar59 = *(long *)(*(long *)(lVar47 + 0x38) + 0x30);
      pppplVar57 = ppppplVar25[-0x13];
      ppppplVar25[-0x16] = ppppplVar25[-0x14];
      ppppplVar25[-0x15] = (long ****)ppppplVar65;
      ppppplVar25[-0x14] = (long ****)ppppplVar27;
      ppppplVar25[-0x13] = pppplVar57;
      ppppplVar25[-0x12] = ppppplVar25[-0x12];
      ppppplVar25[-0x11] = pppplVar24;
      ppppplVar27 = ppppplVar29 + 2;
      if (*ppppplVar27 != (long ****)0x0) {
        if (*(int *)(ppppplVar29 + 3) != *(int *)(*ppppplVar27 + 3)) {
          func_0x044c9c08(ppppplVar29,
                          *(undefined8 *)(*(long *)(*(long *)(lVar59 + 0x20) + 0xc0) + 0xe0));
        }
        lVar47 = **(long **)(*(long *)(lVar59 + 0x20) + 0xc0);
        lVar59 = *(long *)(lVar47 + 0x38);
        if (lVar59 == 0) {
          func_0x03256878(lVar47);
          lVar59 = *(long *)(lVar47 + 0x38);
        }
        lVar59 = *(long *)(lVar59 + 0x10);
        if ((*(byte *)(lVar59 + 0x135) & 1) == 0) {
          lVar59 = func_0x0325681c();
        }
        if (*(int *)(lVar59 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        lVar59 = *(long *)(*(long *)(lVar47 + 0x38) + 0x10);
        if ((*(byte *)(lVar59 + 0x135) & 1) == 0) {
          lVar59 = func_0x0325681c();
        }
        ppppplVar29[2] = (long ****)**(long **)(lVar59 + 0xb8);
SUB_032809c4:
        if (iRam00000000080486b8 != 0) {
          puVar1 = (ulong *)(((ulong)ppppplVar27 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
          do {
            cVar4 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar18) {
              *puVar1 = *puVar1 | 1L << ((ulong)ppppplVar27 >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        return ppppplVar27;
      }
      auVar80 = func_0x03280cac();
      iVar20 = auVar80._8_4_;
      ppppplVar69 = auVar80._0_8_;
      ppppplVar25[-0x18] = (long ****)0x44c9d70;
      if (ppppplVar69[2] == (long ****)0x0) {
        auVar85 = func_0x03280cac();
        ppppplVar25[-0x1a] = (long ****)0x44c9dc0;
        ppppplVar25[-0x19] = pppplVar24;
        lVar59 = *(long *)(auVar85._8_8_ + 0x20);
        if ((*(byte *)(lVar59 + 0x135) & 1) == 0) {
          lVar59 = func_0x0325681c(lVar59);
        }
        lVar59 = *(long *)(*(long *)(lVar59 + 0xc0) + 0x20);
        if ((*(byte *)(lVar59 + 0x135) & 1) == 0) {
          lVar59 = func_0x0325681c(lVar59);
        }
        lVar59 = func_0x03280b90(auVar85._0_8_,lVar59);
        if (lVar59 == 0) {
          ppppplVar69 = (long *****)(ulong)(auVar85._0_8_ == 0);
        }
        else {
          ppppplVar69 = (long *****)0x1;
        }
        return ppppplVar69;
      }
      ppplVar38 = ppppplVar69[2][3];
      iVar46 = (int)ppplVar38;
      if (iVar20 <= iVar46) {
        return ppppplVar69;
      }
      iVar2 = 4;
      if (ppplVar38 != (long ***)0x0) {
        iVar2 = iVar46 << 1;
      }
      if (iVar20 <= iVar2) {
        iVar20 = iVar2;
      }
      pplVar40 = ppppplVar23[4][0x18][0x20];
      ppppplVar25[-0x1a] = ppppplVar25[-0x18];
      ppppplVar25[-0x19] = pppplVar57;
      ppppplVar25[-0x18] = (long ****)0x0;
      ppppplVar25[-0x17] = pppplVar24;
      if (iVar20 < *(int *)(ppppplVar69 + 3)) {
        func_0x03280a2c(PTR_DAT_077517e8);
        uVar37 = func_0x03280ca0();
        uVar22 = func_0x03280a2c(PTR_DAT_0774fae0);
        func_0x056ef504(uVar37,uVar22,0);
        func_0x03280b7c(uVar37,pplVar40);
      }
      else {
        ppppplVar27 = ppppplVar69 + 2;
        if (*ppppplVar27 != (long ****)0x0) {
          if (*(int *)(*ppppplVar27 + 3) == iVar20) {
            return ppppplVar69;
          }
          plVar36 = (long *)pplVar40[4][0x18];
          if (iVar20 < 1) {
            lVar47 = *plVar36;
            lVar59 = *(long *)(lVar47 + 0x38);
            if (lVar59 == 0) {
              func_0x03256878(lVar47);
              lVar59 = *(long *)(lVar47 + 0x38);
            }
            lVar59 = *(long *)(lVar59 + 0x10);
            if ((*(byte *)(lVar59 + 0x135) & 1) == 0) {
              lVar59 = func_0x0325681c();
            }
            if (*(int *)(lVar59 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            lVar59 = *(long *)(*(long *)(lVar47 + 0x38) + 0x10);
            if ((*(byte *)(lVar59 + 0x135) & 1) == 0) {
              lVar59 = func_0x0325681c();
            }
            *ppppplVar27 = (long ****)**(undefined8 **)(lVar59 + 0xb8);
          }
          else {
            lVar59 = plVar36[3];
            if ((*(byte *)(lVar59 + 0x135) & 1) == 0) {
              lVar59 = func_0x0325681c();
            }
            pppplVar24 = (long ****)func_0x03280afc(lVar59,iVar20);
            if (0 < *(int *)(ppppplVar69 + 3)) {
              func_0x057b9f30(*ppppplVar27,0,pppplVar24,0,*(int *)(ppppplVar69 + 3),0);
            }
            *ppppplVar27 = pppplVar24;
          }
          goto SUB_032809c4;
        }
      }
      lVar59 = func_0x03280cac();
      return (long *****)(ulong)*(uint *)(lVar59 + 0x18);
    }
    lVar30 = func_0x03d5b8d8(ppppplVar29,*(undefined8 *)(*(long *)(lVar47 + 0x38) + 0x38));
    if (lVar30 == 0) {
      auVar81 = func_0x03280cac();
      lVar47 = auVar81._8_8_;
      ppppplVar29 = auVar81._0_8_;
      ppppplVar25[-0x18] = (long ****)0x3ce3e28;
      ppppplVar25[-0x17] = (long ****)ppppplVar44;
      *(undefined1 (*) [16])(ppppplVar25 + -0x16) = auVar85;
      lVar59 = *(long *)(lVar47 + 0x38);
      if (lVar59 == 0) {
        func_0x03256878(lVar47);
        lVar59 = *(long *)(lVar47 + 0x38);
      }
      if (ppppplVar29 != (long *****)0x0) {
        pppplVar62 = *(long *****)(lVar59 + 0x20);
        if ((*(byte *)((long)pppplVar62 + 0x135) & 1) == 0) {
          pppplVar62 = (long ****)func_0x0325681c();
        }
        pppplVar64 = *ppppplVar29;
        if (pppplVar64 == pppplVar62) {
          return ppppplVar29;
        }
        pppplVar62 = *(long *****)(*(long *)(lVar47 + 0x38) + 0x28);
        if ((*(byte *)((long)pppplVar62 + 0x135) & 1) == 0) {
          pppplVar62 = (long ****)func_0x0325681c();
          pppplVar64 = *ppppplVar29;
        }
        if (pppplVar64 == pppplVar62) {
                    /* WARNING: Could not recover jumptable at 0x03ce3f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppppplVar69 = (long *****)
                        (*(code *)**(undefined8 **)(*(long *)(lVar47 + 0x38) + 0x30))(ppppplVar29);
          return ppppplVar69;
        }
        lVar30 = (*(code *)**(undefined8 **)(*(long *)(lVar47 + 0x38) + 0x38))(ppppplVar29);
        if (lVar30 == 0) {
          auVar85 = func_0x03280cac();
          plVar32 = auVar85._8_8_;
          plVar36 = auVar85._0_8_;
          ppppplVar25[-0x1c] = (long ****)0x3ce3f54;
          ppppplVar25[-0x1b] = (long ****)ppppplVar44;
          *(undefined1 (*) [16])(ppppplVar25 + -0x1a) = auVar81;
          if (ppppplVar23[7] == (long ****)0x0) {
            func_0x03256878(ppppplVar23);
          }
          if (plVar36 == (long *)0x0) {
            if (plVar32 == (long *)0x0) {
              return (long *****)0x1;
            }
            iVar20 = (int)plVar32[3];
          }
          else {
            if (plVar32 != (long *)0x0) {
              ppplVar38 = ppppplVar23[7][2];
              ppppplVar25[-0x1c] = ppppplVar25[-0x1c];
              ppppplVar25[-0x1b] = ppppplVar25[-0x1b];
              ppppplVar25[-0x1a] = ppppplVar25[-0x1a];
              ppppplVar25[-0x19] = ppppplVar25[-0x19];
              pplVar40 = ppplVar38[7];
              if (pplVar40 == (long **)0x0) {
                func_0x03256878(ppplVar38);
                pplVar40 = ppplVar38[7];
              }
              ppppplVar29 = (long *****)pplVar40[1];
              ppppplVar23 = (long *****)0x0;
              ppppplVar25[-0x20] = ppppplVar25[-0x1c];
              ppppplVar25[-0x1f] = pppplVar57;
              ppppplVar25[-0x1e] = (long ****)ppppplVar28;
              ppppplVar25[-0x1d] = (long ****)ppppplVar65;
              ppppplVar25[-0x1c] = (long ****)ppppplVar27;
              ppppplVar25[-0x1b] = ppppplVar25[-0x1b];
              ppppplVar25[-0x1a] = ppppplVar25[-0x1a];
              ppppplVar25[-0x19] = ppppplVar25[-0x19];
              ppppplVar44 = ppppplVar29;
              if (ppppplVar29[7] == (long ****)0x0) {
                func_0x03280a18(PTR_DAT_0774e8c8);
                func_0x03280a18(PTR_DAT_0774e8e0);
                if (ppppplVar29[7] == (long ****)0x0) {
                  func_0x03256878(ppppplVar29);
                }
              }
              plVar31 = (long *)func_0x039574b0(ppppplVar29[7][1]);
              puVar34 = PTR_DAT_07779d10;
              pppplVar62 = pppplVar57;
              if ((plVar36 == (long *)0x0) || (puVar34 = PTR_DAT_07779d18, plVar32 == (long *)0x0))
              {
LAB_03d54658:
                uVar37 = func_0x03280a2c(puVar34);
                uVar37 = func_0x05ac7464(uVar37,0);
                func_0x03280b7c(uVar37,ppppplVar29);
                goto LAB_03d5466c;
              }
              ppplVar38 = ppppplVar29[7][4];
              if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
                ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
              }
              lVar59 = *plVar36;
              uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
              if (uVar52 != 0) {
                piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
                do {
                  if (*(long ****)(piVar56 + -2) == ppplVar38) {
                    puVar21 = (undefined8 *)(lVar59 + (long)*piVar56 * 0x10 + 0x138);
                    goto LAB_03d541f8;
                  }
                  uVar52 = uVar52 - 1;
                  piVar56 = piVar56 + 4;
                } while (uVar52 != 0);
              }
              ppppplVar23 = (long *****)0x0;
              puVar21 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d541f8:
              plVar36 = (long *)(*(code *)*puVar21)(plVar36,puVar21[1]);
              ppplVar38 = ppppplVar29[7][4];
              if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
                ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
              }
              lVar59 = *plVar32;
              uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
              if (uVar52 != 0) {
                piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
                do {
                  if (*(long ****)(piVar56 + -2) == ppplVar38) {
                    puVar21 = (undefined8 *)(lVar59 + (long)*piVar56 * 0x10 + 0x138);
                    goto LAB_03d5426c;
                  }
                  uVar52 = uVar52 - 1;
                  piVar56 = piVar56 + 4;
                } while (uVar52 != 0);
              }
              ppppplVar23 = (long *****)0x0;
              puVar21 = (undefined8 *)func_0x03256b10(plVar32);
LAB_03d5426c:
              plVar32 = (long *)(*(code *)*puVar21)(plVar32,puVar21[1]);
              pppplVar62 = (long ****)PTR_DAT_0774e8e0;
              auVar5._8_8_ = plVar32;
              auVar5._0_8_ = plVar36;
              auVar81._8_8_ = plVar32;
              auVar81._0_8_ = plVar36;
              auVar85._8_8_ = plVar32;
              auVar85._0_8_ = plVar36;
              if (plVar36 == (long *)0x0) goto LAB_03d54674;
              do {
                lVar59 = *plVar36;
                uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
                if (uVar52 != 0) {
                  piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
                  do {
                    if ((long ***)*(long *)(piVar56 + -2) == *pppplVar62) {
                      puVar21 = (undefined8 *)(lVar59 + (long)*piVar56 * 0x10 + 0x138);
                      goto LAB_03d542d4;
                    }
                    uVar52 = uVar52 - 1;
                    piVar56 = piVar56 + 4;
                  } while (uVar52 != 0);
                }
                ppppplVar23 = (long *****)0x0;
                puVar21 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d542d4:
                uVar52 = (*(code *)*puVar21)(plVar36,puVar21[1]);
                if ((uVar52 & 1) == 0) {
                  if (plVar32 == (long *)0x0) goto LAB_03d54680;
                  lVar59 = *plVar32;
                  uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
                  if (uVar52 == 0) goto LAB_03d544f0;
                  piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
                  goto LAB_03d544d8;
                }
                if (plVar32 == (long *)0x0) {
                  func_0x03280cac();
LAB_03d54640:
                  func_0x03280cac();
                  puVar34 = PTR_DAT_07779d10;
                  goto LAB_03d54658;
                }
                lVar59 = *plVar32;
                uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
                if (uVar52 != 0) {
                  piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
                  do {
                    if ((long ***)*(long *)(piVar56 + -2) == *pppplVar62) {
                      puVar21 = (undefined8 *)(lVar59 + (long)*piVar56 * 0x10 + 0x138);
                      goto LAB_03d54334;
                    }
                    uVar52 = uVar52 - 1;
                    piVar56 = piVar56 + 4;
                  } while (uVar52 != 0);
                }
                ppppplVar23 = (long *****)0x0;
                puVar21 = (undefined8 *)func_0x03256b10(plVar32);
LAB_03d54334:
                uVar52 = (*(code *)*puVar21)(plVar32,puVar21[1]);
                ppppplVar27 = ppppplVar28;
                if ((uVar52 & 1) == 0) break;
                ppplVar38 = ppppplVar29[7][6];
                if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
                  ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
                }
                lVar59 = *plVar36;
                uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
                if (uVar52 != 0) {
                  piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
                  do {
                    if (*(long ****)(piVar56 + -2) == ppplVar38) {
                      puVar21 = (undefined8 *)(lVar59 + (long)*piVar56 * 0x10 + 0x138);
                      goto LAB_03d543a8;
                    }
                    uVar52 = uVar52 - 1;
                    piVar56 = piVar56 + 4;
                  } while (uVar52 != 0);
                }
                ppppplVar23 = (long *****)0x0;
                puVar21 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d543a8:
                uVar37 = (*(code *)*puVar21)(plVar36,puVar21[1]);
                ppplVar38 = ppppplVar29[7][6];
                if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
                  ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
                }
                lVar59 = *plVar32;
                uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
                if (uVar52 != 0) {
                  piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
                  do {
                    if (*(long ****)(piVar56 + -2) == ppplVar38) {
                      puVar21 = (undefined8 *)(lVar59 + (long)*piVar56 * 0x10 + 0x138);
                      goto LAB_03d5441c;
                    }
                    uVar52 = uVar52 - 1;
                    piVar56 = piVar56 + 4;
                  } while (uVar52 != 0);
                }
                ppppplVar23 = (long *****)0x0;
                puVar21 = (undefined8 *)func_0x03256b10(plVar32);
LAB_03d5441c:
                ppppplVar27 = (long *****)(*(code *)*puVar21)(plVar32,puVar21[1]);
                if (plVar31 == (long *)0x0) goto LAB_03d54640;
                ppplVar38 = *ppppplVar29[7];
                if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
                  ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
                }
                lVar59 = *plVar31;
                uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
                if (uVar52 != 0) {
                  piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
                  do {
                    if (*(long ****)(piVar56 + -2) == ppplVar38) {
                      puVar21 = (undefined8 *)(lVar59 + (long)*piVar56 * 0x10 + 0x138);
                      goto LAB_03d54494;
                    }
                    uVar52 = uVar52 - 1;
                    piVar56 = piVar56 + 4;
                  } while (uVar52 != 0);
                }
                puVar21 = (undefined8 *)func_0x03256b10(plVar31,ppplVar38,0);
LAB_03d54494:
                ppppplVar44 = (long *****)puVar21[1];
                ppppplVar23 = ppppplVar27;
                uVar52 = (*(code *)*puVar21)(plVar31,uVar37);
                ppppplVar28 = ppppplVar27;
              } while ((uVar52 & 1) != 0);
              iVar20 = 0xc;
              ppppplVar28 = ppppplVar27;
joined_r0x03d5453c:
              plVar31 = (long *)0x0;
joined_r0x03d5453c:
              if (plVar32 != (long *)0x0) {
                plVar36 = auVar81._8_8_;
                lVar59 = *plVar36;
                uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
                if (uVar52 != 0) {
                  piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar56 + -2) == *(long *)PTR_DAT_0774e8c8) {
                      puVar21 = (undefined8 *)(lVar59 + (long)*piVar56 * 0x10 + 0x138);
                      goto LAB_03d54594;
                    }
                    uVar52 = uVar52 - 1;
                    piVar56 = piVar56 + 4;
                  } while (uVar52 != 0);
                }
                ppppplVar23 = (long *****)0x0;
                puVar21 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d54594:
                (*(code *)*puVar21)(plVar36,puVar21[1]);
              }
              pppplVar57 = auVar81._0_8_;
              if (plVar31 != (long *)0x0) goto LAB_03d54678;
              ppppplVar27 = (long *****)0x0;
              ppppplVar29 = (long *****)0x0;
              if (iVar20 == 0) goto LAB_03d545b0;
              do {
                auVar85._8_8_ = ppppplVar29;
                auVar85._0_8_ = pppplVar57;
                if (pppplVar57 != (long ****)0x0) {
                  ppplVar38 = *pppplVar57;
                  uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
                  if (uVar52 != 0) {
                    pplVar40 = ppplVar38[0x16] + 1;
                    do {
                      if (pplVar40[-1] == *(long **)PTR_DAT_0774e8c8) {
                        ppplVar38 = ppplVar38 + (long)*(int *)pplVar40 * 2 + 0x27;
                        goto LAB_03d54610;
                      }
                      uVar52 = uVar52 - 1;
                      pplVar40 = pplVar40 + 2;
                    } while (uVar52 != 0);
                  }
                  ppppplVar23 = (long *****)0x0;
                  ppplVar38 = (long ***)func_0x03256b10(pppplVar57);
LAB_03d54610:
                  (*(code *)*ppplVar38)(pppplVar57,ppplVar38[1]);
                }
                if (ppppplVar29 == (long *****)0x0) {
                  return (long *****)(ulong)(iVar20 != 0xc);
                }
LAB_03d5466c:
                func_0x03280ca4(ppppplVar29);
                pppplVar57 = pppplVar62;
                auVar81 = auVar85;
LAB_03d54674:
                func_0x03280cac();
                pppplVar62 = pppplVar57;
LAB_03d54678:
                func_0x03280ca4(plVar31);
                auVar5 = auVar81;
LAB_03d54680:
                plVar32 = auVar5._8_8_;
                pppplVar57 = auVar5._0_8_;
                auVar85 = func_0x03280cac();
                pppplVar64 = auVar85._0_8_;
                if (auVar85._8_4_ == 1) goto code_r0x03d546c4;
                plVar31 = (long *)0x0;
                if (plVar32 != (long *)0x0) {
                  lVar59 = *plVar32;
                  uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
                  if (uVar52 != 0) {
                    piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar56 + -2) == *(long *)PTR_DAT_0774e8c8) {
                        puVar21 = (undefined8 *)(lVar59 + (long)*piVar56 * 0x10 + 0x138);
                        goto LAB_03d54740;
                      }
                      uVar52 = uVar52 - 1;
                      piVar56 = piVar56 + 4;
                    } while (uVar52 != 0);
                  }
                  ppppplVar23 = (long *****)0x0;
                  puVar21 = (undefined8 *)func_0x03256b10(plVar32);
LAB_03d54740:
                  (*(code *)*puVar21)(plVar32,puVar21[1]);
                }
                if (auVar85._8_4_ != 1) {
                  if (pppplVar57 == (long ****)0x0) goto LAB_03d547f4;
                  ppplVar38 = *pppplVar57;
                  uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
                  if (uVar52 == 0) goto LAB_03d547cc;
                  pplVar40 = ppplVar38[0x16] + 1;
                  goto LAB_03d547b4;
                }
                puVar21 = (undefined8 *)func_0x072ce910(pppplVar64);
                ppppplVar27 = (long *****)*puVar21;
                func_0x072ce920();
LAB_03d545b0:
                iVar20 = 0;
                ppppplVar29 = ppppplVar27;
              } while( true );
            }
            iVar20 = (int)plVar36[3];
          }
          return (long *****)(ulong)(iVar20 == 0);
        }
        lVar59 = *(long *)(lVar47 + 0x38);
        if (*(long *)(lVar30 + 0x18) != 0) {
          if ((*(byte *)(*(long *)(lVar59 + 0x20) + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          ppppplVar69 = (long *****)func_0x03280ca0();
          (*(code *)**(undefined8 **)(*(long *)(lVar47 + 0x38) + 0x48))(ppppplVar69,lVar30);
          return ppppplVar69;
        }
      }
      lVar59 = *(long *)(lVar59 + 0x18);
      if ((*(byte *)(lVar59 + 0x135) & 1) == 0) {
        lVar59 = func_0x0325681c();
      }
      if (*(int *)(lVar59 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar59 = *(long *)(*(long *)(lVar47 + 0x38) + 0x18);
      if ((*(byte *)(lVar59 + 0x135) & 1) == 0) {
        lVar59 = func_0x0325681c();
      }
      return (long *****)**(long **)(lVar59 + 0xb8);
    }
    lVar59 = *(long *)(lVar47 + 0x38);
    if (*(long *)(lVar30 + 0x18) != 0) {
      if ((*(byte *)(*(long *)(lVar59 + 0x20) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      ppppplVar69 = (long *****)func_0x03280ca0();
      func_0x04720438(ppppplVar69,lVar30,*(undefined8 *)(*(long *)(lVar47 + 0x38) + 0x48));
      return ppppplVar69;
    }
  }
  lVar59 = *(long *)(lVar59 + 0x18);
  if ((*(byte *)(lVar59 + 0x135) & 1) == 0) {
    lVar59 = func_0x0325681c();
  }
  if (*(int *)(lVar59 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar59 = *(long *)(*(long *)(lVar47 + 0x38) + 0x18);
  if ((*(byte *)(lVar59 + 0x135) & 1) == 0) {
    lVar59 = func_0x0325681c();
  }
  return (long *****)**(long **)(lVar59 + 0xb8);
  while( true ) {
    uVar52 = uVar52 - 1;
    piVar56 = piVar56 + 4;
    if (uVar52 == 0) break;
LAB_03d544d8:
    if ((long ***)*(long *)(piVar56 + -2) == *pppplVar62) {
      puVar21 = (undefined8 *)(lVar59 + (long)*piVar56 * 0x10 + 0x138);
      goto LAB_03d5451c;
    }
  }
LAB_03d544f0:
  ppppplVar23 = (long *****)0x0;
  puVar21 = (undefined8 *)func_0x03256b10(plVar32);
LAB_03d5451c:
  uVar52 = (*(code *)*puVar21)(plVar32,puVar21[1]);
  iVar20 = 0xc;
  if ((uVar52 & 1) == 0) {
    iVar20 = 0xe;
  }
  goto joined_r0x03d5453c;
code_r0x03d546c4:
  plVar31 = (long *)func_0x072ce910(pppplVar64);
  plVar31 = (long *)*plVar31;
  func_0x072ce920();
  iVar20 = 0;
  auVar81 = auVar5;
  goto joined_r0x03d5453c;
  while( true ) {
    uVar52 = uVar52 - 1;
    pplVar40 = pplVar40 + 2;
    if (uVar52 == 0) break;
LAB_03d547b4:
    if (pplVar40[-1] == *(long **)PTR_DAT_0774e8c8) {
      ppplVar38 = ppplVar38 + (long)*(int *)pplVar40 * 2 + 0x27;
      goto LAB_03d547e8;
    }
  }
LAB_03d547cc:
  ppppplVar23 = (long *****)0x0;
  ppplVar38 = (long ***)func_0x03256b10(pppplVar57);
LAB_03d547e8:
  (*(code *)*ppplVar38)(pppplVar57,ppplVar38[1]);
LAB_03d547f4:
  func_0x03365958(pppplVar64);
  func_0x03280ca4(0);
  auVar82 = func_0x02f09514();
  plVar32 = auVar82._8_8_;
  plVar36 = auVar82._0_8_;
  ppppplVar25[-0x2c] = (long ****)(ppppplVar43 + -0xe);
  ppppplVar25[-0x2b] = (long ****)0x3d5480c;
  ppppplVar25[-0x2a] = (long ****)ppppplVar69;
  ppppplVar25[-0x29] = pppplVar24;
  ppppplVar25[-0x28] = pppplVar60;
  ppppplVar25[-0x27] = pppplVar62;
  ppppplVar25[-0x26] = (long ****)ppppplVar28;
  ppppplVar25[-0x25] = auVar85._8_8_;
  ppppplVar25[-0x24] = (long ****)0x0;
  ppppplVar25[-0x23] = pppplVar64;
  ppppplVar25[-0x22] = (long ****)0x0;
  ppppplVar25[-0x21] = pppplVar57;
  pppplVar57 = (long ****)tpidr_el0;
  ppppplVar25[-0x2d] = (long ****)pppplVar57[5];
  pppplVar62 = ppppplVar44[7];
  ppppplVar43 = ppppplVar23;
  ppppplVar27 = ppppplVar44;
  if (pppplVar62 == (long ****)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    pppplVar62 = ppppplVar44[7];
    if (pppplVar62 == (long ****)0x0) {
      func_0x03256878(ppppplVar44);
      pppplVar62 = ppppplVar44[7];
    }
  }
  uVar52 = (ulong)*(uint *)((long)pppplVar62[8] + 0xfc) + 0xf & 0x1fffffff0;
  pppplVar64 = (long ****)((long)ppppplVar25 + (-0x180 - uVar52));
  ppppplVar28 = (long *****)((long)pppplVar64 - uVar52);
  if (ppppplVar23 == (long *****)0x0) {
    ppppplVar23 = (long *****)(*(code *)*pppplVar62[1])();
  }
  puVar34 = PTR_DAT_07779d10;
  pppplVar62 = pppplVar60;
  if ((plVar36 == (long *)0x0) || (puVar34 = PTR_DAT_07779d18, plVar32 == (long *)0x0)) {
LAB_03d54dd4:
    uVar37 = func_0x03280a2c(puVar34);
    uVar37 = func_0x05ac7464(uVar37,0);
    func_0x03280b7c(uVar37,ppppplVar44);
    goto LAB_03d54de8;
  }
  ppplVar38 = ppppplVar44[7][4];
  if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
    ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
  }
  lVar59 = *plVar36;
  uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
  if (uVar52 != 0) {
    piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
    do {
      if (*(long ****)(piVar56 + -2) == ppplVar38) {
        puVar21 = (undefined8 *)(lVar59 + (long)*piVar56 * 0x10 + 0x138);
        goto LAB_03d54924;
      }
      uVar52 = uVar52 - 1;
      piVar56 = piVar56 + 4;
    } while (uVar52 != 0);
  }
  ppppplVar43 = (long *****)0x0;
  puVar21 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d54924:
  plVar36 = (long *)(*(code *)*puVar21)(plVar36,puVar21[1]);
  ppplVar38 = ppppplVar44[7][4];
  if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
    ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
  }
  lVar59 = *plVar32;
  uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
  if (uVar52 != 0) {
    piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
    do {
      if (*(long ****)(piVar56 + -2) == ppplVar38) {
        puVar21 = (undefined8 *)(lVar59 + (long)*piVar56 * 0x10 + 0x138);
        goto LAB_03d54998;
      }
      uVar52 = uVar52 - 1;
      piVar56 = piVar56 + 4;
    } while (uVar52 != 0);
  }
  ppppplVar43 = (long *****)0x0;
  puVar21 = (undefined8 *)func_0x03256b10(plVar32);
LAB_03d54998:
  ppppplVar65 = (long *****)(*(code *)*puVar21)(plVar32,puVar21[1]);
  pppplVar62 = (long ****)PTR_DAT_0774e8e0;
  auVar7._8_8_ = ppppplVar65;
  auVar7._0_8_ = plVar36;
  auVar6._8_8_ = ppppplVar65;
  auVar6._0_8_ = plVar36;
  auVar82._8_8_ = ppppplVar65;
  auVar82._0_8_ = plVar36;
  if (plVar36 == (long *)0x0) goto LAB_03d54df0;
  do {
    lVar59 = *plVar36;
    uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
    if (uVar52 != 0) {
      piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
      do {
        if ((long ***)*(long *)(piVar56 + -2) == *pppplVar62) {
          puVar21 = (undefined8 *)(lVar59 + (long)*piVar56 * 0x10 + 0x138);
          goto LAB_03d54a00;
        }
        uVar52 = uVar52 - 1;
        piVar56 = piVar56 + 4;
      } while (uVar52 != 0);
    }
    ppppplVar43 = (long *****)0x0;
    puVar21 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d54a00:
    uVar52 = (*(code *)*puVar21)(plVar36,puVar21[1]);
    if ((uVar52 & 1) == 0) {
      if (ppppplVar65 == (long *****)0x0) goto LAB_03d54dfc;
      pppplVar60 = *ppppplVar65;
      uVar52 = (ulong)*(ushort *)((long)pppplVar60 + 0x12e);
      if (uVar52 == 0) goto LAB_03d54c60;
      ppplVar38 = pppplVar60[0x16] + 1;
      goto LAB_03d54c48;
    }
    if (ppppplVar65 == (long *****)0x0) {
      func_0x03280cac();
LAB_03d54dbc:
      func_0x03280cac();
      puVar34 = PTR_DAT_07779d10;
      goto LAB_03d54dd4;
    }
    pppplVar60 = *ppppplVar65;
    uVar52 = (ulong)*(ushort *)((long)pppplVar60 + 0x12e);
    if (uVar52 != 0) {
      ppplVar38 = pppplVar60[0x16] + 1;
      do {
        if ((long ***)ppplVar38[-1] == *pppplVar62) {
          pppplVar60 = pppplVar60 + (long)*(int *)ppplVar38 * 2 + 0x27;
          goto LAB_03d54a60;
        }
        uVar52 = uVar52 - 1;
        ppplVar38 = ppplVar38 + 2;
      } while (uVar52 != 0);
    }
    ppppplVar43 = (long *****)0x0;
    pppplVar60 = (long ****)func_0x03256b10(ppppplVar65);
LAB_03d54a60:
    uVar52 = (*(code *)*pppplVar60)(ppppplVar65,pppplVar60[1]);
    if ((uVar52 & 1) == 0) break;
    ppplVar38 = ppppplVar44[7][6];
    if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
      ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
    }
    lVar59 = *plVar36;
    uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
    if (uVar52 != 0) {
      piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
      do {
        if (*(long ****)(piVar56 + -2) == ppplVar38) {
          lVar59 = lVar59 + (long)*piVar56 * 0x10 + 0x138;
          goto LAB_03d54ad4;
        }
        uVar52 = uVar52 - 1;
        piVar56 = piVar56 + 4;
      } while (uVar52 != 0);
    }
    lVar59 = func_0x03256b10(plVar36,ppplVar38,0);
LAB_03d54ad4:
    ppppplVar25[-0x30] = pppplVar64;
    lVar59 = *(long *)(lVar59 + 8);
    (**(code **)(lVar59 + 0x10))
              (*(undefined8 *)(lVar59 + 8),lVar59,plVar36,ppppplVar25 + -0x30,pppplVar64);
    ppplVar38 = ppppplVar44[7][6];
    if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
      ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
    }
    pppplVar60 = *ppppplVar65;
    uVar52 = (ulong)*(ushort *)((long)pppplVar60 + 0x12e);
    if (uVar52 != 0) {
      ppplVar39 = pppplVar60[0x16] + 1;
      do {
        if ((long ***)ppplVar39[-1] == ppplVar38) {
          pppplVar60 = pppplVar60 + (long)*(int *)ppplVar39 * 2 + 0x27;
          goto LAB_03d54b54;
        }
        uVar52 = uVar52 - 1;
        ppplVar39 = ppplVar39 + 2;
      } while (uVar52 != 0);
    }
    pppplVar60 = (long ****)func_0x03256b10(ppppplVar65,ppplVar38,0);
LAB_03d54b54:
    ppppplVar25[-0x30] = (long ****)ppppplVar28;
    ppppplVar27 = ppppplVar25 + -0x30;
    ppppplVar43 = ppppplVar65;
    (*(code *)pppplVar60[1][2])(pppplVar60[1][1]);
    if (ppppplVar23 == (long *****)0x0) goto LAB_03d54dbc;
    pppplVar60 = ppppplVar44[7];
    ppplVar38 = *pppplVar60;
    if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
      ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
      pppplVar60 = ppppplVar44[7];
    }
    pppplVar24 = pppplVar64;
    ppppplVar69 = ppppplVar28;
    if (-1 < *(int *)(pppplVar60[8] + 5)) {
      pppplVar24 = (long ****)*pppplVar64;
      ppppplVar69 = (long *****)*ppppplVar28;
    }
    pppplVar60 = *ppppplVar23;
    uVar52 = (ulong)*(ushort *)((long)pppplVar60 + 0x12e);
    if (uVar52 != 0) {
      ppplVar39 = pppplVar60[0x16] + 1;
      do {
        if ((long ***)ppplVar39[-1] == ppplVar38) {
          pppplVar60 = pppplVar60 + (long)*(int *)ppplVar39 * 2 + 0x27;
          goto LAB_03d54bf8;
        }
        uVar52 = uVar52 - 1;
        ppplVar39 = ppplVar39 + 2;
      } while (uVar52 != 0);
    }
    pppplVar60 = (long ****)func_0x03256b10(ppppplVar23,ppplVar38,0);
LAB_03d54bf8:
    ppppplVar25[-0x30] = pppplVar24;
    ppppplVar25[-0x2f] = (long ****)ppppplVar69;
    ppppplVar27 = ppppplVar25 + -0x30;
    ppppplVar43 = ppppplVar23;
    (*(code *)pppplVar60[1][2])(pppplVar60[1][1]);
  } while (*(char *)((long)ppppplVar25 + -0x16c) != '\0');
  iVar20 = 0xc;
  goto joined_r0x03d54c9c;
  while( true ) {
    uVar52 = uVar52 - 1;
    ppplVar38 = ppplVar38 + 2;
    if (uVar52 == 0) break;
LAB_03d54c48:
    if ((long ***)ppplVar38[-1] == *pppplVar62) {
      pppplVar60 = pppplVar60 + (long)*(int *)ppplVar38 * 2 + 0x27;
      goto LAB_03d54c7c;
    }
  }
LAB_03d54c60:
  ppppplVar43 = (long *****)0x0;
  pppplVar60 = (long ****)func_0x03256b10(ppppplVar65);
LAB_03d54c7c:
  uVar52 = (*(code *)*pppplVar60)(ppppplVar65,pppplVar60[1]);
  iVar20 = 0xc;
  if ((uVar52 & 1) == 0) {
    iVar20 = 0xe;
  }
joined_r0x03d54c9c:
  ppppplVar23 = (long *****)0x0;
joined_r0x03d54c9c:
  if (ppppplVar65 != (long *****)0x0) {
    plVar36 = auVar6._8_8_;
    lVar59 = *plVar36;
    uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
    if (uVar52 != 0) {
      piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
      do {
        if (*(long *)(piVar56 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar21 = (undefined8 *)(lVar59 + (long)*piVar56 * 0x10 + 0x138);
          goto LAB_03d54cf4;
        }
        uVar52 = uVar52 - 1;
        piVar56 = piVar56 + 4;
      } while (uVar52 != 0);
    }
    ppppplVar43 = (long *****)0x0;
    puVar21 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d54cf4:
    (*(code *)*puVar21)(plVar36,puVar21[1]);
  }
  pppplVar60 = auVar6._0_8_;
  if (ppppplVar23 != (long *****)0x0) goto LAB_03d54df4;
  ppppplVar65 = (long *****)0x0;
  ppppplVar44 = (long *****)0x0;
  if (iVar20 == 0) goto LAB_03d54d10;
  do {
    auVar82._8_8_ = ppppplVar44;
    auVar82._0_8_ = pppplVar60;
    if (pppplVar60 != (long ****)0x0) {
      ppplVar38 = *pppplVar60;
      uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
      if (uVar52 != 0) {
        pplVar40 = ppplVar38[0x16] + 1;
        do {
          if (pplVar40[-1] == *(long **)PTR_DAT_0774e8c8) {
            ppplVar38 = ppplVar38 + (long)*(int *)pplVar40 * 2 + 0x27;
            goto LAB_03d54d70;
          }
          uVar52 = uVar52 - 1;
          pplVar40 = pplVar40 + 2;
        } while (uVar52 != 0);
      }
      ppppplVar43 = (long *****)0x0;
      ppplVar38 = (long ***)func_0x03256b10(pppplVar60);
LAB_03d54d70:
      (*(code *)*ppplVar38)(pppplVar60,ppplVar38[1]);
    }
    if (ppppplVar44 == (long *****)0x0) {
      ppppplVar44 = (long *****)(ulong)(iVar20 != 0xc);
      auVar7 = auVar82;
      if ((long ****)pppplVar57[5] == ppppplVar25[-0x2d]) {
        return ppppplVar44;
      }
    }
    else {
LAB_03d54de8:
      func_0x03280ca4(ppppplVar44);
      pppplVar60 = pppplVar62;
      auVar6 = auVar82;
LAB_03d54df0:
      func_0x03280cac();
      pppplVar62 = pppplVar60;
LAB_03d54df4:
      func_0x03280ca4(ppppplVar23);
      auVar7 = auVar6;
LAB_03d54dfc:
      ppppplVar44 = (long *****)func_0x03280cac();
    }
    auVar14._8_8_ = pppplVar62;
    auVar14._0_8_ = pppplVar57;
    auVar13._8_8_ = pppplVar62;
    auVar13._0_8_ = pppplVar57;
    auVar12._8_8_ = pppplVar62;
    auVar12._0_8_ = pppplVar57;
    auVar8._8_8_ = pppplVar62;
    auVar8._0_8_ = pppplVar57;
    ppppplVar65 = auVar7._8_8_;
    pppplVar60 = auVar7._0_8_;
    auVar85 = func_0x072ce990(ppppplVar44);
    pppplVar64 = auVar85._0_8_;
    if (auVar85._8_4_ == 1) break;
    ppppplVar23 = (long *****)0x0;
    if (ppppplVar65 != (long *****)0x0) {
      pppplVar67 = *ppppplVar65;
      uVar52 = (ulong)*(ushort *)((long)pppplVar67 + 0x12e);
      if (uVar52 != 0) {
        ppplVar38 = pppplVar67[0x16] + 1;
        do {
          if (ppplVar38[-1] == *(long ***)PTR_DAT_0774e8c8) {
            pppplVar67 = pppplVar67 + (long)*(int *)ppplVar38 * 2 + 0x27;
            goto LAB_03d54ec0;
          }
          uVar52 = uVar52 - 1;
          ppplVar38 = ppplVar38 + 2;
        } while (uVar52 != 0);
      }
      ppppplVar43 = (long *****)0x0;
      pppplVar67 = (long ****)func_0x03256b10(ppppplVar65);
LAB_03d54ec0:
      (*(code *)*pppplVar67)(ppppplVar65,pppplVar67[1]);
    }
    if (auVar85._8_4_ != 1) {
      if (pppplVar60 == (long ****)0x0) goto LAB_03d54f74;
      ppplVar38 = *pppplVar60;
      uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
      if (uVar52 == 0) goto LAB_03d54f4c;
      pplVar40 = ppplVar38[0x16] + 1;
      goto LAB_03d54f34;
    }
    puVar21 = (undefined8 *)func_0x072ce910(pppplVar64);
    ppppplVar65 = (long *****)*puVar21;
    func_0x072ce920();
LAB_03d54d10:
    iVar20 = 0;
    ppppplVar44 = ppppplVar65;
  } while( true );
  plVar36 = (long *)func_0x072ce910(pppplVar64);
  ppppplVar23 = (long *****)*plVar36;
  func_0x072ce920();
  iVar20 = 0;
  auVar6 = auVar7;
  goto joined_r0x03d54c9c;
  while( true ) {
    uVar52 = uVar52 - 1;
    pplVar40 = pplVar40 + 2;
    if (uVar52 == 0) break;
LAB_03d54f34:
    if (pplVar40[-1] == *(long **)PTR_DAT_0774e8c8) {
      ppplVar38 = ppplVar38 + (long)*(int *)pplVar40 * 2 + 0x27;
      goto LAB_03d54f68;
    }
  }
LAB_03d54f4c:
  ppppplVar43 = (long *****)0x0;
  ppplVar38 = (long ***)func_0x03256b10(pppplVar60);
LAB_03d54f68:
  (*(code *)*ppplVar38)(pppplVar60,ppplVar38[1]);
LAB_03d54f74:
  func_0x03365958(pppplVar64);
  func_0x03280ca4(0);
  auVar83 = func_0x02f09514();
  plVar32 = auVar83._8_8_;
  plVar36 = auVar83._0_8_;
  ppppplVar28[-10] = (long ****)0x3d54f8c;
  ppppplVar28[-9] = pppplVar24;
  ppppplVar28[-8] = pppplVar62;
  ppppplVar28[-7] = pppplVar57;
  ppppplVar28[-6] = (long ****)ppppplVar28;
  ppppplVar28[-5] = auVar85._8_8_;
  ppppplVar28[-4] = (long ****)0x0;
  ppppplVar28[-3] = pppplVar64;
  ppppplVar28[-2] = (long ****)0x0;
  ppppplVar28[-1] = pppplVar60;
  ppppplVar44 = ppppplVar43;
  ppppplVar23 = ppppplVar27;
  if (ppppplVar27[7] == (long ****)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (ppppplVar27[7] == (long ****)0x0) {
      func_0x03256878(ppppplVar27);
    }
  }
  if (ppppplVar43 == (long *****)0x0) {
    ppppplVar43 = (long *****)func_0x03d6108c(ppppplVar27[7][1]);
  }
  puVar34 = PTR_DAT_07779d10;
  ppppplVar65 = ppppplVar28;
  pppplVar57 = pppplVar24;
  if ((plVar36 == (long *)0x0) ||
     (puVar34 = PTR_DAT_07779d18, auVar12 = auVar13, plVar32 == (long *)0x0)) {
LAB_03d554cc:
    uVar37 = func_0x03280a2c(puVar34);
    uVar37 = func_0x05ac7464(uVar37,0);
    func_0x03280b7c(uVar37,ppppplVar27);
    goto LAB_03d554e0;
  }
  ppplVar38 = ppppplVar27[7][4];
  if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
    ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
  }
  lVar59 = *plVar36;
  uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
  if (uVar52 != 0) {
    piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
    do {
      if (*(long ****)(piVar56 + -2) == ppplVar38) {
        puVar21 = (undefined8 *)(lVar59 + (long)*piVar56 * 0x10 + 0x138);
        goto LAB_03d55058;
      }
      uVar52 = uVar52 - 1;
      piVar56 = piVar56 + 4;
    } while (uVar52 != 0);
  }
  ppppplVar44 = (long *****)0x0;
  puVar21 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d55058:
  plVar36 = (long *)(*(code *)*puVar21)(plVar36,puVar21[1]);
  ppplVar38 = ppppplVar27[7][4];
  if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
    ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
  }
  lVar59 = *plVar32;
  uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
  if (uVar52 != 0) {
    piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
    do {
      if (*(long ****)(piVar56 + -2) == ppplVar38) {
        puVar21 = (undefined8 *)(lVar59 + (long)*piVar56 * 0x10 + 0x138);
        goto LAB_03d550cc;
      }
      uVar52 = uVar52 - 1;
      piVar56 = piVar56 + 4;
    } while (uVar52 != 0);
  }
  ppppplVar44 = (long *****)0x0;
  puVar21 = (undefined8 *)func_0x03256b10(plVar32);
LAB_03d550cc:
  plVar32 = (long *)(*(code *)*puVar21)(plVar32,puVar21[1]);
  pppplVar57 = (long ****)PTR_DAT_0774e8e0;
  auVar10._8_8_ = plVar32;
  auVar10._0_8_ = plVar36;
  auVar9._8_8_ = plVar32;
  auVar9._0_8_ = plVar36;
  auVar83._8_8_ = plVar32;
  auVar83._0_8_ = plVar36;
  if (plVar36 == (long *)0x0) goto LAB_03d554e8;
  do {
    lVar59 = *plVar36;
    uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
    if (uVar52 != 0) {
      piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
      do {
        if ((long ***)*(long *)(piVar56 + -2) == *pppplVar57) {
          puVar21 = (undefined8 *)(lVar59 + (long)*piVar56 * 0x10 + 0x138);
          ppppplVar29 = ppppplVar23;
          goto LAB_03d55134;
        }
        uVar52 = uVar52 - 1;
        piVar56 = piVar56 + 4;
      } while (uVar52 != 0);
    }
    ppppplVar44 = (long *****)0x0;
    puVar21 = (undefined8 *)func_0x03256b10(plVar36);
    ppppplVar29 = ppppplVar23;
LAB_03d55134:
    uVar52 = (*(code *)*puVar21)(plVar36,puVar21[1]);
    if ((uVar52 & 1) == 0) {
      if (plVar32 == (long *)0x0) goto LAB_03d554f4;
      lVar59 = *plVar32;
      uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
      if (uVar52 == 0) goto LAB_03d55360;
      piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
      goto LAB_03d55348;
    }
    if (plVar32 == (long *)0x0) {
      func_0x03280cac();
LAB_03d554b4:
      func_0x03280cac();
      puVar34 = PTR_DAT_07779d10;
      ppppplVar23 = ppppplVar29;
      auVar12 = auVar8;
      goto LAB_03d554cc;
    }
    lVar59 = *plVar32;
    uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
    if (uVar52 != 0) {
      piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
      do {
        if ((long ***)*(long *)(piVar56 + -2) == *pppplVar57) {
          puVar21 = (undefined8 *)(lVar59 + (long)*piVar56 * 0x10 + 0x138);
          ppppplVar23 = ppppplVar29;
          goto LAB_03d55194;
        }
        uVar52 = uVar52 - 1;
        piVar56 = piVar56 + 4;
      } while (uVar52 != 0);
    }
    ppppplVar44 = (long *****)0x0;
    puVar21 = (undefined8 *)func_0x03256b10(plVar32);
    ppppplVar23 = ppppplVar29;
LAB_03d55194:
    uVar52 = (*(code *)*puVar21)(plVar32,puVar21[1]);
    auVar85 = auVar8;
    if ((uVar52 & 1) == 0) break;
    ppplVar38 = ppppplVar27[7][6];
    ppppplVar29 = ppppplVar23;
    if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
      ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
      ppppplVar29 = ppppplVar23;
    }
    lVar59 = *plVar36;
    uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
    if (uVar52 != 0) {
      piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
      do {
        if (*(long ****)(piVar56 + -2) == ppplVar38) {
          puVar21 = (undefined8 *)(lVar59 + (long)*piVar56 * 0x10 + 0x138);
          goto LAB_03d55208;
        }
        uVar52 = uVar52 - 1;
        piVar56 = piVar56 + 4;
      } while (uVar52 != 0);
    }
    ppppplVar44 = (long *****)0x0;
    puVar21 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d55208:
    auVar81 = (*(code *)*puVar21)(plVar36,puVar21[1]);
    ppppplVar65 = auVar81._8_8_;
    ppplVar38 = ppppplVar27[7][6];
    if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
      ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
    }
    lVar59 = *plVar32;
    uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
    if (uVar52 != 0) {
      piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
      do {
        if (*(long ****)(piVar56 + -2) == ppplVar38) {
          puVar21 = (undefined8 *)(lVar59 + (long)*piVar56 * 0x10 + 0x138);
          goto LAB_03d55280;
        }
        uVar52 = uVar52 - 1;
        piVar56 = piVar56 + 4;
      } while (uVar52 != 0);
    }
    ppppplVar44 = (long *****)0x0;
    puVar21 = (undefined8 *)func_0x03256b10(plVar32);
LAB_03d55280:
    auVar85 = (*(code *)*puVar21)(plVar32,puVar21[1]);
    ppppplVar23 = auVar85._0_8_;
    if (ppppplVar43 == (long *****)0x0) goto LAB_03d554b4;
    ppplVar38 = *ppppplVar27[7];
    if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
      ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
    }
    pppplVar24 = *ppppplVar43;
    uVar52 = (ulong)*(ushort *)((long)pppplVar24 + 0x12e);
    if (uVar52 != 0) {
      ppplVar39 = pppplVar24[0x16] + 1;
      do {
        if ((long ***)ppplVar39[-1] == ppplVar38) {
          pppplVar24 = pppplVar24 + (long)*(int *)ppplVar39 * 2 + 0x27;
          goto LAB_03d552fc;
        }
        uVar52 = uVar52 - 1;
        ppplVar39 = ppplVar39 + 2;
      } while (uVar52 != 0);
    }
    pppplVar24 = (long ****)func_0x03256b10(ppppplVar43,ppplVar38,0);
LAB_03d552fc:
    ppppplVar44 = ppppplVar65;
    uVar52 = (*(code *)*pppplVar24)
                       (ppppplVar43,auVar81._0_8_,ppppplVar65,ppppplVar23,auVar85._8_8_,
                        pppplVar24[1]);
    auVar8 = auVar85;
  } while ((uVar52 & 1) != 0);
  iVar20 = 0xc;
  ppppplVar29 = ppppplVar23;
  auVar8 = auVar85;
  goto joined_r0x03d553ac;
  while( true ) {
    uVar52 = uVar52 - 1;
    piVar56 = piVar56 + 4;
    if (uVar52 == 0) break;
LAB_03d55348:
    if ((long ***)*(long *)(piVar56 + -2) == *pppplVar57) {
      puVar21 = (undefined8 *)(lVar59 + (long)*piVar56 * 0x10 + 0x138);
      goto LAB_03d5538c;
    }
  }
LAB_03d55360:
  ppppplVar44 = (long *****)0x0;
  puVar21 = (undefined8 *)func_0x03256b10(plVar32);
LAB_03d5538c:
  uVar52 = (*(code *)*puVar21)(plVar32,puVar21[1]);
  iVar20 = 0xc;
  if ((uVar52 & 1) == 0) {
    iVar20 = 0xe;
  }
joined_r0x03d553ac:
  ppppplVar43 = (long *****)0x0;
joined_r0x03d553ac:
  if (plVar32 != (long *)0x0) {
    plVar36 = auVar9._8_8_;
    lVar59 = *plVar36;
    uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
    if (uVar52 != 0) {
      piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
      do {
        if (*(long *)(piVar56 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar21 = (undefined8 *)(lVar59 + (long)*piVar56 * 0x10 + 0x138);
          goto LAB_03d55404;
        }
        uVar52 = uVar52 - 1;
        piVar56 = piVar56 + 4;
      } while (uVar52 != 0);
    }
    ppppplVar44 = (long *****)0x0;
    puVar21 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d55404:
    (*(code *)*puVar21)(plVar36,puVar21[1]);
  }
  pppplVar24 = auVar9._0_8_;
  if (ppppplVar43 != (long *****)0x0) goto LAB_03d554ec;
  ppppplVar58 = (long *****)0x0;
  ppppplVar23 = ppppplVar29;
  ppppplVar27 = (long *****)0x0;
  if (iVar20 == 0) goto LAB_03d55420;
  do {
    auVar83._8_8_ = ppppplVar27;
    auVar83._0_8_ = pppplVar24;
    if (pppplVar24 != (long ****)0x0) {
      ppplVar38 = *pppplVar24;
      uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
      if (uVar52 != 0) {
        pplVar40 = ppplVar38[0x16] + 1;
        do {
          if (pplVar40[-1] == *(long **)PTR_DAT_0774e8c8) {
            ppplVar38 = ppplVar38 + (long)*(int *)pplVar40 * 2 + 0x27;
            goto LAB_03d55480;
          }
          uVar52 = uVar52 - 1;
          pplVar40 = pplVar40 + 2;
        } while (uVar52 != 0);
      }
      ppppplVar44 = (long *****)0x0;
      ppplVar38 = (long ***)func_0x03256b10(pppplVar24);
LAB_03d55480:
      (*(code *)*ppplVar38)(pppplVar24,ppplVar38[1]);
    }
    auVar12 = auVar8;
    if (ppppplVar27 == (long *****)0x0) {
      return (long *****)(ulong)(iVar20 != 0xc);
    }
LAB_03d554e0:
    func_0x03280ca4(ppppplVar27);
    pppplVar24 = pppplVar57;
    auVar9 = auVar83;
    auVar14 = auVar12;
LAB_03d554e8:
    auVar8 = auVar14;
    func_0x03280cac();
    ppppplVar29 = ppppplVar23;
    pppplVar57 = pppplVar24;
LAB_03d554ec:
    func_0x03280ca4(ppppplVar43);
    auVar10 = auVar9;
LAB_03d554f4:
    plVar32 = auVar10._8_8_;
    pppplVar24 = auVar10._0_8_;
    auVar85 = func_0x03280cac();
    pppplVar62 = auVar85._8_8_;
    pppplVar60 = auVar85._0_8_;
    if (auVar85._8_4_ == 1) break;
    ppppplVar43 = (long *****)0x0;
    if (plVar32 != (long *)0x0) {
      lVar59 = *plVar32;
      uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
      if (uVar52 != 0) {
        piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
        do {
          if (*(long *)(piVar56 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar21 = (undefined8 *)(lVar59 + (long)*piVar56 * 0x10 + 0x138);
            goto LAB_03d555b4;
          }
          uVar52 = uVar52 - 1;
          piVar56 = piVar56 + 4;
        } while (uVar52 != 0);
      }
      ppppplVar44 = (long *****)0x0;
      puVar21 = (undefined8 *)func_0x03256b10(plVar32);
LAB_03d555b4:
      (*(code *)*puVar21)(plVar32,puVar21[1]);
    }
    if (auVar85._8_4_ != 1) {
      pppplVar64 = (long ****)0x0;
      if (pppplVar24 == (long ****)0x0) goto LAB_03d55668;
      ppplVar38 = *pppplVar24;
      uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
      if (uVar52 == 0) goto LAB_03d55640;
      pplVar40 = ppplVar38[0x16] + 1;
      goto LAB_03d55628;
    }
    puVar21 = (undefined8 *)func_0x072ce910(pppplVar60);
    ppppplVar58 = (long *****)*puVar21;
    func_0x072ce920();
LAB_03d55420:
    iVar20 = 0;
    ppppplVar23 = ppppplVar29;
    ppppplVar27 = ppppplVar58;
  } while( true );
  plVar36 = (long *)func_0x072ce910(pppplVar60);
  ppppplVar43 = (long *****)*plVar36;
  func_0x072ce920();
  iVar20 = 0;
  auVar9 = auVar10;
  goto joined_r0x03d553ac;
  while( true ) {
    uVar52 = uVar52 - 1;
    pplVar40 = pplVar40 + 2;
    if (uVar52 == 0) break;
LAB_03d55628:
    if (pplVar40[-1] == *(long **)PTR_DAT_0774e8c8) {
      ppplVar38 = ppplVar38 + (long)*(int *)pplVar40 * 2 + 0x27;
      goto LAB_03d5565c;
    }
  }
LAB_03d55640:
  ppppplVar44 = (long *****)0x0;
  ppplVar38 = (long ***)func_0x03256b10(pppplVar24);
LAB_03d5565c:
  (*(code *)*ppplVar38)(pppplVar24,ppplVar38[1]);
LAB_03d55668:
  func_0x03365958(pppplVar60);
  func_0x03280ca4(0);
  auVar85 = func_0x02f09514();
  pppplVar67 = auVar85._8_8_;
  plVar36 = auVar85._0_8_;
  ppppplVar28[-0x10] = (long ****)0x3d55680;
  ppppplVar28[-0xf] = pppplVar62;
  ppppplVar28[-0xe] = (long ****)0x0;
  ppppplVar28[-0xd] = pppplVar60;
  ppppplVar28[-0xc] = (long ****)0x0;
  ppppplVar28[-0xb] = pppplVar24;
  if (pppplVar67[7] == (long ***)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (pppplVar67[7] == (long ***)0x0) {
      func_0x03256878(pppplVar67);
    }
  }
  if (plVar36 == (long *)0x0) {
    uVar37 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar37 = func_0x05ac7464(uVar37,0);
  }
  else {
    pplVar40 = pppplVar67[7][1];
    if ((*(byte *)((long)pplVar40 + 0x135) & 1) == 0) {
      pplVar40 = (long **)func_0x0325681c(pplVar40);
    }
    pppplVar64 = (long ****)func_0x03280b90(plVar36,pplVar40);
    if (pppplVar64 == (long ****)0x0) {
      pplVar40 = *pppplVar67[7];
      if ((*(byte *)((long)pplVar40 + 0x135) & 1) == 0) {
        pplVar40 = (long **)func_0x0325681c(pplVar40);
      }
      lVar59 = *plVar36;
      uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
      if (uVar52 != 0) {
        piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
        do {
          if (*(long ***)(piVar56 + -2) == pplVar40) {
            puVar21 = (undefined8 *)(lVar59 + (long)*piVar56 * 0x10 + 0x138);
            goto LAB_03d55850;
          }
          uVar52 = uVar52 - 1;
          piVar56 = piVar56 + 4;
        } while (uVar52 != 0);
      }
      ppppplVar44 = (long *****)0x0;
      puVar21 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d55850:
      pppplVar64 = (long ****)(*(code *)*puVar21)(plVar36,puVar21[1]);
      puVar34 = PTR_DAT_0774e8e0;
      if (pppplVar64 == (long ****)0x0) goto LAB_03d55a6c;
      ppplVar38 = *pppplVar64;
      uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
      if (uVar52 != 0) {
        pplVar40 = ppplVar38[0x16] + 1;
        do {
          if (pplVar40[-1] == *(long **)PTR_DAT_0774e8e0) {
            ppplVar38 = ppplVar38 + (long)*(int *)pplVar40 * 2 + 0x27;
            goto LAB_03d558b8;
          }
          uVar52 = uVar52 - 1;
          pplVar40 = pplVar40 + 2;
        } while (uVar52 != 0);
      }
      ppppplVar44 = (long *****)0x0;
      ppplVar38 = (long ***)func_0x03256b10(pppplVar64);
LAB_03d558b8:
      uVar52 = (*(code *)*ppplVar38)(pppplVar64,ppplVar38[1]);
      if ((uVar52 & 1) == 0) goto LAB_03d55a78;
      pplVar40 = pppplVar67[7][7];
      if ((*(byte *)((long)pplVar40 + 0x135) & 1) == 0) {
        pplVar40 = (long **)func_0x0325681c(pplVar40);
      }
      ppplVar38 = *pppplVar64;
      uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
      if (uVar52 != 0) {
        pplVar55 = ppplVar38[0x16] + 1;
        do {
          if ((long **)pplVar55[-1] == pplVar40) {
            ppplVar38 = ppplVar38 + (long)*(int *)pplVar55 * 2 + 0x27;
            goto LAB_03d5592c;
          }
          uVar52 = uVar52 - 1;
          pplVar55 = pplVar55 + 2;
        } while (uVar52 != 0);
      }
      ppppplVar44 = (long *****)0x0;
      ppplVar38 = (long ***)func_0x03256b10(pppplVar64);
LAB_03d5592c:
      uVar19 = (*(code *)*ppplVar38)(pppplVar64,ppplVar38[1]);
      ppplVar38 = *pppplVar64;
      uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
      if (uVar52 != 0) {
        pplVar40 = ppplVar38[0x16] + 1;
        do {
          if (pplVar40[-1] == *(long **)puVar34) {
            ppplVar38 = ppplVar38 + (long)*(int *)pplVar40 * 2 + 0x27;
            goto LAB_03d55988;
          }
          uVar52 = uVar52 - 1;
          pplVar40 = pplVar40 + 2;
        } while (uVar52 != 0);
      }
      ppppplVar44 = (long *****)0x0;
      ppplVar38 = (long ***)func_0x03256b10(pppplVar64);
LAB_03d55988:
      uVar52 = (*(code *)*ppplVar38)(pppplVar64,ppplVar38[1]);
      bVar18 = (uVar52 & 1) == 0;
      plVar36 = (long *)0x0;
      uVar45 = 8;
      if (bVar18) {
        uVar45 = 0xf;
      }
      pppplVar62 = (long ****)(ulong)uVar45;
      uVar45 = 0;
      if (bVar18) {
        uVar45 = uVar19;
      }
      if (pppplVar64 == (long ****)0x0) goto LAB_03d55a10;
      goto LAB_03d559b0;
    }
    pplVar40 = pppplVar67[7][2];
    if ((*(byte *)((long)pplVar40 + 0x135) & 1) == 0) {
      pplVar40 = (long **)func_0x0325681c(pplVar40);
    }
    ppplVar38 = *pppplVar64;
    uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
    if (uVar52 != 0) {
      pplVar55 = ppplVar38[0x16] + 1;
      do {
        if ((long **)pplVar55[-1] == pplVar40) {
          ppplVar38 = ppplVar38 + (long)*(int *)pplVar55 * 2 + 0x27;
          goto LAB_03d557b0;
        }
        uVar52 = uVar52 - 1;
        pplVar55 = pplVar55 + 2;
      } while (uVar52 != 0);
    }
    ppppplVar44 = (long *****)0x0;
    ppplVar38 = (long ***)func_0x03256b10(pppplVar64);
LAB_03d557b0:
    iVar20 = (*(code *)*ppplVar38)(pppplVar64,ppplVar38[1]);
    if (iVar20 == 1) {
      pplVar40 = pppplVar67[7][1];
      if ((*(byte *)((long)pplVar40 + 0x135) & 1) == 0) {
        pplVar40 = (long **)func_0x0325681c(pplVar40);
      }
      ppplVar38 = *pppplVar64;
      uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
      if (uVar52 != 0) {
        pplVar55 = ppplVar38[0x16] + 1;
        do {
          if ((long **)pplVar55[-1] == pplVar40) {
            ppplVar38 = ppplVar38 + (long)*(int *)pplVar55 * 2 + 0x27;
            goto LAB_03d55828;
          }
          uVar52 = uVar52 - 1;
          pplVar55 = pplVar55 + 2;
        } while (uVar52 != 0);
      }
      ppplVar38 = (long ***)func_0x03256b10(pppplVar64,pplVar40,0);
LAB_03d55828:
                    /* WARNING: Could not recover jumptable at 0x03d55840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppppplVar69 = (long *****)(*(code *)*ppplVar38)(pppplVar64,0,ppplVar38[1]);
      return ppppplVar69;
    }
    if (iVar20 != 0) goto LAB_03d55a44;
    uVar37 = func_0x05ac75f4(0);
  }
  do {
    func_0x03280b7c(uVar37,pppplVar67);
LAB_03d55a6c:
    func_0x03280cac();
    do {
      func_0x03280ca4(plVar36);
LAB_03d55a78:
      uVar37 = func_0x05ac75f4(0);
      auVar80 = func_0x03280b7c(uVar37,pppplVar67);
      pppplVar24 = auVar80._0_8_;
      if (auVar80._8_4_ != 1) {
        if (pppplVar64 == (long ****)0x0) goto LAB_03d55b34;
        ppplVar38 = *pppplVar64;
        uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
        if (uVar52 == 0) goto LAB_03d55b0c;
        pplVar40 = ppplVar38[0x16] + 1;
        goto LAB_03d55af4;
      }
      puVar21 = (undefined8 *)func_0x072ce910(pppplVar24);
      plVar36 = (long *)*puVar21;
      func_0x072ce920();
      pppplVar62 = (long ****)0x0;
      uVar45 = 0;
      if (pppplVar64 != (long ****)0x0) {
LAB_03d559b0:
        ppplVar38 = *pppplVar64;
        uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
        if (uVar52 != 0) {
          pplVar40 = ppplVar38[0x16] + 1;
          do {
            if (pplVar40[-1] == *(long **)PTR_DAT_0774e8c8) {
              ppplVar38 = ppplVar38 + (long)*(int *)pplVar40 * 2 + 0x27;
              goto LAB_03d55a04;
            }
            uVar52 = uVar52 - 1;
            pplVar40 = pplVar40 + 2;
          } while (uVar52 != 0);
        }
        ppppplVar44 = (long *****)0x0;
        ppplVar38 = (long ***)func_0x03256b10(pppplVar64);
LAB_03d55a04:
        (*(code *)*ppplVar38)(pppplVar64,ppplVar38[1]);
      }
LAB_03d55a10:
    } while (plVar36 != (long *)0x0);
    if (((uint)pppplVar62 | 8) != 8) {
      return (long *****)(ulong)uVar45;
    }
LAB_03d55a44:
    uVar37 = func_0x05ac751c(0);
  } while( true );
  while( true ) {
    uVar52 = uVar52 - 1;
    pplVar40 = pplVar40 + 2;
    if (uVar52 == 0) break;
LAB_03d55af4:
    if (pplVar40[-1] == *(long **)PTR_DAT_0774e8c8) {
      ppplVar38 = ppplVar38 + (long)*(int *)pplVar40 * 2 + 0x27;
      goto LAB_03d55b28;
    }
  }
LAB_03d55b0c:
  ppppplVar44 = (long *****)0x0;
  ppplVar38 = (long ***)func_0x03256b10(pppplVar64);
LAB_03d55b28:
  (*(code *)*ppplVar38)(pppplVar64,ppplVar38[1]);
LAB_03d55b34:
  func_0x03365958(pppplVar24);
  func_0x03280ca4(0);
  auVar85 = func_0x02f09514();
  pppplVar60 = auVar85._8_8_;
  plVar36 = auVar85._0_8_;
  ppppplVar28[-0x16] = (long ****)0x3d55b4c;
  ppppplVar28[-0x15] = pppplVar62;
  ppppplVar28[-0x14] = pppplVar24;
  ppppplVar28[-0x13] = (long ****)0x0;
  ppppplVar28[-0x12] = pppplVar64;
  ppppplVar28[-0x11] = pppplVar67;
  if (pppplVar60[7] == (long ***)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (pppplVar60[7] == (long ***)0x0) {
      func_0x03256878(pppplVar60);
    }
  }
  if (plVar36 == (long *)0x0) {
    uVar37 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar37 = func_0x05ac7464(uVar37,0);
  }
  else {
    pplVar40 = pppplVar60[7][1];
    if ((*(byte *)((long)pplVar40 + 0x135) & 1) == 0) {
      pplVar40 = (long **)func_0x0325681c(pplVar40);
    }
    pppplVar64 = (long ****)func_0x03280b90(plVar36,pplVar40);
    if (pppplVar64 == (long ****)0x0) {
      pplVar40 = *pppplVar60[7];
      if ((*(byte *)((long)pplVar40 + 0x135) & 1) == 0) {
        pplVar40 = (long **)func_0x0325681c(pplVar40);
      }
      lVar59 = *plVar36;
      uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
      if (uVar52 != 0) {
        piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
        do {
          if (*(long ***)(piVar56 + -2) == pplVar40) {
            puVar21 = (undefined8 *)(lVar59 + (long)*piVar56 * 0x10 + 0x138);
            goto LAB_03d55d1c;
          }
          uVar52 = uVar52 - 1;
          piVar56 = piVar56 + 4;
        } while (uVar52 != 0);
      }
      ppppplVar44 = (long *****)0x0;
      puVar21 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d55d1c:
      pppplVar64 = (long ****)(*(code *)*puVar21)(plVar36,puVar21[1]);
      puVar34 = PTR_DAT_0774e8e0;
      if (pppplVar64 == (long ****)0x0) goto LAB_03d55f38;
      ppplVar38 = *pppplVar64;
      uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
      if (uVar52 != 0) {
        pplVar40 = ppplVar38[0x16] + 1;
        do {
          if (pplVar40[-1] == *(long **)PTR_DAT_0774e8e0) {
            ppplVar38 = ppplVar38 + (long)*(int *)pplVar40 * 2 + 0x27;
            goto LAB_03d55d84;
          }
          uVar52 = uVar52 - 1;
          pplVar40 = pplVar40 + 2;
        } while (uVar52 != 0);
      }
      ppppplVar44 = (long *****)0x0;
      ppplVar38 = (long ***)func_0x03256b10(pppplVar64);
LAB_03d55d84:
      uVar52 = (*(code *)*ppplVar38)(pppplVar64,ppplVar38[1]);
      if ((uVar52 & 1) == 0) goto LAB_03d55f44;
      pplVar40 = pppplVar60[7][7];
      if ((*(byte *)((long)pplVar40 + 0x135) & 1) == 0) {
        pplVar40 = (long **)func_0x0325681c(pplVar40);
      }
      ppplVar38 = *pppplVar64;
      uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
      if (uVar52 != 0) {
        pplVar55 = ppplVar38[0x16] + 1;
        do {
          if ((long **)pplVar55[-1] == pplVar40) {
            ppplVar38 = ppplVar38 + (long)*(int *)pplVar55 * 2 + 0x27;
            goto LAB_03d55df8;
          }
          uVar52 = uVar52 - 1;
          pplVar55 = pplVar55 + 2;
        } while (uVar52 != 0);
      }
      ppppplVar44 = (long *****)0x0;
      ppplVar38 = (long ***)func_0x03256b10(pppplVar64);
LAB_03d55df8:
      ppppplVar43 = (long *****)(*(code *)*ppplVar38)(pppplVar64,ppplVar38[1]);
      ppplVar38 = *pppplVar64;
      uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
      if (uVar52 != 0) {
        pplVar40 = ppplVar38[0x16] + 1;
        do {
          if (pplVar40[-1] == *(long **)puVar34) {
            ppplVar38 = ppplVar38 + (long)*(int *)pplVar40 * 2 + 0x27;
            goto LAB_03d55e54;
          }
          uVar52 = uVar52 - 1;
          pplVar40 = pplVar40 + 2;
        } while (uVar52 != 0);
      }
      ppppplVar44 = (long *****)0x0;
      ppplVar38 = (long ***)func_0x03256b10(pppplVar64);
LAB_03d55e54:
      uVar52 = (*(code *)*ppplVar38)(pppplVar64,ppplVar38[1]);
      bVar18 = (uVar52 & 1) == 0;
      plVar36 = (long *)0x0;
      uVar19 = 8;
      if (bVar18) {
        uVar19 = 0xf;
      }
      pppplVar62 = (long ****)(ulong)uVar19;
      ppppplVar23 = (long *****)0x0;
      if (bVar18) {
        ppppplVar23 = ppppplVar43;
      }
      if (pppplVar64 == (long ****)0x0) goto LAB_03d55edc;
      goto LAB_03d55e7c;
    }
    pplVar40 = pppplVar60[7][2];
    if ((*(byte *)((long)pplVar40 + 0x135) & 1) == 0) {
      pplVar40 = (long **)func_0x0325681c(pplVar40);
    }
    ppplVar38 = *pppplVar64;
    uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
    if (uVar52 != 0) {
      pplVar55 = ppplVar38[0x16] + 1;
      do {
        if ((long **)pplVar55[-1] == pplVar40) {
          ppplVar38 = ppplVar38 + (long)*(int *)pplVar55 * 2 + 0x27;
          goto LAB_03d55c7c;
        }
        uVar52 = uVar52 - 1;
        pplVar55 = pplVar55 + 2;
      } while (uVar52 != 0);
    }
    ppppplVar44 = (long *****)0x0;
    ppplVar38 = (long ***)func_0x03256b10(pppplVar64);
LAB_03d55c7c:
    iVar20 = (*(code *)*ppplVar38)(pppplVar64,ppplVar38[1]);
    if (iVar20 == 1) {
      pplVar40 = pppplVar60[7][1];
      if ((*(byte *)((long)pplVar40 + 0x135) & 1) == 0) {
        pplVar40 = (long **)func_0x0325681c(pplVar40);
      }
      ppplVar38 = *pppplVar64;
      uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
      if (uVar52 != 0) {
        pplVar55 = ppplVar38[0x16] + 1;
        do {
          if ((long **)pplVar55[-1] == pplVar40) {
            ppplVar38 = ppplVar38 + (long)*(int *)pplVar55 * 2 + 0x27;
            goto LAB_03d55cf4;
          }
          uVar52 = uVar52 - 1;
          pplVar55 = pplVar55 + 2;
        } while (uVar52 != 0);
      }
      ppplVar38 = (long ***)func_0x03256b10(pppplVar64,pplVar40,0);
LAB_03d55cf4:
                    /* WARNING: Could not recover jumptable at 0x03d55d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppppplVar69 = (long *****)(*(code *)*ppplVar38)(pppplVar64,0,ppplVar38[1]);
      return ppppplVar69;
    }
    if (iVar20 != 0) goto LAB_03d55f10;
    uVar37 = func_0x05ac75f4(0);
  }
  do {
    func_0x03280b7c(uVar37,pppplVar60);
LAB_03d55f38:
    func_0x03280cac();
    do {
      func_0x03280ca4(plVar36);
LAB_03d55f44:
      uVar37 = func_0x05ac75f4(0);
      auVar80 = func_0x03280b7c(uVar37,pppplVar60);
      pppplVar24 = auVar80._0_8_;
      if (auVar80._8_4_ != 1) {
        if (pppplVar64 == (long ****)0x0) goto LAB_03d56000;
        ppplVar38 = *pppplVar64;
        uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
        if (uVar52 == 0) goto LAB_03d55fd8;
        pplVar40 = ppplVar38[0x16] + 1;
        goto LAB_03d55fc0;
      }
      puVar21 = (undefined8 *)func_0x072ce910(pppplVar24);
      plVar36 = (long *)*puVar21;
      func_0x072ce920();
      pppplVar62 = (long ****)0x0;
      ppppplVar23 = (long *****)0x0;
      if (pppplVar64 != (long ****)0x0) {
LAB_03d55e7c:
        ppplVar38 = *pppplVar64;
        uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
        if (uVar52 != 0) {
          pplVar40 = ppplVar38[0x16] + 1;
          do {
            if (pplVar40[-1] == *(long **)PTR_DAT_0774e8c8) {
              ppplVar38 = ppplVar38 + (long)*(int *)pplVar40 * 2 + 0x27;
              goto LAB_03d55ed0;
            }
            uVar52 = uVar52 - 1;
            pplVar40 = pplVar40 + 2;
          } while (uVar52 != 0);
        }
        ppppplVar44 = (long *****)0x0;
        ppplVar38 = (long ***)func_0x03256b10(pppplVar64);
LAB_03d55ed0:
        (*(code *)*ppplVar38)(pppplVar64,ppplVar38[1]);
      }
LAB_03d55edc:
    } while (plVar36 != (long *)0x0);
    if (((uint)pppplVar62 | 8) != 8) {
      return ppppplVar23;
    }
LAB_03d55f10:
    uVar37 = func_0x05ac751c(0);
  } while( true );
  while( true ) {
    uVar52 = uVar52 - 1;
    pplVar40 = pplVar40 + 2;
    if (uVar52 == 0) break;
LAB_03d55fc0:
    if (pplVar40[-1] == *(long **)PTR_DAT_0774e8c8) {
      ppplVar38 = ppplVar38 + (long)*(int *)pplVar40 * 2 + 0x27;
      goto LAB_03d55ff4;
    }
  }
LAB_03d55fd8:
  ppppplVar44 = (long *****)0x0;
  ppplVar38 = (long ***)func_0x03256b10(pppplVar64);
LAB_03d55ff4:
  (*(code *)*ppplVar38)(pppplVar64,ppplVar38[1]);
LAB_03d56000:
  func_0x03365958(pppplVar24);
  func_0x03280ca4(0);
  auVar85 = func_0x02f09514();
  plVar36 = auVar85._0_8_;
  ppppplVar28[-0x22] = (long ****)(ppppplVar25 + -0x2c);
  ppppplVar28[-0x21] = (long ****)0x3d56018;
  ppppplVar28[-0x20] = pppplVar57;
  ppppplVar28[-0x1e] = auVar8._8_8_;
  ppppplVar28[-0x1d] = auVar8._0_8_;
  ppppplVar28[-0x1c] = (long ****)ppppplVar65;
  ppppplVar28[-0x1b] = pppplVar62;
  ppppplVar28[-0x1a] = pppplVar24;
  ppppplVar28[-0x19] = (long ****)0x0;
  ppppplVar28[-0x18] = pppplVar64;
  ppppplVar28[-0x17] = pppplVar60;
  pppplVar24 = (long ****)tpidr_el0;
  ppppplVar28[-0x23] = (long ****)pppplVar24[5];
  pppplVar57 = ppppplVar44[7];
  if (pppplVar57 == (long ****)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    pppplVar57 = ppppplVar44[7];
    if (pppplVar57 == (long ****)0x0) {
      func_0x03256878(ppppplVar44);
      pppplVar57 = ppppplVar44[7];
    }
  }
  pppplVar62 = (long ****)(ulong)*(uint *)((long)pppplVar57[5] + 0xfc);
  uVar52 = (long)pppplVar62 + 0xfU & 0x1fffffff0;
  pppplVar64 = (long ****)((long)ppppplVar28 + (-0x130 - uVar52));
  lVar59 = (long)pppplVar64 - uVar52;
  func_0x072ce9a0(lVar59,0,pppplVar62);
  ppppplVar43 = (long *****)(lVar59 - uVar52);
  pppplVar60 = pppplVar62;
  func_0x072ce9a0(ppppplVar43,0);
  if (plVar36 == (long *)0x0) {
    uVar37 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar37 = func_0x05ac7464(uVar37,0);
    goto LAB_03d56508;
  }
  ppplVar38 = pppplVar57[1];
  if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
    ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
  }
  pppplVar57 = (long ****)func_0x03280b90(plVar36,ppplVar38);
  if (pppplVar57 == (long ****)0x0) {
    ppplVar38 = *ppppplVar44[7];
    if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
      ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
    }
    lVar47 = *plVar36;
    uVar52 = (ulong)*(ushort *)(lVar47 + 0x12e);
    if (uVar52 != 0) {
      piVar56 = (int *)(*(long *)(lVar47 + 0xb0) + 8);
      do {
        if (*(long ****)(piVar56 + -2) == ppplVar38) {
          puVar21 = (undefined8 *)(lVar47 + (long)*piVar56 * 0x10 + 0x138);
          goto LAB_03d5626c;
        }
        uVar52 = uVar52 - 1;
        piVar56 = piVar56 + 4;
      } while (uVar52 != 0);
    }
    pppplVar60 = (long ****)0x0;
    puVar21 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d5626c:
    pppplVar57 = (long ****)(*(code *)*puVar21)(plVar36,puVar21[1]);
    puVar34 = PTR_DAT_0774e8e0;
    if (pppplVar57 == (long ****)0x0) goto LAB_03d56510;
    ppplVar38 = *pppplVar57;
    uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
    if (uVar52 != 0) {
      pplVar40 = ppplVar38[0x16] + 1;
      do {
        if (pplVar40[-1] == *(long **)PTR_DAT_0774e8e0) {
          ppplVar38 = ppplVar38 + (long)*(int *)pplVar40 * 2 + 0x27;
          goto LAB_03d562d4;
        }
        uVar52 = uVar52 - 1;
        pplVar40 = pplVar40 + 2;
      } while (uVar52 != 0);
    }
    pppplVar60 = (long ****)0x0;
    ppplVar38 = (long ***)func_0x03256b10(pppplVar57);
LAB_03d562d4:
    uVar52 = (*(code *)*ppplVar38)(pppplVar57,ppplVar38[1]);
    if ((uVar52 & 1) == 0) goto LAB_03d5651c;
    ppplVar38 = ppppplVar44[7][7];
    if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
      ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
    }
    ppplVar39 = *pppplVar57;
    uVar52 = (ulong)*(ushort *)((long)ppplVar39 + 0x12e);
    if (uVar52 != 0) {
      pplVar40 = ppplVar39[0x16] + 1;
      do {
        if ((long ***)pplVar40[-1] == ppplVar38) {
          ppplVar39 = ppplVar39 + (long)*(int *)pplVar40 * 2 + 0x27;
          goto LAB_03d56348;
        }
        uVar52 = uVar52 - 1;
        pplVar40 = pplVar40 + 2;
      } while (uVar52 != 0);
    }
    ppplVar39 = (long ***)func_0x03256b10(pppplVar57,ppplVar38,0);
LAB_03d56348:
    ppppplVar28[-0x26] = pppplVar64;
    pplVar40 = ppplVar39[1];
    ppppplVar29 = ppppplVar28 + -0x26;
    (*(code *)pplVar40[2])(pplVar40[1],pplVar40,pppplVar57,ppppplVar29,pppplVar64);
    pppplVar60 = pppplVar62;
    func_0x072ce970(lVar59,pppplVar64);
    ppplVar38 = *pppplVar57;
    uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
    if (uVar52 != 0) {
      pplVar40 = ppplVar38[0x16] + 1;
      do {
        if (pplVar40[-1] == *(long **)puVar34) {
          ppplVar38 = ppplVar38 + (long)*(int *)pplVar40 * 2 + 0x27;
          goto LAB_03d563c0;
        }
        uVar52 = uVar52 - 1;
        pplVar40 = pplVar40 + 2;
      } while (uVar52 != 0);
    }
    pppplVar60 = (long ****)0x0;
    ppplVar38 = (long ***)func_0x03256b10(pppplVar57);
LAB_03d563c0:
    ppppplVar23 = (long *****)(*(code *)*ppplVar38)(pppplVar57,ppplVar38[1]);
    if (((ulong)ppppplVar23 & 1) != 0) {
      lVar59 = 0;
      iVar46 = 8;
      iVar20 = 8;
      goto joined_r0x03d563d8;
    }
    func_0x072ce970(pppplVar64,lVar59,pppplVar62);
    pppplVar60 = pppplVar62;
    ppppplVar23 = (long *****)func_0x072ce970(ppppplVar43,pppplVar64);
    lVar59 = 0;
    iVar20 = 0xf;
    iVar46 = 0xf;
    if (pppplVar57 == (long ****)0x0) goto LAB_03d5646c;
    goto LAB_03d5640c;
  }
  ppplVar38 = ppppplVar44[7][2];
  if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
    ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
  }
  ppplVar39 = *pppplVar57;
  uVar52 = (ulong)*(ushort *)((long)ppplVar39 + 0x12e);
  if (uVar52 != 0) {
    pplVar40 = ppplVar39[0x16] + 1;
    do {
      if ((long ***)pplVar40[-1] == ppplVar38) {
        ppplVar39 = ppplVar39 + (long)*(int *)pplVar40 * 2 + 0x27;
        goto LAB_03d561c0;
      }
      uVar52 = uVar52 - 1;
      pplVar40 = pplVar40 + 2;
    } while (uVar52 != 0);
  }
  pppplVar60 = (long ****)0x0;
  ppplVar39 = (long ***)func_0x03256b10(pppplVar57);
LAB_03d561c0:
  iVar20 = (*(code *)*ppplVar39)(pppplVar57,ppplVar39[1]);
  if (iVar20 != 1) {
    if (iVar20 != 0) goto LAB_03d56500;
    uVar37 = func_0x05ac75f4(0);
    goto LAB_03d56508;
  }
  ppplVar38 = ppppplVar44[7][1];
  if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
    ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
  }
  *(undefined4 *)((long)ppppplVar28 + -0x11c) = 0;
  ppplVar39 = *pppplVar57;
  uVar52 = (ulong)*(ushort *)((long)ppplVar39 + 0x12e);
  if (uVar52 != 0) {
    pplVar40 = ppplVar39[0x16] + 1;
    do {
      if ((long ***)pplVar40[-1] == ppplVar38) {
        ppplVar39 = ppplVar39 + (long)*(int *)pplVar40 * 2 + 0x27;
        goto LAB_03d5623c;
      }
      uVar52 = uVar52 - 1;
      pplVar40 = pplVar40 + 2;
    } while (uVar52 != 0);
  }
  ppplVar39 = (long ***)func_0x03256b10(pppplVar57,ppplVar38,0);
LAB_03d5623c:
  ppppplVar28[-0x26] = (long ****)((long)ppppplVar28 + -0x11c);
  ppppplVar28[-0x25] = pppplVar64;
  pplVar40 = ppplVar39[1];
  ppppplVar29 = ppppplVar28 + -0x26;
  (*(code *)pplVar40[2])(pplVar40[1],pplVar40,pppplVar57,ppppplVar29,pppplVar64);
LAB_03d56498:
  pppplVar60 = pppplVar62;
  ppppplVar23 = (long *****)func_0x072ce970(auVar85._8_8_,pppplVar64);
LAB_03d564a8:
  if ((long ****)pppplVar24[5] == ppppplVar28[-0x23]) {
    return ppppplVar23;
  }
  do {
    auVar80 = func_0x072ce990();
    pppplVar67 = auVar80._0_8_;
    if (auVar80._8_4_ != 1) {
      if (pppplVar57 == (long ****)0x0) goto LAB_03d565d8;
      ppplVar38 = *pppplVar57;
      uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
      if (uVar52 == 0) goto LAB_03d565b0;
      pplVar40 = ppplVar38[0x16] + 1;
      break;
    }
    plVar36 = (long *)func_0x072ce910(pppplVar67);
    lVar59 = *plVar36;
    ppppplVar23 = (long *****)func_0x072ce920();
    iVar46 = 0;
    iVar20 = 0;
joined_r0x03d563d8:
    if (pppplVar57 != (long ****)0x0) {
LAB_03d5640c:
      iVar20 = iVar46;
      ppplVar38 = *pppplVar57;
      uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
      if (uVar52 != 0) {
        pplVar40 = ppplVar38[0x16] + 1;
        do {
          if (pplVar40[-1] == *(long **)PTR_DAT_0774e8c8) {
            ppplVar38 = ppplVar38 + (long)*(int *)pplVar40 * 2 + 0x27;
            goto LAB_03d56460;
          }
          uVar52 = uVar52 - 1;
          pplVar40 = pplVar40 + 2;
        } while (uVar52 != 0);
      }
      pppplVar60 = (long ****)0x0;
      ppplVar38 = (long ***)func_0x03256b10(pppplVar57);
LAB_03d56460:
      ppppplVar23 = (long *****)(*(code *)*ppplVar38)(pppplVar57,ppplVar38[1]);
    }
LAB_03d5646c:
    if (lVar59 == 0) {
      if (iVar20 == 0xf) {
        func_0x072ce970(pppplVar64,ppppplVar43,pppplVar62);
        goto LAB_03d56498;
      }
      if ((iVar20 != 8) && (iVar20 != 0)) goto LAB_03d564a8;
LAB_03d56500:
      uVar37 = func_0x05ac751c(0);
LAB_03d56508:
      func_0x03280b7c(uVar37,ppppplVar44);
LAB_03d56510:
      func_0x03280cac();
    }
    func_0x03280ca4(lVar59);
LAB_03d5651c:
    uVar37 = func_0x05ac75f4(0);
    func_0x03280b7c(uVar37,ppppplVar44);
  } while( true );
  while( true ) {
    uVar52 = uVar52 - 1;
    pplVar40 = pplVar40 + 2;
    if (uVar52 == 0) break;
    if (pplVar40[-1] == *(long **)PTR_DAT_0774e8c8) {
      ppplVar38 = ppplVar38 + (long)*(int *)pplVar40 * 2 + 0x27;
      goto LAB_03d565cc;
    }
  }
LAB_03d565b0:
  pppplVar60 = (long ****)0x0;
  ppplVar38 = (long ***)func_0x03256b10(pppplVar57);
LAB_03d565cc:
  (*(code *)*ppplVar38)(pppplVar57,ppplVar38[1]);
LAB_03d565d8:
  func_0x03365958(pppplVar67);
  func_0x03280ca4(0);
  auVar81 = func_0x02f09514();
  pppplVar49 = auVar81._8_8_;
  plVar36 = auVar81._0_8_;
  ppppplVar43[-8] = (long ****)0x3d565f0;
  ppppplVar43[-6] = pppplVar57;
  ppppplVar43[-5] = (long ****)ppppplVar43;
  ppppplVar43[-4] = (long ****)ppppplVar44;
  ppppplVar43[-3] = pppplVar64;
  ppppplVar43[-2] = pppplVar62;
  ppppplVar43[-1] = auVar85._8_8_;
  if (pppplVar49[7] == (long ***)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (pppplVar49[7] == (long ***)0x0) {
      func_0x03256878(pppplVar49);
    }
  }
  ppppplVar44 = ppppplVar43;
  if (plVar36 == (long *)0x0) {
    uVar37 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar37 = func_0x05ac7464(uVar37,0);
  }
  else {
    pplVar40 = pppplVar49[7][1];
    if ((*(byte *)((long)pplVar40 + 0x135) & 1) == 0) {
      pplVar40 = (long **)func_0x0325681c(pplVar40);
    }
    pppplVar62 = (long ****)func_0x03280b90(plVar36,pplVar40);
    if (pppplVar62 == (long ****)0x0) {
      pplVar40 = *pppplVar49[7];
      if ((*(byte *)((long)pplVar40 + 0x135) & 1) == 0) {
        pplVar40 = (long **)func_0x0325681c(pplVar40);
      }
      lVar59 = *plVar36;
      uVar52 = (ulong)*(ushort *)(lVar59 + 0x12e);
      if (uVar52 != 0) {
        piVar56 = (int *)(*(long *)(lVar59 + 0xb0) + 8);
        do {
          if (*(long ***)(piVar56 + -2) == pplVar40) {
            puVar21 = (undefined8 *)(lVar59 + (long)*piVar56 * 0x10 + 0x138);
            goto LAB_03d567c4;
          }
          uVar52 = uVar52 - 1;
          piVar56 = piVar56 + 4;
        } while (uVar52 != 0);
      }
      pppplVar60 = (long ****)0x0;
      puVar21 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d567c4:
      pppplVar62 = (long ****)(*(code *)*puVar21)(plVar36,puVar21[1]);
      puVar34 = PTR_DAT_0774e8e0;
      if (pppplVar62 == (long ****)0x0) goto LAB_03d569f0;
      ppplVar38 = *pppplVar62;
      uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
      if (uVar52 != 0) {
        pplVar40 = ppplVar38[0x16] + 1;
        do {
          if (pplVar40[-1] == *(long **)PTR_DAT_0774e8e0) {
            ppplVar38 = ppplVar38 + (long)*(int *)pplVar40 * 2 + 0x27;
            goto LAB_03d5682c;
          }
          uVar52 = uVar52 - 1;
          pplVar40 = pplVar40 + 2;
        } while (uVar52 != 0);
      }
      pppplVar60 = (long ****)0x0;
      ppplVar38 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d5682c:
      uVar52 = (*(code *)*ppplVar38)(pppplVar62,ppplVar38[1]);
      if ((uVar52 & 1) == 0) goto LAB_03d569fc;
      pplVar40 = pppplVar49[7][7];
      if ((*(byte *)((long)pplVar40 + 0x135) & 1) == 0) {
        pplVar40 = (long **)func_0x0325681c(pplVar40);
      }
      ppplVar38 = *pppplVar62;
      uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
      if (uVar52 != 0) {
        pplVar55 = ppplVar38[0x16] + 1;
        do {
          if ((long **)pplVar55[-1] == pplVar40) {
            ppplVar38 = ppplVar38 + (long)*(int *)pplVar55 * 2 + 0x27;
            goto LAB_03d568a0;
          }
          uVar52 = uVar52 - 1;
          pplVar55 = pplVar55 + 2;
        } while (uVar52 != 0);
      }
      pppplVar60 = (long ****)0x0;
      ppplVar38 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d568a0:
      ppppplVar23 = (long *****)(*(code *)*ppplVar38)(pppplVar62,ppplVar38[1]);
      ppplVar38 = *pppplVar62;
      uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
      if (uVar52 != 0) {
        pplVar40 = ppplVar38[0x16] + 1;
        do {
          if (pplVar40[-1] == *(long **)puVar34) {
            ppplVar38 = ppplVar38 + (long)*(int *)pplVar40 * 2 + 0x27;
            goto LAB_03d56900;
          }
          uVar52 = uVar52 - 1;
          pplVar40 = pplVar40 + 2;
        } while (uVar52 != 0);
      }
      pppplVar60 = (long ****)0x0;
      ppplVar38 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d56900:
      uVar52 = (*(code *)*ppplVar38)(pppplVar62,ppplVar38[1]);
      bVar18 = (uVar52 & 1) == 0;
      plVar36 = (long *)0x0;
      uVar19 = 8;
      if (bVar18) {
        uVar19 = 0xf;
      }
      pppplVar57 = (long ****)(ulong)uVar19;
      ppppplVar44 = (long *****)0x0;
      if (bVar18) {
        ppppplVar44 = ppppplVar23;
      }
      if (pppplVar62 == (long ****)0x0) goto LAB_03d5698c;
      goto LAB_03d5692c;
    }
    pplVar40 = pppplVar49[7][2];
    if ((*(byte *)((long)pplVar40 + 0x135) & 1) == 0) {
      pplVar40 = (long **)func_0x0325681c(pplVar40);
    }
    ppplVar38 = *pppplVar62;
    uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
    if (uVar52 != 0) {
      pplVar55 = ppplVar38[0x16] + 1;
      do {
        if ((long **)pplVar55[-1] == pplVar40) {
          ppplVar38 = ppplVar38 + (long)*(int *)pplVar55 * 2 + 0x27;
          goto LAB_03d56724;
        }
        uVar52 = uVar52 - 1;
        pplVar55 = pplVar55 + 2;
      } while (uVar52 != 0);
    }
    pppplVar60 = (long ****)0x0;
    ppplVar38 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d56724:
    iVar20 = (*(code *)*ppplVar38)(pppplVar62,ppplVar38[1]);
    if (iVar20 == 1) {
      pplVar40 = pppplVar49[7][1];
      if ((*(byte *)((long)pplVar40 + 0x135) & 1) == 0) {
        pplVar40 = (long **)func_0x0325681c(pplVar40);
      }
      ppplVar38 = *pppplVar62;
      uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
      if (uVar52 != 0) {
        pplVar55 = ppplVar38[0x16] + 1;
        do {
          if ((long **)pplVar55[-1] == pplVar40) {
            ppplVar38 = ppplVar38 + (long)*(int *)pplVar55 * 2 + 0x27;
            goto LAB_03d5679c;
          }
          uVar52 = uVar52 - 1;
          pplVar55 = pplVar55 + 2;
        } while (uVar52 != 0);
      }
      ppplVar38 = (long ***)func_0x03256b10(pppplVar62,pplVar40,0);
LAB_03d5679c:
      ppppplVar69 = (long *****)(*(code *)*ppplVar38)(pppplVar62,0,ppplVar38[1]);
      return ppppplVar69;
    }
    if (iVar20 != 0) goto LAB_03d569c8;
    uVar37 = func_0x05ac75f4(0);
  }
  do {
    func_0x03280b7c(uVar37,pppplVar49);
LAB_03d569f0:
    func_0x03280cac();
    do {
      func_0x03280ca4(plVar36);
LAB_03d569fc:
      auVar11._8_8_ = 0;
      auVar11._0_8_ = pppplVar57;
      auVar84._8_8_ = 0;
      auVar84._0_8_ = pppplVar57;
      uVar37 = func_0x05ac75f4(0);
      auVar80 = func_0x03280b7c(uVar37,pppplVar49);
      pppplVar64 = auVar80._0_8_;
      if (auVar80._8_4_ != 1) {
        if (pppplVar62 == (long ****)0x0) goto LAB_03d56abc;
        ppplVar38 = *pppplVar62;
        uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
        if (uVar52 == 0) goto LAB_03d56a94;
        pplVar40 = ppplVar38[0x16] + 1;
        goto LAB_03d56a7c;
      }
      puVar21 = (undefined8 *)func_0x072ce910(pppplVar64);
      plVar36 = (long *)*puVar21;
      func_0x072ce920();
      pppplVar57 = (long ****)0x0;
      ppppplVar44 = (long *****)0x0;
      if (pppplVar62 != (long ****)0x0) {
LAB_03d5692c:
        ppplVar38 = *pppplVar62;
        uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
        if (uVar52 != 0) {
          pplVar40 = ppplVar38[0x16] + 1;
          do {
            if (pplVar40[-1] == *(long **)PTR_DAT_0774e8c8) {
              ppplVar38 = ppplVar38 + (long)*(int *)pplVar40 * 2 + 0x27;
              goto LAB_03d56980;
            }
            uVar52 = uVar52 - 1;
            pplVar40 = pplVar40 + 2;
          } while (uVar52 != 0);
        }
        pppplVar60 = (long ****)0x0;
        ppplVar38 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d56980:
        (*(code *)*ppplVar38)(pppplVar62,ppplVar38[1]);
      }
LAB_03d5698c:
    } while (plVar36 != (long *)0x0);
    if (((uint)pppplVar57 | 8) != 8) {
      return ppppplVar44;
    }
LAB_03d569c8:
    uVar37 = func_0x05ac751c(0);
  } while( true );
  while( true ) {
    uVar52 = uVar52 - 1;
    pplVar40 = pplVar40 + 2;
    if (uVar52 == 0) break;
LAB_03d56a7c:
    if (pplVar40[-1] == *(long **)PTR_DAT_0774e8c8) {
      ppplVar38 = ppplVar38 + (long)*(int *)pplVar40 * 2 + 0x27;
      goto LAB_03d56ab0;
    }
  }
LAB_03d56a94:
  pppplVar60 = (long ****)0x0;
  ppplVar38 = (long ***)func_0x03256b10(pppplVar62);
LAB_03d56ab0:
  (*(code *)*ppplVar38)(pppplVar62,ppplVar38[1]);
LAB_03d56abc:
  func_0x03365958(pppplVar64);
  func_0x03280ca4(0);
  auVar85 = func_0x02f09514();
  lVar59 = auVar85._8_8_;
  pppplVar33 = auVar85._0_8_;
  ppppplVar43[-0x14] = (long ****)0x3d56ad4;
  ppppplVar43[-0x12] = (long ****)ppppplVar69;
  ppppplVar43[-0x11] = pppplVar24;
  ppppplVar43[-0x10] = pppplVar67;
  ppppplVar43[-0xf] = (long ****)0x0;
  ppppplVar43[-0xe] = pppplVar57;
  ppppplVar43[-0xd] = (long ****)ppppplVar44;
  ppppplVar43[-0xc] = pppplVar64;
  ppppplVar43[-0xb] = (long ****)0x0;
  ppppplVar43[-10] = pppplVar62;
  ppppplVar43[-9] = pppplVar49;
  pppplVar57 = pppplVar60;
  if (pppplVar60[7] == (long ***)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (pppplVar60[7] == (long ***)0x0) {
      func_0x03256878(pppplVar60);
    }
  }
  puVar34 = PTR_DAT_07774b08;
  if ((pppplVar33 != (long ****)0x0) && (puVar34 = PTR_DAT_077799b8, lVar59 != 0)) {
    pplVar40 = *pppplVar60[7];
    if ((*(byte *)((long)pplVar40 + 0x135) & 1) == 0) {
      pplVar40 = (long **)func_0x0325681c(pplVar40);
    }
    ppplVar38 = *pppplVar33;
    uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
    if (uVar52 != 0) {
      pplVar55 = ppplVar38[0x16] + 1;
      do {
        if ((long **)pplVar55[-1] == pplVar40) {
          ppplVar38 = ppplVar38 + (long)*(int *)pplVar55 * 2 + 0x27;
          goto LAB_03d56b94;
        }
        uVar52 = uVar52 - 1;
        pplVar55 = pplVar55 + 2;
      } while (uVar52 != 0);
    }
    pppplVar57 = (long ****)0x0;
    ppplVar38 = (long ***)func_0x03256b10(pppplVar33);
LAB_03d56b94:
    pppplVar33 = (long ****)(*(code *)*ppplVar38)(pppplVar33,ppplVar38[1]);
    pppplVar24 = (long ****)PTR_DAT_0774e8e0;
    lVar47 = 0;
    ppppplVar69 = (long *****)0x7fffffffffffffff;
    uVar37 = 0;
    do {
      auVar11._8_8_ = auVar84._8_8_;
      auVar11._0_8_ = uVar37;
      if (pppplVar33 == (long ****)0x0) {
        func_0x03280cac();
        goto LAB_03d56d74;
      }
      ppplVar38 = *pppplVar33;
      uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
      if (uVar52 != 0) {
        pplVar40 = ppplVar38[0x16] + 1;
        do {
          if ((long ***)pplVar40[-1] == *pppplVar24) {
            ppplVar38 = ppplVar38 + (long)*(int *)pplVar40 * 2 + 0x27;
            goto LAB_03d56c0c;
          }
          uVar52 = uVar52 - 1;
          pplVar40 = pplVar40 + 2;
        } while (uVar52 != 0);
      }
      pppplVar57 = (long ****)0x0;
      ppplVar38 = (long ***)func_0x03256b10(pppplVar33);
LAB_03d56c0c:
      uVar52 = (*(code *)*ppplVar38)(pppplVar33,ppplVar38[1]);
      if ((uVar52 & 1) == 0) {
        lVar59 = 0;
        uVar37 = 0xc;
        if (pppplVar33 == (long ****)0x0) goto LAB_03d56d34;
        goto LAB_03d56cd4;
      }
      pplVar40 = pppplVar60[7][4];
      if ((*(byte *)((long)pplVar40 + 0x135) & 1) == 0) {
        pplVar40 = (long **)func_0x0325681c(pplVar40);
      }
      ppplVar38 = *pppplVar33;
      uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
      if (uVar52 != 0) {
        pplVar55 = ppplVar38[0x16] + 1;
        do {
          if ((long **)pplVar55[-1] == pplVar40) {
            ppplVar38 = ppplVar38 + (long)*(int *)pplVar55 * 2 + 0x27;
            goto LAB_03d56c80;
          }
          uVar52 = uVar52 - 1;
          pplVar55 = pplVar55 + 2;
        } while (uVar52 != 0);
      }
      ppplVar38 = (long ***)func_0x03256b10(pppplVar33,pplVar40,0);
LAB_03d56c80:
      auVar84 = (*(code *)*ppplVar38)(pppplVar33,ppplVar38[1]);
      pppplVar57 = auVar84._8_8_;
      ppppplVar29 = *(long ******)(lVar59 + 0x28);
      uVar52 = (**(code **)(lVar59 + 0x18))(*(undefined8 *)(lVar59 + 0x40),auVar84._0_8_);
      if ((uVar52 & 1) != 0) {
        if (lVar47 == 0x7fffffffffffffff) goto LAB_03d56db0;
        lVar47 = lVar47 + 1;
        uVar37 = auVar84._0_8_;
      }
    } while( true );
  }
  uVar37 = func_0x03280a2c(puVar34);
  uVar37 = func_0x05ac7464(uVar37,0);
  while( true ) {
    pppplVar62 = auVar11._8_8_;
    auVar80 = func_0x03280b7c(uVar37,pppplVar60);
    lVar47 = 0x7fffffffffffffff;
    if (auVar80._8_4_ != 1) break;
    plVar36 = (long *)func_0x072ce910();
    lVar59 = *plVar36;
    func_0x072ce920();
    uVar37 = 0;
    if (pppplVar33 != (long ****)0x0) {
LAB_03d56cd4:
      ppplVar38 = *pppplVar33;
      uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
      if (uVar52 != 0) {
        pplVar40 = ppplVar38[0x16] + 1;
        do {
          if (pplVar40[-1] == *(long **)PTR_DAT_0774e8c8) {
            ppplVar38 = ppplVar38 + (long)*(int *)pplVar40 * 2 + 0x27;
            goto LAB_03d56d28;
          }
          uVar52 = uVar52 - 1;
          pplVar40 = pplVar40 + 2;
        } while (uVar52 != 0);
      }
      pppplVar57 = (long ****)0x0;
      ppplVar38 = (long ***)func_0x03256b10(pppplVar33);
LAB_03d56d28:
      (*(code *)*ppplVar38)(pppplVar33,ppplVar38[1]);
    }
LAB_03d56d34:
    auVar84._8_8_ = auVar11._8_8_;
    auVar84._0_8_ = uVar37;
    if (lVar59 == 0) {
      if ((((int)uVar37 != 0xc) && ((int)uVar37 != 0)) || (lVar47 == 1)) {
        return auVar11._0_8_;
      }
LAB_03d56d74:
      uVar37 = 0;
      if (lVar47 != 0) goto LAB_03d56dbc;
      uVar37 = func_0x05ac7660();
      auVar11 = auVar84;
    }
    else {
      func_0x03280ca4(lVar59);
LAB_03d56db0:
      uVar37 = func_0x03280cbc();
      uVar37 = func_0x03280b7c(uVar37,pppplVar60);
LAB_03d56dbc:
      uVar37 = func_0x05ac7588(uVar37);
      auVar11 = auVar84;
    }
  }
  ppppplVar44 = (long *****)0x0;
  if (pppplVar33 != (long ****)0x0) {
    ppplVar38 = *pppplVar33;
    uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
    if (uVar52 != 0) {
      pplVar40 = ppplVar38[0x16] + 1;
      do {
        if (pplVar40[-1] == *(long **)PTR_DAT_0774e8c8) {
          ppplVar38 = ppplVar38 + (long)*(int *)pplVar40 * 2 + 0x27;
          goto LAB_03d56e78;
        }
        uVar52 = uVar52 - 1;
        pplVar40 = pplVar40 + 2;
      } while (uVar52 != 0);
    }
    pppplVar57 = (long ****)0x0;
    ppplVar38 = (long ***)func_0x03256b10(pppplVar33);
LAB_03d56e78:
    (*(code *)*ppplVar38)(pppplVar33,ppplVar38[1]);
  }
  func_0x03365958(auVar80._0_8_);
  func_0x03280ca4(0);
  auVar85 = func_0x02f09514();
  lVar59 = auVar85._8_8_;
  pppplVar64 = auVar85._0_8_;
  ppppplVar43[-0x1e] = (long ****)0x3d56e9c;
  ppppplVar43[-0x1c] = (long ****)0x7fffffffffffffff;
  ppppplVar43[-0x1b] = pppplVar62;
  ppppplVar43[-0x1a] = auVar11._0_8_;
  ppppplVar43[-0x19] = (long ****)0x0;
  *(undefined1 (*) [16])(ppppplVar43 + -0x18) = auVar11;
  ppppplVar43[-0x16] = pppplVar33;
  ppppplVar43[-0x15] = auVar80._0_8_;
  pppplVar60 = pppplVar57;
  if (pppplVar57[7] == (long ***)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (pppplVar57[7] == (long ***)0x0) {
      func_0x03256878(pppplVar57);
    }
  }
  puVar34 = PTR_DAT_07774b08;
  if ((pppplVar64 != (long ****)0x0) && (puVar34 = PTR_DAT_077799b8, lVar59 != 0)) {
    pplVar40 = *pppplVar57[7];
    if ((*(byte *)((long)pplVar40 + 0x135) & 1) == 0) {
      pplVar40 = (long **)func_0x0325681c(pplVar40);
    }
    ppplVar38 = *pppplVar64;
    uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
    if (uVar52 != 0) {
      pplVar55 = ppplVar38[0x16] + 1;
      do {
        if ((long **)pplVar55[-1] == pplVar40) {
          ppplVar38 = ppplVar38 + (long)*(int *)pplVar55 * 2 + 0x27;
          goto LAB_03d56f58;
        }
        uVar52 = uVar52 - 1;
        pplVar55 = pplVar55 + 2;
      } while (uVar52 != 0);
    }
    pppplVar60 = (long ****)0x0;
    ppplVar38 = (long ***)func_0x03256b10(pppplVar64);
LAB_03d56f58:
    pppplVar64 = (long ****)(*(code *)*ppplVar38)(pppplVar64,ppplVar38[1]);
    pppplVar62 = (long ****)PTR_DAT_0774e8e0;
    lVar47 = 0;
    ppppplVar23 = (long *****)0x0;
    do {
      if (pppplVar64 == (long ****)0x0) {
        func_0x03280cac();
        goto LAB_03d57120;
      }
      ppplVar38 = *pppplVar64;
      uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
      if (uVar52 != 0) {
        pplVar40 = ppplVar38[0x16] + 1;
        do {
          if ((long ***)pplVar40[-1] == *pppplVar62) {
            ppplVar38 = ppplVar38 + (long)*(int *)pplVar40 * 2 + 0x27;
            goto LAB_03d56fcc;
          }
          uVar52 = uVar52 - 1;
          pplVar40 = pplVar40 + 2;
        } while (uVar52 != 0);
      }
      pppplVar60 = (long ****)0x0;
      ppplVar38 = (long ***)func_0x03256b10(pppplVar64);
LAB_03d56fcc:
      uVar52 = (*(code *)*ppplVar38)(pppplVar64,ppplVar38[1]);
      if ((uVar52 & 1) == 0) {
        lVar59 = 0;
        ppppplVar44 = (long *****)0xc;
        if (pppplVar64 == (long ****)0x0) goto LAB_03d570e8;
        goto LAB_03d57088;
      }
      pplVar40 = pppplVar57[7][4];
      if ((*(byte *)((long)pplVar40 + 0x135) & 1) == 0) {
        pplVar40 = (long **)func_0x0325681c(pplVar40);
      }
      ppplVar38 = *pppplVar64;
      uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
      if (uVar52 != 0) {
        pplVar55 = ppplVar38[0x16] + 1;
        do {
          if ((long **)pplVar55[-1] == pplVar40) {
            ppplVar38 = ppplVar38 + (long)*(int *)pplVar55 * 2 + 0x27;
            goto LAB_03d57040;
          }
          uVar52 = uVar52 - 1;
          pplVar55 = pplVar55 + 2;
        } while (uVar52 != 0);
      }
      ppplVar38 = (long ***)func_0x03256b10(pppplVar64,pplVar40,0);
LAB_03d57040:
      ppppplVar44 = (long *****)(*(code *)*ppplVar38)(pppplVar64,ppplVar38[1]);
      pppplVar60 = *(long *****)(lVar59 + 0x28);
      uVar52 = (**(code **)(lVar59 + 0x18))(*(undefined8 *)(lVar59 + 0x40),ppppplVar44);
      if ((uVar52 & 1) != 0) {
        if (lVar47 == 0x7fffffffffffffff) goto LAB_03d5715c;
        lVar47 = lVar47 + 1;
        ppppplVar23 = ppppplVar44;
      }
    } while( true );
  }
  uVar37 = func_0x03280a2c(puVar34);
  uVar37 = func_0x05ac7464(uVar37,0);
  ppppplVar23 = ppppplVar44;
  while( true ) {
    auVar80 = func_0x03280b7c(uVar37,pppplVar57);
    lVar47 = 0x7fffffffffffffff;
    if (auVar80._8_4_ != 1) break;
    plVar36 = (long *)func_0x072ce910();
    lVar59 = *plVar36;
    func_0x072ce920();
    ppppplVar44 = (long *****)0x0;
    if (pppplVar64 != (long ****)0x0) {
LAB_03d57088:
      ppplVar38 = *pppplVar64;
      uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
      if (uVar52 != 0) {
        pplVar40 = ppplVar38[0x16] + 1;
        do {
          if (pplVar40[-1] == *(long **)PTR_DAT_0774e8c8) {
            ppplVar38 = ppplVar38 + (long)*(int *)pplVar40 * 2 + 0x27;
            goto LAB_03d570dc;
          }
          uVar52 = uVar52 - 1;
          pplVar40 = pplVar40 + 2;
        } while (uVar52 != 0);
      }
      pppplVar60 = (long ****)0x0;
      ppplVar38 = (long ***)func_0x03256b10(pppplVar64);
LAB_03d570dc:
      (*(code *)*ppplVar38)(pppplVar64,ppplVar38[1]);
    }
LAB_03d570e8:
    if (lVar59 == 0) {
      if ((((int)ppppplVar44 != 0xc) && ((int)ppppplVar44 != 0)) || (lVar47 == 1)) {
        return ppppplVar23;
      }
LAB_03d57120:
      uVar37 = 0;
      if (lVar47 != 0) goto LAB_03d57168;
      uVar37 = func_0x05ac7660();
      ppppplVar23 = ppppplVar44;
    }
    else {
      func_0x03280ca4(lVar59);
LAB_03d5715c:
      uVar37 = func_0x03280cbc();
      uVar37 = func_0x03280b7c(uVar37,pppplVar57);
LAB_03d57168:
      uVar37 = func_0x05ac7588(uVar37);
      ppppplVar23 = ppppplVar44;
    }
  }
  if (pppplVar64 != (long ****)0x0) {
    ppplVar38 = *pppplVar64;
    uVar52 = (ulong)*(ushort *)((long)ppplVar38 + 0x12e);
    if (uVar52 != 0) {
      pplVar40 = ppplVar38[0x16] + 1;
      do {
        if (pplVar40[-1] == *(long **)PTR_DAT_0774e8c8) {
          ppplVar38 = ppplVar38 + (long)*(int *)pplVar40 * 2 + 0x27;
          goto LAB_03d5721c;
        }
        uVar52 = uVar52 - 1;
        pplVar40 = pplVar40 + 2;
      } while (uVar52 != 0);
    }
    pppplVar60 = (long ****)0x0;
    ppplVar38 = (long ***)func_0x03256b10(pppplVar64);
LAB_03d5721c:
    (*(code *)*ppplVar38)(pppplVar64,ppplVar38[1]);
  }
  func_0x03365958(auVar80._0_8_);
  func_0x03280ca4(0);
  auVar85 = func_0x02f09514();
  uVar52 = auVar85._8_8_;
  plVar36 = auVar85._0_8_;
  ppppplVar43[-0x2a] = (long ****)(ppppplVar28 + -0x22);
  ppppplVar43[-0x29] = (long ****)0x3d57240;
  ppppplVar43[-0x28] = (long ****)ppppplVar69;
  ppppplVar43[-0x27] = pppplVar24;
  ppppplVar43[-0x26] = (long ****)0x7fffffffffffffff;
  ppppplVar43[-0x25] = pppplVar62;
  ppppplVar43[-0x24] = (long ****)0x7fffffffffffffff;
  ppppplVar43[-0x23] = (long ****)ppppplVar23;
  ppppplVar43[-0x22] = (long ****)0x0;
  ppppplVar43[-0x21] = (long ****)ppppplVar23;
  ppppplVar43[-0x20] = pppplVar64;
  ppppplVar43[-0x1f] = auVar80._0_8_;
  pppplVar24 = (long ****)tpidr_el0;
  ppppplVar43[-0x2f] = pppplVar60;
  ppppplVar43[-0x2e] = pppplVar24;
  ppppplVar43[-0x2b] = (long ****)pppplVar24[5];
  pppplVar24 = ppppplVar29[7];
  if (pppplVar24 == (long ****)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    pppplVar24 = ppppplVar29[7];
    if (pppplVar24 == (long ****)0x0) {
      func_0x03256878(ppppplVar29);
      pppplVar24 = ppppplVar29[7];
    }
  }
  uVar61 = (ulong)*(uint *)((long)pppplVar24[2] + 0xfc);
  uVar68 = uVar61 + 0xf & 0x1fffffff0;
  pppplVar57 = (long ****)((long)ppppplVar43 + (-0x180 - uVar68));
  pppplVar60 = (long ****)((long)pppplVar57 - uVar68);
  uVar35 = (long)pppplVar60 - uVar68;
  func_0x072ce9a0(uVar35,0,uVar61);
  lVar59 = uVar35 - uVar68;
  uVar68 = uVar61;
  func_0x072ce9a0(lVar59,0);
  puVar34 = PTR_DAT_07774b08;
  if ((plVar36 != (long *)0x0) && (puVar34 = PTR_DAT_077799b8, uVar52 != 0)) {
    uVar68 = uVar61;
    func_0x072ce9a0(uVar35,0);
    ppplVar38 = *pppplVar24;
    if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
      ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
    }
    lVar47 = *plVar36;
    uVar53 = (ulong)*(ushort *)(lVar47 + 0x12e);
    if (uVar53 != 0) {
      piVar56 = (int *)(*(long *)(lVar47 + 0xb0) + 8);
      do {
        if (*(long ****)(piVar56 + -2) == ppplVar38) {
          puVar21 = (undefined8 *)(lVar47 + (long)*piVar56 * 0x10 + 0x138);
          goto LAB_03d57388;
        }
        uVar53 = uVar53 - 1;
        piVar56 = piVar56 + 4;
      } while (uVar53 != 0);
    }
    uVar68 = 0;
    puVar21 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d57388:
    plVar36 = (long *)(*(code *)*puVar21)(plVar36,puVar21[1]);
    puVar34 = PTR_DAT_0774e8e0;
    plVar32 = (long *)0x0;
    do {
      if (plVar36 == (long *)0x0) {
        func_0x03280cac();
        goto LAB_03d575f4;
      }
      lVar47 = *plVar36;
      uVar53 = (ulong)*(ushort *)(lVar47 + 0x12e);
      if (uVar53 != 0) {
        piVar56 = (int *)(*(long *)(lVar47 + 0xb0) + 8);
        do {
          if (*(long *)(piVar56 + -2) == *(long *)puVar34) {
            puVar21 = (undefined8 *)(lVar47 + (long)*piVar56 * 0x10 + 0x138);
            goto LAB_03d573f4;
          }
          uVar53 = uVar53 - 1;
          piVar56 = piVar56 + 4;
        } while (uVar53 != 0);
      }
      uVar68 = 0;
      puVar21 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d573f4:
      ppppplVar69 = (long *****)(*(code *)*puVar21)(plVar36,puVar21[1]);
      if (((ulong)ppppplVar69 & 1) == 0) {
        lVar47 = 0;
        iVar46 = 0xc;
        iVar20 = 0xc;
        if (plVar36 == (long *)0x0) goto LAB_03d57584;
        goto LAB_03d57524;
      }
      ppplVar38 = ppppplVar29[7][4];
      if ((*(byte *)((long)ppplVar38 + 0x135) & 1) == 0) {
        ppplVar38 = (long ***)func_0x0325681c(ppplVar38);
      }
      lVar47 = *plVar36;
      uVar68 = (ulong)*(ushort *)(lVar47 + 0x12e);
      if (uVar68 != 0) {
        piVar56 = (int *)(*(long *)(lVar47 + 0xb0) + 8);
        do {
          if (*(long ****)(piVar56 + -2) == ppplVar38) {
            lVar47 = lVar47 + (long)*piVar56 * 0x10 + 0x138;
            goto LAB_03d57468;
          }
          uVar68 = uVar68 - 1;
          piVar56 = piVar56 + 4;
        } while (uVar68 != 0);
      }
      lVar47 = func_0x03256b10(plVar36,ppplVar38,0);
LAB_03d57468:
      ppppplVar43[-0x2d] = pppplVar57;
      lVar47 = *(long *)(lVar47 + 8);
      (**(code **)(lVar47 + 0x10))
                (*(undefined8 *)(lVar47 + 8),lVar47,plVar36,ppppplVar43 + -0x2d,pppplVar57);
      func_0x072ce970(lVar59,pppplVar57,uVar61);
      func_0x072ce970(pppplVar60,lVar59,uVar61);
      pppplVar24 = pppplVar60;
      if (-1 < *(int *)(ppppplVar29[7][2] + 5)) {
        pppplVar24 = (long ****)*pppplVar60;
      }
      ppplVar38 = ppppplVar29[7][6];
      pplVar40 = *ppplVar38;
      ppppplVar43[-0x2d] = pppplVar24;
      uVar68 = uVar52;
      (*(code *)ppplVar38[2])
                (pplVar40,ppplVar38,uVar52,ppppplVar43 + -0x2d,(long)ppppplVar43 + -0x15c);
      if (*(char *)((long)ppppplVar43 + -0x15c) != '\0') {
        func_0x072ce970(pppplVar57,lVar59,uVar61);
        uVar68 = uVar61;
        func_0x072ce970(uVar35,pppplVar57);
        if (plVar32 == (long *)0x7fffffffffffffff) goto LAB_03d57630;
        plVar32 = (long *)((long)plVar32 + 1);
      }
    } while( true );
  }
  uVar37 = func_0x03280a2c(puVar34);
  uVar37 = func_0x05ac7464(uVar37,0);
LAB_03d57640:
  func_0x03280b7c(uVar37,ppppplVar29);
  do {
    auVar80 = func_0x072ce990();
    uVar37 = auVar80._0_8_;
    plVar32 = (long *)0x7fffffffffffffff;
    if (auVar80._8_4_ != 1) {
      if (plVar36 == (long *)0x0) goto LAB_03d57704;
      lVar47 = *plVar36;
      uVar52 = (ulong)*(ushort *)(lVar47 + 0x12e);
      if (uVar52 == 0) goto LAB_03d576dc;
      piVar56 = (int *)(*(long *)(lVar47 + 0xb0) + 8);
      goto LAB_03d576c4;
    }
    plVar31 = (long *)func_0x072ce910(uVar37);
    lVar47 = *plVar31;
    ppppplVar69 = (long *****)func_0x072ce920();
    iVar46 = 0;
    iVar20 = 0;
    if (plVar36 != (long *)0x0) {
LAB_03d57524:
      iVar46 = iVar20;
      lVar30 = *plVar36;
      uVar52 = (ulong)*(ushort *)(lVar30 + 0x12e);
      if (uVar52 != 0) {
        piVar56 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
        do {
          if (*(long *)(piVar56 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar21 = (undefined8 *)(lVar30 + (long)*piVar56 * 0x10 + 0x138);
            goto LAB_03d57578;
          }
          uVar52 = uVar52 - 1;
          piVar56 = piVar56 + 4;
        } while (uVar52 != 0);
      }
      uVar68 = 0;
      puVar21 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d57578:
      ppppplVar69 = (long *****)(*(code *)*puVar21)(plVar36,puVar21[1]);
    }
LAB_03d57584:
    if (lVar47 != 0) {
      func_0x03280ca4(lVar47);
LAB_03d57630:
      uVar37 = func_0x03280cbc();
      uVar37 = func_0x03280b7c(uVar37,ppppplVar29);
      goto LAB_03d5763c;
    }
    if ((iVar46 == 0xc) || (iVar46 == 0)) {
      if (plVar32 != (long *)0x1) goto LAB_03d575f4;
      func_0x072ce970(pppplVar57,uVar35,uVar61);
      uVar68 = uVar61;
      ppppplVar69 = (long *****)func_0x072ce970(ppppplVar43[-0x2f],pppplVar57);
    }
    if ((long ****)ppppplVar43[-0x2e][5] == ppppplVar43[-0x2b]) {
      return ppppplVar69;
    }
  } while( true );
  while( true ) {
    uVar52 = uVar52 - 1;
    piVar56 = piVar56 + 4;
    if (uVar52 == 0) break;
LAB_03d58054:
    if (*(long *)(piVar56 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar21 = (undefined8 *)(lVar47 + (long)*piVar56 * 0x10 + 0x138);
      goto LAB_03d58088;
    }
  }
LAB_03d5806c:
  uVar68 = 0;
  puVar21 = (undefined8 *)func_0x03256b10(plVar32);
LAB_03d58088:
  (*(code *)*puVar21)(plVar32,puVar21[1]);
LAB_03d58094:
  func_0x03365958(uVar22);
  func_0x03280ca4(0);
  auVar85 = func_0x02f09514();
  plVar31 = auVar85._0_8_;
  *(long ******)(lVar59 + -0xc0) = ppppplVar43 + -0x2a;
  *(undefined8 *)(lVar59 + -0xb8) = 0x3d580ac;
  *(long *)(lVar59 + -0xb0) = lVar59;
  *(undefined8 *)(lVar59 + -0xa0) = uVar37;
  *(undefined8 *)(lVar59 + -0x98) = 0;
  *(long **)(lVar59 + -0x90) = plVar36;
  *(ulong *)(lVar59 + -0x88) = uVar35;
  *(undefined8 *)(lVar59 + -0x80) = uVar22;
  *(undefined8 *)(lVar59 + -0x78) = 0;
  *(long **)(lVar59 + -0x70) = plVar32;
  *(long *)(lVar59 + -0x68) = lVar30;
  lVar47 = tpidr_el0;
  *(undefined8 *)(lVar59 + -200) = *(undefined8 *)(lVar47 + 0x28);
  plVar36 = *(long **)(uVar68 + 0x38);
  if (plVar36 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar36 = *(long **)(uVar68 + 0x38);
    if (plVar36 == (long *)0x0) {
      func_0x03256878(uVar68);
      plVar36 = *(long **)(uVar68 + 0x38);
    }
  }
  uVar35 = (ulong)*(uint *)(plVar36[4] + 0xfc);
  uVar52 = uVar35 + 0xf & 0x1fffffff0;
  lVar50 = (lVar59 + -0xe0) - uVar52;
  lVar63 = lVar50 - uVar52;
  func_0x072ce9a0(lVar63,0,uVar35);
  lVar66 = lVar63 - uVar52;
  uVar52 = uVar35;
  func_0x072ce9a0(lVar66,0);
  lVar30 = lVar66;
  if (plVar31 == (long *)0x0) {
    uVar37 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar37 = func_0x05ac7464(uVar37,0);
    goto LAB_03d585bc;
  }
  lVar42 = plVar36[1];
  if ((*(byte *)(lVar42 + 0x135) & 1) == 0) {
    lVar42 = func_0x0325681c(lVar42);
  }
  plVar36 = (long *)func_0x03280b90(plVar31,lVar42);
  if (plVar36 == (long *)0x0) {
    lVar42 = **(long **)(uVar68 + 0x38);
    if ((*(byte *)(lVar42 + 0x135) & 1) == 0) {
      lVar42 = func_0x0325681c(lVar42);
    }
    lVar51 = *plVar31;
    uVar61 = (ulong)*(ushort *)(lVar51 + 0x12e);
    if (uVar61 != 0) {
      piVar56 = (int *)(*(long *)(lVar51 + 0xb0) + 8);
      do {
        if (*(long *)(piVar56 + -2) == lVar42) {
          puVar21 = (undefined8 *)(lVar51 + (long)*piVar56 * 0x10 + 0x138);
          goto LAB_03d582e8;
        }
        uVar61 = uVar61 - 1;
        piVar56 = piVar56 + 4;
      } while (uVar61 != 0);
    }
    uVar52 = 0;
    puVar21 = (undefined8 *)func_0x03256b10(plVar31);
LAB_03d582e8:
    plVar36 = (long *)(*(code *)*puVar21)(plVar31,puVar21[1]);
    puVar34 = PTR_DAT_0774e8e0;
    if (plVar36 == (long *)0x0) goto LAB_03d585c4;
    lVar30 = *plVar36;
    uVar52 = (ulong)*(ushort *)(lVar30 + 0x12e);
    if (uVar52 != 0) {
      piVar56 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
      do {
        if (*(long *)(piVar56 + -2) == *(long *)PTR_DAT_0774e8e0) {
          puVar21 = (undefined8 *)(lVar30 + (long)*piVar56 * 0x10 + 0x138);
          goto LAB_03d58350;
        }
        uVar52 = uVar52 - 1;
        piVar56 = piVar56 + 4;
      } while (uVar52 != 0);
    }
    puVar21 = (undefined8 *)func_0x03256b10(plVar36,*(long *)PTR_DAT_0774e8e0,0);
LAB_03d58350:
    uVar52 = (*(code *)*puVar21)(plVar36,puVar21[1]);
    if ((uVar52 & 1) == 0) {
      func_0x072ce9a0(lVar63,0,uVar35);
      lVar30 = lVar63;
    }
    else {
      lVar30 = *(long *)(*(long *)(uVar68 + 0x38) + 0x38);
      if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
        lVar30 = func_0x0325681c(lVar30);
      }
      lVar42 = *plVar36;
      uVar52 = (ulong)*(ushort *)(lVar42 + 0x12e);
      if (uVar52 != 0) {
        piVar56 = (int *)(*(long *)(lVar42 + 0xb0) + 8);
        do {
          if (*(long *)(piVar56 + -2) == lVar30) {
            lVar30 = lVar42 + (long)*piVar56 * 0x10 + 0x138;
            goto LAB_03d58410;
          }
          uVar52 = uVar52 - 1;
          piVar56 = piVar56 + 4;
        } while (uVar52 != 0);
      }
      lVar30 = func_0x03256b10(plVar36,lVar30,0);
LAB_03d58410:
      *(long *)(lVar59 + -0xe0) = lVar50;
      lVar30 = *(long *)(lVar30 + 8);
      (**(code **)(lVar30 + 0x10))(*(undefined8 *)(lVar30 + 8),lVar30,plVar36,lVar59 + -0xe0,lVar50)
      ;
      uVar52 = uVar35;
      func_0x072ce970(lVar66,lVar50);
      lVar30 = *plVar36;
      uVar61 = (ulong)*(ushort *)(lVar30 + 0x12e);
      if (uVar61 != 0) {
        piVar56 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
        do {
          if (*(long *)(piVar56 + -2) == *(long *)puVar34) {
            puVar21 = (undefined8 *)(lVar30 + (long)*piVar56 * 0x10 + 0x138);
            goto LAB_03d58488;
          }
          uVar61 = uVar61 - 1;
          piVar56 = piVar56 + 4;
        } while (uVar61 != 0);
      }
      uVar52 = 0;
      puVar21 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d58488:
      ppppplVar69 = (long *****)(*(code *)*puVar21)(plVar36,puVar21[1]);
      lVar30 = lVar66;
      if (((ulong)ppppplVar69 & 1) != 0) {
        lVar30 = 0;
        iVar46 = 8;
        iVar20 = 8;
        goto joined_r0x03d584a0;
      }
    }
    func_0x072ce970(lVar50,lVar30,uVar35);
    uVar52 = uVar35;
    ppppplVar69 = (long *****)func_0x072ce970(lVar63,lVar50);
    lVar30 = 0;
    iVar20 = 10;
    iVar46 = 10;
    if (plVar36 == (long *)0x0) goto LAB_03d58534;
    goto LAB_03d584d4;
  }
  lVar42 = *(long *)(*(long *)(uVar68 + 0x38) + 0x10);
  if ((*(byte *)(lVar42 + 0x135) & 1) == 0) {
    lVar42 = func_0x0325681c(lVar42);
  }
  lVar51 = *plVar36;
  uVar61 = (ulong)*(ushort *)(lVar51 + 0x12e);
  if (uVar61 != 0) {
    piVar56 = (int *)(*(long *)(lVar51 + 0xb0) + 8);
    do {
      if (*(long *)(piVar56 + -2) == lVar42) {
        puVar21 = (undefined8 *)(lVar51 + (long)*piVar56 * 0x10 + 0x138);
        goto LAB_03d58254;
      }
      uVar61 = uVar61 - 1;
      piVar56 = piVar56 + 4;
    } while (uVar61 != 0);
  }
  uVar52 = 0;
  puVar21 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d58254:
  iVar20 = (*(code *)*puVar21)(plVar36,puVar21[1]);
  if (iVar20 != 1) {
    if (iVar20 != 0) goto LAB_03d5854c;
    func_0x072ce9a0(lVar63,0,uVar35);
    goto LAB_03d58558;
  }
  lVar30 = *(long *)(*(long *)(uVar68 + 0x38) + 8);
  if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
    lVar30 = func_0x0325681c(lVar30);
  }
  *(undefined4 *)(lVar59 + -0xcc) = 0;
  lVar42 = *plVar36;
  uVar52 = (ulong)*(ushort *)(lVar42 + 0x12e);
  if (uVar52 != 0) {
    piVar56 = (int *)(*(long *)(lVar42 + 0xb0) + 8);
    do {
      if (*(long *)(piVar56 + -2) == lVar30) {
        lVar30 = lVar42 + (long)*piVar56 * 0x10 + 0x138;
        goto LAB_03d583e0;
      }
      uVar52 = uVar52 - 1;
      piVar56 = piVar56 + 4;
    } while (uVar52 != 0);
  }
  lVar30 = func_0x03256b10(plVar36,lVar30,0);
LAB_03d583e0:
  *(long *)(lVar59 + -0xe0) = lVar59 + -0xcc;
  *(long *)(lVar59 + -0xd8) = lVar50;
  lVar30 = *(long *)(lVar30 + 8);
  (**(code **)(lVar30 + 0x10))(*(undefined8 *)(lVar30 + 8),lVar30,plVar36,lVar59 + -0xe0,lVar50);
LAB_03d58568:
  uVar52 = uVar35;
  ppppplVar69 = (long *****)func_0x072ce970(auVar85._8_8_,lVar50);
LAB_03d58578:
  if (*(long *)(lVar47 + 0x28) == *(long *)(lVar59 + -200)) {
    return ppppplVar69;
  }
  do {
    auVar80 = func_0x072ce990();
    if (auVar80._8_4_ != 1) {
      if (plVar36 == (long *)0x0) goto LAB_03d58678;
      lVar47 = *plVar36;
      uVar61 = (ulong)*(ushort *)(lVar47 + 0x12e);
      if (uVar61 == 0) goto LAB_03d58650;
      piVar56 = (int *)(*(long *)(lVar47 + 0xb0) + 8);
      break;
    }
    plVar32 = (long *)func_0x072ce910(auVar80._0_8_);
    lVar30 = *plVar32;
    ppppplVar69 = (long *****)func_0x072ce920();
    iVar46 = 0;
    iVar20 = 0;
joined_r0x03d584a0:
    if (plVar36 != (long *)0x0) {
LAB_03d584d4:
      iVar20 = iVar46;
      lVar42 = *plVar36;
      uVar61 = (ulong)*(ushort *)(lVar42 + 0x12e);
      if (uVar61 != 0) {
        piVar56 = (int *)(*(long *)(lVar42 + 0xb0) + 8);
        do {
          if (*(long *)(piVar56 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar21 = (undefined8 *)(lVar42 + (long)*piVar56 * 0x10 + 0x138);
            goto LAB_03d58528;
          }
          uVar61 = uVar61 - 1;
          piVar56 = piVar56 + 4;
        } while (uVar61 != 0);
      }
      uVar52 = 0;
      puVar21 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d58528:
      ppppplVar69 = (long *****)(*(code *)*puVar21)(plVar36,puVar21[1]);
    }
LAB_03d58534:
    if (lVar30 == 0) {
      if (iVar20 == 10) goto LAB_03d58558;
      if ((iVar20 != 8) && (iVar20 != 0)) goto LAB_03d58578;
LAB_03d5854c:
      uVar37 = func_0x05ac751c(0);
LAB_03d585bc:
      func_0x03280b7c(uVar37,uVar68);
LAB_03d585c4:
      func_0x03280cac();
    }
    func_0x03280ca4(lVar30);
  } while( true );
  while( true ) {
    uVar61 = uVar61 - 1;
    piVar56 = piVar56 + 4;
    if (uVar61 == 0) break;
    if (*(long *)(piVar56 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar21 = (undefined8 *)(lVar47 + (long)*piVar56 * 0x10 + 0x138);
      goto LAB_03d5866c;
    }
  }
LAB_03d58650:
  uVar52 = 0;
  puVar21 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d5866c:
  (*(code *)*puVar21)(plVar36,puVar21[1]);
LAB_03d58678:
  func_0x03365958(auVar80._0_8_);
  func_0x03280ca4(0);
  auVar81 = func_0x02f09514();
  lVar47 = auVar81._8_8_;
  plVar32 = auVar81._0_8_;
  *(long *)(lVar66 + -0x50) = lVar59 + -0xc0;
  *(undefined8 *)(lVar66 + -0x40) = 0x3d58690;
  *(undefined8 *)(lVar66 + -0x38) = 0;
  *(long **)(lVar66 + -0x30) = plVar36;
  *(long *)(lVar66 + -0x28) = lVar63;
  *(ulong *)(lVar66 + -0x20) = uVar68;
  *(long *)(lVar66 + -0x18) = lVar50;
  *(ulong *)(lVar66 + -0x10) = uVar35;
  *(long *)(lVar66 + -8) = auVar85._8_8_;
  if (*(long *)(uVar52 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(uVar52 + 0x38) == 0) {
      func_0x03256878(uVar52);
    }
  }
  *(undefined8 *)(lVar66 + -0xe0) = 0;
  *(undefined8 *)(lVar66 + -0xf8) = 0;
  *(undefined8 *)(lVar66 + -0x100) = 0;
  *(undefined8 *)(lVar66 + -0xe8) = 0;
  *(undefined8 *)(lVar66 + -0xf0) = 0;
  *(undefined8 *)(lVar66 + -0x108) = 0;
  *(undefined8 *)(lVar66 + -0x110) = 0;
  puVar34 = PTR_DAT_07774b08;
  if ((plVar32 != (long *)0x0) && (puVar34 = PTR_DAT_077799b8, lVar47 != 0)) {
    *(undefined8 *)(lVar66 + -0xa0) = 0;
    *(undefined8 *)(lVar66 + -0xb8) = 0;
    *(undefined8 *)(lVar66 + -0xc0) = 0;
    *(undefined8 *)(lVar66 + -0xa8) = 0;
    *(undefined8 *)(lVar66 + -0xb0) = 0;
    *(undefined8 *)(lVar66 + -200) = 0;
    *(undefined8 *)(lVar66 + -0xd0) = 0;
    lVar59 = **(long **)(uVar52 + 0x38);
    if ((*(byte *)(lVar59 + 0x135) & 1) == 0) {
      lVar59 = func_0x0325681c(lVar59);
    }
    lVar30 = *plVar32;
    uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
    if (uVar35 != 0) {
      piVar56 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
      do {
        if (*(long *)(piVar56 + -2) == lVar59) {
          puVar21 = (undefined8 *)(lVar30 + (long)*piVar56 * 0x10 + 0x138);
          goto LAB_03d58774;
        }
        uVar35 = uVar35 - 1;
        piVar56 = piVar56 + 4;
      } while (uVar35 != 0);
    }
    puVar21 = (undefined8 *)func_0x03256b10(plVar32,lVar59,0);
LAB_03d58774:
    plVar36 = (long *)(*(code *)*puVar21)(plVar32,puVar21[1]);
    puVar34 = PTR_DAT_0774e8e0;
    lVar59 = 0;
    while (plVar36 != (long *)0x0) {
      lVar30 = *plVar36;
      uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
      if (uVar35 != 0) {
        piVar56 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
        do {
          if (*(long *)(piVar56 + -2) == *(long *)puVar34) {
            puVar21 = (undefined8 *)(lVar30 + (long)*piVar56 * 0x10 + 0x138);
            goto LAB_03d587e4;
          }
          uVar35 = uVar35 - 1;
          piVar56 = piVar56 + 4;
        } while (uVar35 != 0);
      }
      puVar21 = (undefined8 *)func_0x03256b10(plVar36,*(long *)puVar34,0);
LAB_03d587e4:
      ppppplVar69 = (long *****)(*(code *)*puVar21)(plVar36,puVar21[1]);
      if (((ulong)ppppplVar69 & 1) == 0) {
        lVar47 = 0;
        if (plVar36 == (long *)0x0) goto LAB_03d58938;
        lVar30 = *plVar36;
        uVar35 = (ulong)*(ushort *)(lVar30 + 0x12e);
        if (uVar35 == 0) goto LAB_03d58910;
        piVar56 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
        goto LAB_03d588f8;
      }
      lVar30 = *(long *)(*(long *)(uVar52 + 0x38) + 0x20);
      if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
        lVar30 = func_0x0325681c(lVar30);
      }
      lVar50 = *plVar36;
      uVar35 = (ulong)*(ushort *)(lVar50 + 0x12e);
      if (uVar35 != 0) {
        piVar56 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
        do {
          if (*(long *)(piVar56 + -2) == lVar30) {
            puVar21 = (undefined8 *)(lVar50 + (long)*piVar56 * 0x10 + 0x138);
            goto LAB_03d58858;
          }
          uVar35 = uVar35 - 1;
          piVar56 = piVar56 + 4;
        } while (uVar35 != 0);
      }
      puVar21 = (undefined8 *)func_0x03256b10(plVar36,lVar30,0);
LAB_03d58858:
      (*(code *)*puVar21)(lVar66 + -0x90,plVar36,puVar21[1]);
      *(undefined8 *)(lVar66 + -0x108) = *(undefined8 *)(lVar66 + -0x88);
      *(undefined8 *)(lVar66 + -0x110) = *(undefined8 *)(lVar66 + -0x90);
      *(undefined8 *)(lVar66 + -0xf8) = *(undefined8 *)(lVar66 + -0x78);
      *(undefined8 *)(lVar66 + -0x100) = *(undefined8 *)(lVar66 + -0x80);
      *(undefined8 *)(lVar66 + -0xe8) = *(undefined8 *)(lVar66 + -0x68);
      *(undefined8 *)(lVar66 + -0xf0) = *(undefined8 *)(lVar66 + -0x70);
      *(undefined8 *)(lVar66 + -0xe0) = *(undefined8 *)(lVar66 + -0x60);
      pcVar54 = *(code **)(lVar47 + 0x18);
      uVar37 = *(undefined8 *)(lVar47 + 0x40);
      *(undefined8 *)(lVar66 + -0x88) = *(undefined8 *)(lVar66 + -0x88);
      *(undefined8 *)(lVar66 + -0x90) = *(undefined8 *)(lVar66 + -0x90);
      *(undefined8 *)(lVar66 + -0x78) = *(undefined8 *)(lVar66 + -0x78);
      *(undefined8 *)(lVar66 + -0x80) = *(undefined8 *)(lVar66 + -0x80);
      *(undefined8 *)(lVar66 + -0x68) = *(undefined8 *)(lVar66 + -0x68);
      *(undefined8 *)(lVar66 + -0x70) = *(undefined8 *)(lVar66 + -0x70);
      *(undefined8 *)(lVar66 + -0x60) = *(undefined8 *)(lVar66 + -0x60);
      uVar35 = (*pcVar54)(uVar37,lVar66 + -0x90,*(undefined8 *)(lVar47 + 0x28));
      if ((uVar35 & 1) != 0) {
        *(undefined8 *)(lVar66 + -200) = *(undefined8 *)(lVar66 + -0x108);
        *(undefined8 *)(lVar66 + -0xd0) = *(undefined8 *)(lVar66 + -0x110);
        *(undefined8 *)(lVar66 + -0xb8) = *(undefined8 *)(lVar66 + -0xf8);
        *(undefined8 *)(lVar66 + -0xc0) = *(undefined8 *)(lVar66 + -0x100);
        *(undefined8 *)(lVar66 + -0xa8) = *(undefined8 *)(lVar66 + -0xe8);
        *(undefined8 *)(lVar66 + -0xb0) = *(undefined8 *)(lVar66 + -0xf0);
        *(undefined8 *)(lVar66 + -0xa0) = *(undefined8 *)(lVar66 + -0xe0);
        if (lVar59 == 0x7fffffffffffffff) goto LAB_03d589d0;
        lVar59 = lVar59 + 1;
      }
    }
    func_0x03280cac();
    puVar34 = PTR_DAT_07774b08;
  }
  uVar37 = func_0x03280a2c(puVar34);
  uVar37 = func_0x05ac7464(uVar37,0);
  do {
    func_0x03280b7c(uVar37,uVar52);
    func_0x03280ca4(lVar47);
LAB_03d589d0:
    uVar37 = func_0x03280cbc();
    func_0x03280b7c(uVar37,uVar52);
LAB_03d589dc:
    uVar37 = func_0x05ac7588(0);
  } while( true );
LAB_03d58558:
  func_0x072ce970(lVar50,lVar63,uVar35);
  goto LAB_03d58568;
LAB_03d575f4:
  uVar37 = 0;
  if (plVar32 == (long *)0x0) {
    uVar37 = func_0x05ac7660();
  }
  else {
LAB_03d5763c:
    uVar37 = func_0x05ac7588(uVar37);
  }
  goto LAB_03d57640;
  while( true ) {
    uVar52 = uVar52 - 1;
    piVar56 = piVar56 + 4;
    if (uVar52 == 0) break;
LAB_03d576c4:
    if (*(long *)(piVar56 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar21 = (undefined8 *)(lVar47 + (long)*piVar56 * 0x10 + 0x138);
      goto LAB_03d576f8;
    }
  }
LAB_03d576dc:
  uVar68 = 0;
  puVar21 = (undefined8 *)func_0x03256b10(plVar36);
LAB_03d576f8:
  (*(code *)*puVar21)(plVar36,puVar21[1]);
LAB_03d57704:
  func_0x03365958(uVar37);
  func_0x03280ca4(0);
  auVar85 = func_0x02f09514();
  lVar47 = auVar85._8_8_;
  plVar31 = auVar85._0_8_;
  *(undefined8 *)(lVar59 + -0x30) = 0x3d5771c;
  *(ulong *)(lVar59 + -0x28) = uVar35;
  *(long *****)(lVar59 + -0x20) = pppplVar57;
  *(ulong *)(lVar59 + -0x18) = uVar61;
  *(undefined8 *)(lVar59 + -0x10) = 0x7fffffffffffffff;
  *(long ******)(lVar59 + -8) = ppppplVar29;
  if (*(long *)(lVar47 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(lVar47 + 0x38) == 0) {
      func_0x03256878(lVar47);
    }
  }
  if (plVar31 == (long *)0x0) {
    uVar22 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar22 = func_0x05ac7464(uVar22,0);
    goto LAB_03d57b10;
  }
  lVar30 = *(long *)(*(long *)(lVar47 + 0x38) + 8);
  if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
    lVar30 = func_0x0325681c(lVar30);
  }
  plVar32 = (long *)func_0x03280b90(plVar31,lVar30);
  if (plVar32 == (long *)0x0) {
    lVar30 = **(long **)(lVar47 + 0x38);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c(lVar30);
    }
    lVar50 = *plVar31;
    uVar52 = (ulong)*(ushort *)(lVar50 + 0x12e);
    if (uVar52 != 0) {
      piVar56 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
      do {
        if (*(long *)(piVar56 + -2) == lVar30) {
          puVar21 = (undefined8 *)(lVar50 + (long)*piVar56 * 0x10 + 0x138);
          goto LAB_03d578d0;
        }
        uVar52 = uVar52 - 1;
        piVar56 = piVar56 + 4;
      } while (uVar52 != 0);
    }
    uVar68 = 0;
    puVar21 = (undefined8 *)func_0x03256b10(plVar31);
LAB_03d578d0:
    plVar32 = (long *)(*(code *)*puVar21)(plVar31,puVar21[1]);
    puVar34 = PTR_DAT_0774e8e0;
    if (plVar32 == (long *)0x0) goto LAB_03d57b18;
    lVar30 = *plVar32;
    uVar52 = (ulong)*(ushort *)(lVar30 + 0x12e);
    if (uVar52 != 0) {
      piVar56 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
      do {
        if (*(long *)(piVar56 + -2) == *(long *)PTR_DAT_0774e8e0) {
          puVar21 = (undefined8 *)(lVar30 + (long)*piVar56 * 0x10 + 0x138);
          goto LAB_03d57938;
        }
        uVar52 = uVar52 - 1;
        piVar56 = piVar56 + 4;
      } while (uVar52 != 0);
    }
    uVar68 = 0;
    puVar21 = (undefined8 *)func_0x03256b10(plVar32);
LAB_03d57938:
    uVar52 = (*(code *)*puVar21)(plVar32,puVar21[1]);
    if ((uVar52 & 1) == 0) {
      plVar31 = (long *)0x0;
      uVar35 = 10;
      goto joined_r0x03d579ac;
    }
    lVar30 = *(long *)(*(long *)(lVar47 + 0x38) + 0x38);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c(lVar30);
    }
    lVar50 = *plVar32;
    uVar52 = (ulong)*(ushort *)(lVar50 + 0x12e);
    if (uVar52 != 0) {
      piVar56 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
      do {
        if (*(long *)(piVar56 + -2) == lVar30) {
          puVar21 = (undefined8 *)(lVar50 + (long)*piVar56 * 0x10 + 0x138);
          goto LAB_03d579e8;
        }
        uVar52 = uVar52 - 1;
        piVar56 = piVar56 + 4;
      } while (uVar52 != 0);
    }
    uVar68 = 0;
    puVar21 = (undefined8 *)func_0x03256b10(plVar32);
LAB_03d579e8:
    ppppplVar69 = (long *****)(*(code *)*puVar21)(plVar32,puVar21[1]);
    lVar30 = *plVar32;
    uVar52 = (ulong)*(ushort *)(lVar30 + 0x12e);
    if (uVar52 != 0) {
      piVar56 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
      do {
        if (*(long *)(piVar56 + -2) == *(long *)puVar34) {
          puVar21 = (undefined8 *)(lVar30 + (long)*piVar56 * 0x10 + 0x138);
          goto LAB_03d57a44;
        }
        uVar52 = uVar52 - 1;
        piVar56 = piVar56 + 4;
      } while (uVar52 != 0);
    }
    uVar68 = 0;
    puVar21 = (undefined8 *)func_0x03256b10(plVar32);
LAB_03d57a44:
    uVar52 = (*(code *)*puVar21)(plVar32,puVar21[1]);
    bVar18 = (uVar52 & 1) == 0;
    plVar31 = (long *)0x0;
    ppppplVar44 = (long *****)0x0;
    if (bVar18) {
      ppppplVar44 = ppppplVar69;
    }
    uVar19 = 8;
    if (bVar18) {
      uVar19 = 10;
    }
    uVar35 = (ulong)uVar19;
    if (plVar32 == (long *)0x0) goto LAB_03d57acc;
    goto LAB_03d57a6c;
  }
  lVar30 = *(long *)(*(long *)(lVar47 + 0x38) + 0x10);
  if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
    lVar30 = func_0x0325681c(lVar30);
  }
  lVar50 = *plVar32;
  uVar52 = (ulong)*(ushort *)(lVar50 + 0x12e);
  if (uVar52 != 0) {
    piVar56 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
    do {
      if (*(long *)(piVar56 + -2) == lVar30) {
        puVar21 = (undefined8 *)(lVar50 + (long)*piVar56 * 0x10 + 0x138);
        goto LAB_03d5784c;
      }
      uVar52 = uVar52 - 1;
      piVar56 = piVar56 + 4;
    } while (uVar52 != 0);
  }
  uVar68 = 0;
  puVar21 = (undefined8 *)func_0x03256b10(plVar32);
LAB_03d5784c:
  iVar20 = (*(code *)*puVar21)(plVar32,puVar21[1]);
  if (iVar20 == 0) {
    ppppplVar44 = (long *****)0x0;
  }
  else {
    if (iVar20 == 1) {
      lVar59 = *(long *)(*(long *)(lVar47 + 0x38) + 8);
      if ((*(byte *)(lVar59 + 0x135) & 1) == 0) {
        lVar59 = func_0x0325681c(lVar59);
      }
      lVar47 = *plVar32;
      uVar52 = (ulong)*(ushort *)(lVar47 + 0x12e);
      if (uVar52 != 0) {
        piVar56 = (int *)(*(long *)(lVar47 + 0xb0) + 8);
        do {
          if (*(long *)(piVar56 + -2) == lVar59) {
            puVar21 = (undefined8 *)(lVar47 + (long)*piVar56 * 0x10 + 0x138);
            goto LAB_03d579c0;
          }
          uVar52 = uVar52 - 1;
          piVar56 = piVar56 + 4;
        } while (uVar52 != 0);
      }
      puVar21 = (undefined8 *)func_0x03256b10(plVar32,lVar59,0);
LAB_03d579c0:
                    /* WARNING: Could not recover jumptable at 0x03d579d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppppplVar69 = (long *****)(*(code *)*puVar21)(plVar32,0,puVar21[1]);
      return ppppplVar69;
    }
    do {
      uVar22 = func_0x05ac751c(0);
LAB_03d57b10:
      func_0x03280b7c(uVar22,lVar47);
LAB_03d57b18:
      func_0x03280cac();
      do {
        auVar80 = func_0x03280ca4(plVar31);
        uVar22 = auVar80._0_8_;
        if (auVar80._8_4_ != 1) {
          if (plVar32 == (long *)0x0) goto LAB_03d57bcc;
          lVar30 = *plVar32;
          uVar52 = (ulong)*(ushort *)(lVar30 + 0x12e);
          if (uVar52 == 0) goto LAB_03d57ba4;
          piVar56 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          goto LAB_03d57b8c;
        }
        puVar21 = (undefined8 *)func_0x072ce910(uVar22);
        plVar31 = (long *)*puVar21;
        func_0x072ce920();
        uVar35 = 0;
joined_r0x03d579ac:
        ppppplVar44 = (long *****)0x0;
        if (plVar32 != (long *)0x0) {
LAB_03d57a6c:
          lVar30 = *plVar32;
          uVar52 = (ulong)*(ushort *)(lVar30 + 0x12e);
          if (uVar52 != 0) {
            piVar56 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
            do {
              if (*(long *)(piVar56 + -2) == *(long *)PTR_DAT_0774e8c8) {
                puVar21 = (undefined8 *)(lVar30 + (long)*piVar56 * 0x10 + 0x138);
                goto LAB_03d57ac0;
              }
              uVar52 = uVar52 - 1;
              piVar56 = piVar56 + 4;
            } while (uVar52 != 0);
          }
          uVar68 = 0;
          puVar21 = (undefined8 *)func_0x03256b10(plVar32);
LAB_03d57ac0:
          (*(code *)*puVar21)(plVar32,puVar21[1]);
        }
LAB_03d57acc:
      } while (plVar31 != (long *)0x0);
    } while (((uint)uVar35 | 8) == 8);
  }
  return ppppplVar44;
  while( true ) {
    uVar52 = uVar52 - 1;
    piVar56 = piVar56 + 4;
    if (uVar52 == 0) break;
LAB_03d57b8c:
    if (*(long *)(piVar56 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar21 = (undefined8 *)(lVar30 + (long)*piVar56 * 0x10 + 0x138);
      goto LAB_03d57bc0;
    }
  }
LAB_03d57ba4:
  uVar68 = 0;
  puVar21 = (undefined8 *)func_0x03256b10(plVar32);
LAB_03d57bc0:
  (*(code *)*puVar21)(plVar32,puVar21[1]);
LAB_03d57bcc:
  func_0x03365958(uVar22);
  func_0x03280ca4(0);
  auVar85 = func_0x02f09514();
  lVar30 = auVar85._8_8_;
  plVar31 = auVar85._0_8_;
  *(undefined8 *)(lVar59 + -0x60) = 0x3d57be4;
  *(ulong *)(lVar59 + -0x58) = uVar35;
  *(undefined8 *)(lVar59 + -0x50) = uVar22;
  *(undefined8 *)(lVar59 + -0x48) = 0;
  *(long **)(lVar59 + -0x40) = plVar32;
  *(long *)(lVar59 + -0x38) = lVar47;
  if (*(long *)(lVar30 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    if (*(long *)(lVar30 + 0x38) == 0) {
      func_0x03256878(lVar30);
    }
  }
  if (plVar31 == (long *)0x0) {
    uVar22 = func_0x03280a2c(PTR_DAT_07774b08);
    uVar22 = func_0x05ac7464(uVar22,0);
    goto LAB_03d57fd8;
  }
  lVar47 = *(long *)(*(long *)(lVar30 + 0x38) + 8);
  if ((*(byte *)(lVar47 + 0x135) & 1) == 0) {
    lVar47 = func_0x0325681c(lVar47);
  }
  plVar32 = (long *)func_0x03280b90(plVar31,lVar47);
  if (plVar32 == (long *)0x0) {
    lVar47 = **(long **)(lVar30 + 0x38);
    if ((*(byte *)(lVar47 + 0x135) & 1) == 0) {
      lVar47 = func_0x0325681c(lVar47);
    }
    lVar50 = *plVar31;
    uVar52 = (ulong)*(ushort *)(lVar50 + 0x12e);
    if (uVar52 != 0) {
      piVar56 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
      do {
        if (*(long *)(piVar56 + -2) == lVar47) {
          puVar21 = (undefined8 *)(lVar50 + (long)*piVar56 * 0x10 + 0x138);
          goto LAB_03d57d98;
        }
        uVar52 = uVar52 - 1;
        piVar56 = piVar56 + 4;
      } while (uVar52 != 0);
    }
    uVar68 = 0;
    puVar21 = (undefined8 *)func_0x03256b10(plVar31);
LAB_03d57d98:
    plVar32 = (long *)(*(code *)*puVar21)(plVar31,puVar21[1]);
    puVar34 = PTR_DAT_0774e8e0;
    if (plVar32 == (long *)0x0) goto LAB_03d57fe0;
    lVar47 = *plVar32;
    uVar52 = (ulong)*(ushort *)(lVar47 + 0x12e);
    if (uVar52 != 0) {
      piVar56 = (int *)(*(long *)(lVar47 + 0xb0) + 8);
      do {
        if (*(long *)(piVar56 + -2) == *(long *)PTR_DAT_0774e8e0) {
          puVar21 = (undefined8 *)(lVar47 + (long)*piVar56 * 0x10 + 0x138);
          goto LAB_03d57e00;
        }
        uVar52 = uVar52 - 1;
        piVar56 = piVar56 + 4;
      } while (uVar52 != 0);
    }
    uVar68 = 0;
    puVar21 = (undefined8 *)func_0x03256b10(plVar32);
LAB_03d57e00:
    uVar52 = (*(code *)*puVar21)(plVar32,puVar21[1]);
    if ((uVar52 & 1) == 0) {
      plVar31 = (long *)0x0;
      uVar35 = 10;
      goto joined_r0x03d57e74;
    }
    lVar47 = *(long *)(*(long *)(lVar30 + 0x38) + 0x38);
    if ((*(byte *)(lVar47 + 0x135) & 1) == 0) {
      lVar47 = func_0x0325681c(lVar47);
    }
    lVar50 = *plVar32;
    uVar52 = (ulong)*(ushort *)(lVar50 + 0x12e);
    if (uVar52 != 0) {
      piVar56 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
      do {
        if (*(long *)(piVar56 + -2) == lVar47) {
          puVar21 = (undefined8 *)(lVar50 + (long)*piVar56 * 0x10 + 0x138);
          goto LAB_03d57eb0;
        }
        uVar52 = uVar52 - 1;
        piVar56 = piVar56 + 4;
      } while (uVar52 != 0);
    }
    uVar68 = 0;
    puVar21 = (undefined8 *)func_0x03256b10(plVar32);
LAB_03d57eb0:
    ppppplVar69 = (long *****)(*(code *)*puVar21)(plVar32,puVar21[1]);
    lVar47 = *plVar32;
    uVar52 = (ulong)*(ushort *)(lVar47 + 0x12e);
    if (uVar52 != 0) {
      piVar56 = (int *)(*(long *)(lVar47 + 0xb0) + 8);
      do {
        if (*(long *)(piVar56 + -2) == *(long *)puVar34) {
          puVar21 = (undefined8 *)(lVar47 + (long)*piVar56 * 0x10 + 0x138);
          goto LAB_03d57f0c;
        }
        uVar52 = uVar52 - 1;
        piVar56 = piVar56 + 4;
      } while (uVar52 != 0);
    }
    uVar68 = 0;
    puVar21 = (undefined8 *)func_0x03256b10(plVar32);
LAB_03d57f0c:
    uVar52 = (*(code *)*puVar21)(plVar32,puVar21[1]);
    bVar18 = (uVar52 & 1) == 0;
    plVar31 = (long *)0x0;
    ppppplVar44 = (long *****)0x0;
    if (bVar18) {
      ppppplVar44 = ppppplVar69;
    }
    uVar19 = 8;
    if (bVar18) {
      uVar19 = 10;
    }
    uVar35 = (ulong)uVar19;
    if (plVar32 == (long *)0x0) goto LAB_03d57f94;
    goto LAB_03d57f34;
  }
  lVar47 = *(long *)(*(long *)(lVar30 + 0x38) + 0x10);
  if ((*(byte *)(lVar47 + 0x135) & 1) == 0) {
    lVar47 = func_0x0325681c(lVar47);
  }
  lVar50 = *plVar32;
  uVar52 = (ulong)*(ushort *)(lVar50 + 0x12e);
  if (uVar52 != 0) {
    piVar56 = (int *)(*(long *)(lVar50 + 0xb0) + 8);
    do {
      if (*(long *)(piVar56 + -2) == lVar47) {
        puVar21 = (undefined8 *)(lVar50 + (long)*piVar56 * 0x10 + 0x138);
        goto LAB_03d57d14;
      }
      uVar52 = uVar52 - 1;
      piVar56 = piVar56 + 4;
    } while (uVar52 != 0);
  }
  uVar68 = 0;
  puVar21 = (undefined8 *)func_0x03256b10(plVar32);
LAB_03d57d14:
  iVar20 = (*(code *)*puVar21)(plVar32,puVar21[1]);
  if (iVar20 == 0) {
    ppppplVar44 = (long *****)0x0;
  }
  else {
    if (iVar20 == 1) {
      lVar59 = *(long *)(*(long *)(lVar30 + 0x38) + 8);
      if ((*(byte *)(lVar59 + 0x135) & 1) == 0) {
        lVar59 = func_0x0325681c(lVar59);
      }
      lVar47 = *plVar32;
      uVar52 = (ulong)*(ushort *)(lVar47 + 0x12e);
      if (uVar52 != 0) {
        piVar56 = (int *)(*(long *)(lVar47 + 0xb0) + 8);
        do {
          if (*(long *)(piVar56 + -2) == lVar59) {
            puVar21 = (undefined8 *)(lVar47 + (long)*piVar56 * 0x10 + 0x138);
            goto LAB_03d57e88;
          }
          uVar52 = uVar52 - 1;
          piVar56 = piVar56 + 4;
        } while (uVar52 != 0);
      }
      puVar21 = (undefined8 *)func_0x03256b10(plVar32,lVar59,0);
LAB_03d57e88:
                    /* WARNING: Could not recover jumptable at 0x03d57ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppppplVar69 = (long *****)(*(code *)*puVar21)(plVar32,0,puVar21[1]);
      return ppppplVar69;
    }
    do {
      uVar22 = func_0x05ac751c(0);
LAB_03d57fd8:
      func_0x03280b7c(uVar22,lVar30);
LAB_03d57fe0:
      func_0x03280cac();
      do {
        auVar80 = func_0x03280ca4(plVar31);
        uVar22 = auVar80._0_8_;
        if (auVar80._8_4_ != 1) {
          if (plVar32 == (long *)0x0) goto LAB_03d58094;
          lVar47 = *plVar32;
          uVar52 = (ulong)*(ushort *)(lVar47 + 0x12e);
          if (uVar52 == 0) goto LAB_03d5806c;
          piVar56 = (int *)(*(long *)(lVar47 + 0xb0) + 8);
          goto LAB_03d58054;
        }
        puVar21 = (undefined8 *)func_0x072ce910(uVar22);
        plVar31 = (long *)*puVar21;
        func_0x072ce920();
        uVar35 = 0;
joined_r0x03d57e74:
        ppppplVar44 = (long *****)0x0;
        if (plVar32 != (long *)0x0) {
LAB_03d57f34:
          lVar47 = *plVar32;
          uVar52 = (ulong)*(ushort *)(lVar47 + 0x12e);
          if (uVar52 != 0) {
            piVar56 = (int *)(*(long *)(lVar47 + 0xb0) + 8);
            do {
              if (*(long *)(piVar56 + -2) == *(long *)PTR_DAT_0774e8c8) {
                puVar21 = (undefined8 *)(lVar47 + (long)*piVar56 * 0x10 + 0x138);
                goto LAB_03d57f88;
              }
              uVar52 = uVar52 - 1;
              piVar56 = piVar56 + 4;
            } while (uVar52 != 0);
          }
          uVar68 = 0;
          puVar21 = (undefined8 *)func_0x03256b10(plVar32);
LAB_03d57f88:
          (*(code *)*puVar21)(plVar32,puVar21[1]);
        }
LAB_03d57f94:
      } while (plVar31 != (long *)0x0);
    } while (((uint)uVar35 | 8) == 8);
  }
  return ppppplVar44;
  while( true ) {
    uVar35 = uVar35 - 1;
    piVar56 = piVar56 + 4;
    if (uVar35 == 0) break;
LAB_03d588f8:
    if (*(long *)(piVar56 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar21 = (undefined8 *)(lVar30 + (long)*piVar56 * 0x10 + 0x138);
      goto LAB_03d5892c;
    }
  }
LAB_03d58910:
  puVar21 = (undefined8 *)func_0x03256b10(plVar36,*(long *)PTR_DAT_0774e8c8,0);
LAB_03d5892c:
  ppppplVar69 = (long *****)(*(code *)*puVar21)(plVar36,puVar21[1]);
LAB_03d58938:
  if (lVar59 == 0) {
    extraout_x8[6] = 0;
    extraout_x8[3] = 0;
    extraout_x8[2] = 0;
    extraout_x8[5] = 0;
    extraout_x8[4] = 0;
    extraout_x8[1] = 0;
    *extraout_x8 = 0;
  }
  else {
    if (lVar59 != 1) goto LAB_03d589dc;
    uVar75 = *(undefined8 *)(lVar66 + -0xb8);
    uVar74 = *(undefined8 *)(lVar66 + -0xc0);
    uVar22 = *(undefined8 *)(lVar66 + -0xa8);
    uVar37 = *(undefined8 *)(lVar66 + -0xb0);
    uVar79 = *(undefined8 *)(lVar66 + -200);
    uVar78 = *(undefined8 *)(lVar66 + -0xd0);
    extraout_x8[6] = *(undefined8 *)(lVar66 + -0xa0);
    extraout_x8[3] = uVar75;
    extraout_x8[2] = uVar74;
    extraout_x8[5] = uVar22;
    extraout_x8[4] = uVar37;
    extraout_x8[1] = uVar79;
    *extraout_x8 = uVar78;
  }
  return ppppplVar69;
}

