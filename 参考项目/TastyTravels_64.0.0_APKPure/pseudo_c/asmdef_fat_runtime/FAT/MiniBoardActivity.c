/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MiniBoardActivity$$.ctor RVA 0x1a92a98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01aa2a98(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  pcVar4 = (char *)(_UNK_01aa2c68 + 0x1aa2aac);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa2c6c + 0x1aa2ac0));
    func_0x01384978(*(undefined4 *)(_UNK_01aa2c70 + 0x1aa2acc));
    func_0x01384978(*(undefined4 *)(_UNK_01aa2c74 + 0x1aa2ad8));
    func_0x01384978(*(undefined4 *)(_UNK_01aa2c78 + 0x1aa2ae4));
    func_0x01384978(*(undefined4 *)(_UNK_01aa2c7c + 0x1aa2af0));
    func_0x01384978(*(undefined4 *)(_UNK_01aa2c80 + 0x1aa2afc));
    *pcVar4 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01aa2c84 + 0x1aa2b10));
  func_0x0215a48c(uVar1,0);
  puVar5 = *(undefined4 **)(_UNK_01aa2c88 + 0x1aa2b2c);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  uVar1 = func_0x01384be4(*puVar5);
  func_0x02b635c4(uVar1,0);
  uVar2 = *puVar5;
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x02b635c4(uVar1,0);
  uVar2 = *puVar5;
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x02b635c4(uVar1,0);
  uVar2 = *puVar5;
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x02b635c4(uVar1,0);
  puVar5 = *(undefined4 **)(_UNK_01aa2c8c + 0x1aa2b94);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  uVar1 = func_0x01384be4(*puVar5);
  func_0x01ea074c(uVar1,0);
  uVar2 = *puVar5;
  *(undefined4 *)(param_1 + 100) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x01ea074c(uVar1,0);
  puVar5 = *(undefined4 **)(_UNK_01aa2c90 + 0x1aa2bcc);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  uVar1 = func_0x01384be4(*puVar5);
  func_0x01ea074c(uVar1,0);
  piVar6 = *(int **)(_UNK_01aa2c94 + 0x1aa2bec);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  iVar3 = *piVar6;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4();
    iVar3 = *piVar6;
  }
  puVar5 = *(undefined4 **)(_UNK_01aa2c98 + 0x1aa2c14);
  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x444);
  uVar1 = func_0x01384be4(*puVar5);
  func_0x02b63ca4(uVar1,uVar2,0);
  iVar3 = *piVar6;
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x448);
  uVar1 = func_0x01384be4(*puVar5);
  func_0x02b63ca4(uVar1,uVar2,0);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  pcVar4 = (char *)(_UNK_02b4dd1c + 0x2b4dc18);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4dd20 + 0x2b4dc2c),0);
    func_0x01384978(*(undefined4 *)(_UNK_02b4dd24 + 0x2b4dc38));
    func_0x01384978(*(undefined4 *)(_UNK_02b4dd28 + 0x2b4dc44));
    *pcVar4 = '\x01';
  }
  piVar6 = *(int **)(_UNK_02b4dd2c + 0x2b4dc58);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar4 = (char *)(_UNK_02b4dd30 + 0x2b4dc74);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4dd34 + 0x2b4dc88));
    *pcVar4 = '\x01';
  }
  iVar3 = *piVar6;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4();
    iVar3 = *piVar6;
  }
  puVar5 = *(undefined4 **)(_UNK_02b4dd38 + 0x2b4dcb8);
  *(undefined4 *)(param_1 + 0x10) = **(undefined4 **)(iVar3 + 0x5c);
  uVar1 = func_0x01384be4(*puVar5);
  func_0x02b635c4(uVar1,0);
  uVar2 = *puVar5;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x02b635c4(uVar1,0);
  puVar5 = *(undefined4 **)(_UNK_02b4dd3c + 0x2b4dcf4);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = func_0x01384be4(*puVar5);
  func_0x029eadb4(uVar1,0);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  return param_1;
}



// ===== FAT.MiniBoardActivity$$Setup RVA 0x1a92c9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aa2c9c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
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
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x84a5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x84a5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02174858(iVar1,param_1,param_2,param_3);
    return;
  }
  *(undefined4 *)(param_1 + 0x3c) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  piVar7 = *(int **)(param_1 + 0x44);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar9 = (char *)(_UNK_01dbba4c + 0x1dbb948);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbba50 + 0x1dbb95c),piVar7,0);
    func_0x01384978(*(undefined4 *)(_UNK_01dbba54 + 0x1dbb968));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x16b4,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x16b4,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,piVar7,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485278(&uStack_38,piVar7,0);
    iVar8 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar1 = *(int *)(iVar2 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar8,uVar10,&uStack_38,uVar6,0,0);
    return;
  }
  iVar1 = func_0x02f6252c(*(undefined4 *)(iVar1 + 0x34),piVar7,
                          **(undefined4 **)(_UNK_01dbba58 + 0x1dbb9c8));
  if (piVar7 == (int *)0x0 || iVar1 == 0) {
    return;
  }
  iVar1 = *piVar7;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_01dbba5c + 0x1dbb9f0)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd0);
        goto LAB_01dbba38;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_01dbba5c + 0x1dbb9f0),2);
LAB_01dbba38:
                    /* WARNING: Could not recover jumptable at 0x01dbba48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(piVar7,puVar3[1]);
  return;
}



// ===== FAT.MiniBoardActivity$$get_ConfD RVA 0x1a93100 =====

undefined4 FUN_01aa3100(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



// ===== FAT.MiniBoardActivity$$set_ConfD RVA 0x1a93108 =====

void FUN_01aa3108(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}



// ===== FAT.MiniBoardActivity$$get_DetailId RVA 0x1a93110 =====

undefined4 FUN_01aa3110(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// ===== FAT.MiniBoardActivity$$set_DetailId RVA 0x1a93118 =====

void FUN_01aa3118(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}



// ===== FAT.MiniBoardActivity$$get_SpawnHandler RVA 0x1a93120 =====

undefined4 FUN_01aa3120(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



// ===== FAT.MiniBoardActivity$$get_UIOpenState RVA 0x1a93128 =====

undefined1 FUN_01aa3128(int param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}



// ===== FAT.MiniBoardActivity$$set_UIOpenState RVA 0x1a93130 =====

void FUN_01aa3130(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x48) = param_2;
  return;
}



// ===== FAT.MiniBoardActivity$$get_Visual RVA 0x1a93138 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01aa3138(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  
  iVar1 = func_0x0229f06c(0x84b2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x84b2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021c7f44 + 0x21c7e64);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021c7f48 + 0x21c7e78),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021c7f4c + 0x21c7f34));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x58);
}



// ===== FAT.MiniBoardActivity$$SetupFresh RVA 0x1a9318c =====

void FUN_01aa318c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x84b3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x84b3,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(param_1 + 0x3c);
  iVar1 = *(int *)(iVar1 + 0x2c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = *(undefined4 *)(iVar3 + 0x28);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x01cf6408(iVar1,uVar4,0);
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  func_0x01aa32b0(param_1);
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined2 *)(iVar1 + 0x39) = 0;
  *(undefined1 *)(iVar1 + 0x38) = 1;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xfc);
  uVar4 = *(undefined4 *)(param_1 + 100);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = 0;
  func_0x01e7437c(iVar1,uVar4,0,0);
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}



// ===== FAT.MiniBoardActivity$$_RefreshPopupInfo RVA 0x1a932b0 =====

/* WARNING: Possible PIC construction at 0x01aa3358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01aa33e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01aa3474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01aa33ec) */
/* WARNING: Removing unreachable block (ram,0x01aa33f4) */
/* WARNING: Removing unreachable block (ram,0x01aa3408) */
/* WARNING: Removing unreachable block (ram,0x01aa340c) */
/* WARNING: Removing unreachable block (ram,0x01aa343c) */
/* WARNING: Removing unreachable block (ram,0x01aa344c) */
/* WARNING: Removing unreachable block (ram,0x01aa3450) */
/* WARNING: Removing unreachable block (ram,0x01aa3460) */
/* WARNING: Removing unreachable block (ram,0x01aa3464) */
/* WARNING: Removing unreachable block (ram,0x01aa335c) */
/* WARNING: Removing unreachable block (ram,0x01aa3364) */
/* WARNING: Removing unreachable block (ram,0x01aa3378) */
/* WARNING: Removing unreachable block (ram,0x01aa337c) */
/* WARNING: Removing unreachable block (ram,0x01aa33b0) */
/* WARNING: Removing unreachable block (ram,0x01aa33c0) */
/* WARNING: Removing unreachable block (ram,0x01aa33c4) */
/* WARNING: Removing unreachable block (ram,0x01aa33d4) */
/* WARNING: Removing unreachable block (ram,0x01aa33d8) */
/* WARNING: Removing unreachable block (ram,0x01aa3478) */
/* WARNING: Removing unreachable block (ram,0x01aa3480) */
/* WARNING: Removing unreachable block (ram,0x01aa3494) */
/* WARNING: Removing unreachable block (ram,0x01aa3498) */
/* WARNING: Removing unreachable block (ram,0x01aa34c8) */
/* WARNING: Removing unreachable block (ram,0x01aa34d8) */
/* WARNING: Removing unreachable block (ram,0x01aa34dc) */
/* WARNING: Removing unreachable block (ram,0x01aa34ec) */
/* WARNING: Removing unreachable block (ram,0x01aa34f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01aa32b0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uStack_48;
  int iStack_44;
  int *piStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  iVar1 = func_0x0229f06c(0x84b6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x84b6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0245494c(&uStack_48,0,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&stack0xffffffd0,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&stack0xffffffd0,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    uVar6 = func_0x0245495c(iVar4,uVar6,&stack0xffffffd0,uVar3,0,0);
    return uVar6;
  }
  iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  if (iVar1 == 0) {
    return 0;
  }
  iVar4 = param_1[0xf];
  iVar1 = param_1[0x15];
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar5 = param_1[0x1c];
  iVar4 = *(int *)(iVar4 + 0x24);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_02b61bf0 + 0x2b61a70);
  piStack_40 = param_1;
  iStack_3c = iVar1;
  iStack_38 = iVar5;
  iStack_34 = iVar4;
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b61bf4 + 0x2b61a84),iVar4,iVar5,0);
    func_0x01384978(*(undefined4 *)(_UNK_02b61bf8 + 0x2b61a90));
    func_0x01384978(*(undefined4 *)(_UNK_02b61bfc + 0x2b61a9c));
    func_0x01384978(*(undefined4 *)(_UNK_02b61c00 + 0x2b61aa8));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x305,0);
  if (iVar2 == 0) {
    uVar6 = 0;
    iVar2 = func_0x01822f2c(iVar4,0);
    *(int *)(iVar1 + 8) = iVar2;
    if (iVar2 == 0) {
      if (0 < iVar4) {
        iStack_44 = iVar4;
        uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_02b61c04 + 0x2b61b88),&iStack_44);
        uVar6 = 0;
        uVar3 = func_0x0467272c(**(undefined4 **)(_UNK_02b61c08 + 0x2b61ba8),
                                **(undefined4 **)(_UNK_02b61c0c + 0x2b61bb4),uVar3,0);
        if (*(int *)(**(int **)(_UNK_02b61c10 + 0x2b61bc8) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c2944(uVar3,0);
      }
    }
    else {
      uVar3 = func_0x017d2c28(*(undefined4 *)(iVar2 + 0x1c),0);
      uVar6 = 1;
      *(undefined4 *)(iVar1 + 0xc) = uVar3;
      if (iVar5 != 0) {
        iVar4 = *(int *)(iVar1 + 8);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar3 = func_0x01875b98(*(undefined4 *)(iVar4 + 0x24),0);
        *(undefined4 *)(iVar1 + 0x10) = uVar3;
        uVar3 = func_0x02b61610(iVar1);
        func_0x02b61c14(iVar5,uVar3);
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x305,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_48 = 0;
    uVar6 = func_0x021846e8(iVar2,iVar1,iVar4,iVar5);
  }
  return uVar6;
}



// ===== FAT.MiniBoardActivity$$SaveSetup RVA 0x1a93514 =====

/* WARNING: Possible PIC construction at 0x01aa35d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01aa3604: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01aa35d8) */
/* WARNING: Removing unreachable block (ram,0x01aa35f4) */
/* WARNING: Removing unreachable block (ram,0x01aa35f8) */
/* WARNING: Removing unreachable block (ram,0x01aa3608) */
/* WARNING: Removing unreachable block (ram,0x01aa3624) */
/* WARNING: Removing unreachable block (ram,0x01aa3628) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aa3514(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  
  pcVar4 = (char *)(_UNK_01aa363c + 0x1aa352c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa3640 + 0x1aa3540));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x84b7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x84b7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = uStack_48;
    iStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_38,uVar2,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x28);
  uVar5 = func_0x01c23578(0,*(undefined4 *)(param_1 + 0x40),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piStack_24 = *(int **)(_UNK_01aa3644 + 0x1aa35d4);
  iVar3 = *piStack_24;
  pcVar4 = (char *)(_UNK_03652bac + 0x3652b1c);
  iStack_30 = param_1;
  iStack_2c = iVar1;
  uStack_28 = uVar5;
  if (*pcVar4 == '\0') {
    func_0x02457d54(*(undefined4 *)(_UNK_03652bb0 + 0x3652b30));
    *pcVar4 = '\x01';
  }
  func_0x03031dbc(uVar5,**(undefined4 **)(_UNK_03652bb4 + 0x3652b4c),
                  *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x80));
  func_0x036529a8(iVar1,*(int *)(iVar1 + 0xc) + 1,
                  *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x3c));
  iVar3 = *(int *)(iVar1 + 8);
  uVar6 = *(uint *)(iVar1 + 0xc);
  *(uint *)(iVar1 + 0xc) = uVar6 + 1;
  if (iVar3 == 0) {
    func_0x02457d50();
  }
  if (*(uint *)(iVar3 + 0xc) <= uVar6) {
    func_0x02457d5c();
  }
  *(undefined4 *)(iVar3 + uVar6 * 4 + 0x10) = uVar5;
  return;
}



// ===== FAT.MiniBoardActivity$$LoadSetup RVA 0x1a93648 =====

/* WARNING: Possible PIC construction at 0x01aa3358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01aa33e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01aa3474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01aa33ec) */
/* WARNING: Removing unreachable block (ram,0x01aa33f4) */
/* WARNING: Removing unreachable block (ram,0x01aa3408) */
/* WARNING: Removing unreachable block (ram,0x01aa340c) */
/* WARNING: Removing unreachable block (ram,0x01aa343c) */
/* WARNING: Removing unreachable block (ram,0x01aa344c) */
/* WARNING: Removing unreachable block (ram,0x01aa3450) */
/* WARNING: Removing unreachable block (ram,0x01aa3460) */
/* WARNING: Removing unreachable block (ram,0x01aa3464) */
/* WARNING: Removing unreachable block (ram,0x01aa335c) */
/* WARNING: Removing unreachable block (ram,0x01aa3364) */
/* WARNING: Removing unreachable block (ram,0x01aa3378) */
/* WARNING: Removing unreachable block (ram,0x01aa337c) */
/* WARNING: Removing unreachable block (ram,0x01aa33b0) */
/* WARNING: Removing unreachable block (ram,0x01aa33c0) */
/* WARNING: Removing unreachable block (ram,0x01aa33c4) */
/* WARNING: Removing unreachable block (ram,0x01aa33d4) */
/* WARNING: Removing unreachable block (ram,0x01aa33d8) */
/* WARNING: Removing unreachable block (ram,0x01aa3478) */
/* WARNING: Removing unreachable block (ram,0x01aa3480) */
/* WARNING: Removing unreachable block (ram,0x01aa3494) */
/* WARNING: Removing unreachable block (ram,0x01aa3498) */
/* WARNING: Removing unreachable block (ram,0x01aa34c8) */
/* WARNING: Removing unreachable block (ram,0x01aa34d8) */
/* WARNING: Removing unreachable block (ram,0x01aa34dc) */
/* WARNING: Removing unreachable block (ram,0x01aa34ec) */
/* WARNING: Removing unreachable block (ram,0x01aa34f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01aa3648(int *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int *piStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  iVar2 = func_0x0229f06c(0x84b9,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x84b9,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_38 = 0;
    func_0x0245494c(&iStack_50,0,param_2,0);
    iStack_38 = iStack_50;
    iStack_34 = uStack_4c;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&iStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&iStack_38,param_1,0);
    func_0x01485278(&iStack_38,param_2,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    uVar7 = func_0x0245495c(iVar5,uVar7,&iStack_38,uVar4,0,0);
    return uVar7;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar7 = *(undefined4 *)(param_2 + 0x28);
  iVar2 = func_0x01c23c30(0,uVar7,0);
  param_1[0x10] = iVar2;
  uVar1 = func_0x01c23b88(1,uVar7,0);
  *(undefined1 *)(param_1 + 0x12) = uVar1;
  iVar2 = func_0x01c23c30(2,uVar7,0);
  param_1[0x13] = iVar2;
  iVar2 = func_0x0229f06c(0x84b6,0);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if (iVar2 == 0) {
      return 0;
    }
    iVar5 = param_1[0xf];
    iVar2 = param_1[0x15];
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar6 = param_1[0x1c];
    iVar5 = *(int *)(iVar5 + 0x24);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_02b61bf0 + 0x2b61a70);
    piStack_40 = param_1;
    iStack_3c = iVar2;
    iStack_38 = iVar6;
    iStack_34 = iVar5;
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b61bf4 + 0x2b61a84),iVar5,iVar6,0);
      func_0x01384978(*(undefined4 *)(_UNK_02b61bf8 + 0x2b61a90));
      func_0x01384978(*(undefined4 *)(_UNK_02b61bfc + 0x2b61a9c));
      func_0x01384978(*(undefined4 *)(_UNK_02b61c00 + 0x2b61aa8));
      *pcVar8 = '\x01';
    }
    iVar3 = func_0x0229f06c(0x305,0);
    if (iVar3 == 0) {
      uVar7 = 0;
      iVar3 = func_0x01822f2c(iVar5,0);
      *(int *)(iVar2 + 8) = iVar3;
      if (iVar3 == 0) {
        if (0 < iVar5) {
          iStack_44 = iVar5;
          uVar4 = func_0x01384abc(**(undefined4 **)(_UNK_02b61c04 + 0x2b61b88),&iStack_44);
          uVar7 = 0;
          uVar4 = func_0x0467272c(**(undefined4 **)(_UNK_02b61c08 + 0x2b61ba8),
                                  **(undefined4 **)(_UNK_02b61c0c + 0x2b61bb4),uVar4,0);
          if (*(int *)(**(int **)(_UNK_02b61c10 + 0x2b61bc8) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x028c2944(uVar4,0);
        }
      }
      else {
        uVar4 = func_0x017d2c28(*(undefined4 *)(iVar3 + 0x1c),0);
        uVar7 = 1;
        *(undefined4 *)(iVar2 + 0xc) = uVar4;
        if (iVar6 != 0) {
          iVar5 = *(int *)(iVar2 + 8);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          uVar4 = func_0x01875b98(*(undefined4 *)(iVar5 + 0x24),0);
          *(undefined4 *)(iVar2 + 0x10) = uVar4;
          uVar4 = func_0x02b61610(iVar2);
          func_0x02b61c14(iVar6,uVar4);
        }
      }
    }
    else {
      iVar3 = func_0x0229f13c(0x305,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uStack_48 = 0;
      uVar7 = func_0x021846e8(iVar3,iVar2,iVar5,iVar6);
    }
    return uVar7;
  }
  iVar2 = func_0x0229f13c(0x84b6,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0245494c(&uStack_48,0,0);
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&stack0xffffffd0,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&stack0xffffffd0,param_1,0);
  iVar5 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  iStack_50 = 0;
  uStack_4c = 0;
  uVar7 = func_0x0245495c(iVar5,uVar7,&stack0xffffffd0,uVar4);
  return uVar7;
}



// ===== FAT.MiniBoardActivity$$ResEnumerate RVA 0x1a936f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01aa36f4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  pcVar3 = (char *)(_UNK_01aa37a4 + 0x1aa3708);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa37a8 + 0x1aa371c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x84bb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x84bb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_021c7568 + 0x21c7488);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021c756c + 0x21c749c),param_1,0);
      *pcVar3 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021c7570 + 0x21c7558));
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01aa37ac + 0x1aa3774));
  func_0x0244f5a0(iVar1,0);
  *(undefined4 *)(iVar1 + 8) = 0xfffffffe;
  uVar5 = func_0x0245057c(0);
  *(undefined4 *)(iVar1 + 0x14) = uVar5;
  *(undefined4 *)(iVar1 + 0x18) = param_1;
  return iVar1;
}



// ===== FAT.MiniBoardActivity.<ResEnumerate>d__32$$.ctor RVA 0x1a937b0 =====

void FUN_01aa37b0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  uVar1 = func_0x0245057c(0);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}



// ===== FAT.MiniBoardActivity$$WhenEnd RVA 0x1a937d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aa37d8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
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
  undefined4 uStack_18;
  
  pcVar3 = (char *)(_UNK_01aa3a14 + 0x1aa37f0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa3a18 + 0x1aa3804));
    func_0x01384978(*(undefined4 *)(_UNK_01aa3a1c + 0x1aa3810));
    func_0x01384978(*(undefined4 *)(_UNK_01aa3a20 + 0x1aa381c));
    func_0x01384978(*(undefined4 *)(_UNK_01aa3a24 + 0x1aa3828));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x84c9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x84c9,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  uVar5 = *(undefined4 *)(param_1 + 0x44);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01dbba60(iVar1,uVar5,0);
  iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01aa3a28 + 0x1aa38c0));
  iVar4 = *(int *)(param_1 + 0x70);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar5 = *(undefined4 *)(iVar4 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01eea2b8(iVar1,uVar5,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xfc);
    uVar5 = *(undefined4 *)(param_1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_18 = 0;
    func_0x01e7437c(iVar1,uVar5,0,0);
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01aa3a2c + 0x1aa3954));
  func_0x0328e950(iVar1,**(undefined4 **)(_UNK_01aa3a30 + 0x1aa3968));
  iVar4 = func_0x01c24918(0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar4 + 0xc0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x01aa3a34(iVar4,iVar1);
  if (iVar4 != 0) {
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar1 + 0xc)) {
      iVar4 = func_0x01c24918(0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar4 + 0xfc);
      uVar5 = *(undefined4 *)(param_1 + 0x6c);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uStack_18 = 0;
      func_0x01e7437c(iVar4,uVar5,0,iVar1);
    }
  }
  return;
}



// ===== FAT.MiniBoardActivity$$SetupClear RVA 0x1a94114 =====

void FUN_01aa4114(int param_1)

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
  
  iVar1 = func_0x0229f06c(33999,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(33999,0);
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
  func_0x02b4d3fc(param_1,0);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}



// ===== FAT.MiniBoardActivity$$TryPopup RVA 0x1a94178 =====

void FUN_01aa4178(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(34000,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x50) == '\0') {
      uVar2 = *(undefined4 *)(param_1 + 100);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x01e7437c(param_2,uVar2,param_3,0,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(34000,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c7f50(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MiniBoardActivity$$Open RVA 0x1a9421c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aa421c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
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
  
  iVar1 = func_0x0229f06c(0x84d1,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 0xc0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_01aa4544 + 0x1aa42b0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01aa4548 + 0x1aa42c4));
      func_0x01384978(*(undefined4 *)(_UNK_01aa454c + 0x1aa42d0));
      func_0x01384978(*(undefined4 *)(_UNK_01aa4550 + 0x1aa42dc));
      func_0x01384978(*(undefined4 *)(_UNK_01aa4554 + 0x1aa42e8));
      func_0x01384978(*(undefined4 *)(_UNK_01aa4558 + 0x1aa42f4));
      func_0x01384978(*(undefined4 *)(_UNK_01aa455c + 0x1aa4300));
      func_0x01384978(*(undefined4 *)(_UNK_01aa4560 + 0x1aa430c));
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x84d2,0);
    if (iVar1 == 0) {
      iVar1 = func_0x01aa4700(param_1);
      if (iVar1 != 0) {
        puVar8 = *(undefined4 **)(_UNK_01aa4564 + 0x1aa4374);
        iVar1 = func_0x034aaa34(*puVar8);
        iVar5 = *(int *)(param_1 + 8);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar5 + 0x70);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uVar7 = *(undefined4 *)(iVar5 + 0xc);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x01eea2b8(iVar1,uVar7,0);
        if (iVar1 == 0) {
          iVar1 = func_0x034aaa34(*puVar8);
          piVar6 = *(int **)(_UNK_01aa4568 + 0x1aa43e0);
          iVar5 = *piVar6;
          if (*(int *)(iVar5 + 0x74) == 0) {
            func_0x01384ab4();
            iVar5 = *piVar6;
          }
          uVar7 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x3c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01eea2b8(iVar1,uVar7,0);
          **(undefined1 **)(**(int **)(_UNK_01aa456c + 0x1aa4428) + 0x5c) = (char)iVar1;
          if (iVar1 != 0) {
            if (*(int *)(**(int **)(_UNK_01aa4570 + 0x1aa4440) + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01aa4574 + 0x1aa445c));
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x0349da44(iVar1,0,**(undefined4 **)(_UNK_01aa4578 + 0x1aa4480));
          }
          iVar1 = func_0x034aaa34(*puVar8);
          iVar5 = *(int *)(param_1 + 8);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = *(int *)(iVar5 + 0x70);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          uVar7 = *(undefined4 *)(iVar5 + 0xc);
          piVar6 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01aa457c + 0x1aa44c4),1);
          iVar5 = *(int *)(param_1 + 8);
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
          if ((iVar5 != 0) &&
             (iVar2 = func_0x01384ab8(iVar5,*(undefined4 *)(*piVar6 + 0x20)), iVar2 == 0)) {
            uVar3 = func_0x01384c10();
            func_0x01384aa0(uVar3,0);
          }
          if (piVar6[3] == 0) {
            func_0x01384bf4();
          }
          piVar6[4] = iVar5;
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar5 = func_0x0229f06c(0xd,0,piVar6,0);
          if (iVar5 == 0) {
            func_0x01ee81d4(iVar1,uVar7,0,piVar6);
          }
          else {
            iVar5 = func_0x0229f13c(0xd,0);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            uStack_20 = 0;
            func_0x02174858(iVar5,iVar1,uVar7,piVar6);
          }
          return;
        }
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x84d2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x84d1,0);
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
  func_0x01485278(&uStack_30,param_1,0);
  iVar5 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar5,uVar7,&uStack_30,uVar3,0,0);
  return;
}



// ===== FAT.MiniBoardActivity$$BoardEntryAsset RVA 0x1a94580 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01aa4580(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_01aa466c + 0x1aa4598);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa4670 + 0x1aa45ac));
    func_0x01384978(*(undefined4 *)(_UNK_01aa4674 + 0x1aa45b8));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x84d3,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03470a60(iVar1,**(undefined4 **)(_UNK_01aa467c + 0x1aa4658),&uStack_14,
                    **(undefined4 **)(_UNK_01aa4678 + 0x1aa464c));
  }
  else {
    iVar1 = func_0x0229f13c(0x84d3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02173e78(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.MiniBoardActivity$$get_BoardEntryVisible RVA 0x1a94680 =====

undefined4 FUN_01aa4680(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x84d4,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 0xc0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 0;
    iVar1 = func_0x0229f06c(0x23ac,0);
    if (iVar1 == 0) {
      if ((*(int *)(param_1 + 8) != 0) && (uVar4 = 0, *(int *)(param_1 + 0x10) != 0)) {
        uVar4 = 1;
      }
      return uVar4;
    }
    iVar1 = func_0x0229f13c(0x23ac,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x84d4,0);
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
  uVar4 = func_0x0245496c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.MiniBoardActivity$$<>iFixBaseProxy_get_Visual RVA 0x1a94778 =====

undefined4 FUN_01aa4778(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.MiniBoardActivity$$<>iFixBaseProxy_SetupFresh RVA 0x1a94780 =====

void FUN_01aa4780(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x1f0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1f0,0);
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



// ===== FAT.MiniBoardActivity$$<>iFixBaseProxy_ResEnumerate RVA 0x1a94788 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01aa4788(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  
  iVar1 = func_0x0229f06c(0x3189,0);
  if (iVar1 == 0) {
    param_1 = (int *)(**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02b61df8 + 0x2b61d5c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b61dfc + 0x2b61d70),0);
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x1395,0);
    if (iVar1 == 0) {
      iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b61e00 + 0x2b61dc8));
      func_0x04874ed4(iVar1,0);
      *(undefined4 *)(iVar1 + 8) = 0xfffffffe;
      uVar5 = func_0x048799ac(0);
      *(undefined4 *)(iVar1 + 0x14) = uVar5;
      *(int **)(iVar1 + 0x18) = param_1;
      return iVar1;
    }
    iVar1 = func_0x0229f13c(0x1395,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x3189,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar4 = (char *)(_UNK_021c7568 + 0x21c7488);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021c756c + 0x21c749c),param_1,0);
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0);
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
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
  iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021c7570 + 0x21c7558));
  return iVar1;
}



// ===== FAT.MiniBoardActivity$$<>iFixBaseProxy_WhenEnd RVA 0x1a94790 =====

void FUN_01aa4790(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x1a2,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1a2,0);
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



// ===== FAT.MiniBoardActivity$$<>iFixBaseProxy_SetupClear RVA 0x1a94798 =====

void FUN_01aa4798(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  iVar1 = func_0x0229f06c(0x1a8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1a8,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    return;
  }
  piVar2 = *(int **)(param_1 + 0x10);
  if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02b4d464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar2 + 0x168))(piVar2,*(undefined4 *)(*piVar2 + 0x16c));
    return;
  }
  return;
}



// ===== FAT.MiniBoardActivity$$<>iFixBaseProxy_TryPopup RVA 0x1a947a0 =====

void FUN_01aa47a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x1aa2,0,param_3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1aa2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c7f50(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MiniBoardActivity.<ResEnumerate>d__32$$System.IDisposable.Dispose RVA 0x1a947a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aa47a8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0xfffffff9:
  case 5:
    break;
  case 0xfffffffa:
  case 4:
    pcVar5 = &UNK_01aa55bc + _UNK_01aa565c;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01aa55d0 + _UNK_01aa5660));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01aa55fc + _UNK_01aa5664)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01aa5648;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01aa55fc + _UNK_01aa5664),0);
code_r0x01aa5648:
                    /* WARNING: Could not recover jumptable at 0x01aa5658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffb:
  case 3:
    pcVar5 = &UNK_01aa54fc + _UNK_01aa559c;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01aa5510 + _UNK_01aa55a0));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01aa553c + _UNK_01aa55a4)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01aa5588;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01aa553c + _UNK_01aa55a4),0);
code_r0x01aa5588:
                    /* WARNING: Could not recover jumptable at 0x01aa5598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffc:
  case 2:
    pcVar5 = &UNK_01aa543c + _UNK_01aa54dc;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01aa5450 + _UNK_01aa54e0));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01aa547c + _UNK_01aa54e4)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01aa54c8;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01aa547c + _UNK_01aa54e4),0);
code_r0x01aa54c8:
                    /* WARNING: Could not recover jumptable at 0x01aa54d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffd:
  case 1:
    pcVar5 = &UNK_01aa537c + _UNK_01aa541c;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01aa5390 + _UNK_01aa5420));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01aa53bc + _UNK_01aa5424)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01aa5408;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01aa53bc + _UNK_01aa5424),0);
code_r0x01aa5408:
                    /* WARNING: Could not recover jumptable at 0x01aa5418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffe:
  case 0xffffffff:
  case 0:
    return;
  default:
    return;
  }
  pcVar5 = &UNK_01aa567c + _UNK_01aa571c;
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(&UNK_01aa5690 + _UNK_01aa5720));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(&UNK_01aa56bc + _UNK_01aa5724)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto code_r0x01aa5708;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01aa56bc + _UNK_01aa5724),0);
code_r0x01aa5708:
                    /* WARNING: Could not recover jumptable at 0x01aa5718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.MiniBoardActivity.<ResEnumerate>d__32$$MoveNext RVA 0x1a94810 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01aa4810(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar7 = (char *)(_UNK_01aa531c + 0x1aa4828);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa5320 + 0x1aa483c));
    func_0x01384978(*(undefined4 *)(_UNK_01aa5324 + 0x1aa4848));
    func_0x01384978(*(undefined4 *)(_UNK_01aa5328 + 0x1aa4854));
    *pcVar7 = '\x01';
  }
  if (5 < *(uint *)(param_1 + 8)) {
    return 0;
  }
  piVar8 = *(int **)(param_1 + 0x18);
  switch(*(uint *)(param_1 + 8)) {
  case 0:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = (**(code **)(*piVar8 + 0x108))(piVar8,*(undefined4 *)(*piVar8 + 0x10c));
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = piVar8[0x15];
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b61d48(iVar1,0);
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(&UNK_01aa4900 + _UNK_01aa532c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto code_r0x01aa4998;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01aa4900 + _UNK_01aa532c),0);
code_r0x01aa4998:
    piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
    *(undefined4 *)(param_1 + 8) = 0xfffffffd;
    *(int **)(param_1 + 0x1c) = piVar6;
    break;
  case 1:
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffd;
    break;
  case 2:
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffc;
    goto code_r0x01aa4b84;
  case 3:
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffb;
    goto code_r0x01aa4d48;
  case 4:
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffa;
    goto code_r0x01aa4f0c;
  case 5:
    piVar8 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffff9;
    goto code_r0x01aa50e4;
  }
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(&UNK_01aa49d4 + _UNK_01aa5334)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
        goto code_r0x01aa4a1c;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01aa49d4 + _UNK_01aa5334),0);
code_r0x01aa4a1c:
  iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
  if (iVar1 == 0) {
    func_0x01aa5368(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = piVar8[0x16];
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b61d48(iVar1,0);
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(&UNK_01aa4ae8 + _UNK_01aa5338)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto code_r0x01aa4b64;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01aa4ae8 + _UNK_01aa5338),0);
code_r0x01aa4b64:
    piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
    *(undefined4 *)(param_1 + 8) = 0xfffffffc;
    *(int **)(param_1 + 0x1c) = piVar6;
code_r0x01aa4b84:
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(&UNK_01aa4ba0 + _UNK_01aa5340)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto code_r0x01aa4be8;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01aa4ba0 + _UNK_01aa5340),0);
code_r0x01aa4be8:
    iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
    if (iVar1 == 0) {
      func_0x01aa5428(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = piVar8[0x17];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piVar6 = (int *)func_0x02b61d48(iVar1,0);
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar6;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(&UNK_01aa4cb4 + _UNK_01aa5344)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto code_r0x01aa4d28;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01aa4cb4 + _UNK_01aa5344),0);
code_r0x01aa4d28:
      piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
      *(undefined4 *)(param_1 + 8) = 0xfffffffb;
      *(int **)(param_1 + 0x1c) = piVar6;
code_r0x01aa4d48:
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar6;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(&UNK_01aa4d64 + _UNK_01aa534c)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto code_r0x01aa4dac;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01aa4d64 + _UNK_01aa534c),0);
code_r0x01aa4dac:
      iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
      if (iVar1 == 0) {
        func_0x01aa54e8(param_1);
        *(undefined4 *)(param_1 + 0x1c) = 0;
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = piVar8[0x18];
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        piVar6 = (int *)func_0x02b61d48(iVar1,0);
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar6;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(&UNK_01aa4e78 + _UNK_01aa5350)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
              goto code_r0x01aa4eec;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01aa4e78 + _UNK_01aa5350),0);
code_r0x01aa4eec:
        piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
        *(undefined4 *)(param_1 + 8) = 0xfffffffa;
        *(int **)(param_1 + 0x1c) = piVar6;
code_r0x01aa4f0c:
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar6;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(&UNK_01aa4f28 + _UNK_01aa5358)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
              goto code_r0x01aa4f70;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01aa4f28 + _UNK_01aa5358),0);
code_r0x01aa4f70:
        iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
        if (iVar1 == 0) {
          func_0x01aa55a8(param_1);
          *(undefined4 *)(param_1 + 0x1c) = 0;
          if (piVar8 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = (**(code **)(*piVar8 + 0x118))(piVar8,*(undefined4 *)(*piVar8 + 0x11c));
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          piVar8 = (int *)func_0x02b61d48(iVar1,0);
          if (piVar8 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar8;
          uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar3 != 0) {
            piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar6[-1] == **(int **)(&UNK_01aa5050 + _UNK_01aa535c)) {
                puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                goto code_r0x01aa50c4;
              }
              uVar3 = uVar3 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_01aa5050 + _UNK_01aa535c),0)
          ;
code_r0x01aa50c4:
          piVar8 = (int *)(*(code *)*puVar2)(piVar8,puVar2[1]);
          *(undefined4 *)(param_1 + 8) = 0xfffffff9;
          *(int **)(param_1 + 0x1c) = piVar8;
code_r0x01aa50e4:
          if (piVar8 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar8;
          uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar3 != 0) {
            piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar6[-1] == **(int **)(&UNK_01aa5100 + _UNK_01aa5364)) {
                puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                goto code_r0x01aa5148;
              }
              uVar3 = uVar3 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_01aa5100 + _UNK_01aa5364),0)
          ;
code_r0x01aa5148:
          iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
          if (iVar1 == 0) {
            func_0x01aa5668(param_1);
            *(undefined4 *)(param_1 + 0x1c) = 0;
            return 0;
          }
          piVar8 = *(int **)(param_1 + 0x1c);
          if (piVar8 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar8;
          uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar3 != 0) {
            piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar6[-1] == **(int **)(&UNK_01aa5180 + _UNK_01aa5360)) {
                puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                goto code_r0x01aa51dc;
              }
              uVar3 = uVar3 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_01aa5180 + _UNK_01aa5360),0)
          ;
code_r0x01aa51dc:
          (*(code *)*puVar2)(&uStack_20,piVar8,puVar2[1]);
          uVar4 = 5;
        }
        else {
          piVar8 = *(int **)(param_1 + 0x1c);
          if (piVar8 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar8;
          uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar3 != 0) {
            piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar6[-1] == **(int **)(&UNK_01aa4fa8 + _UNK_01aa5354)) {
                puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                goto code_r0x01aa5098;
              }
              uVar3 = uVar3 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_01aa4fa8 + _UNK_01aa5354),0)
          ;
code_r0x01aa5098:
          (*(code *)*puVar2)(&uStack_20,piVar8,puVar2[1]);
          uVar4 = 4;
        }
      }
      else {
        piVar8 = *(int **)(param_1 + 0x1c);
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar8;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar6[-1] == **(int **)(&UNK_01aa4de4 + _UNK_01aa5348)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
              goto code_r0x01aa4ec0;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_01aa4de4 + _UNK_01aa5348),0);
code_r0x01aa4ec0:
        (*(code *)*puVar2)(&uStack_20,piVar8,puVar2[1]);
        uVar4 = 3;
      }
    }
    else {
      piVar8 = *(int **)(param_1 + 0x1c);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar8;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(&UNK_01aa4c20 + _UNK_01aa533c)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto code_r0x01aa4cfc;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_01aa4c20 + _UNK_01aa533c),0);
code_r0x01aa4cfc:
      (*(code *)*puVar2)(&uStack_20,piVar8,puVar2[1]);
      uVar4 = 2;
    }
    *(undefined4 *)(param_1 + 0xc) = uStack_20;
    *(undefined4 *)(param_1 + 8) = uVar4;
  }
  else {
    piVar8 = *(int **)(param_1 + 0x1c);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar8;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(&UNK_01aa4a54 + _UNK_01aa5330)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto code_r0x01aa4b30;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_01aa4a54 + _UNK_01aa5330),0);
code_r0x01aa4b30:
    (*(code *)*puVar2)(&uStack_20,piVar8,puVar2[1]);
    *(undefined4 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_1 + 0xc) = uStack_20;
  }
  *(undefined4 *)(param_1 + 0x10) = uStack_1c;
  return 1;
}



// ===== FAT.MiniBoardActivity.<ResEnumerate>d__32$$<>m__Finally1 RVA 0x1a95368 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aa5368(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01aa541c + 0x1aa537c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa5420 + 0x1aa5390));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01aa5424 + 0x1aa53bc)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01aa5408;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01aa5424 + 0x1aa53bc),0);
LAB_01aa5408:
                    /* WARNING: Could not recover jumptable at 0x01aa5418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.MiniBoardActivity.<ResEnumerate>d__32$$<>m__Finally2 RVA 0x1a95428 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aa5428(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01aa54dc + 0x1aa543c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa54e0 + 0x1aa5450));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01aa54e4 + 0x1aa547c)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01aa54c8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01aa54e4 + 0x1aa547c),0);
LAB_01aa54c8:
                    /* WARNING: Could not recover jumptable at 0x01aa54d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.MiniBoardActivity.<ResEnumerate>d__32$$<>m__Finally3 RVA 0x1a954e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aa54e8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01aa559c + 0x1aa54fc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa55a0 + 0x1aa5510));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01aa55a4 + 0x1aa553c)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01aa5588;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01aa55a4 + 0x1aa553c),0);
LAB_01aa5588:
                    /* WARNING: Could not recover jumptable at 0x01aa5598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.MiniBoardActivity.<ResEnumerate>d__32$$<>m__Finally4 RVA 0x1a955a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aa55a8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01aa565c + 0x1aa55bc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa5660 + 0x1aa55d0));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01aa5664 + 0x1aa55fc)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01aa5648;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01aa5664 + 0x1aa55fc),0);
LAB_01aa5648:
                    /* WARNING: Could not recover jumptable at 0x01aa5658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.MiniBoardActivity.<ResEnumerate>d__32$$<>m__Finally5 RVA 0x1a95668 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aa5668(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01aa571c + 0x1aa567c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa5720 + 0x1aa5690));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01aa5724 + 0x1aa56bc)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01aa5708;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01aa5724 + 0x1aa56bc),0);
LAB_01aa5708:
                    /* WARNING: Could not recover jumptable at 0x01aa5718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.MiniBoardActivity.<ResEnumerate>d__32$$System.Collections.Generic.IEnumerator<(System.String,EL.Resource.AssetTag)>.get_Current RVA 0x1a95728 =====

void FUN_01aa5728(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *param_1 = *(undefined4 *)(param_2 + 0xc);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.MiniBoardActivity.<ResEnumerate>d__32$$System.Collections.IEnumerator.Reset RVA 0x1a9573c =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aa573c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  func_0x01384988(*(undefined4 *)(_UNK_01aa5778 + 0x1aa574c));
  uVar1 = func_0x01384be4();
  func_0x0244f7fc(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(_UNK_01aa577c + 0x1aa5768));
  func_0x01384aa0(uVar1,uVar2);
  func_0x01384928();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== FAT.MiniBoardActivity.<ResEnumerate>d__32$$System.Collections.IEnumerator.get_Current RVA 0x1a95780 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aa5780(int param_1)

{
  char *pcVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_01aa57dc + 0x1aa5798);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa57e0 + 0x1aa57ac));
    *pcVar1 = '\x01';
  }
  uStack_18 = *(undefined4 *)(param_1 + 0xc);
  uStack_14 = *(undefined4 *)(param_1 + 0x10);
  func_0x01384abc(**(undefined4 **)(_UNK_01aa57e4 + 0x1aa57c8),&uStack_18);
  return;
}



// ===== FAT.MiniBoardActivity.<ResEnumerate>d__32$$System.Collections.Generic.IEnumerable<(System.String,EL.Resource.AssetTag)>.GetEnumerator RVA 0x1a957e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01aa57e8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_01aa5888 + 0x1aa57fc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa588c + 0x1aa5810));
    *pcVar4 = '\x01';
  }
  if ((*(int *)(param_1 + 8) == -2) &&
     (iVar5 = *(int *)(param_1 + 0x14), iVar1 = func_0x0245057c(0), iVar5 == iVar1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = param_1;
  }
  else {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01aa5890 + 0x1aa5854));
    func_0x0244f5a0(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = func_0x0245057c(0);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
  }
  return iVar1;
}



// ===== FAT.MiniBoardActivity.<ResEnumerate>d__32$$System.Collections.IEnumerable.GetEnumerator RVA 0x1a95894 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int thunk_FUN_01aa57e8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_01aa5888 + 0x1aa57fc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa588c + 0x1aa5810));
    *pcVar4 = '\x01';
  }
  if ((*(int *)(param_1 + 8) == -2) &&
     (iVar5 = *(int *)(param_1 + 0x14), iVar1 = func_0x0245057c(0), iVar5 == iVar1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = param_1;
  }
  else {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01aa5890 + 0x1aa5854));
    func_0x0244f5a0(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = func_0x0245057c(0);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
  }
  return iVar1;
}


