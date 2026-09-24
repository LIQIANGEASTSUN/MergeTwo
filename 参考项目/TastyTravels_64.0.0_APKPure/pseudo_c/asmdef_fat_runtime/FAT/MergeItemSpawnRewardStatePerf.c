/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MergeItemSpawnRewardStatePerf$$get_shadowPresudoPosition RVA 0x1e11fd4 =====

void FUN_01e21fd4(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x14);
  *param_1 = uVar1;
  return;
}



// ===== FAT.MergeItemSpawnRewardStatePerf$$set_shadowPresudoPosition RVA 0x1e11fe8 =====

void FUN_01e21fe8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  return;
}



// ===== FAT.MergeItemSpawnRewardStatePerf$$.ctor RVA 0x1e11ff4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e21ff4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar3;
  undefined8 uVar4;
  
  pcVar3 = (char *)(_UNK_01e22068 + 0x1e2200c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e2206c + 0x1e22020));
    *pcVar3 = '\x01';
    param_4 = extraout_r3;
  }
  puVar1 = *(undefined8 **)(**(int **)(_UNK_01e22070 + 0x1e22040) + 0x5c);
  uVar4 = *puVar1;
  uVar2 = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)(param_1 + 0x38) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined8 *)(param_1 + 0xc) = uVar4;
  func_0x0244f5a0(param_1,0,0,param_4,unaff_r4,unaff_r5);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.MergeItemSpawnRewardStatePerf$$OnEnter RVA 0x1e12074 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e22074(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  char *pcVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  uint in_fpscr;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [8];
  
  pcVar7 = (char *)(_UNK_01e22a40 + 0x1e22094);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e22a44 + 0x1e220a8));
    func_0x01384978(*(undefined4 *)(_UNK_01e22a48 + 0x1e220b4));
    func_0x01384978(*(undefined4 *)(_UNK_01e22a4c + 0x1e220c0));
    func_0x01384978(*(undefined4 *)(_UNK_01e22a50 + 0x1e220cc));
    func_0x01384978(*(undefined4 *)(_UNK_01e22a54 + 0x1e220d8));
    func_0x01384978(*(undefined4 *)(_UNK_01e22a58 + 0x1e220e4));
    func_0x01384978(*(undefined4 *)(_UNK_01e22a5c + 0x1e220f0));
    func_0x01384978(*(undefined4 *)(_UNK_01e22a60 + 0x1e220fc));
    func_0x01384978(*(undefined4 *)(_UNK_01e22a64 + 0x1e22108));
    func_0x01384978(*(undefined4 *)(_UNK_01e22a68 + 0x1e22114));
    func_0x01384978(*(undefined4 *)(_UNK_01e22a6c + 0x1e22120));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa0f3,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa0f3,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0245494c(auStack_48,0,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&stack0xffffffd0,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&stack0xffffffd0,param_1,0);
    iVar10 = *(int *)(iVar2 + 8);
    uVar12 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar2 == 0) {
      uVar6 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar10,uVar12,&stack0xffffffd0,uVar6);
    return;
  }
  FUN_01e1c2e0(param_1,0);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0244ffd4(iVar2,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar2,1,0);
  iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01e22a70 + 0x1e221cc));
  iVar10 = *(int *)(param_1 + 8);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar12 = func_0x0244fc34(iVar10,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  FUN_01de36f0(iVar2,uVar12,0);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x0244fc34(iVar2,0);
  piVar11 = *(int **)(_UNK_01e22a74 + 0x1e2223c);
  uVar12 = *(undefined4 *)(param_1 + 8);
  if (*(int *)(*piVar11 + 0x74) == 0) {
    func_0x01384ab4();
  }
  FUN_01ddbbcc(&uStack_68,uVar12,0);
  fVar1 = fStack_60;
  uVar6 = uStack_64;
  uVar12 = uStack_68;
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x34);
  piVar9 = (int *)0x0;
  if ((piVar3 != (int *)0x0) && (piVar9 = piVar3, *piVar3 != **(int **)(_UNK_01e22a78 + 0x1e22298)))
  {
    piVar9 = (int *)0x0;
  }
  if ((iVar2 == 0) || (bVar14 = false, *(int *)(iVar2 + 0x14) != 0x14)) {
    iVar2 = *(int *)(param_1 + 8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x34);
    if ((iVar2 == 0) || (bVar14 = false, *(int *)(iVar2 + 0x14) != 0x15)) {
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x34);
      if ((iVar2 == 0) || (bVar14 = false, *(int *)(iVar2 + 0x14) != 0x19)) {
        iVar2 = *(int *)(param_1 + 8);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x34);
        if ((iVar2 == 0) || (bVar14 = false, *(int *)(iVar2 + 0x14) != 0x1b)) {
          iVar2 = *(int *)(param_1 + 8);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 0x34);
          if (iVar2 == 0) {
            bVar14 = true;
          }
          else {
            bVar14 = *(int *)(iVar2 + 0x14) != 0x1c;
          }
        }
      }
    }
  }
  if (*(int *)(*piVar11 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = FUN_01dd757c(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar17 = *(undefined4 *)(iVar2 + 0x18);
  uVar13 = _UNK_01e22738;
  if (bVar14) {
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = FUN_01dd757c(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar13 = *(undefined4 *)(iVar2 + 0x1c);
  }
  if (*(int *)(*piVar11 + 0x74) == 0) {
    func_0x01384ab4();
  }
  FUN_01dd8d80(&uStack_68,uVar12,uVar6,0);
  uVar6 = uStack_64;
  uVar12 = uStack_68;
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x30);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0210cd7c(&uStack_68,iVar2,0);
  uVar15 = VectorSignedToFloat(uStack_68,(byte)(in_fpscr >> 0x16) & 3);
  uVar16 = VectorSignedToFloat(uStack_64,(byte)(in_fpscr >> 0x16) & 3);
  FUN_01ddb6d0(&uStack_68,uVar12,uVar6,uVar15,uVar16,uVar17,uVar13,0);
  FUN_01dd9c14(&uStack_68,uStack_68,uStack_64,0);
  *(undefined4 *)(param_1 + 0x20) = uStack_68;
  *(undefined4 *)(param_1 + 0x24) = uStack_64;
  FUN_01dd9c14(&uStack_68,fStack_60,uStack_5c,0);
  *(undefined4 *)(param_1 + 0x28) = uStack_68;
  *(undefined4 *)(param_1 + 0x2c) = uStack_64;
  FUN_01dd9c14(&uStack_68,uStack_58,uStack_54,0);
  uVar12 = *(undefined4 *)(param_1 + 0x20);
  uVar6 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x30) = uStack_68;
  *(undefined4 *)(param_1 + 0x34) = uStack_64;
  if (piVar9 == (int *)0x0) {
    func_0x01384bf0();
  }
  func_0x0244fdbc(piVar9,uVar12,uVar6,0);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0244fc34(iVar2,0);
  pcVar7 = (char *)(_UNK_01e22a7c + 0x1e22544);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e22a80 + 0x1e22558));
    *pcVar7 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01e22a84 + 0x1e22570);
  iVar10 = *(int *)(*piVar3 + 0x5c);
  uVar6 = *(undefined4 *)(iVar10 + 0xc);
  uVar13 = *(undefined4 *)(iVar10 + 0x10);
  uVar12 = *(undefined4 *)(iVar10 + 0x14);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x024503a4(iVar2,uVar6,uVar13,uVar12,0);
  iVar2 = *(int *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar10 = *(int *)(iVar2 + 0x34);
  iVar2 = 0;
  if (iVar10 != 0) {
    iVar2 = *(int *)(iVar10 + 0x1c);
  }
  if (iVar10 != 0 && iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x34);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar9 = *(int **)(_UNK_01e22a88 + 0x1e22888);
    piVar11 = (int *)func_0x01384ab8(*(undefined4 *)(iVar2 + 0x1c),*piVar9);
    if (piVar11 != (int *)0x0) {
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0244fc34(iVar2,0);
      pcVar7 = (char *)(_UNK_01e22a8c + 0x1e228c8);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e22a90 + 0x1e228dc));
        *pcVar7 = '\x01';
      }
      puVar4 = *(undefined4 **)(*piVar3 + 0x5c);
      uVar6 = *puVar4;
      uVar12 = puVar4[1];
      uVar13 = puVar4[2];
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x024503a4(iVar2,uVar6,uVar12,uVar13,0);
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar12 = func_0x0244fc34(iVar2,0);
      uVar12 = func_0x02cf3d80(uVar12,0x3f800000,*(undefined4 *)(param_1 + 0x38),0);
      uVar12 = func_0x0309ef60(uVar12,fVar1,**(undefined4 **)(_UNK_01e22a94 + 0x1e22958));
      uVar12 = func_0x0309f0f8(uVar12,4,**(undefined4 **)(_UNK_01e22a98 + 0x1e22968));
      uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01e22a9c + 0x1e22980));
      func_0x02ce3d80(uVar6,param_1,**(undefined4 **)(_UNK_01e22aa0 + 0x1e2299c),0);
      uVar12 = func_0x0309ead4(uVar12,uVar6,**(undefined4 **)(_UNK_01e22aa4 + 0x1e229b4));
      *(undefined4 *)(param_1 + 0x1c) = uVar12;
      iVar10 = *piVar9;
      uVar6 = *(undefined4 *)(param_1 + 8);
      *(float *)(param_1 + 0x3c) = fVar1 + *(float *)(param_1 + 0x3c);
      iVar2 = *piVar11;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar5 != 0) {
        piVar3 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar3[-1] == iVar10) {
            puVar4 = (undefined4 *)(iVar2 + *piVar3 * 8 + 0xc0);
            goto LAB_01e22a24;
          }
          uVar5 = uVar5 - 1;
          piVar3 = piVar3 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar11,iVar10,0);
LAB_01e22a24:
      (*(code *)*puVar4)(piVar11,uVar6,uVar12,puVar4[1]);
    }
  }
  else {
    if (fVar1 <= 0.0) {
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar12 = func_0x0244fc34(iVar2,0);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e22ac8 + 0x1e22778));
        *pcVar7 = '\x01';
      }
      iVar2 = *(int *)(*piVar3 + 0x5c);
      uVar12 = func_0x02cf4a84(uVar12,*(float *)(iVar2 + 0xc) * 0.25,*(float *)(iVar2 + 0x10) * 0.25
                               ,*(float *)(iVar2 + 0x14) * 0.25,*(undefined4 *)(param_1 + 0x38),10,
                               0x3f800000,0);
      uVar12 = func_0x0309f0f8(uVar12,0x1b,**(undefined4 **)(_UNK_01e22acc + 0x1e227d8));
      uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01e22ad0 + 0x1e227f0));
      func_0x02ce3d80(uVar6,param_1,**(undefined4 **)(_UNK_01e22ad4 + 0x1e2280c),0);
      puVar4 = *(undefined4 **)(_UNK_01e22ad8 + 0x1e22820);
    }
    else {
      iVar2 = *(int *)(param_1 + 8);
      *(float *)(param_1 + 0x3c) = fVar1 + *(float *)(param_1 + 0x3c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0244fc34(iVar2,0);
      pcVar8 = (char *)(_UNK_01e22aa8 + 0x1e22618);
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e22aac + 0x1e2262c));
        *pcVar8 = '\x01';
      }
      puVar4 = *(undefined4 **)(*piVar3 + 0x5c);
      uVar12 = *puVar4;
      uVar6 = puVar4[1];
      uVar13 = puVar4[2];
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x024503a4(iVar2,uVar12,uVar6,uVar13,0);
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar12 = func_0x0244fc34(iVar2,0);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e22ab0 + 0x1e226a4));
        *pcVar7 = '\x01';
      }
      iVar2 = *(int *)(*piVar3 + 0x5c);
      uVar12 = func_0x02cf3bbc(uVar12,*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),
                               *(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(param_1 + 0x38),0);
      uVar12 = func_0x0309ef60(uVar12,fVar1,**(undefined4 **)(_UNK_01e22ab4 + 0x1e226e0));
      uVar12 = func_0x0309f0f8(uVar12,0x1b,**(undefined4 **)(_UNK_01e22ab8 + 0x1e226f0));
      uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01e22abc + 0x1e22708));
      func_0x02ce3d80(uVar6,param_1,**(undefined4 **)(_UNK_01e22ac0 + 0x1e22724),0);
      puVar4 = *(undefined4 **)(&UNK_01e22738 + _UNK_01e22ac4);
    }
    uVar12 = func_0x0309ead4(uVar12,uVar6,*puVar4);
    *(undefined4 *)(param_1 + 0x1c) = uVar12;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x022a0b64(iVar2,0);
  return;
}



// ===== FAT.MergeItemSpawnRewardStatePerf$$OnLeave RVA 0x1e12adc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e22adc(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar7;
  int *piVar8;
  int extraout_r3;
  int extraout_r3_00;
  int *piVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  
  iVar1 = func_0x0229f06c(0xa0f5,0);
  if (iVar1 == 0) {
    FUN_01e1c32c(param_1,0);
    iVar1 = func_0x02cebb18(*(undefined4 *)(param_1 + 0x1c),0);
    if (iVar1 != 0) {
      func_0x02ce9e90(*(undefined4 *)(param_1 + 0x1c),1,0);
    }
    iVar1 = *(int *)(param_1 + 8);
    *(undefined1 *)(param_1 + 0x18) = 1;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0244fc34(iVar1,0);
    pcVar12 = (char *)(_UNK_01e22c38 + 0x1e22b9c);
    if (*pcVar12 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e22c3c + 0x1e22bb0));
      *pcVar12 = '\x01';
    }
    iVar10 = *(int *)(**(int **)(_UNK_01e22c40 + 0x1e22bc8) + 0x5c);
    uVar13 = *(undefined4 *)(iVar10 + 0xc);
    uVar7 = *(undefined4 *)(iVar10 + 0x10);
    uVar15 = *(undefined4 *)(iVar10 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x024503a4(iVar1,uVar13,uVar7,uVar15);
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x022a0ecc(iVar1,0);
    param_1 = *(int *)(param_1 + 8);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0xa0e9,0);
    if (iVar1 == 0) {
      param_1 = *(int *)(param_1 + 0x20);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0229f06c(0xa0a5,0);
      if (iVar1 == 0) {
        pcVar12 = (char *)(_UNK_01e18a0c + 0x1e188fc);
        if (*pcVar12 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e18a10 + 0x1e18910));
          func_0x01384978(*(undefined4 *)(_UNK_01e18a14 + 0x1e1891c));
          func_0x01384978(*(undefined4 *)(_UNK_01e18a18 + 0x1e18928));
          *pcVar12 = '\x01';
        }
        iVar1 = func_0x0229f06c(0x163d,0);
        if (iVar1 != 0) {
          iVar1 = func_0x0229f13c(0x163d,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          uStack_38 = 0;
          uStack_28 = 0;
          func_0x0245494c(&uStack_50,0,0x1d,0);
          uStack_38 = uStack_50;
          iStack_34 = uStack_4c;
          if (*(int *)(iVar1 + 0x10) != 0) {
            func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
          }
          func_0x01485278(&uStack_38,param_1,0);
          func_0x01485238(&uStack_38,0x1d,0);
          iVar10 = *(int *)(iVar1 + 8);
          uVar13 = *(undefined4 *)(iVar1 + 0xc);
          iVar1 = *(int *)(iVar1 + 0x10);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          uVar7 = 3;
          if (iVar1 == 0) {
            uVar7 = 2;
          }
          uStack_58 = 0;
          uStack_54 = 0;
          uVar2 = func_0x0245495c(iVar10,uVar13,&uStack_38,uVar7);
          return uVar2;
        }
        iVar1 = *(int *)(param_1 + 0x20);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x03dcf4b4(iVar1,0x1d,**(undefined4 **)(_UNK_01e18a1c + 0x1e18998));
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = *(int *)(param_1 + 0x20);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x03dcf1b0(iVar1,0x1d,**(undefined4 **)(_UNK_01e18a20 + 0x1e189c8));
        func_0x01e1a604(param_1,0x1d,uVar13);
        iVar1 = *(int *)(param_1 + 0x20);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iStack_34 = **(int **)(_UNK_01e18a24 + 0x1e18a00);
        uStack_28 = 0x1d;
        if (*(int *)(iVar1 + 8) != 0) {
          piVar9 = *(int **)(iVar1 + 0x20);
          iStack_30 = iVar1;
          if (piVar9 == (int *)0x0) {
            uVar2 = func_0x04821a00(&uStack_28,0);
          }
          else {
            iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
              iVar1 = func_0x02457d84(iVar1);
            }
            iVar10 = *piVar9;
            uVar2 = (uint)*(ushort *)(iVar10 + 0xb6);
            if (uVar2 != 0) {
              piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar1) {
                  puVar3 = (undefined4 *)(iVar10 + *piVar8 * 8 + 200);
                  goto LAB_03dd0a60;
                }
                uVar2 = uVar2 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar1,1);
LAB_03dd0a60:
            uVar2 = (*(code *)*puVar3)(piVar9,0x1d,puVar3[1]);
            iVar1 = iStack_30;
          }
          uVar14 = *(uint *)(iVar1 + 8);
          uVar11 = uVar14;
          if (uVar14 == 0) {
            func_0x02457d50();
            uVar11 = *(uint *)(iStack_30 + 8);
            if (uVar11 == 0) {
              uVar16 = func_0x02457d50();
              uVar13 = (undefined4)((ulonglong)uVar16 >> 0x20);
              iVar1 = (int)uVar16;
              uStack_54 = 0;
              if (*(int *)(iVar1 + 8) != 0) {
                piVar9 = *(int **)(iVar1 + 0x20);
                uStack_60 = uVar13;
                uStack_5c = uVar2;
                uStack_58 = uVar11;
                uStack_50 = uVar14;
                if (piVar9 == (int *)0x0) {
                  uVar2 = func_0x04821a00(&uStack_60,0);
                }
                else {
                  iVar10 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
                    iVar10 = func_0x02457d84(iVar10);
                  }
                  iVar4 = *piVar9;
                  uVar2 = (uint)*(ushort *)(iVar4 + 0xb6);
                  if (uVar2 != 0) {
                    piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
                    do {
                      if (piVar8[-1] == iVar10) {
                        puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 200);
                        goto LAB_03dd0dc4;
                      }
                      uVar2 = uVar2 - 1;
                      piVar8 = piVar8 + 2;
                    } while (uVar2 != 0);
                  }
                  puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar10,1);
LAB_03dd0dc4:
                  uVar2 = (*(code *)*puVar3)(piVar9,uVar13,puVar3[1]);
                }
                iVar4 = *(int *)(iVar1 + 8);
                iVar10 = iVar4;
                if (iVar4 == 0) {
                  func_0x02457d50();
                  iVar10 = *(int *)(iVar1 + 8);
                  if (iVar10 == 0) {
                    uVar16 = func_0x02457d50();
                    uVar2 = func_0x03dcfa64((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),
                                            *(undefined4 *)
                                             (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) +
                                             0x84));
                    if ((int)uVar2 < 0) {
                      uVar13 = 0;
                    }
                    else {
                      iVar1 = *(int *)((int)uVar16 + 0xc);
                      if (iVar1 == 0) {
                        func_0x02457d50();
                      }
                      if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                        func_0x02457d5c();
                      }
                      uVar13 = *(undefined4 *)(iVar1 + uVar2 * 0x10 + 0x1c);
                    }
                    *extraout_r2_00 = uVar13;
                    return ~uVar2 >> 0x1f;
                  }
                }
                func_0x02457e94(uVar2 & 0x7fffffff,*(undefined4 *)(iVar4 + 0xc));
                if (*(uint *)(iVar10 + 0xc) <= extraout_r1_00) {
                  func_0x02457d5c();
                }
                uVar11 = *(int *)(iVar10 + extraout_r1_00 * 4 + 0x10) - 1;
                if (-1 < (int)uVar11) {
                  uVar14 = 0xffffffff;
                  do {
                    uVar5 = uVar11;
                    iVar10 = *(int *)(iVar1 + 0xc);
                    if (iVar10 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar10 + 0xc) <= uVar5) {
                      func_0x02457d5c();
                    }
                    uVar13 = uStack_60;
                    iVar10 = iVar10 + uVar5 * 0x10;
                    if (*(uint *)(iVar10 + 0x10) == (uVar2 & 0x7fffffff)) {
                      piVar9 = *(int **)(iVar1 + 0x20);
                      if (piVar9 == (int *)0x0) {
                        piVar9 = (int *)func_0x02ecb070(*(undefined4 *)
                                                         (*(int *)(*(int *)(extraout_r3 + 0x10) +
                                                                  0x60) + 0xc));
                        uVar13 = uStack_60;
                        uVar7 = *(undefined4 *)(iVar10 + 0x18);
                        if (piVar9 == (int *)0x0) {
                          func_0x02457d50(0,uVar7);
                        }
                        iVar4 = (**(code **)(*piVar9 + 0x100))
                                          (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
                      }
                      else {
                        uVar7 = *(undefined4 *)(iVar10 + 0x18);
                        if (piVar9 == (int *)0x0) {
                          func_0x02457d50();
                        }
                        iVar4 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                        if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
                          iVar4 = func_0x02457d84(iVar4);
                        }
                        iVar6 = *piVar9;
                        uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
                        if (uVar11 != 0) {
                          piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                          do {
                            if (piVar8[-1] == iVar4) {
                              puVar3 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
                              goto LAB_03dd0f6c;
                            }
                            uVar11 = uVar11 - 1;
                            piVar8 = piVar8 + 2;
                          } while (uVar11 != 0);
                        }
                        puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar4,0);
LAB_03dd0f6c:
                        iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
                      }
                      if (iVar4 != 0) {
                        if ((int)uVar14 < 0) {
                          iVar4 = *(int *)(iVar1 + 8);
                          iVar6 = *(int *)(iVar10 + 0x14);
                          if (iVar4 == 0) {
                            func_0x02457d50();
                          }
                          if (*(uint *)(iVar4 + 0xc) <= extraout_r1_00) {
                            func_0x02457d5c();
                          }
                          *(int *)(iVar4 + extraout_r1_00 * 4 + 0x10) = iVar6 + 1;
                        }
                        else {
                          iVar4 = *(int *)(iVar1 + 0xc);
                          if (iVar4 == 0) {
                            func_0x02457d50();
                          }
                          uVar13 = *(undefined4 *)(iVar10 + 0x14);
                          if (*(uint *)(iVar4 + 0xc) <= uVar14) {
                            func_0x02457d5c();
                          }
                          *(undefined4 *)(iVar4 + uVar14 * 0x10 + 0x14) = uVar13;
                        }
                        *extraout_r2 = *(undefined4 *)(iVar10 + 0x1c);
                        uVar13 = *(undefined4 *)(iVar1 + 0x14);
                        *(undefined4 *)(iVar10 + 0x1c) = 0;
                        iVar6 = *(int *)(iVar1 + 0x1c);
                        iVar4 = *(int *)(iVar1 + 0x18);
                        *(undefined4 *)(iVar10 + 0x14) = uVar13;
                        *(uint *)(iVar10 + 0x10) = 0xffffffff;
                        *(int *)(iVar1 + 0x1c) = iVar6 + 1;
                        *(uint *)(iVar1 + 0x14) = uVar5;
                        *(int *)(iVar1 + 0x18) = iVar4 + 1;
                        return 1;
                      }
                    }
                    uVar11 = *(uint *)(iVar10 + 0x14);
                    uVar14 = uVar5;
                  } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
                }
              }
              *extraout_r2 = 0;
              return 0;
            }
          }
          uStack_2c = uVar2 & 0x7fffffff;
          func_0x02457e94(uStack_2c,*(undefined4 *)(uVar14 + 0xc));
          if (*(uint *)(uVar11 + 0xc) <= extraout_r1) {
            func_0x02457d5c();
          }
          uVar2 = *(int *)(uVar11 + extraout_r1 * 4 + 0x10) - 1;
          if (-1 < (int)uVar2) {
            iVar1 = iStack_30;
            uVar11 = 0xffffffff;
            uStack_38 = extraout_r1;
            do {
              uVar14 = uVar2;
              iVar10 = *(int *)(iVar1 + 0xc);
              if (iVar10 == 0) {
                func_0x02457d50();
              }
              if (*(uint *)(iVar10 + 0xc) <= uVar14) {
                func_0x02457d5c();
              }
              uVar13 = uStack_28;
              iVar10 = iVar10 + uVar14 * 0x10;
              if (*(uint *)(iVar10 + 0x10) == uStack_2c) {
                piVar9 = *(int **)(iVar1 + 0x20);
                if (piVar9 == (int *)0x0) {
                  piVar9 = (int *)func_0x02ecb070(*(undefined4 *)
                                                   (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) +
                                                   0xc));
                  uVar13 = uStack_28;
                  uVar7 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar9 == (int *)0x0) {
                    func_0x02457d50(0,uVar7);
                  }
                  iVar4 = (**(code **)(*piVar9 + 0x100))
                                    (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
                }
                else {
                  uVar7 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar9 == (int *)0x0) {
                    func_0x02457d50();
                  }
                  iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                    iVar1 = func_0x02457d84(iVar1);
                  }
                  iVar4 = *piVar9;
                  uVar2 = (uint)*(ushort *)(iVar4 + 0xb6);
                  if (uVar2 != 0) {
                    piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
                    do {
                      if (piVar8[-1] == iVar1) {
                        puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
                        goto LAB_03dd0c0c;
                      }
                      uVar2 = uVar2 - 1;
                      piVar8 = piVar8 + 2;
                    } while (uVar2 != 0);
                  }
                  puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar1,0);
LAB_03dd0c0c:
                  iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
                }
                iVar1 = iStack_30;
                if (iVar4 != 0) {
                  if ((int)uVar11 < 0) {
                    iVar1 = *(int *)(iStack_30 + 8);
                    iVar4 = *(int *)(iVar10 + 0x14);
                    if (iVar1 == 0) {
                      func_0x02457d50();
                    }
                    uVar2 = uStack_38;
                    if (*(uint *)(iVar1 + 0xc) <= uStack_38) {
                      func_0x02457d5c();
                    }
                    *(int *)(iVar1 + uVar2 * 4 + 0x10) = iVar4 + 1;
                  }
                  else {
                    iVar1 = *(int *)(iStack_30 + 0xc);
                    if (iVar1 == 0) {
                      func_0x02457d50();
                    }
                    uVar13 = *(undefined4 *)(iVar10 + 0x14);
                    if (*(uint *)(iVar1 + 0xc) <= uVar11) {
                      func_0x02457d5c();
                    }
                    *(undefined4 *)(iVar1 + uVar11 * 0x10 + 0x14) = uVar13;
                  }
                  uVar13 = *(undefined4 *)(iStack_30 + 0x14);
                  *(undefined4 *)(iVar10 + 0x1c) = 0;
                  iVar1 = *(int *)(iStack_30 + 0x18);
                  iVar4 = *(int *)(iStack_30 + 0x1c);
                  *(uint *)(iVar10 + 0x10) = 0xffffffff;
                  *(undefined4 *)(iVar10 + 0x14) = uVar13;
                  *(uint *)(iStack_30 + 0x14) = uVar14;
                  *(int *)(iStack_30 + 0x18) = iVar1 + 1;
                  *(int *)(iStack_30 + 0x1c) = iVar4 + 1;
                  return 1;
                }
              }
              uVar2 = *(uint *)(iVar10 + 0x14);
              uVar11 = uVar14;
            } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
          }
        }
        return 0;
      }
      iVar1 = func_0x0229f13c(0xa0a5,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0xa0e9);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa0f5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&stack0xffffffb8,0,0);
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&iStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&iStack_30,param_1,0);
  iVar10 = *(int *)(iVar1 + 8);
  uVar13 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar1 == 0) {
    uVar7 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  uVar2 = func_0x0245495c(iVar10,uVar13,&iStack_30,uVar7);
  return uVar2;
}



// ===== FAT.MergeItemSpawnRewardStatePerf$$Update RVA 0x1e12c44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e22c44(int param_1,undefined4 param_2)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  
  pcVar6 = (char *)(_UNK_01e22ed8 + 0x1e22c68);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e22edc + 0x1e22c7c));
    func_0x01384978(*(undefined4 *)(_UNK_01e22ee0 + 0x1e22c88));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa0f6,0);
  if (iVar1 == 0) {
    fVar15 = *(float *)(param_1 + 0x3c);
    if (0.0 < fVar15) {
      fVar2 = (float)func_0x024503b4(0);
      fVar14 = *(float *)(param_1 + 0x38);
      fVar15 = fVar15 - fVar2;
      *(float *)(param_1 + 0x3c) = fVar15;
      if (fVar15 <= fVar14) {
        fVar2 = _UNK_01e22ed4;
        if (((fVar14 != 0.0) &&
            (fVar15 = (fVar15 - fVar14) / (_UNK_01e22ed4 - fVar14), 0.0 <= fVar15)) &&
           (fVar2 = fVar15, 1.0 < fVar15)) {
          fVar2 = 1.0;
        }
        uVar8 = *(undefined4 *)(param_1 + 0x20);
        uVar9 = *(undefined4 *)(param_1 + 0x24);
        uVar7 = *(undefined4 *)(param_1 + 0x28);
        uVar4 = *(undefined4 *)(param_1 + 0x2c);
        uVar11 = *(undefined4 *)(param_1 + 0x30);
        uVar12 = *(undefined4 *)(param_1 + 0x34);
        if (*(int *)(**(int **)(_UNK_01e22ee4 + 0x1e22d64) + 0x74) == 0) {
          func_0x01384ab4();
        }
        FUN_01dd9fb4(&fStack_5c,fVar2,uVar8,uVar9,uVar7,uVar4,uVar11,uVar12,0);
        fVar14 = fStack_58;
        fVar15 = fStack_5c;
        iVar1 = *(int *)(param_1 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        piVar3 = (int *)func_0x0244fc34(iVar1,0);
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
          piVar3 = (int *)0x0;
        }
        else {
          piVar10 = *(int **)(_UNK_01e22ee8 + 0x1e22de0);
          if (*piVar3 != *piVar10) {
            func_0x01384bf0();
          }
          if (*piVar3 != *piVar10) {
            piVar3 = (int *)0x0;
          }
        }
        func_0x0244fdbc(piVar3,fVar15,fVar14,0);
        fVar15 = _UNK_01e22ed4;
        iVar1 = *(int *)(param_1 + 8);
        fVar16 = *(float *)(param_1 + 0x24);
        fVar13 = *(float *)(param_1 + 0x34);
        if (fVar2 < 0.0) {
          fVar2 = _UNK_01e22ed4;
        }
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0244fc34(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd3c(&fStack_5c,iVar1,0);
        *(float *)(param_1 + 0xc) = fStack_5c + fVar15;
        *(float *)(param_1 + 0x14) = fStack_54 + fVar15;
        *(float *)(param_1 + 0x10) = ((fVar16 + fVar2 * (fVar13 - fVar16)) - fVar14) + fStack_58;
      }
    }
    uVar7 = 0xe;
    if (*(char *)(param_1 + 0x18) == '\0') {
      uVar7 = FUN_01e1c378(param_1,param_2,0);
    }
    return uVar7;
  }
  iVar1 = func_0x0229f13c(0xa0f6,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0245494c(&stack0xffffffb0,0,param_2,0);
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&stack0xffffffc8,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&stack0xffffffc8,param_1,0);
  func_0x01485258(&stack0xffffffc8,param_2,0);
  iVar5 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  fStack_58 = 0.0;
  fStack_54 = 0.0;
  func_0x0245495c(iVar5,uVar7,&stack0xffffffc8,uVar4);
  uVar7 = func_0x0245498c(&stack0xffffffc8,0,0);
  return uVar7;
}



// ===== FAT.MergeItemSpawnRewardStatePerf$$_OnTweenFinished RVA 0x1e12eec =====

void FUN_01e22eec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xa0f4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa0f4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0229f748(iVar1,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x022a06d0(iVar1,0,0);
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



// ===== FAT.MergeItemSpawnRewardStatePerf$$<>iFixBaseProxy_OnEnter RVA 0x1e12f88 =====

void FUN_01e22f88(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x168b,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x168b,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.MergeItemSpawnRewardStatePerf$$<>iFixBaseProxy_OnLeave RVA 0x1e12f90 =====

void FUN_01e22f90(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x1688,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1688,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.MergeItemSpawnRewardStatePerf$$<>iFixBaseProxy_Update RVA 0x1e12f98 =====

undefined4 FUN_01e22f98(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = func_0x0229f06c(0xa0b3,0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa0b3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485258(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    uVar4 = func_0x0245498c(&uStack_38,0,0);
    return uVar4;
  }
  return 0;
}


