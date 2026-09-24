/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.FogScoreSpawnBonusHandler$$.ctor RVA 0x20c6914 =====

void FUN_020d6914(int param_1,undefined4 param_2)

{
  func_0x021552f4(param_1,0);
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}



// ===== FAT.Merge.FogScoreSpawnBonusHandler$$IsValid RVA 0x20c6930 =====

uint FUN_020d6930(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0xb2f3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb2f3,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  piVar2 = *(int **)(param_1 + 0x14);
  if ((piVar2 != (int *)0x0) &&
     (iVar1 = (**(code **)(*piVar2 + 0x108))(piVar2,*(undefined4 *)(*piVar2 + 0x10c)), iVar1 != 0))
  {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 0;
    iVar1 = func_0x02b48934(iVar1,0);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar4 = func_0x0289f430(iVar1,0);
      uVar4 = uVar4 ^ 1;
    }
  }
  return uVar4;
}



// ===== FAT.Merge.FogScoreSpawnBonusHandler$$IsValidForContext RVA 0x20c69f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020d69f4(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
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
  int iStack_1c;
  
  pcVar6 = (char *)(_UNK_020d6b4c + 0x20d6a10);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d6b50 + 0x20d6a24));
    func_0x01384978(*(undefined4 *)(_UNK_020d6b54 + 0x20d6a30));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xb2f4,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xb2f4,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
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
    func_0x0245495c(iVar5,uVar7,&uStack_38,uVar4,0,0);
    uVar7 = func_0x0245496c(&uStack_38,0,0);
    return uVar7;
  }
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = 0;
  iVar2 = func_0x0289d7e4(iVar2,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  bVar1 = 0;
  if (*(int *)(param_2 + 8) != 0) {
    bVar1 = 0;
    iVar3 = func_0x02139cf4(*(int *)(param_2 + 8),0);
    iVar5 = 0;
    if (iVar3 != 0) {
      iStack_1c = 0;
      uStack_20 = 0;
      func_0x03507d38(&uStack_20,*(undefined4 *)(iVar3 + 8),
                      **(undefined4 **)(_UNK_020d6b58 + 0x20d6ae8));
      iVar5 = iStack_1c;
    }
    if (*(int *)(param_2 + 8) != 0) {
      bVar1 = func_0x02141ef4(*(int *)(param_2 + 8),0);
    }
  }
  uVar7 = 1;
  if (((0 < iVar2) && (iVar2 != iVar5)) && (uVar7 = 0, (bVar1 & iVar2 == 1) != 0)) {
    uVar7 = 1;
  }
  return uVar7;
}



// ===== FAT.Merge.FogScoreSpawnBonusHandler$$GetActivityCostId RVA 0x20c6b5c =====

undefined4 FUN_020d6b5c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb2f5,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x14);
    if (param_1 == 0) {
      return 0;
    }
    uVar4 = 0;
    iVar1 = func_0x0229f06c(0x59af,0);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x40) != 0) {
        uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x14);
      }
      return uVar4;
    }
    iVar1 = func_0x0229f13c(0x59af,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb2f5,0);
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
  uVar4 = func_0x0245498c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.Merge.FogScoreSpawnBonusHandler$$EnsureOutputMap RVA 0x20c6bc8 =====

/* WARNING: Removing unreachable block (ram,0x020d6f3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d6bc8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_020d7018 + 0x20d6be0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d701c + 0x20d6bf4));
    func_0x01384978(*(undefined4 *)(_UNK_020d7020 + 0x20d6c00));
    func_0x01384978(*(undefined4 *)(_UNK_020d7024 + 0x20d6c0c));
    func_0x01384978(*(undefined4 *)(_UNK_020d7028 + 0x20d6c18));
    func_0x01384978(*(undefined4 *)(_UNK_020d702c + 0x20d6c24));
    func_0x01384978(*(undefined4 *)(_UNK_020d7030 + 0x20d6c30));
    func_0x01384978(*(undefined4 *)(_UNK_020d7034 + 0x20d6c3c));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xb2f6,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xb2f6,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar9 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar2 == 0) {
      uVar7 = 1;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_30,uVar7,0,0);
    return;
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    iVar2 = *(int *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0xc) = 0;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar2 + 0xc) = 0;
    iVar9 = *(int *)(param_1 + 0x14);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0289d72c(iVar9,0);
    if (iVar2 != 0) {
      iVar2 = *(int *)(iVar2 + 0x30);
      iStack_34 = param_1;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x03653608(iVar2,**(undefined4 **)(_UNK_020d7038 + 0x20d6d04));
LAB_020d6d10:
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar3;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_020d7048 + 0x20d6d2c)) {
            puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
            goto LAB_020d6d74;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_020d7048 + 0x20d6d2c),0);
LAB_020d6d74:
      iVar2 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      if (iVar2 != 0) {
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar3;
        uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar6[-1] == **(int **)(_UNK_020d703c + 0x20d6da8)) {
              puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
              goto LAB_020d6df0;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_020d703c + 0x20d6da8),0);
LAB_020d6df0:
        uVar10 = (*(code *)*puVar4)(piVar3,puVar4[1]);
        if (*(int *)(**(int **)(_UNK_020d7040 + 0x20d6e10) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x02566088(&uStack_30,uVar10,0);
        uVar1 = uStack_28;
        uVar7 = uStack_2c;
        uVar10 = uStack_30;
        iVar2 = *(int *)(iStack_34 + 0x10);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar9 = *(int *)(iVar2 + 8);
        uVar5 = *(uint *)(iVar2 + 0xc);
        piVar6 = *(int **)(_UNK_020d7044 + 0x20d6e64);
        *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
        iVar11 = *piVar6;
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        if (uVar5 < *(uint *)(iVar9 + 0xc)) {
          *(uint *)(iVar2 + 0xc) = uVar5 + 1;
          iVar9 = iVar9 + uVar5 * 0xc;
          *(undefined4 *)(iVar9 + 0x10) = uVar10;
          *(undefined4 *)(iVar9 + 0x14) = uVar7;
          *(undefined4 *)(iVar9 + 0x18) = uVar1;
        }
        else {
          uStack_38 = *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38);
          func_0x024505a8(iVar2,uVar10,uVar7,uVar1);
        }
        goto LAB_020d6d10;
      }
      if (piVar3 != (int *)0x0) {
        iVar2 = *piVar3;
        uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar6[-1] == **(int **)(_UNK_020d704c + 0x20d6edc)) {
              puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
              goto LAB_020d6f24;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_020d704c + 0x20d6edc),0);
LAB_020d6f24:
        (*(code *)*puVar4)(piVar3,puVar4[1]);
      }
    }
  }
  return;
}



// ===== FAT.Merge.FogScoreSpawnBonusHandler$$GetRewardReason RVA 0x20c7054 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020d7054(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  pcVar4 = (char *)(_UNK_020d70f4 + 0x20d7068);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d70f8 + 0x20d707c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb2f7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb2f7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0221b1d4 + 0x221b0f4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0221b1d8 + 0x221b108),param_1,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
    uVar6 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0221b1dc + 0x221b1c4));
    return uVar6;
  }
  piVar3 = *(int **)(_UNK_020d70fc + 0x20d70d4);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x478);
}



// ===== FAT.Merge.FogScoreSpawnBonusHandler$$GetFlyType RVA 0x20c7100 =====

undefined4 FUN_020d7100(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb2f8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb2f8,0);
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
  return 0x67;
}



// ===== FAT.Merge.FogScoreSpawnBonusHandler$$<>iFixBaseProxy_IsValidForContext RVA 0x20c7154 =====

undefined4 FUN_020d7154(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xb46c,0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb46c,0);
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
    func_0x01485278(&uStack_38,param_2,0);
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
    uVar4 = func_0x0245496c(&uStack_38,0,0);
    return uVar4;
  }
  return 1;
}


