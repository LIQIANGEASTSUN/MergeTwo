/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.MergeWorldTracer$$get_world RVA 0x213d674 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0214d674(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x381f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x381f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0217a0d4 + 0x2179ff4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0217a0d8 + 0x217a008),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0217a0dc + 0x217a0c4));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 8);
}



// ===== FAT.Merge.MergeWorldTracer$$.ctor RVA 0x213d6c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214d6c8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_0214d77c + 0x214d6e4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214d780 + 0x214d6f8));
    func_0x01384978(*(undefined4 *)(_UNK_0214d784 + 0x214d704));
    *pcVar5 = '\x01';
  }
  puVar3 = *(undefined4 **)(_UNK_0214d788 + 0x214d718);
  uVar1 = func_0x01384be4(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_0214d78c + 0x214d72c);
  func_0x03d59324(uVar1,*puVar4);
  uVar2 = *puVar3;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x03d59324(uVar1,*puVar4);
  uVar2 = *puVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x03d59324(uVar1,*puVar4);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



// ===== FAT.Merge.MergeWorldTracer$$Invalidate RVA 0x213d790 =====

void FUN_0214d790(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5f6f,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0x5baf,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0xc);
      *(undefined1 *)(param_1 + 0x18) = 1;
      if (iVar1 != 0) {
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      }
      iVar1 = func_0x0229f06c(0x5bb0,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x1c);
        *(undefined1 *)(param_1 + 0x24) = 1;
        if (iVar1 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x0214e8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
        return;
      }
      iVar1 = func_0x0229f13c(0x5bb0,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x5baf,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5f6f,0);
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
  return;
}



// ===== FAT.Merge.MergeWorldTracer$$_SetBoardActiveItemsDirty RVA 0x213d7e8 =====

void FUN_0214d7e8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5baf,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    *(undefined1 *)(param_1 + 0x18) = 1;
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    }
    iVar1 = func_0x0229f06c(0x5bb0,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x1c);
      *(undefined1 *)(param_1 + 0x24) = 1;
      if (iVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0214e8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      return;
    }
    iVar1 = func_0x0229f13c(0x5bb0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5baf,0);
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
  return;
}



// ===== FAT.Merge.MergeWorldTracer$$GetCurrentActiveBoardItemCount RVA 0x213d864 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0214d864(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x1525,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x18) != '\0') {
      func_0x0214d8c8(param_1);
    }
    return *(undefined4 *)(param_1 + 0x14);
  }
  iVar1 = func_0x0229f13c(0x1525,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_021b6610 + 0x21b6530);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021b6614 + 0x21b6544),param_1,0);
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
  uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021b6618 + 0x21b6600));
  return uVar5;
}



// ===== FAT.Merge.MergeWorldTracer$$_UpdateActiveBoardItemCount RVA 0x213d8c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214d8c8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  
  pcVar5 = (char *)(_UNK_0214da74 + 0x214d8dc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214da78 + 0x214d8f0));
    func_0x01384978(*(undefined4 *)(_UNK_0214da7c + 0x214d8fc));
    func_0x01384978(*(undefined4 *)(_UNK_0214da80 + 0x214d908));
    func_0x01384978(*(undefined4 *)(_UNK_0214da84 + 0x214d914));
    *pcVar5 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x148d,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x148d,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    iStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar3 + 8);
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar3 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_30,uVar4,0,0);
    return;
  }
  iVar3 = *(int *)(param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_0214da88 + 0x214d988);
  func_0x03d59f58(iVar3,*puVar7);
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar3,*puVar7);
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = FUN_02139cf4(iVar3);
  puVar7 = *(undefined4 **)(_UNK_0214da8c + 0x214d9d0);
  uVar8 = func_0x01384be4(*puVar7);
  func_0x03ccb96c(uVar8,param_1,**(undefined4 **)(_UNK_0214da90 + 0x214d9ec),0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  FUN_020dba14(iVar3,uVar8,0);
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = FUN_02141880(iVar3);
  iVar6 = func_0x01384be4(*puVar7);
  func_0x03ccb96c(iVar6,param_1,**(undefined4 **)(_UNK_0214da94 + 0x214da4c),0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  pcVar5 = (char *)(_UNK_02113448 + 0x2113214);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211344c + 0x2113228),iVar6,0);
    func_0x01384978(*(undefined4 *)(_UNK_02113450 + 0x2113234));
    func_0x01384978(*(undefined4 *)(_UNK_02113454 + 0x2113240));
    func_0x01384978(*(undefined4 *)(_UNK_02113458 + 0x211324c));
    func_0x01384978(*(undefined4 *)(_UNK_0211345c + 0x2113258));
    *pcVar5 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0xf45,0);
  if (iVar1 == 0) {
    iVar3 = *(int *)(iVar3 + 8);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x03d6476c(iVar3,**(undefined4 **)(_UNK_02113460 + 0x21132d0));
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0382ab5c(&uStack_40,iVar3,**(undefined4 **)(_UNK_02113464 + 0x21132fc));
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    uStack_28 = uStack_38;
    iStack_24 = iStack_34;
    puVar7 = *(undefined4 **)(_UNK_02113468 + 0x2113318);
    while (iVar1 = func_0x03f9b9f8(&uStack_30,*puVar7), iVar3 = iStack_24, iVar1 != 0) {
      iVar1 = 0;
      while( true ) {
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar2 = FUN_02111eb4(iVar3);
        if (iVar2 <= iVar1) break;
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar2 = FUN_02113150(iVar3,iVar1);
        if (iVar2 != 0) {
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          (**(code **)(iVar6 + 0xc))
                    (*(undefined4 *)(iVar6 + 0x20),iVar2,*(undefined4 *)(iVar6 + 0x14));
        }
        iVar1 = iVar1 + 1;
      }
    }
    func_0x03f9b9f4(&uStack_30,**(undefined4 **)(_UNK_02113470 + 0x21133a4));
  }
  else {
    iVar1 = func_0x0229f13c(0xf45,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,iVar3,iVar6,0);
  }
  return;
}



// ===== FAT.Merge.MergeWorldTracer$$GetCurrentActiveBoardAndInventoryItemCount RVA 0x213da98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0214da98(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x148c,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x18) != '\0') {
      FUN_0214d8c8(param_1);
    }
    return *(undefined4 *)(param_1 + 0x10);
  }
  iVar1 = func_0x0229f13c(0x148c,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_021b6610 + 0x21b6530);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021b6614 + 0x21b6544),param_1,0);
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
  uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021b6618 + 0x21b6600));
  return uVar5;
}



// ===== FAT.Merge.MergeWorldTracer$$GetCurrentActiveItemCount RVA 0x213dafc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0214dafc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xf3f,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x24) != '\0') {
      func_0x0214db60(param_1);
    }
    return *(undefined4 *)(param_1 + 0x20);
  }
  iVar1 = func_0x0229f13c(0xf3f,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_021b6610 + 0x21b6530);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021b6614 + 0x21b6544),param_1,0);
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
  uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021b6618 + 0x21b6600));
  return uVar5;
}



// ===== FAT.Merge.MergeWorldTracer$$_UpdateActiveItemCount RVA 0x213db60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214db60(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
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
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_0214dc6c + 0x214db74);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214dc70 + 0x214db88));
    func_0x01384978(*(undefined4 *)(_UNK_0214dc74 + 0x214db94));
    func_0x01384978(*(undefined4 *)(_UNK_0214dc78 + 0x214dba0));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xf40,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0x24) = 0;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59f58(iVar2,**(undefined4 **)(_UNK_0214dc7c + 0x214dc10));
    iVar5 = *(int *)(param_1 + 8);
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_0214dc80 + 0x214dc28));
    func_0x03ccb96c(iVar2,param_1,**(undefined4 **)(_UNK_0214dc84 + 0x214dc44),0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021477f8 + 0x21475fc);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021477fc + 0x2147610));
      func_0x01384978(*(undefined4 *)(_UNK_02147800 + 0x214761c));
      func_0x01384978(*(undefined4 *)(_UNK_02147804 + 0x2147628));
      func_0x01384978(*(undefined4 *)(_UNK_02147808 + 0x2147634));
      *pcVar4 = '\x01';
    }
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_28 = 0;
    iVar1 = func_0x0229f06c(0xf44,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(iVar5 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_020dba14(iVar1,iVar2,0);
      iVar1 = *(int *)(iVar5 + 0x50);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_021131f8(iVar1,iVar2,0);
      iVar5 = *(int *)(iVar5 + 0x68);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_28,iVar5,**(undefined4 **)(_UNK_0214780c + 0x2147714));
      puVar6 = *(undefined4 **)(_UNK_02147810 + 0x2147728);
      while (iVar5 = func_0x03f5f428(&uStack_28,*puVar6), iVar5 != 0) {
        if (iVar2 != 0) {
          (**(code **)(iVar2 + 0xc))
                    (*(undefined4 *)(iVar2 + 0x20),uStack_1c,*(undefined4 *)(iVar2 + 0x14));
        }
      }
      func_0x03f5f424(&uStack_28,**(undefined4 **)(_UNK_02147814 + 0x2147764));
    }
    else {
      iVar1 = func_0x0229f13c(0xf44,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_30 = 0;
      func_0x021b6430(iVar1,iVar5,iVar2,0x7fffffff);
    }
    return;
  }
  iVar2 = func_0x0229f13c(0xf40,0);
  if (iVar2 == 0) {
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar5 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar5,uVar7,&uStack_30,uVar3,0,0);
  return;
}



// ===== FAT.Merge.MergeWorldTracer$$DebugBoardItemCount RVA 0x213dc88 =====

/* WARNING: Removing unreachable block (ram,0x0214e100) */
/* WARNING: Removing unreachable block (ram,0x0214e10c) */
/* WARNING: Removing unreachable block (ram,0x0214e110) */
/* WARNING: Removing unreachable block (ram,0x0214e1a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214dc88(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  longlong lStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_0214dd14 + 0x214dc9c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214dd18 + 0x214dcb0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xab45,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xab45,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    lStack_30 = (ulonglong)*(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4) << 0x20;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&lStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&lStack_30,param_1,0);
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
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar6,&lStack_30,uVar2);
    return;
  }
  uVar6 = **(undefined4 **)(_UNK_0214dd1c + 0x214dd08);
  pcVar4 = (char *)(_UNK_0214e2a0 + 0x214dd3c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214e2a4 + 0x214dd50));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2a8 + 0x214dd5c));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2ac + 0x214dd68));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2b0 + 0x214dd74));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2b4 + 0x214dd80));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2b8 + 0x214dd8c));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2bc + 0x214dd98));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2c0 + 0x214dda4));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2c4 + 0x214ddb0));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2c8 + 0x214ddbc));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2cc + 0x214ddc8));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2d0 + 0x214ddd4));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2d4 + 0x214dde0));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2d8 + 0x214ddec));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2dc + 0x214ddf8));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2e0 + 0x214de04));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2e4 + 0x214de10));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2e8 + 0x214de1c));
    *pcVar4 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = 0;
  lStack_30 = 0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0xab46,0);
  if (iVar1 == 0) {
    uVar2 = FUN_0214d864(param_1);
    iVar1 = func_0x02fc0c8c(uVar2,**(undefined4 **)(_UNK_0214e2ec + 0x214dea0));
    piVar3 = *(int **)(_UNK_0214e2f0 + 0x214deb4);
    iVar5 = *piVar3;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x01384ab4();
      iVar5 = *piVar3;
    }
    iVar7 = *(int *)(*(int *)(iVar5 + 0x5c) + 4);
    if (iVar7 == 0) {
      if (*(int *)(iVar5 + 0x74) == 0) {
        func_0x01384ab4();
        iVar5 = *piVar3;
      }
      uVar2 = **(undefined4 **)(iVar5 + 0x5c);
      iVar7 = func_0x01384be4(**(undefined4 **)(_UNK_0214e2f4 + 0x214defc));
      func_0x03c6f23c(iVar7,uVar2,**(undefined4 **)(_UNK_0214e2f8 + 0x214df1c),0);
      *(int *)(*(int *)(*piVar3 + 0x5c) + 4) = iVar7;
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02454914(iVar1,iVar7,**(undefined4 **)(_UNK_0214e2fc + 0x214df4c));
    if (*(int *)(**(int **)(_UNK_0214e300 + 0x214df60) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x024500c4(&uStack_60,0);
    uStack_28 = uStack_58;
    if (*(int *)(**(int **)(_UNK_0214e304 + 0x214df90) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x030c16c8(&lStack_30,**(undefined4 **)(_UNK_0214e30c + 0x214dfc0),uVar6,
                    **(undefined4 **)(_UNK_0214e308 + 0x214dfb4));
    func_0x02154ca8(&lStack_30,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02454918(&uStack_60,iVar1,**(undefined4 **)(_UNK_0214e310 + 0x214dff0));
    uStack_38 = uStack_50;
    uStack_48 = uStack_60;
    uStack_44 = uStack_5c;
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
    iVar1 = 1;
    while (iVar5 = func_0x03f43350(&uStack_48,**(undefined4 **)(_UNK_0214e324 + 0x214e044)),
          uVar2 = uStack_38, uVar6 = uStack_3c, iVar5 != 0) {
      if (*(int *)(**(int **)(_UNK_0214e314 + 0x214e060) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x030c1e2c(&lStack_30,**(undefined4 **)(_UNK_0214e318 + 0x214e080),uVar6,uVar2,
                      **(undefined4 **)(_UNK_0214e31c + 0x214e08c));
      if (iVar1 * -0x33333333 + 0x19999999U < 0x33333333) {
        if (*(int *)(**(int **)(_UNK_0214e320 + 0x214e0b8) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x02154ca8(&lStack_30,0);
      }
      iVar1 = iVar1 + 1;
    }
    func_0x03f4334c(&uStack_48,**(undefined4 **)(_UNK_0214e328 + 0x214e0f0));
    if (*(int *)(**(int **)(_UNK_0214e32c + 0x214e124) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar6 = func_0x0148d6d8(&lStack_30,0);
    if (*(int *)(**(int **)(_UNK_0214e330 + 0x214e150) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0199d1cc(uVar6,0);
    if (*(int *)(**(int **)(_UNK_0214e338 + 0x214e17c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x019a8084(&lStack_30,0);
  }
  else {
    iVar1 = func_0x0229f13c(0xab46,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,uVar6,0);
  }
  return;
}



// ===== FAT.Merge.MergeWorldTracer$$DebugInfo RVA 0x213dd20 =====

/* WARNING: Removing unreachable block (ram,0x0214e100) */
/* WARNING: Removing unreachable block (ram,0x0214e10c) */
/* WARNING: Removing unreachable block (ram,0x0214e110) */
/* WARNING: Removing unreachable block (ram,0x0214e1a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214dd20(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_0214e2a0 + 0x214dd3c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214e2a4 + 0x214dd50));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2a8 + 0x214dd5c));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2ac + 0x214dd68));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2b0 + 0x214dd74));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2b4 + 0x214dd80));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2b8 + 0x214dd8c));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2bc + 0x214dd98));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2c0 + 0x214dda4));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2c4 + 0x214ddb0));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2c8 + 0x214ddbc));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2cc + 0x214ddc8));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2d0 + 0x214ddd4));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2d4 + 0x214dde0));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2d8 + 0x214ddec));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2dc + 0x214ddf8));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2e0 + 0x214de04));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2e4 + 0x214de10));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2e8 + 0x214de1c));
    *pcVar5 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  iVar2 = func_0x0229f06c(0xab46,0);
  if (iVar2 == 0) {
    uVar3 = FUN_0214d864(param_1);
    iVar2 = func_0x02fc0c8c(uVar3,**(undefined4 **)(_UNK_0214e2ec + 0x214dea0));
    piVar6 = *(int **)(_UNK_0214e2f0 + 0x214deb4);
    iVar4 = *piVar6;
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x01384ab4();
      iVar4 = *piVar6;
    }
    iVar7 = *(int *)(*(int *)(iVar4 + 0x5c) + 4);
    if (iVar7 == 0) {
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x01384ab4();
        iVar4 = *piVar6;
      }
      uVar3 = **(undefined4 **)(iVar4 + 0x5c);
      iVar7 = func_0x01384be4(**(undefined4 **)(_UNK_0214e2f4 + 0x214defc));
      func_0x03c6f23c(iVar7,uVar3,**(undefined4 **)(_UNK_0214e2f8 + 0x214df1c),0);
      *(int *)(*(int *)(*piVar6 + 0x5c) + 4) = iVar7;
    }
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02454914(iVar2,iVar7,**(undefined4 **)(_UNK_0214e2fc + 0x214df4c));
    if (*(int *)(**(int **)(_UNK_0214e300 + 0x214df60) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x024500c4(&uStack_60,0);
    uStack_28 = uStack_58;
    if (*(int *)(**(int **)(_UNK_0214e304 + 0x214df90) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x030c16c8(&uStack_30,**(undefined4 **)(_UNK_0214e30c + 0x214dfc0),param_2,
                    **(undefined4 **)(_UNK_0214e308 + 0x214dfb4));
    func_0x02154ca8(&uStack_30,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02454918(&uStack_60,iVar2,**(undefined4 **)(_UNK_0214e310 + 0x214dff0));
    uStack_38 = uStack_50;
    uStack_48 = uStack_60;
    uStack_44 = uStack_5c;
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
    iVar2 = 1;
    while (iVar4 = func_0x03f43350(&uStack_48,**(undefined4 **)(_UNK_0214e324 + 0x214e044)),
          uVar1 = uStack_38, uVar3 = uStack_3c, iVar4 != 0) {
      if (*(int *)(**(int **)(_UNK_0214e314 + 0x214e060) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x030c1e2c(&uStack_30,**(undefined4 **)(_UNK_0214e318 + 0x214e080),uVar3,uVar1,
                      **(undefined4 **)(_UNK_0214e31c + 0x214e08c));
      if (iVar2 * -0x33333333 + 0x19999999U < 0x33333333) {
        if (*(int *)(**(int **)(_UNK_0214e320 + 0x214e0b8) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x02154ca8(&uStack_30,0);
      }
      iVar2 = iVar2 + 1;
    }
    func_0x03f4334c(&uStack_48,**(undefined4 **)(_UNK_0214e328 + 0x214e0f0));
    if (*(int *)(**(int **)(_UNK_0214e32c + 0x214e124) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar3 = func_0x0148d6d8(&uStack_30,0);
    if (*(int *)(**(int **)(_UNK_0214e330 + 0x214e150) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0199d1cc(uVar3,0);
    if (*(int *)(**(int **)(_UNK_0214e338 + 0x214e17c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x019a8084(&uStack_30,0);
  }
  else {
    iVar2 = func_0x0229f13c(0xab46,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.MergeWorldTracer$$DebugAllItemCount RVA 0x213e340 =====

/* WARNING: Removing unreachable block (ram,0x0214e100) */
/* WARNING: Removing unreachable block (ram,0x0214e10c) */
/* WARNING: Removing unreachable block (ram,0x0214e110) */
/* WARNING: Removing unreachable block (ram,0x0214e1a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214e340(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  longlong lStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_0214e3cc + 0x214e354);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214e3d0 + 0x214e368));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xab4b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xab4b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    lStack_30 = (ulonglong)*(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4) << 0x20;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&lStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&lStack_30,param_1,0);
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
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar6,&lStack_30,uVar2);
    return;
  }
  uVar6 = **(undefined4 **)(_UNK_0214e3d4 + 0x214e3c0);
  pcVar4 = (char *)(_UNK_0214e2a0 + 0x214dd3c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214e2a4 + 0x214dd50));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2a8 + 0x214dd5c));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2ac + 0x214dd68));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2b0 + 0x214dd74));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2b4 + 0x214dd80));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2b8 + 0x214dd8c));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2bc + 0x214dd98));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2c0 + 0x214dda4));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2c4 + 0x214ddb0));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2c8 + 0x214ddbc));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2cc + 0x214ddc8));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2d0 + 0x214ddd4));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2d4 + 0x214dde0));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2d8 + 0x214ddec));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2dc + 0x214ddf8));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2e0 + 0x214de04));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2e4 + 0x214de10));
    func_0x01384978(*(undefined4 *)(_UNK_0214e2e8 + 0x214de1c));
    *pcVar4 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = 0;
  lStack_30 = 0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0xab46,0);
  if (iVar1 == 0) {
    uVar2 = FUN_0214d864(param_1);
    iVar1 = func_0x02fc0c8c(uVar2,**(undefined4 **)(_UNK_0214e2ec + 0x214dea0));
    piVar3 = *(int **)(_UNK_0214e2f0 + 0x214deb4);
    iVar5 = *piVar3;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x01384ab4();
      iVar5 = *piVar3;
    }
    iVar7 = *(int *)(*(int *)(iVar5 + 0x5c) + 4);
    if (iVar7 == 0) {
      if (*(int *)(iVar5 + 0x74) == 0) {
        func_0x01384ab4();
        iVar5 = *piVar3;
      }
      uVar2 = **(undefined4 **)(iVar5 + 0x5c);
      iVar7 = func_0x01384be4(**(undefined4 **)(_UNK_0214e2f4 + 0x214defc));
      func_0x03c6f23c(iVar7,uVar2,**(undefined4 **)(_UNK_0214e2f8 + 0x214df1c),0);
      *(int *)(*(int *)(*piVar3 + 0x5c) + 4) = iVar7;
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02454914(iVar1,iVar7,**(undefined4 **)(_UNK_0214e2fc + 0x214df4c));
    if (*(int *)(**(int **)(_UNK_0214e300 + 0x214df60) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x024500c4(&uStack_60,0);
    uStack_28 = uStack_58;
    if (*(int *)(**(int **)(_UNK_0214e304 + 0x214df90) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x030c16c8(&lStack_30,**(undefined4 **)(_UNK_0214e30c + 0x214dfc0),uVar6,
                    **(undefined4 **)(_UNK_0214e308 + 0x214dfb4));
    func_0x02154ca8(&lStack_30,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02454918(&uStack_60,iVar1,**(undefined4 **)(_UNK_0214e310 + 0x214dff0));
    uStack_38 = uStack_50;
    uStack_48 = uStack_60;
    uStack_44 = uStack_5c;
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
    iVar1 = 1;
    while (iVar5 = func_0x03f43350(&uStack_48,**(undefined4 **)(_UNK_0214e324 + 0x214e044)),
          uVar2 = uStack_38, uVar6 = uStack_3c, iVar5 != 0) {
      if (*(int *)(**(int **)(_UNK_0214e314 + 0x214e060) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x030c1e2c(&lStack_30,**(undefined4 **)(_UNK_0214e318 + 0x214e080),uVar6,uVar2,
                      **(undefined4 **)(_UNK_0214e31c + 0x214e08c));
      if (iVar1 * -0x33333333 + 0x19999999U < 0x33333333) {
        if (*(int *)(**(int **)(_UNK_0214e320 + 0x214e0b8) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x02154ca8(&lStack_30,0);
      }
      iVar1 = iVar1 + 1;
    }
    func_0x03f4334c(&uStack_48,**(undefined4 **)(_UNK_0214e328 + 0x214e0f0));
    if (*(int *)(**(int **)(_UNK_0214e32c + 0x214e124) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar6 = func_0x0148d6d8(&lStack_30,0);
    if (*(int *)(**(int **)(_UNK_0214e330 + 0x214e150) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0199d1cc(uVar6,0);
    if (*(int *)(**(int **)(_UNK_0214e338 + 0x214e17c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x019a8084(&lStack_30,0);
  }
  else {
    iVar1 = func_0x0229f13c(0xab46,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,uVar6,0);
  }
  return;
}



// ===== FAT.Merge.MergeWorldTracer$$_UpdateActiveCountFunc_Board RVA 0x213e3d8 =====

/* WARNING: Possible PIC construction at 0x0214e508: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0214e50c) */
/* WARNING: Removing unreachable block (ram,0x0214e530) */
/* WARNING: Removing unreachable block (ram,0x0214e518) */
/* WARNING: Removing unreachable block (ram,0x0214e54c) */
/* WARNING: Removing unreachable block (ram,0x0214e578) */
/* WARNING: Removing unreachable block (ram,0x0214e57c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214e3d8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_0214e594 + 0x214e3f0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214e598 + 0x214e404));
    func_0x01384978(*(undefined4 *)(_UNK_0214e59c + 0x214e410));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x148e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x148e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = func_0x02166ba0(param_2,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (param_2 == 0) {
      func_0x01384bf0();
      uVar6 = FUN_0210e2d4(0,0);
      uVar3 = *(undefined4 *)(param_1 + 0x14);
      func_0x01384bf0();
    }
    else {
      uVar6 = FUN_0210e2d4(param_2,0);
      uVar3 = *(undefined4 *)(param_1 + 0x14);
    }
    uVar2 = FUN_0210e2d4(param_2,0);
    iVar4 = func_0x02f7c01c(uVar3,uVar2,0,**(undefined4 **)(_UNK_0214e5a0 + 0x214e4dc));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = *(undefined4 *)
                 (*(int *)(*(int *)(**(int **)(_UNK_0214e5a4 + 0x214e508) + 0x10) + 0x60) + 0x88);
    func_0x03d5a8e0(iVar1,uVar6,iVar4 + 1,1);
    return;
  }
  return;
}



// ===== FAT.Merge.MergeWorldTracer$$_UpdateActiveCountFunc_Inventory RVA 0x213e5a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214e5a8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_0214e728 + 0x214e5c0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214e72c + 0x214e5d4));
    func_0x01384978(*(undefined4 *)(_UNK_0214e730 + 0x214e5e0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x148f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x148f,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar3,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar1 = FUN_02116a8c(0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
      iVar1 = FUN_02116ae0(0,0);
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_1 + 0x10);
        func_0x01384bf0();
        uVar6 = FUN_0210e2d4(0,0);
        uVar3 = *(undefined4 *)(param_1 + 0x10);
        func_0x01384bf0();
        goto LAB_0214e6cc;
      }
    }
  }
  else {
    iVar1 = FUN_02116a8c(param_2,0);
    if ((iVar1 == 0) && (iVar1 = FUN_02116ae0(param_2,0), iVar1 != 0)) {
      iVar1 = *(int *)(param_1 + 0x10);
      uVar6 = FUN_0210e2d4(param_2,0);
      uVar3 = *(undefined4 *)(param_1 + 0x10);
LAB_0214e6cc:
      uVar2 = FUN_0210e2d4(param_2,0);
      iVar4 = func_0x02f7c01c(uVar3,uVar2,0,**(undefined4 **)(_UNK_0214e734 + 0x214e6ec));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d5a8e0(iVar1,uVar6,iVar4 + 1,1);
      return;
    }
  }
  return;
}



// ===== FAT.Merge.MergeWorldTracer$$_UpdateActiveCountFunc_All RVA 0x213e73c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214e73c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_0214e874 + 0x214e754);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214e878 + 0x214e768));
    func_0x01384978(*(undefined4 *)(_UNK_0214e87c + 0x214e774));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xf41,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xf41,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = func_0x02166ba0(param_2,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    if (param_2 == 0) {
      func_0x01384bf0();
      uVar6 = FUN_0210e2d4(0,0);
      uVar3 = *(undefined4 *)(param_1 + 0x20);
      func_0x01384bf0();
    }
    else {
      uVar6 = FUN_0210e2d4(param_2,0);
      uVar3 = *(undefined4 *)(param_1 + 0x20);
    }
    uVar2 = FUN_0210e2d4(param_2,0);
    iVar4 = func_0x02f7c01c(uVar3,uVar2,0,**(undefined4 **)(_UNK_0214e880 + 0x214e83c));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d5a8e0(iVar1,uVar6,iVar4 + 1,1);
    return;
  }
  return;
}



// ===== FAT.Merge.MergeWorldTracer$$_SetActiveItemsDirty RVA 0x213e888 =====

void FUN_0214e888(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5bb0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5bb0,0);
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
  iVar1 = *(int *)(param_1 + 0x1c);
  *(undefined1 *)(param_1 + 0x24) = 1;
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0214e8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}



// ===== FAT.Merge.MergeWorldTracer$$Bind RVA 0x213e900 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214e900(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
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
  
  pcVar4 = (char *)(_UNK_0214ec18 + 0x214e918);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214ec1c + 0x214e92c));
    func_0x01384978(*(undefined4 *)(_UNK_0214ec20 + 0x214e938));
    func_0x01384978(*(undefined4 *)(_UNK_0214ec24 + 0x214e944));
    func_0x01384978(*(undefined4 *)(_UNK_0214ec28 + 0x214e950));
    func_0x01384978(*(undefined4 *)(_UNK_0214ec2c + 0x214e95c));
    func_0x01384978(*(undefined4 *)(_UNK_0214ec30 + 0x214e968));
    func_0x01384978(*(undefined4 *)(_UNK_0214ec34 + 0x214e974));
    func_0x01384978(*(undefined4 *)(_UNK_0214ec38 + 0x214e980));
    func_0x01384978(*(undefined4 *)(_UNK_0214ec3c + 0x214e98c));
    func_0x01384978(*(undefined4 *)(_UNK_0214ec40 + 0x214e998));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5bac,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5bac,0);
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
  *(int *)(param_1 + 8) = param_2;
  if (param_2 != 0) {
    iVar1 = FUN_02139cf4(param_2);
    puVar6 = *(undefined4 **)(_UNK_0214ec44 + 0x214ea0c);
    uVar5 = func_0x01384be4(*puVar6);
    func_0x03ccb96c(uVar5,param_1,**(undefined4 **)(_UNK_0214ec48 + 0x214ea28),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_020da3c0(iVar1,uVar5,0);
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_02139cf4(iVar1);
    uVar5 = func_0x01384be4(*puVar6);
    func_0x03ccb96c(uVar5,param_1,**(undefined4 **)(_UNK_0214ec4c + 0x214ea88),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_020da260(iVar1,uVar5,0);
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_02139cf4(iVar1);
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_0214ec50 + 0x214ead4));
    func_0x03cd51ec(uVar5,param_1,**(undefined4 **)(_UNK_0214ec54 + 0x214eaf0),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_020d8a00(iVar1,uVar5,0);
    iVar1 = *(int *)(param_1 + 8);
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_0214ec58 + 0x214eb24));
    func_0x03cc9024(uVar5,param_1,**(undefined4 **)(_UNK_0214ec5c + 0x214eb40),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_02141060(iVar1,uVar5);
    iVar1 = *(int *)(param_1 + 8);
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_0214ec60 + 0x214eb70));
    func_0x03cd4e0c(uVar5,param_1,**(undefined4 **)(_UNK_0214ec64 + 0x214eb8c),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_02141720(iVar1,uVar5);
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar6 = *(undefined4 **)(_UNK_0214ec68 + 0x214ebcc);
    func_0x03d59f58(iVar1,*puVar6);
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59f58(iVar1,*puVar6);
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59f58(iVar1,*puVar6);
    *(undefined1 *)(param_1 + 0x24) = 1;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return;
}



// ===== FAT.Merge.MergeWorldTracer$$_OnRewardRefresh RVA 0x213ec6c =====

void FUN_0214ec6c(int param_1,undefined4 param_2)

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
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x5bb5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5bb5,0);
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
    func_0x01485228(&uStack_38,param_2,0);
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
  iVar1 = func_0x0229f06c(0x5bb0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5bb0,0);
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
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  *(undefined1 *)(param_1 + 0x24) = 1;
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0214e8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}



// ===== FAT.Merge.MergeWorldTracer$$_OnItemEnter RVA 0x213eccc =====

void FUN_0214eccc(int param_1,undefined4 param_2)

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
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x5bad,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5bad,0);
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
  iVar1 = func_0x0229f06c(0x5bae,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0x5baf,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0xc);
      *(undefined1 *)(param_1 + 0x18) = 1;
      if (iVar1 != 0) {
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      }
      iVar1 = func_0x0229f06c(0x5bb0,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x1c);
        *(undefined1 *)(param_1 + 0x24) = 1;
        if (iVar1 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x0214e8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
        return;
      }
      iVar1 = func_0x0229f13c(0x5bb0,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x5baf,0);
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
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2);
    return;
  }
  iVar1 = func_0x0229f13c(0x5bae,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = 0;
  func_0x02174858(iVar1,param_1,param_2,0);
  return;
}



// ===== FAT.Merge.MergeWorldTracer$$_OnItemRefresh RVA 0x213ed34 =====

void FUN_0214ed34(int param_1,undefined4 param_2,undefined4 param_3)

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
  
  iVar1 = func_0x0229f06c(0x5bae,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5bae,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02174858(iVar1,param_1,param_2,param_3);
    return;
  }
  iVar1 = func_0x0229f06c(0x5baf,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    *(undefined1 *)(param_1 + 0x18) = 1;
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    }
    iVar1 = func_0x0229f06c(0x5bb0,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x1c);
      *(undefined1 *)(param_1 + 0x24) = 1;
      if (iVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0214e8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      return;
    }
    iVar1 = func_0x0229f13c(0x5bb0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5baf,0);
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
  return;
}



// ===== FAT.Merge.MergeWorldTracer$$_OnItemLeave RVA 0x213edac =====

void FUN_0214edac(int param_1,undefined4 param_2)

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
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x5bb2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5bb2,0);
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
  iVar1 = func_0x0229f06c(0x5bae,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0x5baf,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0xc);
      *(undefined1 *)(param_1 + 0x18) = 1;
      if (iVar1 != 0) {
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      }
      iVar1 = func_0x0229f06c(0x5bb0,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x1c);
        *(undefined1 *)(param_1 + 0x24) = 1;
        if (iVar1 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x0214e8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
        return;
      }
      iVar1 = func_0x0229f13c(0x5bb0,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x5baf,0);
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
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2);
    return;
  }
  iVar1 = func_0x0229f13c(0x5bae,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = 0;
  func_0x02174858(iVar1,param_1,param_2,0);
  return;
}



// ===== FAT.Merge.MergeWorldTracer$$_OnItemEvent RVA 0x213ee14 =====

void FUN_0214ee14(int param_1,undefined4 param_2,int param_3)

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
  
  iVar1 = func_0x0229f06c(0x5bb7,0);
  if (iVar1 == 0) {
    if (param_3 == 0xb) {
      iVar1 = func_0x0229f06c(0x5baf,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0xc);
        *(undefined1 *)(param_1 + 0x18) = 1;
        if (iVar1 != 0) {
          (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
        }
        iVar1 = func_0x0229f06c(0x5bb0,0);
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_1 + 0x1c);
          *(undefined1 *)(param_1 + 0x24) = 1;
          if (iVar1 == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x0214e8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
          return;
        }
        iVar1 = func_0x0229f13c(0x5bb0,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        iVar1 = func_0x0229f13c(0x5baf,0);
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
      return;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5bb7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02180430(iVar1,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.Merge.MergeWorldTracer.<>c$$.cctor RVA 0x213ee98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214ee98(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0214eef0 + 0x214eea8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214eef4 + 0x214eebc));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0214eef8 + 0x214eed0);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x0244f5a0(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.Merge.MergeWorldTracer.<>c$$.ctor RVA 0x213eefc =====

void FUN_0214eefc(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.MergeWorldTracer.<>c$$<DebugInfo>b__17_0 RVA 0x213ef04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0214ef04(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_0214ef40 + 0x214ef1c);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214ef44 + 0x214ef30));
    *pcVar1 = '\x01';
  }
  return param_2 - param_4;
}


