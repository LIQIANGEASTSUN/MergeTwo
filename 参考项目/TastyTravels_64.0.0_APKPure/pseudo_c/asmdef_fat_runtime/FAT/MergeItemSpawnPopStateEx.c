/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MergeItemSpawnPopStateEx$$get_shadowPresudoPosition RVA 0x1e0faf8 =====

void FUN_01e1faf8(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x20);
  *param_1 = uVar1;
  return;
}



// ===== FAT.MergeItemSpawnPopStateEx$$set_shadowPresudoPosition RVA 0x1e0fb0c =====

void FUN_01e1fb0c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 0x20) = param_4;
  return;
}



// ===== FAT.MergeItemSpawnPopStateEx$$.ctor RVA 0x1e0fb18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1fb18(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar2;
  undefined8 uVar3;
  
  pcVar2 = (char *)(_UNK_01e1fb80 + 0x1e1fb30);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1fb84 + 0x1e1fb44));
    *pcVar2 = '\x01';
    param_4 = extraout_r3;
  }
  puVar1 = *(undefined8 **)(**(int **)(_UNK_01e1fb88 + 0x1e1fb60) + 0x5c);
  uVar3 = *puVar1;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(puVar1 + 1);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  func_0x0244f5a0(param_1,0,0,param_4,unaff_r4,unaff_r5);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.MergeItemSpawnPopStateEx$$OnEnter RVA 0x1e0fb8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1fb8c(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint in_fpscr;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  pcVar7 = (char *)(_UNK_01e20594 + 0x1e1fbac);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e20598 + 0x1e1fbc0));
    func_0x01384978(*(undefined4 *)(_UNK_01e2059c + 0x1e1fbcc));
    func_0x01384978(*(undefined4 *)(_UNK_01e205a0 + 0x1e1fbd8));
    func_0x01384978(*(undefined4 *)(_UNK_01e205a4 + 0x1e1fbe4));
    func_0x01384978(*(undefined4 *)(_UNK_01e205a8 + 0x1e1fbf0));
    func_0x01384978(*(undefined4 *)(_UNK_01e205ac + 0x1e1fbfc));
    func_0x01384978(*(undefined4 *)(_UNK_01e205b0 + 0x1e1fc08));
    func_0x01384978(*(undefined4 *)(_UNK_01e205b4 + 0x1e1fc14));
    func_0x01384978(*(undefined4 *)(_UNK_01e205b8 + 0x1e1fc20));
    func_0x01384978(*(undefined4 *)(_UNK_01e205bc + 0x1e1fc2c));
    func_0x01384978(*(undefined4 *)(_UNK_01e205c0 + 0x1e1fc38));
    func_0x01384978(*(undefined4 *)(_UNK_01e205c4 + 0x1e1fc44));
    func_0x01384978(*(undefined4 *)(_UNK_01e205c8 + 0x1e1fc50));
    func_0x01384978(*(undefined4 *)(_UNK_01e205cc + 0x1e1fc5c));
    func_0x01384978(*(undefined4 *)(_UNK_01e205d0 + 0x1e1fc68));
    func_0x01384978(*(undefined4 *)(_UNK_01e205d4 + 0x1e1fc74));
    func_0x01384978(*(undefined4 *)(_UNK_01e205d8 + 0x1e1fc80));
    func_0x01384978(*(undefined4 *)(_UNK_01e205dc + 0x1e1fc8c));
    func_0x01384978(*(undefined4 *)(_UNK_01e205e0 + 0x1e1fc98));
    func_0x01384978(*(undefined4 *)(_UNK_01e205e4 + 0x1e1fca4));
    func_0x01384978(*(undefined4 *)(_UNK_01e205e8 + 0x1e1fcb0));
    func_0x01384978(*(undefined4 *)(_UNK_01e205ec + 0x1e1fcbc));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa0d8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa0d8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0245494c(&stack0xffffffb8,0,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&stack0xffffffd0,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&stack0xffffffd0,param_1,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar9,uVar10,&stack0xffffffd0,uVar6);
    return;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01e205f0 + 0x1e1fd20));
  func_0x0244f5a0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(int *)(iVar1 + 8) = param_1;
  FUN_01e1c2e0(param_1,0);
  iVar9 = *(int *)(param_1 + 8);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar9 = func_0x0244ffd4(iVar9,0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar9,1,0);
  iVar9 = func_0x03668dfc(**(undefined4 **)(_UNK_01e205f4 + 0x1e1fd94));
  iVar8 = *(int *)(param_1 + 8);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar10 = func_0x0244fc34(iVar8,0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  FUN_01de36f0(iVar9,uVar10,0);
  iVar9 = *(int *)(param_1 + 8);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x0244fc34(iVar9,0);
  piVar3 = (int *)0x0;
  if ((piVar2 != (int *)0x0) && (piVar3 = piVar2, *piVar2 != **(int **)(_UNK_01e205f8 + 0x1e1fe0c)))
  {
    piVar3 = (int *)0x0;
  }
  iVar9 = *(int *)(**(int **)(_UNK_01e205fc + 0x1e1fe28) + 0x74);
  *(int **)(iVar1 + 0x28) = piVar3;
  if (iVar9 == 0) {
    func_0x01384ab4();
  }
  iVar9 = FUN_01dd757c(0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar10 = *(undefined4 *)(iVar9 + 0x18);
  iVar9 = FUN_01dd757c(0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(param_1 + 8);
  uVar6 = *(undefined4 *)(iVar9 + 0x1c);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(iVar8 + 0x34);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(iVar9 + 8);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x0210cd7c(&uStack_90,iVar9,0);
  uVar17 = VectorSignedToFloat(uStack_90,(byte)(in_fpscr >> 0x16) & 3);
  iVar9 = *(int *)(param_1 + 8);
  uVar15 = VectorSignedToFloat(uStack_8c,(byte)(in_fpscr >> 0x16) & 3);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(iVar9 + 0x30);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x0210cd7c(&uStack_90,iVar9,0);
  uVar11 = VectorSignedToFloat(uStack_90,(byte)(in_fpscr >> 0x16) & 3);
  uVar12 = VectorSignedToFloat(uStack_8c,(byte)(in_fpscr >> 0x16) & 3);
  FUN_01ddb6d0(&uStack_90,uVar17,uVar15,uVar11,uVar12,uVar10,uVar6,0);
  uVar6 = uStack_8c;
  uVar10 = uStack_90;
  iVar9 = *(int *)(iVar1 + 0x28);
  *(undefined4 *)(iVar1 + 0x10) = uStack_90;
  *(undefined4 *)(iVar1 + 0x14) = uStack_8c;
  *(undefined4 *)(iVar1 + 0x18) = uStack_88;
  *(undefined4 *)(iVar1 + 0x1c) = uStack_84;
  *(undefined4 *)(iVar1 + 0x20) = uStack_80;
  *(undefined4 *)(iVar1 + 0x24) = uStack_7c;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fdbc(iVar9,uVar10,uVar6,0);
  FUN_01dd9c14(&uStack_90,*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14),0);
  *(undefined4 *)(iVar1 + 0x10) = uStack_90;
  *(undefined4 *)(iVar1 + 0x14) = uStack_8c;
  FUN_01dd9c14(&uStack_90,*(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(iVar1 + 0x1c),0);
  *(undefined4 *)(iVar1 + 0x18) = uStack_90;
  *(undefined4 *)(iVar1 + 0x1c) = uStack_8c;
  FUN_01dd9c14(&uStack_90,*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x24),0);
  *(undefined4 *)(iVar1 + 0x20) = uStack_90;
  *(undefined4 *)(iVar1 + 0x24) = uStack_8c;
  FUN_01dd9c14(&uStack_90,uStack_78,uStack_74,0);
  iVar9 = FUN_01dd757c(0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  fVar20 = *(float *)(iVar1 + 0x10);
  fVar22 = *(float *)(iVar1 + 0x14);
  fVar21 = *(float *)(iVar1 + 0x20);
  fVar14 = *(float *)(iVar1 + 0x24);
  pcVar7 = (char *)(_UNK_01e20600 + 0x1e20050);
  fVar13 = *(float *)(iVar9 + 8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e20604 + 0x1e20068));
    *pcVar7 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01e20608 + 0x1e2007c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar9 = FUN_01dd757c(0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  fVar19 = *(float *)(iVar9 + 0xc);
  iVar9 = FUN_01dd757c(0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  fVar16 = *(float *)(iVar9 + 0x10);
  iVar9 = FUN_01dd757c(0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  fVar18 = *(float *)(iVar9 + 0x14);
  iVar9 = FUN_01dd757c(0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar10 = *(undefined4 *)(iVar9 + 0x20);
  iVar9 = FUN_01dd757c(0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar6 = *(undefined4 *)(iVar9 + 0x24);
  iVar9 = FUN_01dd757c(0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  fVar14 = fVar14 - fVar22;
  iVar8 = *(int *)(param_1 + 8);
  uVar15 = *(undefined4 *)(iVar9 + 0x28);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  fVar21 = fVar21 - fVar20;
  iVar9 = func_0x0244fc34(iVar8,0);
  pcVar7 = (char *)(_UNK_01e2060c + 0x1e20184);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e20610 + 0x1e20198));
    *pcVar7 = '\x01';
  }
  puVar4 = *(undefined4 **)(**(int **)(_UNK_01e20614 + 0x1e201b4) + 0x5c);
  uVar17 = *puVar4;
  uVar11 = puVar4[1];
  uVar12 = puVar4[2];
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  fVar20 = _UNK_01e2058c;
  func_0x024503a4(iVar9,uVar17,uVar11,uVar12,0);
  iVar9 = *(int *)(param_1 + 8);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(iVar9 + 0x34);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  fVar16 = fVar16 + (SQRT(fVar14 * fVar14 + fVar21 * fVar21) / fVar20) * fVar19;
  if (*(int *)(iVar9 + 0x14) != 0x10) {
    iVar9 = *(int *)(param_1 + 8);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar9 + 0x34);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    fVar14 = _UNK_01e20590;
    if (*(int *)(iVar9 + 0x14) != 0x13) goto LAB_01e20300;
  }
  iVar9 = *(int *)(param_1 + 8);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x022a20f4(iVar9,0);
  piVar3 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    uVar5 = (uint)*(byte *)(**(int **)(_UNK_01e20618 + 0x1e2027c) + 0xb8);
    if ((uVar5 <= *(byte *)(*piVar2 + 0xb8)) &&
       (piVar3 = piVar2,
       *(int *)(*(int *)(*piVar2 + 100) + uVar5 * 4 + -4) != **(int **)(_UNK_01e20618 + 0x1e2027c)))
    {
      piVar3 = (int *)0x0;
    }
  }
  if (*(int *)(**(int **)(_UNK_01e2061c + 0x1e202b4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar9 = func_0x0145b1cc(piVar3,0,0);
  if (iVar9 == 0) {
    fVar14 = 0.5;
  }
  else {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    fVar14 = (float)piVar3[4];
  }
  fVar13 = fVar13 + fVar14;
LAB_01e20300:
  if (*(int *)(**(int **)(_UNK_01e20620 + 0x1e20310) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar17 = func_0x02ce71fc(0);
  func_0x02ce9384(uVar17,fVar13,0);
  puVar4 = *(undefined4 **)(_UNK_01e20624 + 0x1e20348);
  uVar11 = func_0x01384be4(*puVar4);
  func_0x02ce3d80(uVar11,iVar1,**(undefined4 **)(_UNK_01e20628 + 0x1e20364),0);
  func_0x02cfd430(uVar17,uVar11,0);
  uVar11 = func_0x01384be4(**(undefined4 **)(_UNK_01e2062c + 0x1e20388));
  func_0x03ca4c60(uVar11,iVar1,**(undefined4 **)(_UNK_01e20630 + 0x1e203a4),0);
  uVar12 = func_0x01384be4(**(undefined4 **)(_UNK_01e20634 + 0x1e203b8));
  func_0x03ca5f50(uVar12,iVar1,**(undefined4 **)(_UNK_01e20638 + 0x1e203d4),0);
  uVar11 = func_0x02ce5068(uVar11,uVar12,0x3f800000,fVar16,0);
  uVar10 = func_0x0309f0f8(uVar11,uVar10,**(undefined4 **)(_UNK_01e2063c + 0x1e20400));
  uVar11 = func_0x01384be4(*puVar4);
  func_0x02ce3d80(uVar11,iVar1,**(undefined4 **)(_UNK_01e20640 + 0x1e2042c),0);
  uVar10 = func_0x0309eb60(uVar10,uVar11,**(undefined4 **)(_UNK_01e20644 + 0x1e20444));
  func_0x02cf668c(uVar17,uVar10,0);
  uVar10 = func_0x01384be4(*puVar4);
  func_0x02ce3d80(uVar10,iVar1,**(undefined4 **)(_UNK_01e20648 + 0x1e2047c),0);
  func_0x02cfd498(uVar17,(fVar16 - fVar18) + fVar13,uVar10,0);
  uVar10 = func_0x01384be4(*puVar4);
  func_0x02ce3d80(uVar10,param_1,**(undefined4 **)(_UNK_01e2064c + 0x1e204bc),0);
  func_0x02cfd430(uVar17,uVar10,0);
  uVar10 = func_0x01989554(*(undefined4 *)(iVar1 + 0x28),uStack_90,uStack_8c,uVar6,0,0);
  uVar10 = func_0x0309f0f8(uVar10,uVar15,**(undefined4 **)(_UNK_01e20650 + 0x1e204fc));
  func_0x02cf668c(uVar17,uVar10,0);
  uVar10 = func_0x03074b50(uVar17,**(undefined4 **)(_UNK_01e20654 + 0x1e20520));
  uVar6 = func_0x01384be4(*puVar4);
  func_0x02ce3d80(uVar6,param_1,**(undefined4 **)(_UNK_01e20658 + 0x1e2054c),0);
  func_0x0309ead4(uVar10,uVar6,**(undefined4 **)(_UNK_01e2065c + 0x1e20564));
  *(undefined4 *)(param_1 + 0x10) = uVar17;
  func_0x01e20668(param_1,fVar14);
  return;
}



// ===== FAT.MergeItemSpawnPopStateEx.<>c__DisplayClass8_0$$.ctor RVA 0x1e10660 =====

void FUN_01e20660(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MergeItemSpawnPopStateEx$$_ShowToast RVA 0x1e10668 =====

/* WARNING: Possible PIC construction at 0x01e14bc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e14bcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e20668(int param_1,float param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 uVar9;
  float unaff_r6;
  char *pcVar10;
  undefined4 uVar11;
  int unaff_r7;
  undefined4 unaff_r8;
  int *piVar12;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 in_stack_ffffffd0;
  undefined4 uStack_28;
  
  pcVar10 = (char *)(_UNK_01e208a4 + 0x1e20684);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e208a8 + 0x1e20698));
    func_0x01384978(*(undefined4 *)(_UNK_01e208ac + 0x1e206a4));
    *pcVar10 = '\x01';
  }
  iVar3 = func_0x0229f06c(0xa0eb,0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0229f748(iVar3,0);
    if (iVar3 == 0) {
      iVar3 = func_0x01e20b2c(param_1);
      if (iVar3 != 0) {
        iVar3 = func_0x01c24918(0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(param_1 + 8);
        iVar3 = *(int *)(iVar3 + 0x10);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar4 + 0x34);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar8 = *(int *)(param_1 + 8);
        uVar11 = *(undefined4 *)(iVar4 + 0x18);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar8 + 0x30);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x0210cd7c(&stack0xffffffd4,iVar4,0);
        uVar7 = (undefined4)((ulonglong)in_stack_ffffffd0 >> 0x20);
        if (*(int *)(**(int **)(_UNK_01e208b0 + 0x1e207d0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        FUN_01dd876c(&stack0xffffffd4,uVar7,uStack_28,0);
        iVar8 = **(int **)(_UNK_01e208b4 + 0x1e20808);
        iVar4 = *(int *)(iVar8 + 0x1c);
        if (iVar4 == 0) {
          func_0x0140024c(iVar8);
          iVar4 = *(int *)(iVar8 + 0x1c);
        }
        iVar4 = *(int *)(iVar4 + 8);
        if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
          iVar4 = func_0x014001f0();
        }
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar4 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
        if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
          iVar4 = func_0x014001f0();
        }
        uVar9 = **(undefined4 **)(iVar4 + 0x5c);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = uVar9;
        func_0x01ca1770(iVar3,uVar11,uVar7,uStack_28);
      }
      return;
    }
    param_1 = *(int *)(param_1 + 8);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0229f06c(0xa0c6,param_2,0);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x14);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      if (*(char *)(iVar3 + 0x31) == '\0') {
        return;
      }
      param_1 = *(int *)(param_1 + 0x14);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      pcVar10 = (char *)(_UNK_01e15018 + 0x1e14ae4);
      if (*pcVar10 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e1501c + 0x1e14af8),param_2,0);
        func_0x01384978(*(undefined4 *)(_UNK_01e15020 + 0x1e14b04));
        func_0x01384978(*(undefined4 *)(_UNK_01e15024 + 0x1e14b10));
        func_0x01384978(*(undefined4 *)(_UNK_01e15028 + 0x1e14b1c));
        func_0x01384978(*(undefined4 *)(_UNK_01e1502c + 0x1e14b28));
        func_0x01384978(*(undefined4 *)(_UNK_01e15030 + 0x1e14b34));
        func_0x01384978(*(undefined4 *)(_UNK_01e15034 + 0x1e14b40));
        func_0x01384978(*(undefined4 *)(_UNK_01e15038 + 0x1e14b4c));
        *pcVar10 = '\x01';
      }
      uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_50 = 0;
      uStack_44 = 0;
      uStack_5c = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_64 = 0;
      uStack_68 = 0;
      uStack_6c = 0;
      uStack_40 = uStack_4c;
      uStack_3c = uStack_48;
      iVar3 = func_0x0229f06c(0xa099,0);
      if (iVar3 == 0) {
        if (*(char *)(param_1 + 0x31) != '\0') {
          iVar3 = *(int *)(param_1 + 0x2c);
          *(undefined1 *)(param_1 + 0x31) = 0;
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar3 + 0x30);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          func_0x0210cd7c(&uStack_78,iVar3,0);
          uVar7 = uStack_74;
          uVar11 = uStack_78;
          func_0x01e14850(param_1);
          if (param_2 <= 0.0) {
            iVar3 = func_0x01c24918(0);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iVar3 = *(int *)(iVar3 + 0x10);
            if (*(int *)(**(int **)(_UNK_01e1503c + 0x1e14c80) + 0x74) == 0) {
              func_0x01384ab4();
            }
            FUN_01dd876c(&uStack_78,uVar11,uVar7,0);
            iVar8 = **(int **)(_UNK_01e15040 + 0x1e14cb4);
            iVar4 = *(int *)(iVar8 + 0x1c);
            if (iVar4 == 0) {
              func_0x0140024c(iVar8);
              iVar4 = *(int *)(iVar8 + 0x1c);
            }
            iVar4 = *(int *)(iVar4 + 8);
            if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
              iVar4 = func_0x014001f0();
            }
            if (*(int *)(iVar4 + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar4 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
            if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
              iVar4 = func_0x014001f0();
            }
            uVar11 = **(undefined4 **)(iVar4 + 0x5c);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            uStack_80 = 0;
            uStack_88 = uStack_70;
            uStack_84 = uVar11;
            func_0x01ca1770(iVar3,2,uStack_78,uStack_74);
          }
          else {
            uVar11 = func_0x01e149bc(param_1,param_2,uVar11,uVar7);
            uVar11 = func_0x02450640(param_1,uVar11,0);
            *(undefined4 *)(param_1 + 0x3c) = uVar11;
          }
          iVar3 = func_0x01c24918(0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar4 = *(int *)(param_1 + 0x2c);
          iVar3 = *(int *)(iVar3 + 0xc0);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          uVar11 = *(undefined4 *)(iVar4 + 0x30);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          func_0x01aa60d8(iVar3,uVar11,0);
          iVar3 = func_0x01c24918(0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar4 = *(int *)(param_1 + 0x2c);
          iVar3 = *(int *)(iVar3 + 0xc4);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          uVar11 = *(undefined4 *)(iVar4 + 0x30);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          func_0x01ab8070(iVar3,uVar11,0);
          iVar3 = func_0x01c24918(0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar4 = *(int *)(param_1 + 0x2c);
          iVar3 = *(int *)(iVar3 + 200);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          uVar11 = *(undefined4 *)(iVar4 + 0x30);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          func_0x01a6b8e4(iVar3,uVar11,0);
          iVar3 = func_0x01c24918(0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar3 + 0xd8);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar3 + 0xc);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          func_0x03cd6fc4(&uStack_50,iVar3,**(undefined4 **)(_UNK_01e15044 + 0x1e14e80));
          piVar12 = *(int **)(_UNK_01e15048 + 0x1e14ea0);
          while (iVar3 = func_0x01473bf8(&uStack_50,**(undefined4 **)(_UNK_01e15050 + 0x1e14ea8)),
                iVar3 != 0) {
            uStack_58 = uStack_3c;
            uStack_60 = uStack_44;
            uStack_5c = uStack_40;
            func_0x01483df8(&uStack_60,&uStack_68,&uStack_6c,
                            **(undefined4 **)(_UNK_01e1504c + 0x1e14ecc));
            piVar1 = (int *)func_0x01384ab8(uStack_6c,*piVar12);
            if (piVar1 != (int *)0x0) {
              iVar3 = *piVar1;
              iVar4 = *piVar12;
              uVar11 = *(undefined4 *)(param_1 + 0x2c);
              uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
              if (uVar5 != 0) {
                piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                do {
                  if (piVar6[-1] == iVar4) {
                    puVar2 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xd0);
                    goto LAB_01e14f50;
                  }
                  uVar5 = uVar5 - 1;
                  piVar6 = piVar6 + 2;
                } while (uVar5 != 0);
              }
              puVar2 = (undefined4 *)func_0x014002dc(piVar1,iVar4,2);
LAB_01e14f50:
              (*(code *)*puVar2)(piVar1,uVar11,puVar2[1]);
            }
          }
          func_0x0245081c(&uStack_50,**(undefined4 **)(_UNK_01e15054 + 0x1e14f74));
        }
        return;
      }
      iVar3 = func_0x0229f13c(0xa099,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      unaff_lr = 0x1e14bcc;
      unaff_r4 = iVar3;
      unaff_r6 = param_2;
      unaff_r7 = param_1;
      register0x00000054 = (BADSPACEBASE *)&uStack_88;
    }
    else {
      iVar3 = func_0x0229f13c(0xa0c6);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar3 = func_0x0229f13c(0xa0eb,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(float *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar4 = *(int *)(iVar3 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar4 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar4,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485258((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar4 = *(int *)(iVar3 + 8);
  uVar11 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 3;
  if (iVar3 == 0) {
    uVar7 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar4,uVar11,(undefined1 *)((int)register0x00000054 + -0x38),uVar7);
  return;
}



// ===== FAT.MergeItemSpawnPopStateEx$$OnLeave RVA 0x1e108b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e208b8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xa0ec,0);
  if (iVar1 == 0) {
    FUN_01e1c32c(param_1,0);
    if (*(int *)(param_1 + 0x10) != 0) {
      func_0x02ce9e90(*(int *)(param_1 + 0x10),0,0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    iVar1 = *(int *)(param_1 + 8);
    *(undefined1 *)(param_1 + 0xc) = 1;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0244fc34(iVar1,0);
    pcVar12 = (char *)(_UNK_01e209ec + 0x1e2096c);
    if (*pcVar12 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e209f0 + 0x1e20980));
      *pcVar12 = '\x01';
    }
    iVar10 = *(int *)(**(int **)(_UNK_01e209f4 + 0x1e20998) + 0x5c);
    uVar13 = *(undefined4 *)(iVar10 + 0xc);
    uVar7 = *(undefined4 *)(iVar10 + 0x10);
    uVar15 = *(undefined4 *)(iVar10 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x024503a4(iVar1,uVar13,uVar7,uVar15);
    if (*(byte *)(param_1 + 0x14) != 0) {
      return (uint)*(byte *)(param_1 + 0x14);
    }
    iVar1 = func_0x0229f06c(0xa0e6,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x34);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar10 = *(int *)(param_1 + 8);
      iVar1 = *(int *)(iVar1 + 0x18);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      if (iVar1 == 0x34) {
        func_0x022a0f34();
      }
      else {
        func_0x022a0ecc(iVar10,0);
      }
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
      iVar1 = func_0x0229f13c(0xa0e6,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa0ec,0);
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



// ===== FAT.MergeItemSpawnPopStateEx$$_WhenOnBoard RVA 0x1e109f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e209f8(int param_1)

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
  undefined8 uVar15;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  
  iVar1 = func_0x0229f06c(0xa0e6,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x34);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(param_1 + 8);
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    if (iVar1 == 0x34) {
      func_0x022a0f34();
    }
    else {
      func_0x022a0ecc(iVar10,0);
    }
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
              uVar15 = func_0x02457d50();
              uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
              iVar1 = (int)uVar15;
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
                    uVar15 = func_0x02457d50();
                    uVar2 = func_0x03dcfa64((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                                            *(undefined4 *)
                                             (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) +
                                             0x84));
                    if ((int)uVar2 < 0) {
                      uVar13 = 0;
                    }
                    else {
                      iVar1 = *(int *)((int)uVar15 + 0xc);
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
    iVar1 = func_0x0229f13c(0xa0e6,0);
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
  uVar2 = func_0x0245495c(iVar10,uVar13,&iStack_30,uVar7);
  return uVar2;
}



// ===== FAT.MergeItemSpawnPopStateEx$$Update RVA 0x1e10ab4 =====

undefined4 FUN_01e20ab4(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xa0ed,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0xc) != '\0') {
      return 0xe;
    }
    iVar1 = func_0x0229f06c(0xa0b3,0,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x0229f13c(0xa0b3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa0ed,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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



// ===== FAT.MergeItemSpawnPopStateEx$$get__shouldShowToast RVA 0x1e10b2c =====

/* WARNING: Removing unreachable block (ram,0x01cc08fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e20b2c(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  int *piVar14;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar3 = func_0x0229f06c(0xa0e5,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xa0e5,0);
    if (iVar3 == 0) {
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar10 = *(int *)(iVar3 + 8);
    uVar12 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 2;
    if (iVar3 == 0) {
      uVar8 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar10,uVar12,&uStack_30,uVar8);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x34);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar3 + 0x18) == 0) {
    return 0;
  }
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x60);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar10 = func_0x0229f06c(0xf6,0,0);
  if (iVar10 == 0) {
    iVar10 = func_0x0229f06c(0xf7,0);
    if (iVar10 == 0) {
      iVar10 = func_0x01cc0400(iVar3,0xf);
      if (iVar10 != 0) {
        return 0;
      }
      pcVar9 = (char *)(_UNK_01cc09d4 + 0x1cc0538);
      if (*pcVar9 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01cc09d8 + 0x1cc054c));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09dc + 0x1cc0558));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09e0 + 0x1cc0564));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09e4 + 0x1cc0570));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09e8 + 0x1cc057c));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09ec + 0x1cc0588));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09f0 + 0x1cc0594));
        *pcVar9 = '\x01';
      }
      iVar10 = func_0x0229f06c(0xf9,0);
      if (iVar10 == 0) {
        iVar10 = *(int *)(iVar3 + 8);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x02451990(iVar10,0xf,**(undefined4 **)(_UNK_01cc09f4 + 0x1cc0604));
        uVar4 = 1;
        if (iVar10 != 0) {
          iVar10 = func_0x01c24918(0);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar3 + 8);
          iVar10 = *(int *)(iVar10 + 0x68);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x02451948(iVar3,0xf,**(undefined4 **)(_UNK_01cc09f8 + 0x1cc0654));
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          if (0 < *(int *)(iVar3 + 0x28)) {
            iVar11 = func_0x01c24918(0);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = *(int *)(iVar11 + 0x9c);
            uVar12 = *(undefined4 *)(iVar3 + 0x28);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = FUN_01c77708(iVar11,uVar12,0);
            if (iVar11 != 0) {
              return 1;
            }
          }
          iVar11 = func_0x01c24918(0);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = *(int *)(iVar11 + 0x48);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          uVar4 = 0;
          iVar11 = func_0x01dd2b98(iVar11,0);
          iVar5 = *(int *)(iVar3 + 0x18);
          if (iVar5 <= iVar11) {
            iVar5 = *(int *)(iVar3 + 0x3c);
          }
          if (iVar5 <= iVar11) {
            iVar11 = *(int *)(iVar3 + 0x40);
            if (iVar11 == 0) {
              func_0x01384bf0();
              iVar5 = iRam0000000c;
              iVar11 = *(int *)(iVar3 + 0x40);
              if (iVar11 == 0) {
                func_0x01384bf0();
                iVar11 = 0;
              }
            }
            else {
              iVar5 = *(int *)(iVar11 + 0xc);
            }
            uVar4 = (uint)(iVar5 < 1);
            piVar1 = (int *)func_0x0364c2b4(iVar11,**(undefined4 **)(_UNK_01cc09fc + 0x1cc0758));
            piVar13 = *(int **)(_UNK_01cc0a00 + 0x1cc0770);
            piVar14 = *(int **)(_UNK_01cc0a04 + 0x1cc0778);
            do {
              if (piVar1 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar3 = *piVar1;
              uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                do {
                  if (piVar7[-1] == *piVar13) {
                    puVar2 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
                    goto LAB_01cc07d0;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar6 != 0);
              }
              puVar2 = (undefined4 *)func_0x014002dc(piVar1,*piVar13,0);
LAB_01cc07d0:
              iVar3 = (*(code *)*puVar2)(piVar1,puVar2[1]);
              if (iVar3 == 0) goto LAB_01cc0884;
              if (piVar1 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar3 = *piVar1;
              uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                do {
                  if (piVar7[-1] == *piVar14) {
                    puVar2 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
                    goto LAB_01cc0848;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar6 != 0);
              }
              puVar2 = (undefined4 *)func_0x014002dc(piVar1,*piVar14,0);
LAB_01cc0848:
              uVar12 = (*(code *)*puVar2)(piVar1,puVar2[1]);
              if (iVar10 == 0) {
                func_0x01384bf0();
              }
              iVar3 = func_0x01e6c0b0(iVar10,uVar12,0);
            } while (iVar3 == 0);
            uVar4 = 1;
LAB_01cc0884:
            if (piVar1 != (int *)0x0) {
              iVar3 = *piVar1;
              uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
              if (uVar6 != 0) {
                piVar13 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                do {
                  if (piVar13[-1] == **(int **)(_UNK_01cc0a08 + 0x1cc089c)) {
                    puVar2 = (undefined4 *)(iVar3 + *piVar13 * 8 + 0xc0);
                    goto LAB_01cc08e4;
                  }
                  uVar6 = uVar6 - 1;
                  piVar13 = piVar13 + 2;
                } while (uVar6 != 0);
              }
              puVar2 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01cc0a08 + 0x1cc089c),0)
              ;
LAB_01cc08e4:
              (*(code *)*puVar2)(piVar1,puVar2[1]);
            }
          }
        }
        return uVar4;
      }
      iVar10 = func_0x0229f13c(0xf9,0);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar10 = func_0x0229f13c(0xf7,0);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar10 = func_0x0229f13c(0xf6,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,0xf,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar10 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar10 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar3,0);
  func_0x01485238(&uStack_38,0xf,0);
  iVar11 = *(int *)(iVar10 + 8);
  uVar12 = *(undefined4 *)(iVar10 + 0xc);
  iVar3 = *(int *)(iVar10 + 0x10);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar8 = 3;
  if (iVar3 == 0) {
    uVar8 = 2;
  }
  func_0x0245495c(iVar11,uVar12,&uStack_38,uVar8,0,0);
  uVar4 = func_0x0245496c(&uStack_38,0,0);
  return uVar4;
}



// ===== FAT.MergeItemSpawnPopStateEx$$_OnShowOnBoardEffect RVA 0x1e10be8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e20be8(int param_1)

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
  char *pcVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  
  pcVar10 = (char *)(_UNK_01e20d2c + 0x1e20bfc);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e20d30 + 0x1e20c10));
    func_0x01384978(*(undefined4 *)(_UNK_01e20d34 + 0x1e20c1c));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa0e3,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f748(iVar1,0);
    if ((iVar1 == 0) && (iVar1 = FUN_01e20b2c(param_1), iVar1 != 0)) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x34);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar11 = *(int *)(iVar1 + 0x18);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      puVar3 = *(undefined4 **)(_UNK_01e20d3c + 0x1e20d04);
      if (iVar11 == 0x34) {
        puVar3 = *(undefined4 **)(_UNK_01e20d38 + 0x1e20cfc);
      }
      func_0x01bf3284(iVar1,*puVar3,0);
      func_0x01cf889c(0);
    }
    *(undefined1 *)(param_1 + 0x14) = 1;
    iVar1 = func_0x0229f06c(0xa0e6,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x34);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar11 = *(int *)(param_1 + 8);
      iVar1 = *(int *)(iVar1 + 0x18);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      if (iVar1 == 0x34) {
        func_0x022a0f34();
      }
      else {
        func_0x022a0ecc(iVar11,0);
      }
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
          pcVar10 = (char *)(_UNK_01e18a0c + 0x1e188fc);
          if (*pcVar10 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01e18a10 + 0x1e18910));
            func_0x01384978(*(undefined4 *)(_UNK_01e18a14 + 0x1e1891c));
            func_0x01384978(*(undefined4 *)(_UNK_01e18a18 + 0x1e18928));
            *pcVar10 = '\x01';
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
            if (*(int *)(iVar1 + 0x10) != 0) {
              func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
            }
            func_0x01485278(&uStack_38,param_1,0);
            func_0x01485238(&uStack_38,0x1d,0);
            iVar11 = *(int *)(iVar1 + 8);
            uVar13 = *(undefined4 *)(iVar1 + 0xc);
            iVar1 = *(int *)(iVar1 + 0x10);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            uVar7 = 3;
            if (iVar1 == 0) {
              uVar7 = 2;
            }
            uStack_58 = 0;
            uStack_54 = 0;
            uVar2 = func_0x0245495c(iVar11,uVar13,&uStack_38,uVar7);
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
              iVar11 = *piVar9;
              uVar2 = (uint)*(ushort *)(iVar11 + 0xb6);
              if (uVar2 != 0) {
                piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
                do {
                  if (piVar8[-1] == iVar1) {
                    puVar3 = (undefined4 *)(iVar11 + *piVar8 * 8 + 200);
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
            uVar12 = uVar14;
            if (uVar14 == 0) {
              func_0x02457d50();
              uVar12 = *(uint *)(iStack_30 + 8);
              if (uVar12 == 0) {
                uVar15 = func_0x02457d50();
                uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
                iVar1 = (int)uVar15;
                uStack_54 = 0;
                if (*(int *)(iVar1 + 8) != 0) {
                  piVar9 = *(int **)(iVar1 + 0x20);
                  uStack_60 = uVar13;
                  uStack_5c = uVar2;
                  uStack_58 = uVar12;
                  uStack_50 = uVar14;
                  if (piVar9 == (int *)0x0) {
                    uVar2 = func_0x04821a00(&uStack_60,0);
                  }
                  else {
                    iVar11 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                    if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
                      iVar11 = func_0x02457d84(iVar11);
                    }
                    iVar4 = *piVar9;
                    uVar2 = (uint)*(ushort *)(iVar4 + 0xb6);
                    if (uVar2 != 0) {
                      piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
                      do {
                        if (piVar8[-1] == iVar11) {
                          puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 200);
                          goto LAB_03dd0dc4;
                        }
                        uVar2 = uVar2 - 1;
                        piVar8 = piVar8 + 2;
                      } while (uVar2 != 0);
                    }
                    puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar11,1);
LAB_03dd0dc4:
                    uVar2 = (*(code *)*puVar3)(piVar9,uVar13,puVar3[1]);
                  }
                  iVar4 = *(int *)(iVar1 + 8);
                  iVar11 = iVar4;
                  if (iVar4 == 0) {
                    func_0x02457d50();
                    iVar11 = *(int *)(iVar1 + 8);
                    if (iVar11 == 0) {
                      uVar15 = func_0x02457d50();
                      uVar2 = func_0x03dcfa64((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                                              *(undefined4 *)
                                               (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) +
                                               0x84));
                      if ((int)uVar2 < 0) {
                        uVar13 = 0;
                      }
                      else {
                        iVar1 = *(int *)((int)uVar15 + 0xc);
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
                  if (*(uint *)(iVar11 + 0xc) <= extraout_r1_00) {
                    func_0x02457d5c();
                  }
                  uVar12 = *(int *)(iVar11 + extraout_r1_00 * 4 + 0x10) - 1;
                  if (-1 < (int)uVar12) {
                    uVar14 = 0xffffffff;
                    do {
                      uVar5 = uVar12;
                      iVar11 = *(int *)(iVar1 + 0xc);
                      if (iVar11 == 0) {
                        func_0x02457d50();
                      }
                      if (*(uint *)(iVar11 + 0xc) <= uVar5) {
                        func_0x02457d5c();
                      }
                      uVar13 = uStack_60;
                      iVar11 = iVar11 + uVar5 * 0x10;
                      if (*(uint *)(iVar11 + 0x10) == (uVar2 & 0x7fffffff)) {
                        piVar9 = *(int **)(iVar1 + 0x20);
                        if (piVar9 == (int *)0x0) {
                          piVar9 = (int *)func_0x02ecb070(*(undefined4 *)
                                                           (*(int *)(*(int *)(extraout_r3 + 0x10) +
                                                                    0x60) + 0xc));
                          uVar13 = uStack_60;
                          uVar7 = *(undefined4 *)(iVar11 + 0x18);
                          if (piVar9 == (int *)0x0) {
                            func_0x02457d50(0,uVar7);
                          }
                          iVar4 = (**(code **)(*piVar9 + 0x100))
                                            (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
                        }
                        else {
                          uVar7 = *(undefined4 *)(iVar11 + 0x18);
                          if (piVar9 == (int *)0x0) {
                            func_0x02457d50();
                          }
                          iVar4 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                          if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
                            iVar4 = func_0x02457d84(iVar4);
                          }
                          iVar6 = *piVar9;
                          uVar12 = (uint)*(ushort *)(iVar6 + 0xb6);
                          if (uVar12 != 0) {
                            piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                            do {
                              if (piVar8[-1] == iVar4) {
                                puVar3 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
                                goto LAB_03dd0f6c;
                              }
                              uVar12 = uVar12 - 1;
                              piVar8 = piVar8 + 2;
                            } while (uVar12 != 0);
                          }
                          puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar4,0);
LAB_03dd0f6c:
                          iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
                        }
                        if (iVar4 != 0) {
                          if ((int)uVar14 < 0) {
                            iVar4 = *(int *)(iVar1 + 8);
                            iVar6 = *(int *)(iVar11 + 0x14);
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
                            uVar13 = *(undefined4 *)(iVar11 + 0x14);
                            if (*(uint *)(iVar4 + 0xc) <= uVar14) {
                              func_0x02457d5c();
                            }
                            *(undefined4 *)(iVar4 + uVar14 * 0x10 + 0x14) = uVar13;
                          }
                          *extraout_r2 = *(undefined4 *)(iVar11 + 0x1c);
                          uVar13 = *(undefined4 *)(iVar1 + 0x14);
                          *(undefined4 *)(iVar11 + 0x1c) = 0;
                          iVar6 = *(int *)(iVar1 + 0x1c);
                          iVar4 = *(int *)(iVar1 + 0x18);
                          *(undefined4 *)(iVar11 + 0x14) = uVar13;
                          *(uint *)(iVar11 + 0x10) = 0xffffffff;
                          *(int *)(iVar1 + 0x1c) = iVar6 + 1;
                          *(uint *)(iVar1 + 0x14) = uVar5;
                          *(int *)(iVar1 + 0x18) = iVar4 + 1;
                          return 1;
                        }
                      }
                      uVar12 = *(uint *)(iVar11 + 0x14);
                      uVar14 = uVar5;
                    } while (*(uint *)(iVar11 + 0x14) < 0x80000000);
                  }
                }
                *extraout_r2 = 0;
                return 0;
              }
            }
            uStack_2c = uVar2 & 0x7fffffff;
            func_0x02457e94(uStack_2c,*(undefined4 *)(uVar14 + 0xc));
            if (*(uint *)(uVar12 + 0xc) <= extraout_r1) {
              func_0x02457d5c();
            }
            uVar2 = *(int *)(uVar12 + extraout_r1 * 4 + 0x10) - 1;
            if (-1 < (int)uVar2) {
              iVar1 = iStack_30;
              uVar12 = 0xffffffff;
              uStack_38 = extraout_r1;
              do {
                uVar14 = uVar2;
                iVar11 = *(int *)(iVar1 + 0xc);
                if (iVar11 == 0) {
                  func_0x02457d50();
                }
                if (*(uint *)(iVar11 + 0xc) <= uVar14) {
                  func_0x02457d5c();
                }
                uVar13 = uStack_28;
                iVar11 = iVar11 + uVar14 * 0x10;
                if (*(uint *)(iVar11 + 0x10) == uStack_2c) {
                  piVar9 = *(int **)(iVar1 + 0x20);
                  if (piVar9 == (int *)0x0) {
                    piVar9 = (int *)func_0x02ecb070(*(undefined4 *)
                                                     (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) +
                                                     0xc));
                    uVar13 = uStack_28;
                    uVar7 = *(undefined4 *)(iVar11 + 0x18);
                    if (piVar9 == (int *)0x0) {
                      func_0x02457d50(0,uVar7);
                    }
                    iVar4 = (**(code **)(*piVar9 + 0x100))
                                      (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
                  }
                  else {
                    uVar7 = *(undefined4 *)(iVar11 + 0x18);
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
                    if ((int)uVar12 < 0) {
                      iVar1 = *(int *)(iStack_30 + 8);
                      iVar4 = *(int *)(iVar11 + 0x14);
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
                      uVar13 = *(undefined4 *)(iVar11 + 0x14);
                      if (*(uint *)(iVar1 + 0xc) <= uVar12) {
                        func_0x02457d5c();
                      }
                      *(undefined4 *)(iVar1 + uVar12 * 0x10 + 0x14) = uVar13;
                    }
                    uVar13 = *(undefined4 *)(iStack_30 + 0x14);
                    *(undefined4 *)(iVar11 + 0x1c) = 0;
                    iVar1 = *(int *)(iStack_30 + 0x18);
                    iVar4 = *(int *)(iStack_30 + 0x1c);
                    *(uint *)(iVar11 + 0x10) = 0xffffffff;
                    *(undefined4 *)(iVar11 + 0x14) = uVar13;
                    *(uint *)(iStack_30 + 0x14) = uVar14;
                    *(int *)(iStack_30 + 0x18) = iVar1 + 1;
                    *(int *)(iStack_30 + 0x1c) = iVar4 + 1;
                    return 1;
                  }
                }
                uVar2 = *(uint *)(iVar11 + 0x14);
                uVar12 = uVar14;
              } while (*(uint *)(iVar11 + 0x14) < 0x80000000);
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
      iVar1 = func_0x0229f13c(0xa0e6,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa0e3,0);
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
  iVar11 = *(int *)(iVar1 + 8);
  uVar13 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar1 == 0) {
    uVar7 = 1;
  }
  uStack_50 = 0;
  uVar2 = func_0x0245495c(iVar11,uVar13,&iStack_30,uVar7);
  return uVar2;
}



// ===== FAT.MergeItemSpawnPopStateEx$$_OnTweenFinished RVA 0x1e10d40 =====

void FUN_01e20d40(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xa0ea,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa0ea,0);
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
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



// ===== FAT.MergeItemSpawnPopStateEx$$<>iFixBaseProxy_OnEnter RVA 0x1e10d98 =====

void FUN_01e20d98(undefined4 param_1)

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



// ===== FAT.MergeItemSpawnPopStateEx$$<>iFixBaseProxy_OnLeave RVA 0x1e10da0 =====

void FUN_01e20da0(undefined4 param_1)

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



// ===== FAT.MergeItemSpawnPopStateEx$$<>iFixBaseProxy_Update RVA 0x1e10da8 =====

undefined4 FUN_01e20da8(undefined4 param_1,undefined4 param_2)

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



// ===== FAT.MergeItemSpawnPopStateEx.<>c__DisplayClass8_0$$<OnEnter>b__0 RVA 0x1e10db0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e20db0(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
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
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0244fc34(iVar2,0);
  pcVar3 = (char *)(_UNK_01e20eb8 + 0x1e20df8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e20ebc + 0x1e20e0c));
    *pcVar3 = '\x01';
  }
  iVar1 = *(int *)(**(int **)(_UNK_01e20ec0 + 0x1e20e24) + 0x5c);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  uVar8 = *(undefined4 *)(iVar1 + 0x10);
  uVar4 = *(undefined4 *)(iVar1 + 0x14);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = 0;
  func_0x024503a4(iVar2,uVar7,uVar8,uVar4);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x022a0b64(iVar2,0);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0229f06c(0xa0dc,0);
  if (iVar1 == 0) {
    iVar2 = *(int *)(iVar2 + 0x1c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_01e0fc88 + 0x1e0fbdc);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e0fc8c + 0x1e0fbf0),0);
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xa067,0);
    if (iVar1 == 0) {
      piVar5 = *(int **)(_UNK_01e0fc90 + 0x1e0fc48);
      iVar1 = *(int *)(iVar2 + 0x10);
      iVar2 = *piVar5;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar5;
      }
      uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      (*(code *)&UNK_0514e2c4)(iVar1,uVar4,0);
      return;
    }
    iVar1 = func_0x0229f13c(0xa067,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa0dc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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
  func_0x01485278(&uStack_30,iVar2,0);
  iVar6 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar2 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar2 == 0) {
    uVar7 = 1;
  }
  func_0x0245495c(iVar6,uVar4,&uStack_30,uVar7,0,0);
  return;
}



// ===== FAT.MergeItemSpawnPopStateEx.<>c__DisplayClass8_0$$<OnEnter>b__1 RVA 0x1e10ec4 =====

undefined4 FUN_01e20ec4(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.MergeItemSpawnPopStateEx.<>c__DisplayClass8_0$$<OnEnter>b__2 RVA 0x1e10ecc =====

void FUN_01e20ecc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



// ===== FAT.MergeItemSpawnPopStateEx.<>c__DisplayClass8_0$$<OnEnter>b__3 RVA 0x1e10ed4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e20ed4(int param_1)

{
  bool bVar1;
  float fVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  pcVar3 = (char *)(_UNK_01e21034 + 0x1e20ef0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e21038 + 0x1e20f04));
    *pcVar3 = '\x01';
  }
  uVar9 = *(undefined4 *)(param_1 + 0x10);
  uVar10 = *(undefined4 *)(param_1 + 0x14);
  uVar7 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  uVar6 = *(undefined4 *)(param_1 + 0x20);
  uVar11 = *(undefined4 *)(param_1 + 0x24);
  uVar13 = *(undefined4 *)(param_1 + 0xc);
  if (*(int *)(**(int **)(_UNK_01e2103c + 0x1e20f1c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  FUN_01dd9fb4(&fStack_64,uVar13,uVar9,uVar10,uVar7,uVar4,uVar6,uVar11,0);
  fVar2 = fStack_60;
  fVar12 = fStack_64;
  iVar8 = *(int *)(param_1 + 0x28);
  fVar15 = *(float *)(param_1 + 0xc);
  fVar14 = *(float *)(param_1 + 0x14);
  fVar16 = *(float *)(param_1 + 0x24);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fdbc(iVar8,fVar12,fVar2,0);
  iVar5 = *(int *)(param_1 + 8);
  iVar8 = *(int *)(param_1 + 0x28);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&fStack_64,iVar8,0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  bVar1 = 0.0 <= fVar15;
  if (1.0 < fVar15) {
    fVar15 = 1.0;
  }
  fVar12 = _UNK_01e21030;
  if (bVar1) {
    fVar12 = fVar15;
  }
  fStack_64 = fStack_64 + _UNK_01e21030;
  *(float *)(iVar5 + 0x20) = fStack_5c + _UNK_01e21030;
  *(float *)(iVar5 + 0x18) = fStack_64;
  *(float *)(iVar5 + 0x1c) = ((fVar14 + (fVar16 - fVar14) * fVar12) - fVar2) + fStack_60;
  return;
}



// ===== FAT.MergeItemSpawnPopStateEx.<>c__DisplayClass8_0$$<OnEnter>b__4 RVA 0x1e11040 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e21040(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
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
  
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0229f06c(0xa0e2,0);
  if (iVar1 == 0) {
    iVar3 = *(int *)(iVar3 + 0x1c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_01e0fd54 + 0x1e0fca8);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e0fd58 + 0x1e0fcbc),0);
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xa068,0);
    if (iVar1 == 0) {
      piVar5 = *(int **)(_UNK_01e0fd5c + 0x1e0fd14);
      iVar1 = *(int *)(iVar3 + 0x10);
      iVar3 = *piVar5;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar5;
      }
      uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      (*(code *)&UNK_0514e2c4)(iVar1,uVar7,0);
      return;
    }
    iVar1 = func_0x0229f13c(0xa068,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa0e2);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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
  func_0x01485278(&uStack_30,iVar3,0);
  iVar6 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar3 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar3 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar6,uVar7,&uStack_30,uVar2,0,0);
  return;
}


