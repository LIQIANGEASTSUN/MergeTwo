/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.DiningBoardItemSpawnBonusHandler$$.ctor RVA 0x2146e68 =====

void FUN_02156e68(int param_1,undefined4 param_2)

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
  
  FUN_021552f4();
  *(undefined4 *)(param_1 + 0x14) = param_2;
  iVar1 = func_0x0229f06c(0x5b3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b3,0);
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



// ===== FAT.Merge.DiningBoardItemSpawnBonusHandler$$IsValid RVA 0x2146e88 =====

undefined4 FUN_02156e88(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 uVar6;
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
  
  iVar1 = func_0x0229f06c(0xb477,0);
  if (iVar1 == 0) {
    param_1 = (int *)param_1[5];
    if (param_1 == (int *)0x0) {
      return 0;
    }
    uVar4 = 0;
    iVar1 = func_0x0229f06c(0x128,0);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
      if (iVar1 != 0) {
        uVar6 = func_0x02b4cec4(param_1);
        iVar1 = (int)((ulonglong)uVar6 >> 0x20);
        bVar5 = (int)uVar6 != 0;
        uVar4 = 0;
        if ((int)-(iVar1 + (uint)bVar5) < 0 != (SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)bVar5)))
        {
          uVar4 = 1;
        }
      }
      return uVar4;
    }
    iVar1 = func_0x0229f13c(0x128,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb477,0);
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



// ===== FAT.Merge.DiningBoardItemSpawnBonusHandler$$IsValidForContext RVA 0x2146ef4 =====

undefined4 FUN_02156ef4(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  iVar1 = func_0x0229f06c(0xb478,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb478,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
    uVar5 = func_0x0245496c(&uStack_38,0,0);
    return uVar5;
  }
  piVar2 = *(int **)(param_1 + 0x14);
  if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02156f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*piVar2 + 0x108))(piVar2,*(undefined4 *)(*piVar2 + 0x10c));
    return uVar5;
  }
  return 0;
}



// ===== FAT.Merge.DiningBoardItemSpawnBonusHandler$$GetActivityCostId RVA 0x2146f70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02156f70(int param_1)

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
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_02157044 + 0x2156f88);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02157048 + 0x2156f9c));
    func_0x01384978(*(undefined4 *)(_UNK_0215704c + 0x2156fa8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb479,0);
  if (iVar1 == 0) {
    iVar4 = *(int *)(param_1 + 0x14);
    iVar1 = 0;
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 0x78);
    }
    uStack_14 = 0;
    if (iVar4 != 0 && iVar1 != 0) {
      uStack_14 = 0;
      uStack_18 = 0;
      func_0x03507d38(&uStack_18,*(undefined4 *)(iVar1 + 0x20),
                      **(undefined4 **)(_UNK_02157050 + 0x215701c));
    }
    return uStack_14;
  }
  iVar1 = func_0x0229f13c(0xb479,0);
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
  uVar5 = func_0x0245498c(&uStack_30,0,0);
  return uVar5;
}



// ===== FAT.Merge.DiningBoardItemSpawnBonusHandler$$EnsureOutputMap RVA 0x2147054 =====

/* WARNING: Removing unreachable block (ram,0x02156cd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02157054(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  char *pcVar11;
  int iVar12;
  undefined4 uVar13;
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
  
  pcVar11 = (char *)(_UNK_02157128 + 0x2157068);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215712c + 0x215707c));
    *pcVar11 = '\x01';
  }
  iVar3 = func_0x0229f06c(0xb47a,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xb47a,0);
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
    iVar12 = *(int *)(iVar3 + 8);
    uVar13 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uVar10 = 2;
    if (iVar3 == 0) {
      uVar10 = 1;
    }
    func_0x0245495c(iVar12,uVar13,&uStack_30,uVar10,0,0);
    return;
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar3 + 0xc) = 0;
  iVar12 = 0;
  if (iVar4 != 0) {
    iVar12 = *(int *)(iVar4 + 0x7c);
  }
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar4 == 0 || iVar12 == 0) {
    return;
  }
  piVar7 = *(int **)(iVar12 + 0x54);
  piVar5 = *(int **)(param_1 + 0x10);
  pcVar11 = (char *)(_UNK_02156db8 + 0x2156910);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02156dbc + 0x2156924));
    func_0x01384978(*(undefined4 *)(_UNK_02156dc0 + 0x2156930));
    func_0x01384978(*(undefined4 *)(_UNK_02156dc4 + 0x215693c));
    func_0x01384978(*(undefined4 *)(_UNK_02156dc8 + 0x2156948));
    func_0x01384978(*(undefined4 *)(_UNK_02156dcc + 0x2156954));
    func_0x01384978(*(undefined4 *)(_UNK_02156dd0 + 0x2156960));
    *pcVar11 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x6f5d,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x6f5d,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_38 = 0;
    func_0x02174858(iVar3,param_1,piVar5,piVar7);
    return;
  }
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar3 = *piVar5;
  uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar8[-1] == **(int **)(_UNK_02156dd4 + 0x21569d4)) {
        puVar2 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xd8);
        goto LAB_02156a1c;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_02156dd4 + 0x21569d4),3);
LAB_02156a1c:
  (*(code *)*puVar2)(piVar5,puVar2[1]);
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar3 = *piVar7;
  uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar8[-1] == **(int **)(_UNK_02156dd8 + 0x2156a48)) {
        puVar2 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
        goto LAB_02156a90;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_02156dd8 + 0x2156a48),0);
LAB_02156a90:
  piVar7 = (int *)(*(code *)*puVar2)(piVar7,puVar2[1]);
  piVar8 = *(int **)(_UNK_02156ddc + 0x2156ab4);
  do {
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar7;
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar9[-1] == *piVar8) {
          puVar2 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
          goto LAB_02156b0c;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar8,0);
LAB_02156b0c:
    iVar3 = (*(code *)*puVar2)(piVar7,puVar2[1]);
    if (iVar3 == 0) break;
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar7;
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_02156de0 + 0x2156b40)) {
          puVar2 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
          goto LAB_02156b88;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_02156de0 + 0x2156b40),0);
LAB_02156b88:
    uVar13 = (*(code *)*puVar2)(piVar7,puVar2[1]);
    if (*(int *)(**(int **)(_UNK_02156de4 + 0x2156ba8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02566088(&uStack_30,uVar13,0);
    uVar1 = uStack_28;
    uVar10 = uStack_2c;
    uVar13 = uStack_30;
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar5;
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_02156de8 + 0x2156bf0)) {
          puVar2 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xd0);
          goto LAB_02156c38;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_02156de8 + 0x2156bf0),2);
LAB_02156c38:
    uStack_38 = puVar2[1];
    (*(code *)*puVar2)(piVar5,uVar13,uVar10,uVar1);
  } while( true );
  if (piVar7 != (int *)0x0) {
    iVar3 = *piVar7;
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar6 != 0) {
      piVar5 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_02156dec + 0x2156c78)) {
          puVar2 = (undefined4 *)(iVar3 + *piVar5 * 8 + 0xc0);
          goto LAB_02156cc0;
        }
        uVar6 = uVar6 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_02156dec + 0x2156c78),0);
LAB_02156cc0:
    (*(code *)*puVar2)(piVar7,puVar2[1]);
  }
  return;
}



// ===== FAT.Merge.DiningBoardItemSpawnBonusHandler$$GetRewardReason RVA 0x2147130 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02157130(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_021571d0 + 0x2157144);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021571d4 + 0x2157158));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb47b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb47b,0);
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
  piVar3 = *(int **)(_UNK_021571d8 + 0x21571b0);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x460);
}



// ===== FAT.Merge.DiningBoardItemSpawnBonusHandler$$GetFlyType RVA 0x21471dc =====

undefined4 FUN_021571dc(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb47c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb47c,0);
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
  return 0x6f;
}



// ===== FAT.Merge.DiningBoardItemSpawnBonusHandler$$<>iFixBaseProxy_IsValidForContext RVA 0x2147230 =====

undefined4 thunk_FUN_02156548(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xb46c,0);
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


