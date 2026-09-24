/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.OutputSpawnBonusHandler$$FAT.Merge.ISpawnBonusHandler.get_priority RVA 0x214b50c =====

undefined4 FUN_0215b50c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb4bc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4bc,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 8);
}



// ===== FAT.Merge.OutputSpawnBonusHandler$$get_Valid RVA 0x214b560 =====

uint FUN_0215b560(int param_1)

{
  int iVar1;
  uint uVar2;
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
  
  iVar1 = func_0x0229f06c(0xb4bd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4bd,0);
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
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  return (uint)(*(int *)(param_1 + 0x10) != 0);
}



// ===== FAT.Merge.OutputSpawnBonusHandler$$Serialize RVA 0x214b5bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215b5bc(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_0215b6e0 + 0x215b5dc);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215b6e4 + 0x215b5f0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5807,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5807,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217b868(iVar1,param_1,param_2,param_3,0);
    return;
  }
  uVar2 = func_0x01c23578(param_3,*(undefined4 *)(param_1 + 0x20),0);
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_0215b6e8 + 0x215b67c)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd0);
        goto LAB_0215b6c4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_0215b6e8 + 0x215b67c),2);
LAB_0215b6c4:
                    /* WARNING: Could not recover jumptable at 0x0215b6dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(param_2,uVar2,puVar3[1]);
  return;
}



// ===== FAT.Merge.OutputSpawnBonusHandler$$Deserialize RVA 0x214b6ec =====

void FUN_0215b6ec(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0x5809,0);
  if (iVar1 == 0) {
    uVar2 = func_0x01c23c30(param_3,param_2,0);
    *(undefined4 *)(param_1 + 0x20) = uVar2;
  }
  else {
    iVar1 = func_0x0229f13c(0x5809,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217b868(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.OutputSpawnBonusHandler$$Init RVA 0x214b76c =====

/* WARNING: Removing unreachable block (ram,0x0215bb9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215b76c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5,
                 int *param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  int *piVar12;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar11 = (char *)(_UNK_0215bc78 + 0x215b78c);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215bc7c + 0x215b7a4));
    func_0x01384978(*(undefined4 *)(_UNK_0215bc80 + 0x215b7b0));
    func_0x01384978(*(undefined4 *)(_UNK_0215bc84 + 0x215b7bc));
    func_0x01384978(*(undefined4 *)(_UNK_0215bc88 + 0x215b7c8));
    func_0x01384978(*(undefined4 *)(_UNK_0215bc8c + 0x215b7d4));
    func_0x01384978(*(undefined4 *)(_UNK_0215bc90 + 0x215b7e0));
    func_0x01384978(*(undefined4 *)(_UNK_0215bc94 + 0x215b7ec));
    *pcVar11 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x2d4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2d4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021834d4(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  if (param_5 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_5;
  piVar10 = *(int **)(_UNK_0215bc98 + 0x215b87c);
  uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar6 = *piVar10;
  if (uVar7 != 0) {
    piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar8[-1] == iVar6) {
        puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
        goto LAB_0215b8c4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_5,iVar6,0);
LAB_0215b8c4:
  uVar3 = (*(code *)*puVar2)(param_5,0,puVar2[1]);
  if (param_5 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_5;
  iVar6 = *piVar10;
  uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar7 != 0) {
    piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar10[-1] == iVar6) {
        puVar2 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
        goto LAB_0215b938;
      }
      uVar7 = uVar7 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_5,iVar6,0);
LAB_0215b938:
  uVar4 = (*(code *)*puVar2)(param_5,1,puVar2[1]);
  uStack_2c = 0;
  uStack_30 = 0;
  func_0x038fd264(&uStack_30,uVar3,uVar4,**(undefined4 **)(_UNK_0215bc9c + 0x215b960));
  *(undefined4 *)(param_1 + 0x18) = uStack_30;
  *(undefined4 *)(param_1 + 0x1c) = uStack_2c;
  func_0x0215bcb8(param_1);
  if (param_6 == (int *)0x0) {
    return;
  }
  iVar1 = *param_6;
  uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar7 != 0) {
    piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar10[-1] == **(int **)(_UNK_0215bca0 + 0x215b9a4)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
        goto LAB_0215b9ec;
      }
      uVar7 = uVar7 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_6,**(int **)(_UNK_0215bca0 + 0x215b9a4),0);
LAB_0215b9ec:
  piVar10 = (int *)(*(code *)*puVar2)(param_6,puVar2[1]);
  piVar8 = *(int **)(_UNK_0215bca4 + 0x215ba0c);
  piVar12 = *(int **)(_UNK_0215bca8 + 0x215ba14);
  puVar2 = *(undefined4 **)(_UNK_0215bcac + 0x215ba1c);
  do {
    if (piVar10 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar10;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == *piVar8) {
          puVar5 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_0215ba74;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar10,*piVar8,0);
LAB_0215ba74:
    iVar1 = (*(code *)*puVar5)(piVar10,puVar5[1]);
    if (iVar1 == 0) break;
    if (piVar10 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar10;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == *piVar12) {
          puVar5 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_0215bae8;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar10,*piVar12,0);
LAB_0215bae8:
    uVar3 = (*(code *)*puVar5)(piVar10,puVar5[1]);
    iVar1 = *(int *)(param_1 + 0x24);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02450560(iVar1,uVar3,*puVar2);
  } while( true );
  if (piVar10 != (int *)0x0) {
    iVar1 = *piVar10;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_0215bcb0 + 0x215bb3c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
          goto LAB_0215bb84;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_0215bcb0 + 0x215bb3c),0);
LAB_0215bb84:
    (*(code *)*puVar2)(piVar10,puVar2[1]);
  }
  return;
}



// ===== FAT.Merge.OutputSpawnBonusHandler$$ResetCounter RVA 0x214bcb8 =====

void FUN_0215bcb8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x2d5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2d5,0);
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
  uVar4 = func_0x02450284(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0);
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  return;
}



// ===== FAT.Merge.OutputSpawnBonusHandler$$FAT.Merge.ISpawnBonusHandler.OnRegister RVA 0x214bd1c =====

void FUN_0215bd1c(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb4be,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb4be,0);
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



// ===== FAT.Merge.OutputSpawnBonusHandler$$FAT.Merge.ISpawnBonusHandler.OnUnRegister RVA 0x214bd68 =====

void FUN_0215bd68(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb4bf,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb4bf,0);
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



// ===== FAT.Merge.OutputSpawnBonusHandler$$Simulate RVA 0x214bdb4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0215bdb4(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_28;
  
  pcVar11 = (char *)(_UNK_0215c450 + 0x215bdd4);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215c454 + 0x215bde8));
    func_0x01384978(*(undefined4 *)(_UNK_0215c458 + 0x215bdf4));
    func_0x01384978(*(undefined4 *)(_UNK_0215c45c + 0x215be00));
    func_0x01384978(*(undefined4 *)(_UNK_0215c460 + 0x215be0c));
    func_0x01384978(*(undefined4 *)(_UNK_0215c464 + 0x215be18));
    func_0x01384978(*(undefined4 *)(_UNK_0215c468 + 0x215be24));
    func_0x01384978(*(undefined4 *)(_UNK_0215c46c + 0x215be30));
    func_0x01384978(*(undefined4 *)(_UNK_0215c470 + 0x215be3c));
    func_0x01384978(*(undefined4 *)(_UNK_0215c474 + 0x215be48));
    func_0x01384978(*(undefined4 *)(_UNK_0215c478 + 0x215be54));
    func_0x01384978(*(undefined4 *)(_UNK_0215c47c + 0x215be60));
    func_0x01384978(*(undefined4 *)(_UNK_0215c480 + 0x215be6c));
    func_0x01384978(*(undefined4 *)(_UNK_0215c484 + 0x215be78));
    *pcVar11 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0xb4c0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4c0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02286c84(iVar1,param_1,param_2,param_3,0);
    return iVar1;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_2 + 0x1c) < 1) {
    return 0;
  }
  iVar12 = *(int *)(param_1 + 0x24);
  uVar2 = FUN_0210e2d4(iVar1,0);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  iVar12 = func_0x02450564(iVar12,uVar2,**(undefined4 **)(_UNK_0215c488 + 0x215bf38));
  if (iVar12 != 0) {
    return 0;
  }
  iVar3 = func_0x02feb690(iVar1,&iStack_28,1,**(undefined4 **)(_UNK_0215c48c + 0x215bf5c));
  iVar12 = iStack_28;
  cVar14 = '\0';
  if (iVar3 != 0) {
    if (iStack_28 == 0) {
      func_0x01384bf0();
    }
    iVar12 = FUN_02123058(iVar12,0);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    cVar14 = *(char *)(iVar12 + 0x2e);
  }
  piVar4 = (int *)FUN_021566f4();
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar12 = *piVar4;
  uVar9 = (uint)*(ushort *)(iVar12 + 0xb6);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(int *)(iVar12 + 0x58) + 4);
    do {
      if (piVar10[-1] == **(int **)(_UNK_0215c490 + 0x215bfc4)) {
        puVar5 = (undefined4 *)(iVar12 + *piVar10 * 8 + 0x180);
        goto LAB_0215c00c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0215c490 + 0x215bfc4),0x18);
LAB_0215c00c:
  (*(code *)*puVar5)(piVar4,puVar5[1]);
  if ((0 < *(int *)(param_1 + 0x20)) || (iVar12 = *(int *)(param_1 + 0x14), iVar12 < 1)) {
    iVar12 = func_0x01384be4(**(undefined4 **)(_UNK_0215c494 + 0x215c034));
    func_0x0244f5a0(iVar12,0);
    piVar4 = *(int **)(param_1 + 0x10);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    *(int **)(iVar12 + 8) = piVar4;
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar4;
    uVar9 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_0215c498 + 0x215c074)) {
          puVar5 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xd0);
          goto LAB_0215c0cc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0215c498 + 0x215c074),2);
LAB_0215c0cc:
    uVar2 = (*(code *)*puVar5)(piVar4,puVar5[1]);
    uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_0215c49c + 0x215c0ec));
    func_0x03a07058(uVar6,iVar12,**(undefined4 **)(_UNK_0215c4a0 + 0x215c108),0);
    iVar12 = func_0x02fbeea0(uVar2,uVar6,0,**(undefined4 **)(_UNK_0215c4a4 + 0x215c124));
  }
  if ((0 < iVar12) && (param_3 == 0)) {
    iVar3 = iVar12;
    if ((cVar14 != '\0') && (iVar7 = func_0x0215c4c8(0xffffffff), 0 < iVar7)) {
      piVar4 = (int *)FUN_021566f4();
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = *piVar4;
      uVar9 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_0215c4a8 + 0x215c188)) {
            puVar5 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0x188);
            goto LAB_0215c1d0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0215c4a8 + 0x215c188),0x19);
LAB_0215c1d0:
      iVar3 = (*(code *)*puVar5)(piVar4,iVar12,iVar7,puVar5[1]);
    }
    iVar7 = func_0x01c24918(0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar7 + 0x4c);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = func_0x01dbb000(iVar7,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = FUN_02141ef4(iVar7,0);
    if (iVar7 == 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar7 = *(int *)(param_2 + 8);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar7 = FUN_02139cf4(iVar7,0);
      uVar8 = FUN_020d8024(iVar1,0,0);
      FUN_0210cd7c(&uStack_38,iVar1,0);
      uVar2 = uStack_38;
      FUN_0210cd7c(&uStack_38,iVar1,0);
      uVar6 = uStack_34;
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar7 = FUN_020ded9c(iVar7,iVar3,uVar8,uVar2,uVar6,0,0,0);
      if (iVar7 != 0) goto LAB_0215c420;
    }
    iVar7 = func_0x01c24918(0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    piVar4 = *(int **)(_UNK_0215c4ac + 0x215c30c);
    iVar13 = *(int *)(iVar7 + 0x40);
    iVar7 = *piVar4;
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x01384ab4();
      iVar7 = *piVar4;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0xd8);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    uVar8 = func_0x01cdcbac(iVar13,iVar3,1,uVar2,0,0,0,0x70,
                            **(undefined4 **)(_UNK_0215c4b0 + 0x215c34c),
                            **(undefined4 **)(_UNK_0215c4b4 + 0x215c358),0);
    FUN_0210cd7c(&uStack_38,iVar1,0);
    uVar6 = uStack_34;
    uVar2 = uStack_38;
    if (*(int *)(**(int **)(_UNK_0215c4b8 + 0x215c3a4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01dd876c(&uStack_38,uVar2,uVar6,0);
    if (*(int *)(**(int **)(_UNK_0215c4bc + 0x215c3e0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0206de24(uVar8,uStack_38,uStack_34,uStack_30,0,0,0,0);
  }
LAB_0215c420:
  if (iVar12 == *(int *)(param_1 + 0x14)) {
    FUN_0215bcb8(param_1);
  }
  else {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  }
  return iVar12;
}



// ===== FAT.Merge.OutputSpawnBonusHandler.<>c__DisplayClass17_0$$.ctor RVA 0x214c4c0 =====

void FUN_0215c4c0(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.OutputSpawnBonusHandler$$FAT.Merge.ISpawnBonusHandler.Process RVA 0x214c61c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0215c61c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  char cVar14;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int aiStack_28 [4];
  
  iVar6 = func_0x0229f06c(0xb4c3,0);
  if (iVar6 != 0) {
    iVar6 = func_0x0229f13c(0xb4c3,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    aiStack_28[0] = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    aiStack_28[0] = iStack_40;
    if (*(int *)(iVar6 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar6 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar12 = *(int *)(iVar6 + 8);
    uVar13 = *(undefined4 *)(iVar6 + 0xc);
    iVar6 = *(int *)(iVar6 + 0x10);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 3;
    if (iVar6 == 0) {
      uVar9 = 2;
    }
    iVar6 = func_0x0245495c(iVar12,uVar13,&uStack_38,uVar9,0,0);
    return iVar6;
  }
  iVar6 = FUN_0215b560(param_1);
  if (iVar6 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(param_2 + 0x20) != 2) {
    return *(int *)(param_2 + 0x20);
  }
  pcVar10 = (char *)(_UNK_0215c450 + 0x215bdd4);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215c454 + 0x215bde8));
    func_0x01384978(*(undefined4 *)(_UNK_0215c458 + 0x215bdf4));
    func_0x01384978(*(undefined4 *)(_UNK_0215c45c + 0x215be00));
    func_0x01384978(*(undefined4 *)(_UNK_0215c460 + 0x215be0c));
    func_0x01384978(*(undefined4 *)(_UNK_0215c464 + 0x215be18));
    func_0x01384978(*(undefined4 *)(_UNK_0215c468 + 0x215be24));
    func_0x01384978(*(undefined4 *)(_UNK_0215c46c + 0x215be30));
    func_0x01384978(*(undefined4 *)(_UNK_0215c470 + 0x215be3c));
    func_0x01384978(*(undefined4 *)(_UNK_0215c474 + 0x215be48));
    func_0x01384978(*(undefined4 *)(_UNK_0215c478 + 0x215be54));
    func_0x01384978(*(undefined4 *)(_UNK_0215c47c + 0x215be60));
    func_0x01384978(*(undefined4 *)(_UNK_0215c480 + 0x215be6c));
    func_0x01384978(*(undefined4 *)(_UNK_0215c484 + 0x215be78));
    *pcVar10 = '\x01';
  }
  aiStack_28[0] = 0;
  iVar6 = func_0x0229f06c(0xb4c0,0);
  if (iVar6 != 0) {
    iVar6 = func_0x0229f13c(0xb4c0,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x02286c84(iVar6,param_1,param_2,0,0);
    return iVar6;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  if (iVar6 == 0) {
    return 0;
  }
  if (*(int *)(param_2 + 0x1c) < 1) {
    return 0;
  }
  iVar12 = *(int *)(param_1 + 0x24);
  uVar13 = FUN_0210e2d4(iVar6,0);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  iVar12 = func_0x02450564(iVar12,uVar13,**(undefined4 **)(_UNK_0215c488 + 0x215bf38));
  if (iVar12 != 0) {
    return 0;
  }
  iVar1 = func_0x02feb690(iVar6,aiStack_28,1,**(undefined4 **)(_UNK_0215c48c + 0x215bf5c));
  iVar12 = aiStack_28[0];
  cVar14 = '\0';
  if (iVar1 != 0) {
    if (aiStack_28[0] == 0) {
      func_0x01384bf0();
    }
    iVar12 = FUN_02123058(iVar12,0);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    cVar14 = *(char *)(iVar12 + 0x2e);
  }
  piVar2 = (int *)FUN_021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar12 = *piVar2;
  uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
    do {
      if (piVar8[-1] == **(int **)(_UNK_0215c490 + 0x215bfc4)) {
        puVar3 = (undefined4 *)(iVar12 + *piVar8 * 8 + 0x180);
        goto LAB_0215c00c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0215c490 + 0x215bfc4),0x18);
LAB_0215c00c:
  (*(code *)*puVar3)(piVar2,puVar3[1]);
  if ((0 < *(int *)(param_1 + 0x20)) || (iVar12 = *(int *)(param_1 + 0x14), iVar12 < 1)) {
    iVar12 = func_0x01384be4(**(undefined4 **)(_UNK_0215c494 + 0x215c034));
    func_0x0244f5a0(iVar12,0);
    piVar2 = *(int **)(param_1 + 0x10);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    *(int **)(iVar12 + 8) = piVar2;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_0215c498 + 0x215c074)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xd0);
          goto LAB_0215c0cc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0215c498 + 0x215c074),2);
LAB_0215c0cc:
    uVar13 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    uVar9 = func_0x01384be4(**(undefined4 **)(_UNK_0215c49c + 0x215c0ec));
    func_0x03a07058(uVar9,iVar12,**(undefined4 **)(_UNK_0215c4a0 + 0x215c108),0);
    iVar12 = func_0x02fbeea0(uVar13,uVar9,0,**(undefined4 **)(_UNK_0215c4a4 + 0x215c124));
  }
  if (0 < iVar12) {
    iVar1 = iVar12;
    if ((cVar14 != '\0') && (iVar4 = FUN_0215c4c8(0xffffffff), 0 < iVar4)) {
      piVar2 = (int *)FUN_021566f4();
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_0215c4a8 + 0x215c188)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x188);
            goto LAB_0215c1d0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0215c4a8 + 0x215c188),0x19);
LAB_0215c1d0:
      iVar1 = (*(code *)*puVar3)(piVar2,iVar12,iVar4,puVar3[1]);
    }
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0x4c);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x01dbb000(iVar4,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = FUN_02141ef4(iVar4,0);
    if (iVar4 == 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(param_2 + 8);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = FUN_02139cf4(iVar4,0);
      uVar5 = FUN_020d8024(iVar6,0,0);
      FUN_0210cd7c(&uStack_38,iVar6,0);
      uVar13 = uStack_38;
      FUN_0210cd7c(&uStack_38,iVar6,0);
      uVar9 = uStack_34;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uStack_50 = 0;
      uStack_4c = 0;
      iVar4 = FUN_020ded9c(iVar4,iVar1,uVar5,uVar13,uVar9,0);
      if (iVar4 != 0) goto LAB_0215c420;
    }
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    piVar2 = *(int **)(_UNK_0215c4ac + 0x215c30c);
    iVar11 = *(int *)(iVar4 + 0x40);
    iVar4 = *piVar2;
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x01384ab4();
      iVar4 = *piVar2;
    }
    uVar13 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0xd8);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uStack_48 = **(undefined4 **)(_UNK_0215c4b0 + 0x215c34c);
    uStack_4c = 0x70;
    uStack_44 = **(undefined4 **)(_UNK_0215c4b4 + 0x215c358);
    iStack_40 = 0;
    uStack_50 = 0;
    uVar5 = func_0x01cdcbac(iVar11,iVar1,1,uVar13,0,0);
    FUN_0210cd7c(&uStack_38,iVar6,0);
    uVar9 = uStack_34;
    uVar13 = uStack_38;
    if (*(int *)(**(int **)(_UNK_0215c4b8 + 0x215c3a4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01dd876c(&uStack_38,uVar13,uVar9,0);
    if (*(int *)(**(int **)(_UNK_0215c4bc + 0x215c3e0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0206de24(uVar5,uStack_38,uStack_34,uStack_30,0,0);
  }
LAB_0215c420:
  if (iVar12 == *(int *)(param_1 + 0x14)) {
    FUN_0215bcb8(param_1);
  }
  else {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  }
  return iVar12;
}



// ===== FAT.Merge.OutputSpawnBonusHandler$$.ctor RVA 0x214c6b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215c6b0(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0215c728 + 0x215c6c4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215c72c + 0x215c6d8));
    func_0x01384978(*(undefined4 *)(_UNK_0215c730 + 0x215c6e4));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0215c734 + 0x215c6f8));
  func_0x02450558(uVar1,**(undefined4 **)(_UNK_0215c738 + 0x215c70c));
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.OutputSpawnBonusHandler.<>c__DisplayClass17_0$$<Simulate>b__0 RVA 0x214c73c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215c73c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_0215c7f0 + 0x215c754);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215c7f4 + 0x215c768));
    *pcVar6 = '\x01';
  }
  piVar5 = *(int **)(param_1 + 8);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar5;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_0215c7f8 + 0x215c790)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_0215c7d8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_0215c7f8 + 0x215c790),0);
LAB_0215c7d8:
                    /* WARNING: Could not recover jumptable at 0x0215c7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar5,param_2,puVar2[1]);
  return;
}


