/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.ScoreBoardItemSpawnBonusHandler$$.ctor RVA 0x214d080 =====

void FUN_0215d080(int param_1,undefined4 param_2)

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



// ===== FAT.Merge.ScoreBoardItemSpawnBonusHandler$$IsValid RVA 0x214d0a0 =====

undefined4 FUN_0215d0a0(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0xb4ce,0);
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
    iVar1 = func_0x0229f13c(0xb4ce,0);
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



// ===== FAT.Merge.ScoreBoardItemSpawnBonusHandler$$IsValidForContext RVA 0x214d10c =====

uint FUN_0215d10c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
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
  
  iVar1 = func_0x0229f06c(0xb4cf,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4cf,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_38,uVar5,0,0);
    uVar4 = func_0x0245496c(&uStack_38,0,0);
    return uVar4;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 8);
  uVar4 = 0;
  iVar1 = 0;
  if (iVar6 != 0) {
    iVar1 = FUN_02139cf4(iVar6,0);
  }
  piVar2 = *(int **)(param_1 + 0x14);
  if ((piVar2 != (int *)0x0) &&
     (iVar3 = (**(code **)(*piVar2 + 0x108))(piVar2,*(undefined4 *)(*piVar2 + 0x10c)), iVar3 != 0))
  {
    iVar3 = *(int *)(param_1 + 0x14);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 0;
    iVar3 = func_0x01b300d4(iVar3,0);
    if ((iVar1 != 0) && (iVar3 == 0)) {
      uVar4 = 1;
      if (*(int *)(iVar1 + 8) != 1) {
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0229f06c(0x144,0);
        if (iVar1 != 0) {
          iVar1 = func_0x0229f13c(0x144,0);
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
          func_0x01485278(&uStack_30,iVar6,0);
          iVar6 = *(int *)(iVar1 + 8);
          uVar7 = *(undefined4 *)(iVar1 + 0xc);
          iVar1 = *(int *)(iVar1 + 0x10);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          uVar5 = 2;
          if (iVar1 == 0) {
            uVar5 = 1;
          }
          uStack_50 = 0;
          uStack_4c = 0;
          func_0x0245495c(iVar6,uVar7,&uStack_30,uVar5);
          uVar4 = func_0x0245496c(&uStack_30,0,0);
          return uVar4;
        }
        iVar1 = *(int *)(iVar6 + 0x4c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        return (uint)*(byte *)(iVar1 + 0xa0);
      }
    }
  }
  return uVar4;
}



// ===== FAT.Merge.ScoreBoardItemSpawnBonusHandler$$GetActivityCostId RVA 0x214d218 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0215d218(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0215d2ec + 0x215d230);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215d2f0 + 0x215d244));
    func_0x01384978(*(undefined4 *)(_UNK_0215d2f4 + 0x215d250));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb4d0,0);
  if (iVar1 == 0) {
    iVar4 = *(int *)(param_1 + 0x14);
    iVar1 = 0;
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 0x44);
    }
    uStack_14 = 0;
    if (iVar4 != 0 && iVar1 != 0) {
      uStack_14 = 0;
      uStack_18 = 0;
      func_0x03507d38(&uStack_18,*(undefined4 *)(iVar1 + 0x1c),
                      **(undefined4 **)(_UNK_0215d2f8 + 0x215d2c4));
    }
    return uStack_14;
  }
  iVar1 = func_0x0229f13c(0xb4d0,0);
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



// ===== FAT.Merge.ScoreBoardItemSpawnBonusHandler$$EnsureOutputMap RVA 0x214d2fc =====

/* WARNING: Removing unreachable block (ram,0x02156cd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215d2fc(int param_1)

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
  
  pcVar11 = (char *)(_UNK_0215d3d0 + 0x215d310);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215d3d4 + 0x215d324));
    *pcVar11 = '\x01';
  }
  iVar3 = func_0x0229f06c(0xb4d1,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xb4d1,0);
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
    iVar12 = *(int *)(iVar4 + 0x48);
  }
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar4 == 0 || iVar12 == 0) {
    return;
  }
  piVar7 = *(int **)(iVar12 + 0x50);
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



// ===== FAT.Merge.ScoreBoardItemSpawnBonusHandler$$GetRewardReason RVA 0x214d3d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0215d3d8(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_0215d478 + 0x215d3ec);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215d47c + 0x215d400));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb4d2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4d2,0);
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
  piVar3 = *(int **)(_UNK_0215d480 + 0x215d458);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x39c);
}



// ===== FAT.Merge.ScoreBoardItemSpawnBonusHandler$$GetFlyType RVA 0x214d484 =====

undefined4 FUN_0215d484(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb4d3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4d3,0);
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
  return 0x53;
}



// ===== FAT.Merge.ScoreBoardItemSpawnBonusHandler$$OnItemSpawned RVA 0x214d4d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215d4d8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_0215d5fc + 0x215d4f8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215d600 + 0x215d510));
    func_0x01384978(*(undefined4 *)(_UNK_0215d604 + 0x215d51c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb4d4,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (param_4 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 0;
    if ((*(int *)(param_4 + 8) != 0) && (iVar2 = FUN_02139cf4(*(int *)(param_4 + 8),0), iVar2 != 0))
    {
      uStack_24 = 0;
      uStack_28 = 0;
      func_0x03507d38(&uStack_28,*(undefined4 *)(iVar2 + 8),
                      **(undefined4 **)(_UNK_0215d608 + 0x215d5b0));
      uVar4 = uStack_24;
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01b3d564(iVar1,param_2,param_3,uVar4,0);
  }
  else {
    iVar1 = func_0x0229f13c(0xb4d4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179974(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.Merge.ScoreBoardItemSpawnBonusHandler$$<>iFixBaseProxy_IsValidForContext RVA 0x214d60c =====

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



// ===== FAT.Merge.ScoreBoardItemSpawnBonusHandler$$<>iFixBaseProxy_OnItemSpawned RVA 0x214d610 =====

void FUN_0215d610(void)

{
  FUN_02155d3c();
  return;
}


