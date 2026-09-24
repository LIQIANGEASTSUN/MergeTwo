/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.ItemBubbleComponent$$InitItemBubbleType RVA 0x21092e4 =====

void FUN_021192e4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = func_0x0229f06c(0x5c5c,0);
  if ((int)uVar2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = param_2;
    func_0x0211e674(param_1,(int)((ulonglong)uVar2 >> 0x20),param_3,param_4,param_5);
  }
  else {
    iVar1 = func_0x0229f13c(0x5c5c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x022359e0(iVar1,param_1,param_2);
  }
  return;
}



// ===== FAT.Merge.ItemBubbleComponent$$get_BreakCost RVA 0x210e4dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0211e4dc(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
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
  
  pcVar7 = (char *)(_UNK_0211e5e4 + 0x211e4f0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211e5e8 + 0x211e504));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa58b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa58b,0);
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
    uVar9 = func_0x0245498c(&uStack_30,0,0);
    return uVar9;
  }
  piVar2 = (int *)func_0x021566f4(0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_0211e5ec + 0x211e578)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x1c0);
        goto LAB_0211e5c0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0211e5ec + 0x211e578),0x20);
LAB_0211e5c0:
  iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
  uVar9 = 0;
  if (iVar1 != 0) {
    uVar9 = *(undefined4 *)(param_1 + 0x34);
  }
  return uVar9;
}



// ===== FAT.Merge.ItemBubbleComponent$$get_LifeRemainTime RVA 0x210e5f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211e5f0(int param_1)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x775c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x775c,0);
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
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar4,0,0);
    func_0x0245499c(&uStack_30,0,0);
    return;
  }
  uVar3 = *(uint *)(param_1 + 0x20);
  fVar2 = (float)func_0x01457e28(*(uint *)(param_1 + 0x18) - uVar3,
                                 *(int *)(param_1 + 0x1c) -
                                 (((int)uVar3 >> 0x1f) + (uint)(*(uint *)(param_1 + 0x18) < uVar3)))
  ;
  if (fVar2 < 0.0) {
    fVar2 = _UNK_0211e670;
  }
  func_0x01457d14(fVar2);
  return;
}



// ===== FAT.Merge.ItemBubbleComponent$$_OnInit RVA 0x210e674 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211e674(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined8 uVar10;
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
  undefined4 uStack_24;
  
  uVar10 = func_0x0229f06c(0x5c5d,0);
  if ((int)uVar10 == 0) {
    if (*(int *)(param_1 + 0x10) == 2) {
      uStack_28 = param_5;
      func_0x0211f224(param_1,(int)((ulonglong)uVar10 >> 0x20),param_3,param_4);
    }
    else if (*(int *)(param_1 + 0x10) == 1) {
      pcVar8 = (char *)(_UNK_0211f218 + 0x211f0a0);
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_0211f21c + 0x211f0b4));
        *pcVar8 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x5c5e,0);
      if (iVar1 != 0) {
        iVar1 = func_0x0229f13c(0x5c5e,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,param_5,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar1 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
        }
        func_0x01485278(&uStack_38,param_1,0);
        func_0x01485238(&uStack_38,param_5,0);
        iVar7 = *(int *)(iVar1 + 8);
        uVar9 = *(undefined4 *)(iVar1 + 0xc);
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uVar6 = 3;
        if (iVar1 == 0) {
          uVar6 = 2;
        }
        func_0x0245495c(iVar7,uVar9,&uStack_38,uVar6,0,0);
        return;
      }
      piVar2 = (int *)func_0x021566f4(0);
      iVar1 = func_0x02123568(param_1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar9 = FUN_0210e2d4(iVar1);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_0211f220 + 0x211f154)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x108);
            goto LAB_0211f19c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0211f220 + 0x211f154),9);
LAB_0211f19c:
      iVar1 = (*(code *)*puVar3)(piVar2,uVar9,puVar3[1]);
      if (iVar1 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)(iVar1 + 0x28);
      }
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(param_1 + 0x34) = uVar9;
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x1bc);
      *(int *)(param_1 + 0x18) = iVar1;
      *(int *)(param_1 + 0x1c) = iVar1 >> 0x1f;
      *(undefined4 *)(param_1 + 0x20) = param_5;
      return;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5c5d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = param_5;
    uStack_24 = 0;
    func_0x022358f8(iVar1,param_1,param_3,param_4);
  }
  return;
}



// ===== FAT.Merge.ItemBubbleComponent$$IsBubbleItem RVA 0x210e720 =====

uint FUN_0211e720(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x1621,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1621,0);
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
  return (uint)(*(int *)(param_1 + 0x10) == 1);
}



// ===== FAT.Merge.ItemBubbleComponent$$IsFrozenItem RVA 0x210e780 =====

uint FUN_0211e780(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x1628,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1628,0);
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
  return (uint)(*(int *)(param_1 + 0x10) == 2);
}



// ===== FAT.Merge.ItemBubbleComponent$$OnWatchBubbleAd_Prepare RVA 0x210e7e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211e7e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
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
  
  pcVar3 = (char *)(_UNK_0211e910 + 0x211e7f8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211e914 + 0x211e80c));
    func_0x01384978(*(undefined4 *)(_UNK_0211e918 + 0x211e818));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0xb378,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb378,0);
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
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  *(undefined1 *)(param_1 + 0x24) = 1;
  iVar1 = func_0x02123568(param_1,0);
  if (iVar1 != 0) {
    uVar4 = FUN_0210e5f4();
  }
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  iVar1 = func_0x02123568(param_1,0);
  uVar4 = 0;
  if (iVar1 != 0) {
    uVar4 = FUN_0210e2d4();
  }
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  iVar1 = func_0x02123568(param_1,0);
  uStack_14 = 0;
  if ((iVar1 != 0) && (iVar1 = FUN_0210cd28(), iVar1 != 0)) {
    uStack_14 = 0;
    uStack_18 = 0;
    func_0x03507d38(&uStack_18,*(undefined4 *)(iVar1 + 8),
                    **(undefined4 **)(_UNK_0211e91c + 0x211e8e8));
  }
  *(undefined4 *)(param_1 + 0x30) = uStack_14;
  return;
}



// ===== FAT.Merge.ItemBubbleComponent$$OnWatchBubbleAd_Finish RVA 0x210e920 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211e920(int param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar9 = (char *)(_UNK_0211f03c + 0x211e940);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211f040 + 0x211e954));
    func_0x01384978(*(undefined4 *)(_UNK_0211f044 + 0x211e960));
    func_0x01384978(*(undefined4 *)(_UNK_0211f048 + 0x211e96c));
    func_0x01384978(*(undefined4 *)(_UNK_0211f04c + 0x211e978));
    func_0x01384978(*(undefined4 *)(_UNK_0211f050 + 0x211e984));
    func_0x01384978(*(undefined4 *)(_UNK_0211f054 + 0x211e990));
    func_0x01384978(*(undefined4 *)(_UNK_0211f058 + 0x211e99c));
    func_0x01384978(*(undefined4 *)(_UNK_0211f05c + 0x211e9a8));
    func_0x01384978(*(undefined4 *)(_UNK_0211f060 + 0x211e9b4));
    *pcVar9 = '\x01';
  }
  iStack_28 = 0;
  iVar3 = func_0x0229f06c(0xb379,0);
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 0x24) = 0;
    if (param_2 != 0) {
      bVar1 = false;
      iVar3 = func_0x02123568(param_1,0);
      iVar11 = 0;
      if (iVar3 != 0) {
        bVar1 = false;
        iVar4 = func_0x02feb690(iVar3,&iStack_28,0,**(undefined4 **)(_UNK_0211f064 + 0x211ea58));
        iVar5 = iStack_28;
        iVar11 = 0;
        if ((iVar4 != 0) && (iVar11 = 0, iStack_28 == param_1)) {
          if (iStack_28 == 0) {
            func_0x01384bf0();
          }
          iVar11 = FUN_0211e720(iVar5);
        }
        iVar5 = FUN_0210cd28(iVar3);
        if (iVar5 != 0) {
          iVar4 = 0;
          iVar5 = func_0x01c24918(0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar5 + 0x4c) != 0) {
            iVar4 = 0;
            iVar5 = func_0x01dbb000(*(int *)(iVar5 + 0x4c),0);
            if (iVar5 != 0) {
              iVar4 = func_0x02139cf4(iVar5,0);
            }
          }
          iVar5 = FUN_0210cd28(iVar3);
          bVar1 = iVar4 == iVar5;
        }
        iVar5 = FUN_02116a8c(iVar3);
        if (((iVar5 == 0) && (iVar5 = FUN_0210cd28(iVar3), bVar1 && iVar11 != 0)) && (iVar5 != 0)) {
          iVar11 = FUN_0210cd28(iVar3);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          FUN_020e79c0(iVar11,iVar3,0);
          uVar7 = FUN_0210e2d4(iVar3);
          uVar7 = func_0x02157e88(uVar7,0);
          piVar6 = *(int **)(_UNK_0211f080 + 0x211efd0);
          iVar11 = *piVar6;
          if (*(int *)(iVar11 + 0x74) == 0) {
            func_0x01384ab4();
            iVar11 = *piVar6;
          }
          iVar11 = *(int *)(*(int *)(iVar11 + 0x5c) + 0x7c);
          if (*(int *)(**(int **)(_UNK_0211f084 + 0x211eff0) + 0x74) == 0) {
            func_0x01384ab4(**(int **)(_UNK_0211f084 + 0x211eff0));
          }
          func_0x019959cc(iVar3,uVar7,1,0,param_3 == iVar11,0);
          return;
        }
      }
      piVar6 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0211f068 + 0x211eb34),10);
      uStack_38 = *(undefined4 *)(param_1 + 0x28);
      puVar10 = *(undefined4 **)(_UNK_0211f06c + 0x211eb4c);
      iVar5 = func_0x01384abc(*puVar10,&uStack_38);
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar5 != 0) &&
         (iVar4 = func_0x01384ab8(iVar5,*(undefined4 *)(*piVar6 + 0x20)), iVar4 == 0)) {
        uVar7 = func_0x01384c10();
        func_0x01384aa0(uVar7,0);
      }
      if (piVar6[3] == 0) {
        func_0x01384bf4();
      }
      piVar6[4] = iVar5;
      uStack_2c = *(undefined4 *)(param_1 + 0x2c);
      iVar5 = func_0x01384abc(*puVar10,&uStack_2c);
      if ((iVar5 != 0) &&
         (iVar4 = func_0x01384ab8(iVar5,*(undefined4 *)(*piVar6 + 0x20)), iVar4 == 0)) {
        uVar7 = func_0x01384c10();
        func_0x01384aa0(uVar7,0);
      }
      if ((uint)piVar6[3] < 2) {
        func_0x01384bf4();
      }
      piVar6[5] = iVar5;
      uStack_30 = *(undefined4 *)(param_1 + 0x30);
      iVar5 = func_0x01384abc(*puVar10,&uStack_30);
      if ((iVar5 != 0) &&
         (iVar4 = func_0x01384ab8(iVar5,*(undefined4 *)(*piVar6 + 0x20)), iVar4 == 0)) {
        uVar7 = func_0x01384c10();
        func_0x01384aa0(uVar7,0);
      }
      if ((uint)piVar6[3] < 3) {
        func_0x01384bf4();
      }
      piVar6[6] = iVar5;
      uVar7 = **(undefined4 **)(_UNK_0211f070 + 0x211ec68);
      if (iVar3 == 0) {
        uStack_38 = 0;
      }
      else {
        uStack_38 = FUN_0210e5f4(iVar3);
      }
      iVar5 = func_0x01384abc(*puVar10,&uStack_38);
      if ((iVar5 != 0) &&
         (iVar4 = func_0x01384ab8(iVar5,*(undefined4 *)(*piVar6 + 0x20)), iVar4 == 0)) {
        uVar8 = func_0x01384c10();
        func_0x01384aa0(uVar8,0);
      }
      if ((uint)piVar6[3] < 4) {
        func_0x01384bf4();
      }
      piVar6[7] = iVar5;
      if (iVar3 == 0) {
        uStack_38 = 0;
      }
      else {
        uStack_38 = FUN_0210e2d4(iVar3);
      }
      iVar5 = func_0x01384abc(*puVar10,&uStack_38);
      if ((iVar5 != 0) &&
         (iVar4 = func_0x01384ab8(iVar5,*(undefined4 *)(*piVar6 + 0x20)), iVar4 == 0)) {
        uVar8 = func_0x01384c10();
        func_0x01384aa0(uVar8,0);
      }
      if ((uint)piVar6[3] < 5) {
        func_0x01384bf4();
      }
      piVar6[8] = iVar5;
      uVar8 = 0;
      if ((iVar3 != 0) && (iVar5 = FUN_0210cd28(iVar3), iVar5 != 0)) {
        uStack_34 = 0;
        uStack_38 = 0;
        func_0x03507d38(&uStack_38,*(undefined4 *)(iVar5 + 8),
                        **(undefined4 **)(_UNK_0211f074 + 0x211ed6c));
        uVar8 = uStack_34;
      }
      uStack_38 = uVar8;
      iVar5 = func_0x01384abc(*puVar10,&uStack_38);
      if ((iVar5 != 0) &&
         (iVar4 = func_0x01384ab8(iVar5,*(undefined4 *)(*piVar6 + 0x20)), iVar4 == 0)) {
        uVar8 = func_0x01384c10();
        func_0x01384aa0(uVar8,0);
      }
      if ((uint)piVar6[3] < 6) {
        func_0x01384bf4();
      }
      piVar6[9] = iVar5;
      if (iVar3 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_02116a8c(iVar3);
      }
      puVar10 = *(undefined4 **)(_UNK_0211f078 + 0x211ee04);
      uStack_38 = CONCAT31(uStack_38._1_3_,uVar2);
      iVar3 = func_0x01384abc(*puVar10,&uStack_38);
      if ((iVar3 != 0) &&
         (iVar5 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar6 + 0x20)), iVar5 == 0)) {
        uVar8 = func_0x01384c10();
        func_0x01384aa0(uVar8,0);
      }
      if ((uint)piVar6[3] < 7) {
        func_0x01384bf4();
      }
      piVar6[10] = iVar3;
      uStack_2c = CONCAT31(uStack_2c._1_3_,(char)iVar11);
      iVar3 = func_0x01384abc(*puVar10,&uStack_2c);
      if ((iVar3 != 0) &&
         (iVar11 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar6 + 0x20)), iVar11 == 0)) {
        uVar8 = func_0x01384c10();
        func_0x01384aa0(uVar8,0);
      }
      if ((uint)piVar6[3] < 8) {
        func_0x01384bf4();
      }
      piVar6[0xb] = iVar3;
      uStack_30 = CONCAT31(uStack_30._1_3_,bVar1);
      iVar3 = func_0x01384abc(*puVar10,&uStack_30);
      if ((iVar3 != 0) &&
         (iVar11 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar6 + 0x20)), iVar11 == 0)) {
        uVar8 = func_0x01384c10();
        func_0x01384aa0(uVar8,0);
      }
      if ((uint)piVar6[3] < 9) {
        func_0x01384bf4();
      }
      piVar6[0xc] = iVar3;
      if ((param_3 != 0) &&
         (iVar3 = func_0x01384ab8(param_3,*(undefined4 *)(*piVar6 + 0x20)), iVar3 == 0)) {
        uVar8 = func_0x01384c10();
        func_0x01384aa0(uVar8,0);
      }
      if ((uint)piVar6[3] < 10) {
        func_0x01384bf4();
      }
      piVar6[0xd] = param_3;
      uVar7 = func_0x0244f708(uVar7,piVar6,0);
      if (*(int *)(**(int **)(_UNK_0211f07c + 0x211ef5c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0199d1cc(uVar7,0);
    }
  }
  else {
    iVar3 = func_0x0229f13c(0xb379,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x021c9080(iVar3,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.ItemBubbleComponent$$_InitBubble RVA 0x210f088 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211f088(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
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
  
  pcVar8 = (char *)(_UNK_0211f218 + 0x211f0a0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211f21c + 0x211f0b4));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c5e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c5e,0);
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
    func_0x01485238(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar6,0,0);
    return;
  }
  piVar2 = (int *)func_0x021566f4(0);
  iVar1 = func_0x02123568(param_1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar9 = FUN_0210e2d4(iVar1);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_0211f220 + 0x211f154)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x108);
        goto LAB_0211f19c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0211f220 + 0x211f154),9);
LAB_0211f19c:
  iVar1 = (*(code *)*puVar3)(piVar2,uVar9,puVar3[1]);
  if (iVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined4 *)(iVar1 + 0x28);
  }
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(param_1 + 0x34) = uVar9;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x1bc);
  *(int *)(param_1 + 0x18) = iVar1;
  *(int *)(param_1 + 0x1c) = iVar1 >> 0x1f;
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



// ===== FAT.Merge.ItemBubbleComponent$$_InitFrozen RVA 0x210f224 =====

void FUN_0211f224(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x5c5f,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x18) = param_3;
    *(undefined4 *)(param_1 + 0x1c) = param_4;
    *(undefined4 *)(param_1 + 0x20) = param_5;
  }
  else {
    iVar1 = func_0x0229f13c(0x5c5f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x022358f8(iVar1,param_1,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.Merge.ItemBubbleComponent$$OnSerialize RVA 0x210f2a8 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211f2a8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
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
  
  pcVar4 = (char *)(_UNK_0211f3bc + 0x211f2c0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211f3c0 + 0x211f2d4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb37a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb37a,0);
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
  func_0x02123514(param_1,param_2,0);
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0211f3c4 + 0x211f340));
  func_0x0179e3d0(iVar1,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  *(int *)(param_2 + 0x30) = iVar1;
  if (iVar1 == 0) {
    func_0x01384bf0();
    iVar1 = *(int *)(param_2 + 0x30);
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar6 = *(undefined4 *)(param_1 + 0x1c);
    uRam0000000c = uVar5;
    if (iVar1 == 0) {
      func_0x01384bf0();
      iVar1 = *(int *)(param_2 + 0x30);
      uRam00000010 = uVar2;
      uRam00000014 = uVar6;
      if (iVar1 == 0) {
        func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_0211f398;
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar6 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(iVar1 + 0xc) = uVar5;
  }
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  *(undefined4 *)(iVar1 + 0x14) = uVar6;
LAB_0211f398:
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_1 + 0x10);
  return;
}



// ===== FAT.Merge.ItemBubbleComponent$$OnDeserialize RVA 0x210f3c8 =====

void FUN_0211f3c8(int param_1,int param_2)

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
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0xb37b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb37b,0);
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
    return;
  }
  func_0x021237d4(param_1,param_2,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 0x18);
    uStack_18 = *(undefined4 *)(iVar1 + 0xc);
    uVar4 = *(undefined4 *)(iVar1 + 0x10);
    uVar2 = *(undefined4 *)(iVar1 + 0x14);
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    *(int *)(param_1 + 0x10) = iVar3;
    *(undefined4 *)(param_1 + 0x18) = uVar4;
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    *(undefined4 *)(param_1 + 0x20) = uStack_18;
    FUN_0211e674(param_1);
  }
  return;
}



// ===== FAT.Merge.ItemBubbleComponent$$OnUpdate RVA 0x210f484 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211f484(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  char *pcVar11;
  bool bVar12;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar11 = (char *)(_UNK_0211f810 + 0x211f4a0);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211f814 + 0x211f4b4));
    func_0x01384978(*(undefined4 *)(_UNK_0211f818 + 0x211f4c0));
    func_0x01384978(*(undefined4 *)(_UNK_0211f81c + 0x211f4cc));
    *pcVar11 = '\x01';
  }
  uStack_1c = 0;
  uStack_20 = 0;
  iVar1 = func_0x0229f06c(0xb37c,0);
  if (iVar1 == 0) {
    func_0x02126b58(param_1,param_2,0);
    iVar1 = func_0x02123568(param_1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_0210cd28(iVar1);
    if (iVar1 != 0) {
      iVar1 = FUN_0211e720(param_1);
      if (iVar1 == 0) {
        iVar1 = FUN_0211e780(param_1);
        if (iVar1 != 0) {
          iVar7 = *(int *)(param_1 + 0x1c);
          uVar8 = *(int *)(param_1 + 0x20) + param_2;
          bVar12 = uVar8 < *(uint *)(param_1 + 0x18);
          *(uint *)(param_1 + 0x20) = uVar8;
          iVar1 = (int)uVar8 >> 0x1f;
          if ((int)(iVar1 - (iVar7 + (uint)bVar12)) < 0 ==
              (SBORROW4(iVar1,iVar7) != SBORROW4(iVar1 - iVar7,(uint)bVar12))) {
            iVar1 = func_0x02123568(param_1,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = FUN_0210cd28(iVar1);
            uVar6 = func_0x02123568(param_1,0);
            uVar10 = *(undefined4 *)(param_1 + 0x10);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            FUN_020e7d1c(iVar1,uVar6,uVar10,&uStack_20,0);
            iVar1 = func_0x02123568(param_1,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar6 = FUN_0210e5f4(iVar1);
            iVar1 = func_0x02123568(param_1,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar10 = FUN_0210e2d4(iVar1);
            iVar1 = func_0x02123568(param_1,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar4 = FUN_0210e2d4(iVar1);
            uVar4 = func_0x02157e88(uVar4,0);
            uStack_24 = uStack_20;
            uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_0211f824 + 0x211f708),&uStack_24);
            uVar5 = func_0x0244f6a0(**(undefined4 **)(_UNK_0211f828 + 0x211f728),uVar5,0);
            func_0x019a433c(uVar6,uVar10,uVar4,uVar5,0);
          }
        }
      }
      else if (*(char *)(param_1 + 0x24) == '\0') {
        piVar2 = (int *)func_0x021566f4(0);
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar2;
        uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar9[-1] == **(int **)(_UNK_0211f820 + 0x211f5a8)) {
              puVar3 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0x1c0);
              goto LAB_0211f754;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0211f820 + 0x211f5a8),0x20);
LAB_0211f754:
        iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x20) = 0;
        }
        else {
          iVar7 = *(int *)(param_1 + 0x1c);
          uVar8 = *(int *)(param_1 + 0x20) + param_2;
          bVar12 = uVar8 < *(uint *)(param_1 + 0x18);
          *(uint *)(param_1 + 0x20) = uVar8;
          iVar1 = (int)uVar8 >> 0x1f;
          if (((int)(iVar1 - (iVar7 + (uint)bVar12)) < 0 ==
               (SBORROW4(iVar1,iVar7) != SBORROW4(iVar1 - iVar7,(uint)bVar12))) &&
             (iVar1 = func_0x0211f82c(param_1), iVar1 == 0)) {
            iVar1 = func_0x02123568(param_1,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = FUN_0210cd28(iVar1);
            uVar6 = func_0x02123568(param_1,0);
            uVar10 = *(undefined4 *)(param_1 + 0x10);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            FUN_020e7d1c(iVar1,uVar6,uVar10,&uStack_1c,0);
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb37c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.ItemBubbleComponent$$_IsInteracting RVA 0x210f82c =====

uint FUN_0211f82c(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb37d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb37d,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01dbb564(iVar1,0);
  iVar4 = func_0x02123568(param_1,0);
  return (uint)(iVar1 == iVar4);
}



// ===== FAT.Merge.ItemBubbleComponent$$.ctor RVA 0x210f8cc =====

void FUN_0211f8cc(int param_1)

{
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined2 *)(param_1 + 0xc) = 0x101;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemBubbleComponent$$<>iFixBaseProxy_OnSerialize RVA 0x210f8d4 =====

void FUN_0211f8d4(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x5c7d,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x5c7d,0);
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
  return;
}



// ===== FAT.Merge.ItemBubbleComponent$$<>iFixBaseProxy_OnDeserialize RVA 0x210f8dc =====

void FUN_0211f8dc(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x5c62,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x5c62,0);
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
  return;
}



// ===== FAT.Merge.ItemBubbleComponent$$<>iFixBaseProxy_OnUpdate RVA 0x210f8e4 =====

void FUN_0211f8e4(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x5e59,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x5e59,0);
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
  func_0x01485238(&uStack_38,param_2,0);
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
  return;
}


