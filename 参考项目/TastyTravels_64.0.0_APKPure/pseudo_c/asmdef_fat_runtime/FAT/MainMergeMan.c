/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MainMergeMan$$get_world RVA 0x1da7b78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01db7b78(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x124,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x124,0);
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



// ===== FAT.MainMergeMan$$get_worldTracer RVA 0x1da7bcc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01db7bcc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xf3e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xf3e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021b6424 + 0x21b6344);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021b6428 + 0x21b6358),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021b642c + 0x21b6414));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.MainMergeMan$$_AllocWorld RVA 0x1da7c20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01db7c20(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
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
  
  pcVar4 = (char *)(_UNK_01db7f08 + 0x1db7c34);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01db7f0c + 0x1db7c48));
    func_0x01384978(*(undefined4 *)(_UNK_01db7f10 + 0x1db7c54));
    func_0x01384978(*(undefined4 *)(_UNK_01db7f14 + 0x1db7c60));
    func_0x01384978(*(undefined4 *)(_UNK_01db7f18 + 0x1db7c6c));
    func_0x01384978(*(undefined4 *)(_UNK_01db7f1c + 0x1db7c78));
    func_0x01384978(*(undefined4 *)(_UNK_01db7f20 + 0x1db7c84));
    func_0x01384978(*(undefined4 *)(_UNK_01db7f24 + 0x1db7c90));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d45,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d45,0);
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
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3);
    return;
  }
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01db7f28 + 0x1db7ce8));
  func_0x02143488(uVar6,0);
  piVar7 = *(int **)(_UNK_01db7f2c + 0x1db7d04);
  *(undefined4 *)(param_1 + 8) = uVar6;
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar7;
  }
  iVar5 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar5 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar7;
    }
    uVar6 = **(undefined4 **)(iVar1 + 0x5c);
    iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01db7f30 + 0x1db7d50));
    func_0x024500b4(iVar5,uVar6,**(undefined4 **)(_UNK_01db7f34 + 0x1db7d70),0);
    *(int *)(*(int *)(*piVar7 + 0x5c) + 4) = iVar5;
  }
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01db7f38 + 0x1db7d90));
  func_0x0214d6c8(uVar6,iVar5,0,0);
  *(undefined4 *)(param_1 + 0xc) = uVar6;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar1 + 0x4c);
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01db7f3c + 0x1db7dd0));
  func_0x0244f5a0(iVar1,0);
  uVar6 = *(undefined4 *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar7 = *(int **)(_UNK_01db7f40 + 0x1db7e00);
  *(undefined4 *)(iVar1 + 0xc) = uVar6;
  iVar2 = *piVar7;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
    iVar2 = *piVar7;
  }
  iVar2 = *(int *)(iVar2 + 0x5c);
  iVar8 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar2 + 0x28);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x02141db0(iVar8,0);
  *(undefined4 *)(iVar1 + 0x10) = uVar6;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x01db7f4c(iVar5,iVar1);
  iVar1 = *(int *)(param_1 + 0xc);
  uVar6 = *(undefined4 *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0214e900(iVar1,uVar6,0);
  iVar1 = *(int *)(param_1 + 8);
  uVar6 = *(undefined4 *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02141f58(iVar1,uVar6,0);
  iVar5 = *(int *)(param_1 + 8);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x68);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x01e6b664(iVar1,0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0229f06c(0x9d4a,0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d4a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,uVar6,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar5,0);
    func_0x01485278(&uStack_38,uVar6,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar3,0,0);
    return;
  }
  *(undefined4 *)(iVar5 + 0x30) = uVar6;
  return;
}



// ===== FAT.MainMergeMan$$FAT.IUserDataHolder.SetData RVA 0x1da80f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01db80f8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x9d4c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d4c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    iStack_34 = uStack_4c;
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
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  FUN_01db7c20(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x24);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
    iVar6 = FUN_01db7b78(param_1);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x02141880(iVar6,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x02112bc0(iVar6,1,0);
    iVar6 = FUN_01db7b78(param_1);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x02141880(iVar6,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x02112bc0(iVar6,2,0);
    iVar6 = func_0x01c24918(0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar6 + 0x4c);
    uVar7 = *(undefined4 *)(param_1 + 8);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x01db8438(iVar6,uVar7,1,1);
    iVar2 = *(int *)(param_1 + 8);
    iVar6 = func_0x01c24918(0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar6 + 0xc);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x01cabf54(iVar6,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02144460(iVar2,uVar7,0);
  }
  else {
    iVar6 = func_0x01c24918(0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar6 + 0x4c);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    uVar7 = *(undefined4 *)(param_1 + 8);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = uVar3;
    func_0x01db8438(iVar6,uVar7,1,0);
    iVar6 = *(int *)(param_1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x0214a9e8(iVar6,uVar7,0,0);
    iVar6 = func_0x01c24918(0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar6 + 0x74);
    uVar7 = *(undefined4 *)(param_1 + 8);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    FUN_01c92fe0(iVar6,uVar7,0);
  }
  iVar6 = *(int *)(param_1 + 8);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar6 = func_0x02141a78(iVar6,0);
  if (iVar6 != 0) {
    func_0x02110b84(iVar6,*(undefined4 *)(iVar1 + 0xc),0);
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0214d790(iVar1,0);
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02139cf4(iVar1,0);
  iVar6 = func_0x01c24918(0);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar6 + 0x48);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar7 = func_0x01dd2c04(iVar6,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_020dc9ec + 0x20dc804);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020dc9f0 + 0x20dc818),0,uVar7,0);
    func_0x01384978(*(undefined4 *)(_UNK_020dc9f4 + 0x20dc824));
    func_0x01384978(*(undefined4 *)(_UNK_020dc9f8 + 0x20dc830));
    func_0x01384978(*(undefined4 *)(_UNK_020dc9fc + 0x20dc83c));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar6 = func_0x0229f06c(0x57b,0);
  if (iVar6 == 0) {
    func_0x020da680(&uStack_38,iVar1);
    iVar6 = *(int *)(iVar1 + 0x70);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_30,iVar6,**(undefined4 **)(_UNK_020dca00 + 0x20dc8d4));
    puVar5 = *(undefined4 **)(_UNK_020dca04 + 0x20dc8ec);
    while (iVar2 = func_0x03f5f428(&uStack_30,*puVar5), iVar6 = iStack_24, iVar2 != 0) {
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      func_0x0210c12c(iVar6,iStack_34,-iStack_34,0);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x0210c518(iVar6,uVar7,0);
    }
    func_0x03f5f424(&uStack_30,**(undefined4 **)(_UNK_020dca08 + 0x20dc94c));
    func_0x020dca14(iVar1);
  }
  else {
    iVar6 = func_0x0229f13c(0x57b,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uStack_40 = 0;
    func_0x02179a68(iVar6,iVar1,0,uVar7);
  }
  return;
}



// ===== FAT.MainMergeMan$$FAT.IUserDataHolder.FillData RVA 0x1da8ac4 =====

/* WARNING: Possible PIC construction at 0x02147e04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02147e08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01db8ac4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  char *pcVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 unaff_r7;
  undefined4 *puVar14;
  undefined4 *unaff_r8;
  int unaff_r9;
  uint uVar15;
  int unaff_r10;
  undefined4 *puVar16;
  undefined4 unaff_lr;
  undefined8 uVar17;
  int iStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  int aiStack_28 [4];
  
  pcVar11 = (char *)(_UNK_01db8bbc + 0x1db8adc);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01db8bc0 + 0x1db8af0));
    *pcVar11 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d53,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_2 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x24);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_2 = *(int *)(iVar1 + 0xc);
    if (param_2 == 0) {
      param_2 = func_0x01384be4(**(undefined4 **)(_UNK_01db8bc4 + 0x1db8b84));
      func_0x0178d080(param_2,0);
      *(int *)(iVar1 + 0xc) = param_2;
    }
    param_1 = *(int *)(param_1 + 8);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar11 = (char *)(_UNK_0214881c + 0x2147b9c);
    if (*pcVar11 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02148820 + 0x2147bb0),param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_02148824 + 0x2147bbc));
      func_0x01384978(*(undefined4 *)(_UNK_02148828 + 0x2147bc8));
      func_0x01384978(*(undefined4 *)(_UNK_0214882c + 0x2147bd4));
      func_0x01384978(*(undefined4 *)(_UNK_02148830 + 0x2147be0));
      func_0x01384978(*(undefined4 *)(_UNK_02148834 + 0x2147bec));
      func_0x01384978(*(undefined4 *)(_UNK_02148838 + 0x2147bf8));
      func_0x01384978(*(undefined4 *)(_UNK_0214883c + 0x2147c04));
      func_0x01384978(*(undefined4 *)(_UNK_02148840 + 0x2147c10));
      func_0x01384978(*(undefined4 *)(_UNK_02148844 + 0x2147c1c));
      func_0x01384978(*(undefined4 *)(_UNK_02148848 + 0x2147c28));
      func_0x01384978(*(undefined4 *)(_UNK_0214884c + 0x2147c34));
      func_0x01384978(*(undefined4 *)(_UNK_02148850 + 0x2147c40));
      func_0x01384978(*(undefined4 *)(_UNK_02148854 + 0x2147c4c));
      func_0x01384978(*(undefined4 *)(_UNK_02148858 + 0x2147c58));
      func_0x01384978(*(undefined4 *)(_UNK_0214885c + 0x2147c64));
      func_0x01384978(*(undefined4 *)(_UNK_02148860 + 0x2147c70));
      func_0x01384978(*(undefined4 *)(_UNK_02148864 + 0x2147c7c));
      func_0x01384978(*(undefined4 *)(_UNK_02148868 + 0x2147c88));
      func_0x01384978(*(undefined4 *)(_UNK_0214886c + 0x2147c94));
      func_0x01384978(*(undefined4 *)(_UNK_02148870 + 0x2147ca0));
      func_0x01384978(*(undefined4 *)(_UNK_02148874 + 0x2147cac));
      func_0x01384978(*(undefined4 *)(_UNK_02148878 + 0x2147cb8));
      func_0x01384978(*(undefined4 *)(_UNK_0214887c + 0x2147cc4));
      func_0x01384978(*(undefined4 *)(_UNK_02148880 + 0x2147cd0));
      func_0x01384978(*(undefined4 *)(_UNK_02148884 + 0x2147cdc));
      func_0x01384978(*(undefined4 *)(_UNK_02148888 + 0x2147ce8));
      func_0x01384978(*(undefined4 *)(_UNK_0214888c + 0x2147cf4));
      func_0x01384978(*(undefined4 *)(_UNK_02148890 + 0x2147d00));
      func_0x01384978(*(undefined4 *)(_UNK_02148894 + 0x2147d0c));
      func_0x01384978(*(undefined4 *)(_UNK_02148898 + 0x2147d18));
      func_0x01384978(*(undefined4 *)(_UNK_0214889c + 0x2147d24));
      func_0x01384978(*(undefined4 *)(_UNK_021488a0 + 0x2147d30));
      func_0x01384978(*(undefined4 *)(_UNK_021488a4 + 0x2147d3c));
      func_0x01384978(*(undefined4 *)(_UNK_021488a8 + 0x2147d48));
      func_0x01384978(*(undefined4 *)(_UNK_021488ac + 0x2147d54));
      func_0x01384978(*(undefined4 *)(_UNK_021488b0 + 0x2147d60));
      func_0x01384978(*(undefined4 *)(_UNK_021488b4 + 0x2147d6c));
      *pcVar11 = '\x01';
    }
    uStack_94 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_90 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_8c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_60 = 0;
    unaff_r8 = &uStack_38;
    uStack_78 = 0;
    aiStack_28[0] = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_38 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
    uStack_48 = 0;
    uStack_84 = uStack_94;
    uStack_80 = uStack_90;
    uStack_7c = uStack_8c;
    uStack_74 = uStack_94;
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    uStack_5c = uStack_94;
    uStack_58 = uStack_90;
    uStack_54 = uStack_8c;
    uStack_44 = uStack_94;
    uStack_40 = uStack_90;
    uStack_3c = uStack_8c;
    uStack_34 = uStack_94;
    uStack_30 = uStack_90;
    uStack_2c = uStack_8c;
    iVar1 = func_0x0229f06c(0x5c6c,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar13 = *(undefined4 *)(iVar1 + 8);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(param_2 + 0x38) = uVar13;
      uVar17 = func_0x02140d24(param_1);
      uVar17 = func_0x01458584((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),1000,0);
      *(undefined8 *)(param_2 + 0x30) = uVar17;
      piVar2 = (int *)func_0x021566f4(0);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_021488b8 + 0x2147e74)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
            goto LAB_02147ebc;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_021488b8 + 0x2147e74),0);
LAB_02147ebc:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
      uVar13 = *(undefined4 *)(param_1 + 0x94);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(param_1 + 0x50);
      *(undefined4 *)(param_2 + 0x3c) = uVar13;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x021139b0(iVar1,param_2,0);
      iVar1 = *(int *)(param_1 + 0x54);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02148958(iVar1,param_2);
      iVar1 = *(int *)(param_1 + 0x58);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02139e7c(iVar1,param_2);
      iVar1 = *(int *)(param_1 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0215ea7c(iVar1,param_2,0);
      iVar1 = *(int *)(param_1 + 0x60);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_01db6828(iVar1,param_2,0);
      iVar1 = *(int *)(param_1 + 100);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02110804(iVar1,param_2,0);
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x020dc720(iVar1,aiStack_28,0);
      iVar1 = aiStack_28[0];
      iStack_b4 = param_2;
      if (iVar6 != 0) {
        if (aiStack_28[0] == 0) {
          func_0x01384bf0();
        }
        func_0x0325a3b4(&uStack_b0,iVar1,**(undefined4 **)(_UNK_021488bc + 0x2147fe8));
        uStack_38 = uStack_b0;
        uStack_34 = uStack_ac;
        uStack_30 = uStack_a8;
        uStack_2c = uStack_a4;
        puVar3 = *(undefined4 **)(_UNK_021488c0 + 0x2148004);
        puVar14 = *(undefined4 **)(_UNK_021488c4 + 0x214800c);
        while (iVar1 = func_0x03f597e0(unaff_r8,*puVar3), uVar7 = uStack_2c, iVar1 != 0) {
          iVar1 = *(int *)(param_2 + 0x6c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0364baf8(iVar1,uVar7,*puVar14);
        }
        func_0x03f597dc(&uStack_38,**(undefined4 **)(_UNK_021488c8 + 0x2148050));
      }
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x40);
      uVar17 = func_0x02140d24(param_1);
      uVar7 = *(uint *)(param_1 + 0x44);
      iVar1 = *(int *)(param_1 + 0x6c);
      uVar13 = *(undefined4 *)(param_1 + 0x90);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(param_2 + 0x44) = uVar13;
      uVar17 = func_0x01458584((uint)uVar17 - uVar7,
                               (int)((ulonglong)uVar17 >> 0x20) -
                               (((int)uVar7 >> 0x1f) + (uint)((uint)uVar17 < uVar7)),1000,0);
      *(undefined8 *)(param_2 + 0x10) = uVar17;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar1 + 0x10)) {
        iVar1 = *(int *)(param_1 + 0x6c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02454910(&uStack_b0,iVar1,**(undefined4 **)(_UNK_021488d0 + 0x21480dc));
        uVar7 = 0;
        uVar15 = 0;
        uStack_48 = uStack_b0;
        uStack_44 = uStack_ac;
        uStack_40 = uStack_a8;
        uStack_3c = uStack_a4;
        puVar3 = *(undefined4 **)(_UNK_021488d4 + 0x2148104);
        while (iVar1 = func_0x03f5a2cc(&uStack_48,*puVar3), iVar1 != 0) {
          uVar4 = uStack_3c & 0x3f;
          uVar8 = uVar4 - 0x20;
          uVar5 = 1 << uVar4;
          if (-1 < (int)uVar8) {
            uVar5 = 0;
          }
          uVar7 = uVar5 | uVar7;
          uVar5 = 1 >> (0x20 - uVar4 & 0xff);
          if (-1 < (int)uVar8) {
            uVar5 = 1 << (uVar8 & 0xff);
          }
          uVar15 = uVar5 | uVar15;
        }
        func_0x03f5a2c8(&uStack_48,**(undefined4 **)(_UNK_021488dc + 0x214814c));
        if (iStack_b4 == 0) {
          func_0x01384bf0();
        }
        *(uint *)(param_2 + 0x48) = uVar7;
        *(uint *)(param_2 + 0x4c) = uVar15;
      }
      iVar1 = *(int *)(param_1 + 0x9c);
      iStack_b8 = param_1;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d64e30(&uStack_b0,iVar1,**(undefined4 **)(_UNK_021488e4 + 0x2148190));
      uStack_60 = uStack_b0;
      uStack_5c = uStack_ac;
      uStack_58 = uStack_a8;
      uStack_54 = uStack_a4;
      uStack_50 = uStack_a0;
      puVar14 = *(undefined4 **)(_UNK_021488e8 + 0x21481bc);
      puVar3 = *(undefined4 **)(_UNK_021488ec + 0x21481c4);
      while (iVar1 = func_0x03f9b324(&uStack_60,*puVar14), uVar7 = uStack_54, iVar1 != 0) {
        iVar1 = (int)uStack_50;
        iVar12 = *(int *)(iStack_b4 + 0x50);
        iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_021488f4 + 0x21481ec));
        func_0x01797598(iVar6,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x02148a58(iVar1);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar6 + 0x10) = uVar13;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x02148aac(iVar1);
        *(undefined4 *)(iVar6 + 0xc) = uVar13;
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        func_0x03464bac(iVar12,uVar7,iVar6,*puVar3);
      }
      func_0x03f9b464(&uStack_60,**(undefined4 **)(_UNK_021488f8 + 0x214826c));
      iVar1 = *(int *)(iStack_b8 + 0x98);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d64e30(&uStack_b0,iVar1,**(undefined4 **)(_UNK_02148900 + 0x214829c));
      uStack_78 = uStack_b0;
      uStack_74 = uStack_ac;
      uStack_70 = uStack_a8;
      uStack_6c = uStack_a4;
      uStack_68 = uStack_a0;
      puVar3 = *(undefined4 **)(_UNK_02148904 + 0x21482c8);
      puVar14 = *(undefined4 **)(_UNK_02148908 + 0x21482d0);
      puVar16 = *(undefined4 **)(_UNK_0214890c + 0x21482d8);
      while (iVar1 = func_0x03f9b324(&uStack_78,*puVar3), uVar7 = uStack_6c, iVar1 != 0) {
        iVar1 = (int)uStack_68;
        uVar13 = func_0x01384be4(*puVar14);
        func_0x01798ae4(uVar13,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02148b00(iVar1,uVar13);
        iVar1 = *(int *)(iStack_b4 + 0x58);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x03464bac(iVar1,uVar7,uVar13,*puVar16);
      }
      func_0x03f9b464(&uStack_78,**(undefined4 **)(_UNK_02148914 + 0x2148354));
      iVar6 = iStack_b4;
      iVar1 = iStack_b8;
      uVar13 = **(undefined4 **)(_UNK_0214891c + 0x2148368);
      *(int *)(iStack_b8 + 0xa4) = iStack_b4;
      uVar13 = func_0x01384be4(uVar13);
      func_0x03ccb96c(uVar13,iVar1,**(undefined4 **)(_UNK_02148920 + 0x2148390),0);
      func_0x021475dc(iVar1,uVar13,0x7fffffff);
      iVar12 = *(int *)(iVar1 + 0x68);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_b0,iVar12,**(undefined4 **)(_UNK_02148924 + 0x21483d0));
      uStack_88 = uStack_b0;
      uStack_84 = uStack_ac;
      uStack_80 = uStack_a8;
      uStack_7c = uStack_a4;
      puVar3 = *(undefined4 **)(_UNK_02148928 + 0x21483ec);
      puVar14 = *(undefined4 **)(_UNK_0214892c + 0x21483f4);
      while (iVar12 = func_0x03f5f428(&uStack_88,*puVar3), uVar7 = uStack_7c, iVar12 != 0) {
        iVar12 = *(int *)(iVar6 + 0x5c);
        if (uStack_7c == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x0210e5f4(uVar7,0);
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        func_0x0364baf8(iVar12,uVar13,*puVar14);
      }
      func_0x03f5f424(&uStack_88,**(undefined4 **)(_UNK_02148934 + 0x2148454));
      iVar6 = *(int *)(iVar1 + 0x34);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar6 + 0xc);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x03d6476c(iVar6,**(undefined4 **)(_UNK_0214893c + 0x2148488));
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x0382ab5c(&uStack_98,iVar6,**(undefined4 **)(_UNK_02148940 + 0x21484b4));
      puVar3 = *(undefined4 **)(_UNK_02148944 + 0x21484c8);
      while (iVar6 = func_0x03f9b9f8(&uStack_98,*puVar3), iVar6 != 0) {
        if (uStack_8c != 0) {
          func_0x02148de8(iVar1);
        }
      }
      func_0x03f9b9f4(&uStack_98,**(undefined4 **)(_UNK_0214894c + 0x21484fc));
      return;
    }
    iVar1 = func_0x0229f13c(0x5c6c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2147e08;
    unaff_r4 = iVar1;
    unaff_r9 = param_2;
    unaff_r10 = param_1;
    register0x00000054 = (BADSPACEBASE *)&iStack_b8;
  }
  else {
    iVar1 = func_0x0229f13c(0x9d53,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r10;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 **)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r6;
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
  iVar6 = *(int *)(iVar1 + 0x10);
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
  if (iVar6 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar6,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar6 = *(int *)(iVar1 + 8);
  uVar13 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar10 = 3;
  if (iVar1 == 0) {
    uVar10 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar6,uVar13,(undefined1 *)((int)register0x00000054 + -0x38),uVar10);
  return;
}



// ===== FAT.MainMergeMan$$TryFindAndShowItem RVA 0x1da8bc8 =====

/* WARNING: Removing unreachable block (ram,0x01db8f54) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01db8bc8(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  int aiStack_34 [4];
  
  pcVar8 = (char *)(_UNK_01db90dc + 0x1db8be8);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01db90e0 + 0x1db8bfc));
    func_0x01384978(*(undefined4 *)(_UNK_01db90e4 + 0x1db8c08));
    func_0x01384978(*(undefined4 *)(_UNK_01db90e8 + 0x1db8c14));
    func_0x01384978(*(undefined4 *)(_UNK_01db90ec + 0x1db8c20));
    func_0x01384978(*(undefined4 *)(_UNK_01db90f0 + 0x1db8c2c));
    func_0x01384978(*(undefined4 *)(_UNK_01db90f4 + 0x1db8c38));
    func_0x01384978(*(undefined4 *)(_UNK_01db90f8 + 0x1db8c44));
    func_0x01384978(*(undefined4 *)(_UNK_01db90fc + 0x1db8c50));
    *pcVar8 = '\x01';
  }
  aiStack_34[2] = 0;
  aiStack_34[1] = 0;
  aiStack_34[0] = 0;
  iVar1 = func_0x0229f06c(0x96cb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x96cb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0218f738(iVar1,param_1,param_2,param_3,0);
    return uVar2;
  }
  if (param_2 < 1) {
    return 0;
  }
  iVar1 = FUN_01db7bcc(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01ca64b8(iVar1,param_2,0);
  if (iVar1 == 0) {
    uVar2 = func_0x01db9124(param_1,param_2,param_3);
    return uVar2;
  }
  if (*(int *)(**(int **)(_UNK_01db9100 + 0x1db8d24) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar3 = func_0x028c8d78(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x0302a45c(aiStack_34 + 1,iVar3,aiStack_34,**(undefined4 **)(_UNK_01db9104 + 0x1db8d60));
  iVar3 = aiStack_34[0];
  if (aiStack_34[0] == 0) {
    func_0x01384bf0();
  }
  func_0x02450560(iVar3,param_2,**(undefined4 **)(_UNK_01db9108 + 0x1db8d84));
  iVar1 = *(int *)(iVar1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar4 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01db910c + 0x1db8dac));
  piVar9 = *(int **)(_UNK_01db9110 + 0x1db8dc4);
  piVar11 = *(int **)(_UNK_01db9114 + 0x1db8dcc);
  puVar10 = *(undefined4 **)(_UNK_01db9118 + 0x1db8dd4);
  do {
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar4;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar9) {
          puVar5 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_01db8e2c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar4,*piVar9,0);
LAB_01db8e2c:
    iVar1 = (*(code *)*puVar5)(piVar4,puVar5[1]);
    if (iVar1 == 0) break;
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar4;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar11) {
          puVar5 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_01db8ea0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar4,*piVar11,0);
LAB_01db8ea0:
    uVar2 = (*(code *)*puVar5)(piVar4,puVar5[1]);
    func_0x02f622a4(aiStack_34[0],uVar2,*puVar10);
  } while( true );
  if (piVar4 != (int *)0x0) {
    iVar1 = *piVar4;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_01db911c + 0x1db8ee0)) {
          puVar10 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_01db8f3c;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar6 != 0);
    }
    puVar10 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01db911c + 0x1db8ee0),0);
LAB_01db8f3c:
    (*(code *)*puVar10)(piVar4,puVar10[1]);
  }
  uVar2 = func_0x01db9640(param_1,aiStack_34[0],param_3);
  func_0x028c98a0(aiStack_34 + 1,0);
  return uVar2;
}



// ===== FAT.MainMergeMan$$_ProcessSingleItem RVA 0x1da9124 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01db9124(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar12 = (char *)(_UNK_01db95f8 + 0x1db9144);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01db95fc + 0x1db9158));
    func_0x01384978(*(undefined4 *)(_UNK_01db9600 + 0x1db9164));
    func_0x01384978(*(undefined4 *)(_UNK_01db9604 + 0x1db9170));
    func_0x01384978(*(undefined4 *)(_UNK_01db9608 + 0x1db917c));
    func_0x01384978(*(undefined4 *)(_UNK_01db960c + 0x1db9188));
    func_0x01384978(*(undefined4 *)(_UNK_01db9610 + 0x1db9194));
    func_0x01384978(*(undefined4 *)(_UNK_01db9614 + 0x1db91a0));
    func_0x01384978(*(undefined4 *)(_UNK_01db9618 + 0x1db91ac));
    func_0x01384978(*(undefined4 *)(_UNK_01db961c + 0x1db91b8));
    *pcVar12 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x96cc,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01db9620 + 0x1db9228));
    func_0x0244f5a0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 8) = param_2;
    iVar3 = FUN_01db7bcc(param_1);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar2 = 0;
    piVar4 = (int *)func_0x0214d864(iVar3,0);
    piVar5 = (int *)FUN_01db7bcc(param_1);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x0214da98(piVar5,0);
    if (piVar4 != (int *)0x0) {
      piVar5 = piVar6;
    }
    if (piVar4 != (int *)0x0 && piVar6 != (int *)0x0) {
      iVar3 = *piVar4;
      piVar6 = *(int **)(_UNK_01db9624 + 0x1db92c4);
      uVar10 = (uint)*(ushort *)(iVar3 + 0xb6);
      uVar13 = *(undefined4 *)(iVar1 + 8);
      iVar2 = *piVar6;
      if (uVar10 != 0) {
        piVar11 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar11[-1] == iVar2) {
            puVar7 = (undefined4 *)(iVar3 + *piVar11 * 8 + 0xf8);
            goto LAB_01db9310;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined4 *)func_0x014002dc(piVar4,iVar2,7);
LAB_01db9310:
      iVar3 = (*(code *)*puVar7)(piVar4,uVar13,&uStack_28,puVar7[1]);
      if (iVar3 == 0) {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *piVar5;
        iVar2 = *piVar6;
        uVar13 = *(undefined4 *)(iVar1 + 8);
        uVar10 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar10 != 0) {
          piVar4 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar4[-1] == iVar2) {
              puVar7 = (undefined4 *)(iVar3 + *piVar4 * 8 + 0xf8);
              goto LAB_01db9580;
            }
            uVar10 = uVar10 - 1;
            piVar4 = piVar4 + 2;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined4 *)func_0x014002dc(piVar5,iVar2,7);
LAB_01db9580:
        iVar3 = (*(code *)*puVar7)(piVar5,uVar13,&uStack_28,puVar7[1]);
        if (iVar3 == 0 || param_3 == 0) {
          return iVar3;
        }
        iVar3 = func_0x01c24918(0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar3 + 0x74);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar13 = *(undefined4 *)(iVar1 + 8);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        FUN_01c910ac(iVar3,uVar13,0);
      }
      else {
        iVar3 = FUN_01db7bcc(param_1);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x0214d674(iVar3,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x02139cf4(iVar3,0);
        iVar2 = func_0x01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x4c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar8 = func_0x01dbb000(iVar2);
        iVar2 = 0;
        if (iVar8 != 0) {
          iVar8 = func_0x02139cf4(iVar8,0);
          iVar2 = 0;
          if (iVar8 != 0) {
            iStack_2c = 0;
            uStack_30 = 0;
            func_0x03507d38(&uStack_30,*(undefined4 *)(iVar8 + 8),
                            **(undefined4 **)(_UNK_01db9628 + 0x1db93d4));
            iVar2 = iStack_2c;
          }
        }
        if (iVar3 == 0) {
          return 0;
        }
        if (*(int *)(iVar3 + 8) != iVar2) {
          return 0;
        }
        puVar7 = *(undefined4 **)(_UNK_01db962c + 0x1db9410);
        iVar2 = func_0x03668dfc(*puVar7);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x01ddbed8(iVar2,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x01f090e0(iVar2,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar9 = *puVar7;
        *(undefined4 *)(iVar1 + 0xc) = uVar13;
        iVar2 = func_0x03668dfc(uVar9);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x01ddf850(iVar2,0);
        uVar13 = func_0x01384be4(**(undefined4 **)(_UNK_01db9630 + 0x1db9490));
        func_0x03ccb96c(uVar13,iVar1,**(undefined4 **)(_UNK_01db9634 + 0x1db94ac),0);
        func_0x020dba14(iVar3,uVar13,0);
        iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01db9638 + 0x1db94d0));
        piVar5 = *(int **)(_UNK_01db963c + 0x1db94e4);
        iVar3 = *piVar5;
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar5;
        }
        uVar13 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xec);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01ee40f0(iVar1,uVar13,0);
      }
      iVar2 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x96cc,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0218f738(iVar1,param_1,param_2,param_3,0);
  }
  return iVar2;
}



// ===== FAT.MainMergeMan$$_ProcessItemHashSet RVA 0x1da9640 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01db9640(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  char *pcVar13;
  uint uVar14;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar13 = (char *)(_UNK_01db9d6c + 0x1db9660);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01db9d70 + 0x1db9674));
    func_0x01384978(*(undefined4 *)(_UNK_01db9d74 + 0x1db9680));
    func_0x01384978(*(undefined4 *)(_UNK_01db9d78 + 0x1db968c));
    func_0x01384978(*(undefined4 *)(_UNK_01db9d7c + 0x1db9698));
    func_0x01384978(*(undefined4 *)(_UNK_01db9d80 + 0x1db96a4));
    func_0x01384978(*(undefined4 *)(_UNK_01db9d84 + 0x1db96b0));
    func_0x01384978(*(undefined4 *)(_UNK_01db9d88 + 0x1db96bc));
    func_0x01384978(*(undefined4 *)(_UNK_01db9d8c + 0x1db96c8));
    func_0x01384978(*(undefined4 *)(_UNK_01db9d90 + 0x1db96d4));
    func_0x01384978(*(undefined4 *)(_UNK_01db9d94 + 0x1db96e0));
    func_0x01384978(*(undefined4 *)(_UNK_01db9d98 + 0x1db96ec));
    func_0x01384978(*(undefined4 *)(_UNK_01db9d9c + 0x1db96f8));
    func_0x01384978(*(undefined4 *)(_UNK_01db9da0 + 0x1db9704));
    *pcVar13 = '\x01';
  }
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_3c = 0;
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x96d5,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01db9da4 + 0x1db9780));
    func_0x0244f5a0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 8) = param_2;
    iVar3 = FUN_01db7bcc(param_1);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    piVar4 = (int *)func_0x0214d864(iVar3,0);
    piVar5 = (int *)FUN_01db7bcc(param_1);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x0214da98(piVar5,0);
    if (piVar4 != (int *)0x0) {
      piVar5 = piVar6;
    }
    if (piVar4 != (int *)0x0 && piVar6 != (int *)0x0) {
      iVar3 = *(int *)(iVar1 + 8);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x024514cc(&uStack_50,iVar3,**(undefined4 **)(_UNK_01db9da8 + 0x1db983c));
      uVar14 = 0;
      uStack_38 = uStack_50;
      iStack_34 = iStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      piVar6 = *(int **)(_UNK_01db9dac + 0x1db9860);
      while (iVar3 = func_0x014700e8(&uStack_38,**(undefined4 **)(_UNK_01db9db0 + 0x1db9868)),
            uVar9 = uStack_2c, iVar3 != 0) {
        iVar3 = *piVar4;
        iVar11 = *piVar6;
        uVar2 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar2 != 0) {
          piVar12 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar12[-1] == iVar11) {
              puVar7 = (undefined4 *)(iVar3 + *piVar12 * 8 + 0xf8);
              goto LAB_01db98cc;
            }
            uVar2 = uVar2 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar2 != 0);
        }
        puVar7 = (undefined4 *)func_0x014002dc(piVar4,iVar11,7);
LAB_01db98cc:
        iVar3 = (*(code *)*puVar7)(piVar4,uVar9,&uStack_3c,puVar7[1]);
        if (iVar3 != 0) {
          func_0x024514d0(&uStack_38,**(undefined4 **)(_UNK_01db9dcc + 0x1db9a54));
          iVar3 = FUN_01db7bcc(param_1);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x0214d674(iVar3,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x02139cf4(iVar3,0);
          iVar11 = func_0x01c24918(0);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = *(int *)(iVar11 + 0x4c);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar8 = func_0x01dbb000(iVar11);
          uVar2 = 0;
          iVar11 = 0;
          if (iVar8 != 0) {
            iVar8 = func_0x02139cf4(iVar8,0);
            iVar11 = 0;
            if (iVar8 != 0) {
              iStack_4c = 0;
              uStack_50 = 0;
              func_0x03507d38(&uStack_50,*(undefined4 *)(iVar8 + 8),
                              **(undefined4 **)(_UNK_01db9dd0 + 0x1db9b04));
              iVar11 = iStack_4c;
            }
          }
          if ((iVar3 == 0) || (*(int *)(iVar3 + 8) != iVar11)) goto LAB_01db9800;
          puVar7 = *(undefined4 **)(_UNK_01db9dd4 + 0x1db9b40);
          iVar11 = func_0x03668dfc(*puVar7);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = func_0x01ddbed8(iVar11,0);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          uVar9 = func_0x01f090e0(iVar11,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar10 = *puVar7;
          *(undefined4 *)(iVar1 + 0xc) = uVar9;
          iVar11 = func_0x03668dfc(uVar10);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          func_0x01ddf850(iVar11,0);
          uVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01db9dd8 + 0x1db9bc0));
          func_0x03ccb96c(uVar9,iVar1,**(undefined4 **)(_UNK_01db9ddc + 0x1db9bdc),0);
          func_0x020dba14(iVar3,uVar9,0);
          iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01db9de0 + 0x1db9c00));
          piVar5 = *(int **)(_UNK_01db9de4 + 0x1db9c14);
          iVar3 = *piVar5;
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar5;
          }
          uVar9 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xec);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x01ee40f0(iVar1,uVar9,0);
          uVar2 = 1;
          goto LAB_01db9c50;
        }
        iVar3 = *piVar5;
        iVar11 = *piVar6;
        uVar2 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar2 != 0) {
          piVar12 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar12[-1] == iVar11) {
              puVar7 = (undefined4 *)(iVar3 + *piVar12 * 8 + 0xf8);
              goto LAB_01db993c;
            }
            uVar2 = uVar2 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar2 != 0);
        }
        puVar7 = (undefined4 *)func_0x014002dc(piVar5,iVar11,7);
LAB_01db993c:
        uVar2 = (*(code *)*puVar7)(piVar5,uVar9,&uStack_3c,puVar7[1]);
        uVar14 = uVar14 | uVar2;
      }
      func_0x024514d0(&uStack_38,**(undefined4 **)(_UNK_01db9db4 + 0x1db9968));
      uVar2 = 0;
      if ((uVar14 & param_3) == 1) {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x024514cc(&uStack_50,iVar1,**(undefined4 **)(_UNK_01db9db8 + 0x1db99b8));
        uStack_38 = uStack_50;
        iStack_34 = iStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        do {
          iVar1 = func_0x014700e8(&uStack_38,**(undefined4 **)(_UNK_01db9dbc + 0x1db99d4));
          uVar9 = uStack_2c;
          if (iVar1 == 0) break;
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0x74);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = FUN_01c910ac(iVar1,uVar9,0);
        } while (iVar1 == 0);
        func_0x024514d0(&uStack_38,**(undefined4 **)(_UNK_01db9dc0 + 0x1db9a34));
        uVar2 = 0;
        uVar14 = 1;
      }
LAB_01db9c50:
      uVar2 = uVar14 | uVar2;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x96d5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0218d1f0(iVar1,param_1,param_2,param_3,0);
  }
LAB_01db9800:
  return uVar2 & 1;
}



// ===== FAT.MainMergeMan$$IsChainExistUnLock RVA 0x1da9df0 =====

/* WARNING: Removing unreachable block (ram,0x01dba0bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01db9df0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
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
  
  pcVar9 = (char *)(_UNK_01dba19c + 0x1db9e08);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dba1a0 + 0x1db9e1c));
    func_0x01384978(*(undefined4 *)(_UNK_01dba1a4 + 0x1db9e28));
    func_0x01384978(*(undefined4 *)(_UNK_01dba1a8 + 0x1db9e34));
    func_0x01384978(*(undefined4 *)(_UNK_01dba1ac + 0x1db9e40));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xf46,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xf46,0);
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar8,uVar10,&uStack_38,uVar7,0,0);
    iVar1 = func_0x0245496c(&uStack_38,0,0);
    return iVar1;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_01db1884(iVar1,param_2);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar1 + 0x44);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x3c);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x0364c2b4(iVar8,**(undefined4 **)(_UNK_01dba1b0 + 0x1db9f0c));
  piVar11 = *(int **)(_UNK_01dba1b4 + 0x1db9f24);
  piVar12 = *(int **)(_UNK_01dba1b8 + 0x1db9f2c);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar11) {
          puVar3 = (undefined4 *)(iVar8 + *piVar6 * 8 + 0xc0);
          goto LAB_01db9f84;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_01db9f84:
    iVar8 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar8 == 0) {
      iVar8 = 0;
      break;
    }
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar4 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar12) {
          puVar3 = (undefined4 *)(iVar4 + *piVar6 * 8 + 0xc0);
          goto LAB_01db9ffc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar12,0);
LAB_01db9ffc:
    uVar10 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x01cc4324(iVar1,uVar10,0);
  } while (iVar4 != 0);
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_01dba1bc + 0x1dba05c)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
          goto LAB_01dba0a4;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dba1bc + 0x1dba05c),0);
LAB_01dba0a4:
    (*(code *)*puVar3)(piVar2,puVar3[1]);
  }
  return iVar8;
}



// ===== FAT.MainMergeMan$$CheckMissingItem RVA 0x1daa1c4 =====

/* WARNING: Removing unreachable block (ram,0x01dba718) */
/* WARNING: Removing unreachable block (ram,0x01dba724) */
/* WARNING: Removing unreachable block (ram,0x01dbaa14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dba1c4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  char *pcVar12;
  undefined4 *puVar13;
  int *piVar14;
  char *pcVar15;
  undefined4 *puVar16;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar12 = (char *)(_UNK_01dbabe8 + 0x1dba1dc);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbabec + 0x1dba1f0));
    func_0x01384978(*(undefined4 *)(_UNK_01dbabf0 + 0x1dba1fc));
    func_0x01384978(*(undefined4 *)(_UNK_01dbabf4 + 0x1dba208));
    func_0x01384978(*(undefined4 *)(_UNK_01dbabf8 + 0x1dba214));
    func_0x01384978(*(undefined4 *)(_UNK_01dbabfc + 0x1dba220));
    func_0x01384978(*(undefined4 *)(_UNK_01dbac00 + 0x1dba22c));
    func_0x01384978(*(undefined4 *)(_UNK_01dbac04 + 0x1dba238));
    func_0x01384978(*(undefined4 *)(_UNK_01dbac08 + 0x1dba244));
    func_0x01384978(*(undefined4 *)(_UNK_01dbac0c + 0x1dba250));
    func_0x01384978(*(undefined4 *)(_UNK_01dbac10 + 0x1dba25c));
    func_0x01384978(*(undefined4 *)(_UNK_01dbac14 + 0x1dba268));
    func_0x01384978(*(undefined4 *)(_UNK_01dbac18 + 0x1dba274));
    func_0x01384978(*(undefined4 *)(_UNK_01dbac1c + 0x1dba280));
    func_0x01384978(*(undefined4 *)(_UNK_01dbac20 + 0x1dba28c));
    func_0x01384978(*(undefined4 *)(_UNK_01dbac24 + 0x1dba298));
    func_0x01384978(*(undefined4 *)(_UNK_01dbac28 + 0x1dba2a4));
    func_0x01384978(*(undefined4 *)(_UNK_01dbac2c + 0x1dba2b0));
    func_0x01384978(*(undefined4 *)(_UNK_01dbac30 + 0x1dba2bc));
    func_0x01384978(*(undefined4 *)(_UNK_01dbac34 + 0x1dba2c8));
    *pcVar12 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0xf3c,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar1 != 0) {
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar2 + 0x3c) != 0) {
        iVar2 = func_0x01dbacac(iVar1);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if ((*(int *)(iVar2 + 0xc) != 0) && (iVar3 = FUN_01db7bcc(param_1), iVar3 != 0)) {
          iVar3 = FUN_01db7bcc(param_1);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          piVar4 = (int *)func_0x0214dafc(iVar3,0);
          iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01dbac38 + 0x1dba3e4));
          func_0x03258eb8(iVar3,**(undefined4 **)(_UNK_01dbac3c + 0x1dba3f4));
          func_0x0325a3b4(&uStack_58,iVar2,**(undefined4 **)(_UNK_01dbac40 + 0x1dba410));
          uStack_38 = uStack_58;
          uStack_34 = uStack_54;
          uStack_30 = uStack_50;
          uStack_2c = uStack_4c;
          puVar13 = *(undefined4 **)(_UNK_01dbac44 + 0x1dba42c);
          piVar14 = *(int **)(_UNK_01dbac48 + 0x1dba434);
          while (iVar2 = func_0x01470118(&uStack_38,*puVar13), uVar8 = uStack_2c, iVar2 != 0) {
            iVar2 = FUN_01db9df0(param_1,uStack_2c);
            if ((iVar2 != 0) && (iVar2 = FUN_01db1884(iVar1,uVar8), iVar2 != 0)) {
              iVar2 = *(int *)(iVar2 + 0x44);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              if (*(int *)(iVar2 + 0xc) != 0) {
                piVar5 = (int *)func_0x0364c2b4(iVar2,**(undefined4 **)(_UNK_01dbac4c + 0x1dba498));
                do {
                  do {
                    if (piVar5 == (int *)0x0) {
                      func_0x01384bf0();
                    }
                    iVar2 = *piVar5;
                    uVar10 = (uint)*(ushort *)(iVar2 + 0xb6);
                    if (uVar10 != 0) {
                      piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                      do {
                        if (piVar11[-1] == **(int **)(_UNK_01dbac50 + 0x1dba4c0)) {
                          puVar13 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0xc0);
                          goto LAB_01dba508;
                        }
                        uVar10 = uVar10 - 1;
                        piVar11 = piVar11 + 2;
                      } while (uVar10 != 0);
                    }
                    puVar13 = (undefined4 *)
                              func_0x014002dc(piVar5,**(int **)(_UNK_01dbac50 + 0x1dba4c0),0);
LAB_01dba508:
                    iVar2 = (*(code *)*puVar13)(piVar5,puVar13[1]);
                    if (iVar2 == 0) {
                      iVar2 = 0;
                      goto LAB_01dba6a0;
                    }
                    if (piVar5 == (int *)0x0) {
                      func_0x01384bf0();
                    }
                    iVar6 = *piVar5;
                    uVar10 = (uint)*(ushort *)(iVar6 + 0xb6);
                    if (uVar10 != 0) {
                      piVar11 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                      do {
                        if (piVar11[-1] == **(int **)(_UNK_01dbac54 + 0x1dba544)) {
                          puVar13 = (undefined4 *)(iVar6 + *piVar11 * 8 + 0xc0);
                          goto LAB_01dba58c;
                        }
                        uVar10 = uVar10 - 1;
                        piVar11 = piVar11 + 2;
                      } while (uVar10 != 0);
                    }
                    puVar13 = (undefined4 *)
                              func_0x014002dc(piVar5,**(int **)(_UNK_01dbac54 + 0x1dba544),0);
LAB_01dba58c:
                    uVar7 = (*(code *)*puVar13)(piVar5,puVar13[1]);
                    if (piVar4 == (int *)0x0) {
                      func_0x01384bf0();
                    }
                    iVar6 = *piVar4;
                    iVar9 = *piVar14;
                    uVar10 = (uint)*(ushort *)(iVar6 + 0xb6);
                    if (uVar10 != 0) {
                      piVar11 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                      do {
                        if (piVar11[-1] == iVar9) {
                          puVar13 = (undefined4 *)(iVar6 + *piVar11 * 8 + 0xe0);
                          goto LAB_01dba5fc;
                        }
                        uVar10 = uVar10 - 1;
                        piVar11 = piVar11 + 2;
                      } while (uVar10 != 0);
                    }
                    puVar13 = (undefined4 *)func_0x014002dc(piVar4,iVar9,4);
LAB_01dba5fc:
                    iVar6 = (*(code *)*puVar13)(piVar4,uVar7,puVar13[1]);
                  } while (iVar6 == 0);
                  if (piVar4 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  iVar6 = *piVar4;
                  iVar9 = *piVar14;
                  uVar10 = (uint)*(ushort *)(iVar6 + 0xb6);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                    do {
                      if (piVar11[-1] == iVar9) {
                        puVar13 = (undefined4 *)(iVar6 + *piVar11 * 8 + 0xc0);
                        goto LAB_01dba674;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 2;
                    } while (uVar10 != 0);
                  }
                  puVar13 = (undefined4 *)func_0x014002dc(piVar4,iVar9,0);
LAB_01dba674:
                  iVar6 = (*(code *)*puVar13)(piVar4,uVar7,puVar13[1]);
                } while (iVar6 < 1);
LAB_01dba6a0:
                if (piVar5 != (int *)0x0) {
                  iVar6 = *piVar5;
                  uVar10 = (uint)*(ushort *)(iVar6 + 0xb6);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                    do {
                      if (piVar11[-1] == **(int **)(_UNK_01dbac58 + 0x1dba6b8)) {
                        puVar13 = (undefined4 *)(iVar6 + *piVar11 * 8 + 0xc0);
                        goto LAB_01dba700;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 2;
                    } while (uVar10 != 0);
                  }
                  puVar13 = (undefined4 *)
                            func_0x014002dc(piVar5,**(int **)(_UNK_01dbac58 + 0x1dba6b8),0);
LAB_01dba700:
                  (*(code *)*puVar13)(piVar5,puVar13[1]);
                }
                puVar13 = *(undefined4 **)(_UNK_01dbac5c + 0x1dba740);
                if (iVar2 == 0) {
                  if (iVar3 == 0) {
                    func_0x01384bf0();
                  }
                  iVar2 = *(int *)(iVar3 + 8);
                  uVar10 = *(uint *)(iVar3 + 0xc);
                  piVar5 = *(int **)(_UNK_01dbac60 + 0x1dba774);
                  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
                  iVar6 = *piVar5;
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  if (uVar10 < *(uint *)(iVar2 + 0xc)) {
                    *(uint *)(iVar3 + 0xc) = uVar10 + 1;
                    *(undefined4 *)(iVar2 + uVar10 * 4 + 0x10) = uVar8;
                  }
                  else {
                    func_0x0325970c(iVar3,uVar8,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38))
                    ;
                  }
                }
              }
            }
          }
          func_0x02450828(&uStack_38,**(undefined4 **)(_UNK_01dbac68 + 0x1dba810));
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          if (0 < *(int *)(iVar3 + 0xc)) {
            if (*(int *)(**(int **)(_UNK_01dbac74 + 0x1dba844) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x024500c4(&uStack_58,0);
            uStack_40 = uStack_50;
            func_0x0325a3b4(&uStack_58,iVar3,**(undefined4 **)(_UNK_01dbac78 + 0x1dba878));
            uStack_38 = uStack_58;
            uStack_34 = uStack_54;
            uStack_30 = uStack_50;
            uStack_2c = uStack_4c;
            puVar16 = *(undefined4 **)(_UNK_01dbac7c + 0x1dba8a4);
            piVar4 = *(int **)(_UNK_01dbac80 + 0x1dba8ac);
            pcVar12 = (char *)(_UNK_01dbac84 + 0x1dba8b8);
            pcVar15 = (char *)(_UNK_01dbac88 + 0x1dba8bc);
            while (iVar1 = func_0x01470118(&uStack_38,*puVar13), iVar1 != 0) {
              uStack_58 = uStack_2c;
              uVar8 = func_0x01384abc(**(undefined4 **)(_UNK_01dbac90 + 0x1dba8dc),&uStack_58);
              iVar1 = func_0x0244f6a0(*puVar16,uVar8,0);
              if (*(int *)(*piVar4 + 0x74) == 0) {
                func_0x01384ab4();
              }
              if (*pcVar12 == '\0') {
                func_0x01384978(piVar4);
                *pcVar12 = '\x01';
              }
              if (*pcVar15 == '\0') {
                func_0x01384978(*(undefined4 *)(_UNK_01dbac94 + 0x1dba944));
                *pcVar15 = '\x01';
              }
              if (iVar1 == 0) {
                uVar7 = 0;
                uVar8 = 0;
              }
              else {
                uVar8 = func_0x0148d698(iVar1,0);
                uVar7 = *(undefined4 *)(iVar1 + 8);
              }
              if (*(int *)(*piVar4 + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x019a7f14(&uStack_48,uVar8,uVar7,0);
            }
            func_0x02450828(&uStack_38,**(undefined4 **)(_UNK_01dbac98 + 0x1dba9ac));
            if (*(int *)(*piVar4 + 0x74) == 0) {
              func_0x01384ab4();
            }
            uVar8 = func_0x0148d6d8(&uStack_48,0);
            piVar4 = *(int **)(_UNK_01dbaca0 + 0x1dba9e4);
            iVar1 = *piVar4;
            if (*(int *)(iVar1 + 0x74) == 0) {
              func_0x01384ab4();
              iVar1 = *piVar4;
            }
            func_0x019a3d9c(uVar8,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x28),0);
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xf3c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.MainMergeMan.<>c__DisplayClass13_0$$.ctor RVA 0x1daaff8 =====

void FUN_01dbaff8(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MainMergeMan.<>c__DisplayClass14_0$$.ctor RVA 0x1dab054 =====

void FUN_01dbb054(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MainMergeMan$$OnMergeLevelChange RVA 0x1dab05c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dbb05c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
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
  
  iVar1 = func_0x0229f06c(0x57a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x57a,0);
    if (iVar1 == 0) {
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar3,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02139cf4(iVar1,0);
  iVar6 = func_0x01c24918(0);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar6 + 0x48);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar7 = func_0x01dd2c04(iVar6,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_020dc9ec + 0x20dc804);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020dc9f0 + 0x20dc818),0,uVar7,0);
    func_0x01384978(*(undefined4 *)(_UNK_020dc9f4 + 0x20dc824));
    func_0x01384978(*(undefined4 *)(_UNK_020dc9f8 + 0x20dc830));
    func_0x01384978(*(undefined4 *)(_UNK_020dc9fc + 0x20dc83c));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar6 = func_0x0229f06c(0x57b,0);
  if (iVar6 == 0) {
    func_0x020da680(&uStack_38,iVar1);
    iVar6 = *(int *)(iVar1 + 0x70);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_30,iVar6,**(undefined4 **)(_UNK_020dca00 + 0x20dc8d4));
    puVar5 = *(undefined4 **)(_UNK_020dca04 + 0x20dc8ec);
    while (iVar2 = func_0x03f5f428(&uStack_30,*puVar5), iVar6 = iStack_24, iVar2 != 0) {
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      func_0x0210c12c(iVar6,iStack_34,-iStack_34,0);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x0210c518(iVar6,uVar7,0);
    }
    func_0x03f5f424(&uStack_30,**(undefined4 **)(_UNK_020dca08 + 0x20dc94c));
    func_0x020dca14(iVar1);
  }
  else {
    iVar6 = func_0x0229f13c(0x57b,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uStack_40 = 0;
    func_0x02179a68(iVar6,iVar1,0,uVar7);
  }
  return;
}



// ===== FAT.MainMergeMan$$FAT.IGameModule.Reset RVA 0x1dab124 =====

void FUN_01dbb124(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x9d54,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x9d54,0);
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



// ===== FAT.MainMergeMan$$FAT.IGameModule.LoadConfig RVA 0x1dab170 =====

void FUN_01dbb170(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x9d55,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x9d55,0);
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



// ===== FAT.MainMergeMan$$FAT.IGameModule.Startup RVA 0x1dab1bc =====

void FUN_01dbb1bc(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x9d56,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x9d56,0);
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



// ===== FAT.MainMergeMan$$.ctor RVA 0x1dab208 =====

void FUN_01dbb208(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MainMergeMan.<>c$$.cctor RVA 0x1dab210 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dbb210(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01dbb268 + 0x1dbb220);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbb26c + 0x1dbb234));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01dbb270 + 0x1dbb248);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x0244f5a0(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.MainMergeMan.<>c$$.ctor RVA 0x1dab274 =====

void FUN_01dbb274(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MainMergeMan.<>c$$<_AllocWorld>b__7_0 RVA 0x1dab27c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dbb27c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
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
  
  pcVar4 = (char *)(_UNK_01dbb334 + 0x1dbb28c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbb338 + 0x1dbb2a0));
    func_0x01384978(*(undefined4 *)(_UNK_01dbb33c + 0x1dbb2ac));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x68);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01e6c044(iVar1,0);
  if (*(int *)(**(int **)(_UNK_01dbb340 + 0x1dbb2f4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01dbb344 + 0x1dbb310));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0229f06c(0x3f,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x3f,0);
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
    func_0x01485278(&uStack_30,iVar1,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar1 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}



// ===== FAT.MainMergeMan.<>c__DisplayClass13_0$$<_ProcessSingleItem>b__0 RVA 0x1dab348 =====

/* WARNING: Removing unreachable block (ram,0x01e02834) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dbb348(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int aiStack_1c [3];
  
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0210e2d4(param_2,0);
  if (iVar1 != *(int *)(param_1 + 8)) {
    return;
  }
  iVar1 = func_0x02166c84(param_2,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0210e5f4(param_2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_01e02840 + 0x1e02764);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e02844 + 0x1e02778),uVar2,1,0);
      *pcVar4 = '\x01';
    }
    aiStack_1c[0] = 0;
    iVar3 = func_0x0229f06c(0x96cf,0);
    if (iVar3 == 0) {
      iVar1 = *(int *)(iVar1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x03d66780(iVar1,uVar2,aiStack_1c,**(undefined4 **)(_UNK_01e02848 + 0x1e027fc));
      if (iVar1 != 0) {
        if (aiStack_1c[0] == 0) {
          func_0x01384bf0();
        }
        func_0x022a07c4();
      }
    }
    else {
      iVar3 = func_0x0229f13c(0x96cf,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x0217f950(iVar3,iVar1,uVar2,1,0);
    }
    return;
  }
  return;
}



// ===== FAT.MainMergeMan.<>c__DisplayClass14_0$$<_ProcessItemHashSet>b__0 RVA 0x1dab3d4 =====

/* WARNING: Removing unreachable block (ram,0x01e02834) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dbb3d4(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_01dbb4b0 + 0x1dbb3ec);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbb4b4 + 0x1dbb400));
    *pcVar3 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 8);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0210e2d4(param_2,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x02450564(iVar4,uVar1,**(undefined4 **)(_UNK_01dbb4b8 + 0x1dbb444));
  if ((iVar4 != 0) && (iVar4 = func_0x02166c84(param_2,0), iVar4 != 0)) {
    iVar4 = *(int *)(param_1 + 0xc);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar1 = func_0x0210e5f4(param_2,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_01e02840 + 0x1e02764);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e02844 + 0x1e02778),uVar1,1,0);
      *pcVar3 = '\x01';
    }
    iStack_1c = 0;
    iVar2 = func_0x0229f06c(0x96cf,0);
    if (iVar2 == 0) {
      iVar4 = *(int *)(iVar4 + 0x4c);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x03d66780(iVar4,uVar1,&iStack_1c,**(undefined4 **)(_UNK_01e02848 + 0x1e027fc));
      if (iVar4 != 0) {
        if (iStack_1c == 0) {
          func_0x01384bf0();
        }
        func_0x022a07c4();
      }
    }
    else {
      iVar2 = func_0x0229f13c(0x96cf,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0217f950(iVar2,iVar4,uVar1,1,0);
    }
    return;
  }
  return;
}


