/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Activity$$.ctor RVA 0x2b2b0a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b3b0a0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar4 = (char *)(_UNK_02b3b4e0 + 0x2b3b0b8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b3b4e4 + 0x2b3b0cc));
    func_0x01384978(*(undefined4 *)(_UNK_02b3b4e8 + 0x2b3b0d8));
    func_0x01384978(*(undefined4 *)(_UNK_02b3b4ec + 0x2b3b0e4));
    func_0x01384978(*(undefined4 *)(_UNK_02b3b4f0 + 0x2b3b0f0));
    func_0x01384978(*(undefined4 *)(_UNK_02b3b4f4 + 0x2b3b0fc));
    func_0x01384978(*(undefined4 *)(_UNK_02b3b4f8 + 0x2b3b108));
    func_0x01384978(*(undefined4 *)(_UNK_02b3b4fc + 0x2b3b114));
    func_0x01384978(*(undefined4 *)(_UNK_02b3b500 + 0x2b3b120));
    func_0x01384978(*(undefined4 *)(_UNK_02b3b504 + 0x2b3b12c));
    func_0x01384978(*(undefined4 *)(_UNK_02b3b508 + 0x2b3b138));
    func_0x01384978(*(undefined4 *)(_UNK_02b3b50c + 0x2b3b144));
    func_0x01384978(*(undefined4 *)(_UNK_02b3b510 + 0x2b3b150));
    func_0x01384978(*(undefined4 *)(_UNK_02b3b514 + 0x2b3b15c));
    func_0x01384978(*(undefined4 *)(_UNK_02b3b518 + 0x2b3b168));
    func_0x01384978(*(undefined4 *)(_UNK_02b3b51c + 0x2b3b174));
    func_0x01384978(*(undefined4 *)(_UNK_02b3b520 + 0x2b3b180));
    func_0x01384978(*(undefined4 *)(_UNK_02b3b524 + 0x2b3b18c));
    func_0x01384978(*(undefined4 *)(_UNK_02b3b528 + 0x2b3b198));
    func_0x01384978(*(undefined4 *)(_UNK_02b3b52c + 0x2b3b1a4));
    func_0x01384978(*(undefined4 *)(_UNK_02b3b530 + 0x2b3b1b0));
    func_0x01384978(*(undefined4 *)(_UNK_02b3b534 + 0x2b3b1bc));
    func_0x01384978(*(undefined4 *)(_UNK_02b3b538 + 0x2b3b1c8));
    func_0x01384978(*(undefined4 *)(_UNK_02b3b53c + 0x2b3b1d4));
    func_0x01384978(*(undefined4 *)(_UNK_02b3b540 + 0x2b3b1e0));
    func_0x01384978(*(undefined4 *)(_UNK_02b3b544 + 0x2b3b1ec));
    *pcVar4 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b3b548 + 0x2b3b200));
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_02b3b54c + 0x2b3b214));
  puVar6 = *(undefined4 **)(_UNK_02b3b550 + 0x2b3b228);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = func_0x01384be4(*puVar6);
  puVar7 = *(undefined4 **)(_UNK_02b3b554 + 0x2b3b240);
  func_0x03cd5ff8(uVar1,*puVar7);
  puVar2 = *(undefined4 **)(_UNK_02b3b558 + 0x2b3b250);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03df7548(uVar1,**(undefined4 **)(_UNK_02b3b55c + 0x2b3b268));
  puVar2 = *(undefined4 **)(_UNK_02b3b560 + 0x2b3b27c);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03dce810(uVar1,**(undefined4 **)(_UNK_02b3b564 + 0x2b3b294));
  puVar2 = *(undefined4 **)(_UNK_02b3b568 + 0x2b3b2a8);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03dce810(uVar1,**(undefined4 **)(_UNK_02b3b56c + 0x2b3b2c0));
  puVar2 = *(undefined4 **)(_UNK_02b3b570 + 0x2b3b2d4);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x024cf880(uVar1,0);
  puVar2 = *(undefined4 **)(_UNK_02b3b574 + 0x2b3b2f4);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x02b671bc(uVar1,0);
  puVar2 = *(undefined4 **)(_UNK_02b3b578 + 0x2b3b314);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x02b67170(uVar1,0);
  puVar2 = *(undefined4 **)(_UNK_02b3b57c + 0x2b3b334);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x02c0382c(uVar1,0);
  puVar8 = *(undefined4 **)(_UNK_02b3b580 + 0x2b3b354);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = func_0x01384be4(*puVar8);
  puVar9 = *(undefined4 **)(_UNK_02b3b584 + 0x2b3b36c);
  func_0x0328e950(uVar1,*puVar9);
  uVar3 = *puVar8;
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x0328e950(uVar1,*puVar9);
  puVar2 = *(undefined4 **)(_UNK_02b3b588 + 0x2b3b394);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03d604ec(uVar1,**(undefined4 **)(_UNK_02b3b58c + 0x2b3b3ac));
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  puVar2 = *(undefined4 **)(_UNK_02b3b590 + 0x2b3b3c4);
  uVar1 = func_0x01384be4(*puVar2);
  puVar5 = *(undefined4 **)(_UNK_02b3b594 + 0x2b3b3d8);
  func_0x03cd5ff8(uVar1,*puVar5);
  uVar3 = *puVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x03cd5ff8(uVar1,*puVar5);
  puVar2 = *(undefined4 **)(_UNK_02b3b598 + 0x2b3b400);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03dce810(uVar1,**(undefined4 **)(_UNK_02b3b59c + 0x2b3b418));
  uVar3 = *puVar6;
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x03cd5ff8(uVar1,*puVar7);
  uVar3 = *puVar8;
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x0328e950(uVar1,*puVar9);
  uVar3 = *puVar8;
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x0328e950(uVar1,*puVar9);
  puVar2 = *(undefined4 **)(_UNK_02b3b5a0 + 0x2b3b474);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x02b61414(uVar1,0);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  func_0x04874ed4(param_1,0);
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b3b5a4 + 0x2b3b4a4));
  func_0x02b3b5ac(uVar1,param_1);
  puVar2 = *(undefined4 **)(_UNK_02b3b5a8 + 0x2b3b4c0);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x02b56038(uVar1,0);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  return;
}



// ===== FAT.Activity$$Reset RVA 0x2b2b724 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b3b724(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  int *piStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  
  pcVar4 = (char *)(_UNK_02b3bef0 + 0x2b3b73c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b3bef4 + 0x2b3b750));
    func_0x01384978(*(undefined4 *)(_UNK_02b3bef8 + 0x2b3b75c));
    func_0x01384978(*(undefined4 *)(_UNK_02b3befc + 0x2b3b768));
    func_0x01384978(*(undefined4 *)(_UNK_02b3bf00 + 0x2b3b774));
    func_0x01384978(*(undefined4 *)(_UNK_02b3bf04 + 0x2b3b780));
    func_0x01384978(*(undefined4 *)(_UNK_02b3bf08 + 0x2b3b78c));
    func_0x01384978(*(undefined4 *)(_UNK_02b3bf0c + 0x2b3b798));
    func_0x01384978(*(undefined4 *)(_UNK_02b3bf10 + 0x2b3b7a4));
    func_0x01384978(*(undefined4 *)(_UNK_02b3bf14 + 0x2b3b7b0));
    func_0x01384978(*(undefined4 *)(_UNK_02b3bf18 + 0x2b3b7bc));
    func_0x01384978(*(undefined4 *)(_UNK_02b3bf1c + 0x2b3b7c8));
    func_0x01384978(*(undefined4 *)(_UNK_02b3bf20 + 0x2b3b7d4));
    func_0x01384978(*(undefined4 *)(_UNK_02b3bf24 + 0x2b3b7e0));
    func_0x01384978(*(undefined4 *)(_UNK_02b3bf28 + 0x2b3b7ec));
    func_0x01384978(*(undefined4 *)(_UNK_02b3bf2c + 0x2b3b7f8));
    func_0x01384978(*(undefined4 *)(_UNK_02b3bf30 + 0x2b3b804));
    func_0x01384978(*(undefined4 *)(_UNK_02b3bf34 + 0x2b3b810));
    func_0x01384978(*(undefined4 *)(_UNK_02b3bf38 + 0x2b3b81c));
    func_0x01384978(*(undefined4 *)(_UNK_02b3bf3c + 0x2b3b828));
    *pcVar4 = '\x01';
  }
  uStack_6c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_68 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_64 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_4c = 0;
  iStack_50 = 0;
  uStack_48 = 0;
  uStack_54 = 0;
  uStack_58 = 0;
  piStack_5c = (int *)0x0;
  uStack_34 = (ulonglong)uStack_6c << 0x20;
  uStack_2c = CONCAT44(iStack_64,uStack_68);
  uStack_70 = 0;
  uStack_3c = uStack_6c;
  uStack_38 = uStack_68;
  iVar2 = func_0x0229f06c(0x734e,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03cd6fc4(&uStack_90,iVar2,**(undefined4 **)(_UNK_02b3bf40 + 0x2b3b8d8));
    uStack_34._0_4_ = iStack_84;
    uStack_34._4_4_ = uStack_80;
    uStack_40 = uStack_90;
    uStack_3c = uStack_8c;
    uStack_38 = uStack_88;
    uStack_2c = uStack_7c;
    puVar5 = *(undefined4 **)(_UNK_02b3bf44 + 0x2b3b910);
    puVar6 = *(undefined4 **)(_UNK_02b3bf48 + 0x2b3b918);
    while (iVar2 = func_0x03f849ec(&uStack_40,*puVar5), iVar2 != 0) {
      uStack_48 = (undefined4)uStack_2c;
      iStack_50 = (int)uStack_34;
      uStack_4c = uStack_34._4_4_;
      func_0x04356064(&iStack_50,&uStack_58,&piStack_5c,*puVar6);
      piVar1 = piStack_5c;
      if (piStack_5c == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar1;
      (**(code **)(iVar2 + 0x1d0))(piVar1,*(undefined4 *)(iVar2 + 0x1d4));
    }
    func_0x03f84b48(&uStack_40,**(undefined4 **)(_UNK_02b3bf6c + 0x2b3ba4c));
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    puVar5 = *(undefined4 **)(_UNK_02b3bf5c + 0x2b3ba7c);
    func_0x03cd6c78(iVar2,*puVar5);
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x03df7cbc(iVar2,**(undefined4 **)(_UNK_02b3bf60 + 0x2b3ba9c));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0433ea2c(&uStack_90,iVar2,**(undefined4 **)(_UNK_02b3bf64 + 0x2b3bac8));
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    uStack_68 = uStack_88;
    iStack_64 = iStack_84;
    puVar6 = *(undefined4 **)(_UNK_02b3bf68 + 0x2b3bae8);
    while (iVar3 = func_0x03faf1e8(&uStack_70,*puVar6), iVar2 = iStack_64, iVar3 != 0) {
      if (iStack_64 == 0) {
        func_0x01384bf0();
      }
      *(undefined1 *)(iVar2 + 8) = 1;
    }
    func_0x03faf1e4(&uStack_70,**(undefined4 **)(_UNK_02b3bf74 + 0x2b3bb1c));
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03df821c(iVar2,**(undefined4 **)(_UNK_02b3bf7c + 0x2b3bb40));
    iVar2 = *(int *)(param_1 + 0x14);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03dcf444(iVar2,**(undefined4 **)(_UNK_02b3bf80 + 0x2b3bb64));
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar2 + 0xc);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (0 < iVar3) {
      func_0x0484e5ec(*(undefined4 *)(iVar2 + 8),0,iVar3,0);
    }
    iVar2 = *(int *)(param_1 + 0x48);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03cd6c78(iVar2,*puVar5);
    iVar2 = *(int *)(param_1 + 0x4c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar2 + 0xc);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (0 < iVar3) {
      func_0x0484e5ec(*(undefined4 *)(iVar2 + 8),0,iVar3,0);
    }
    iVar2 = *(int *)(param_1 + 0x50);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar2 + 0xc);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (0 < iVar3) {
      func_0x0484e5ec(*(undefined4 *)(iVar2 + 8),0,iVar3,0);
    }
    iVar2 = *(int *)(param_1 + 0x3c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    puVar5 = *(undefined4 **)(_UNK_02b3bf84 + 0x2b3bc68);
    func_0x03cd6c78(iVar2,*puVar5);
    iVar2 = *(int *)(param_1 + 0x40);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03cd6c78(iVar2,*puVar5);
    iVar2 = *(int *)(param_1 + 8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar2 + 0xc);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (0 < iVar3) {
      func_0x0484e5ec(*(undefined4 *)(iVar2 + 8),0,iVar3,0);
    }
    iVar2 = *(int *)(param_1 + 0x44);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03dcf444(iVar2,**(undefined4 **)(_UNK_02b3bf88 + 0x2b3bce4));
    iVar2 = *(int *)(param_1 + 0x38);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03d611a0(iVar2,**(undefined4 **)(_UNK_02b3bf8c + 0x2b3bd08));
    iVar2 = *(int *)(param_1 + 0x78);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02b61204(iVar2,0);
    iVar2 = *(int *)(param_1 + 0x30);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar2 + 0xc);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (0 < iVar3) {
      func_0x0484e5ec(*(undefined4 *)(iVar2 + 8),0,iVar3,0);
    }
    iVar2 = *(int *)(param_1 + 0x18);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03dcf444(iVar2,**(undefined4 **)(_UNK_02b3bf90 + 0x2b3bd88));
  }
  else {
    iVar2 = func_0x0229f13c(0x734e,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.Activity$$IsInObjRplcReplacePeriod RVA 0x2b2bf9c =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02b3bf9c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  int aiStack_64 [7];
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  int iStack_2c;
  int iStack_28;
  
  pcVar9 = (char *)(_UNK_02b3c44c + 0x2b3bfb8);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b3c450 + 0x2b3bfcc));
    func_0x01384978(*(undefined4 *)(_UNK_02b3c454 + 0x2b3bfd8));
    func_0x01384978(*(undefined4 *)(_UNK_02b3c458 + 0x2b3bfe4));
    func_0x01384978(*(undefined4 *)(_UNK_02b3c45c + 0x2b3bff0));
    func_0x01384978(*(undefined4 *)(_UNK_02b3c460 + 0x2b3bffc));
    func_0x01384978(*(undefined4 *)(_UNK_02b3c464 + 0x2b3c008));
    func_0x01384978(*(undefined4 *)(_UNK_02b3c468 + 0x2b3c014));
    func_0x01384978(*(undefined4 *)(_UNK_02b3c46c + 0x2b3c020));
    func_0x01384978(*(undefined4 *)(_UNK_02b3c470 + 0x2b3c02c));
    *pcVar9 = '\x01';
  }
  uStack_44 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_48 = 0;
  iStack_28 = 0;
  iStack_2c = 0;
  aiStack_64[4] = 0;
  aiStack_64[3] = 0;
  aiStack_64[5] = 0;
  aiStack_64[2] = 0;
  aiStack_64[1] = 0;
  aiStack_64[0] = 0;
  uStack_3c = (ulonglong)uStack_44 << 0x20;
  uStack_34 = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),uStack_40);
  iVar1 = func_0x0229f06c(0x93,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03dd1078(iVar1,param_2,&iStack_28,**(undefined4 **)(_UNK_02b3c474 + 0x2b3c0d4));
    if ((iStack_28 == 0 || iVar1 == 0) || (uVar2 = *(uint *)(iStack_28 + 0xc), (int)uVar2 < 1)) {
      iVar1 = *(int *)(param_1 + 0x48);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03cd6fc4(&uStack_80,iVar1,**(undefined4 **)(_UNK_02b3c480 + 0x2b3c118));
      uStack_3c._0_4_ = uStack_74;
      uStack_3c._4_4_ = uStack_70;
      uStack_48 = uStack_80;
      uStack_44 = uStack_7c;
      uStack_40 = uStack_78;
      uStack_34 = uStack_6c;
      puVar11 = *(undefined4 **)(_UNK_02b3c484 + 0x2b3c154);
      puVar12 = *(undefined4 **)(_UNK_02b3c488 + 0x2b3c15c);
      do {
        do {
          iVar1 = func_0x03f849ec(&uStack_48,*puVar11);
          if (iVar1 == 0) {
            func_0x03f84b48(&uStack_48,**(undefined4 **)(_UNK_02b3c49c + 0x2b3c270));
            iVar1 = func_0x02b3c518(param_1,param_2,&iStack_2c);
            if (iVar1 == 0) {
              return 0;
            }
            if (iStack_2c == 0) {
              return 0;
            }
            return 1;
          }
          aiStack_64[5] = (undefined4)uStack_34;
          aiStack_64[3] = (undefined4)uStack_3c;
          aiStack_64[4] = uStack_3c._4_4_;
          func_0x04356064(aiStack_64 + 3,aiStack_64 + 1,aiStack_64,*puVar12);
          iVar1 = aiStack_64[0];
        } while (((aiStack_64[0] == 0) || (iVar3 = func_0x02b3c4a4(aiStack_64[0]), iVar3 != param_2)
                 ) || (piVar4 = (int *)func_0x01384ab8(iVar1,**(undefined4 **)
                                                               (_UNK_02b3c48c + 0x2b3c1bc)),
                      piVar4 == (int *)0x0));
        iVar1 = *piVar4;
        uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar2 != 0) {
          piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_02b3c490 + 0x2b3c1e0)) {
              puVar5 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
              goto LAB_02b3c230;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_02b3c490 + 0x2b3c1e0),0);
LAB_02b3c230:
        iVar1 = (*(code *)*puVar5)(piVar4,puVar5[1]);
      } while (iVar1 == 0);
      func_0x03f84b48(&uStack_48,**(undefined4 **)(_UNK_02b3c494 + 0x2b3c254));
      uVar2 = 1;
    }
    else {
      iVar1 = 0;
      puVar11 = *(undefined4 **)(_UNK_02b3c478 + 0x2b3c2c4);
      piVar4 = *(int **)(_UNK_02b3c47c + 0x2b3c2cc);
      while( true ) {
        iVar3 = iStack_28;
        if (iStack_28 == 0) {
          func_0x01384bf0(uVar2);
        }
        iVar6 = iStack_28;
        uVar2 = 0;
        uVar10 = (uint)(iVar1 < *(int *)(iVar3 + 0xc));
        if (*(int *)(iVar3 + 0xc) <= iVar1) break;
        if (iStack_28 == 0) {
          func_0x01384bf0(0);
        }
        iVar6 = func_0x0328eea8(iVar6,iVar1,*puVar11);
        iVar3 = iStack_28;
        uVar2 = 0;
        if (iVar6 != 0) {
          if (iStack_28 == 0) {
            func_0x01384bf0();
          }
          piVar7 = (int *)func_0x0328eea8(iVar3,iVar1,*puVar11);
          if (piVar7 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar3 = *piVar7;
          uVar2 = (uint)*(ushort *)(iVar3 + 0xb6);
          if (uVar2 != 0) {
            piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
            do {
              if (piVar8[-1] == *piVar4) {
                puVar12 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
                goto LAB_02b3c394;
              }
              uVar2 = uVar2 - 1;
              piVar8 = piVar8 + 2;
            } while (uVar2 != 0);
          }
          puVar12 = (undefined4 *)func_0x014002dc(piVar7,*piVar4,0);
LAB_02b3c394:
          iVar3 = (*(code *)*puVar12)(piVar7,puVar12[1]);
          uVar2 = uVar10;
          if (iVar3 != 0) {
            return uVar10;
          }
        }
        iVar1 = iVar1 + 1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x93,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02176ae0(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.Activity$$LookupAny RVA 0x2b2c518 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b3c518(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int aiStack_5c [7];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_02b3c7d8 + 0x2b3c538);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b3c7dc + 0x2b3c54c));
    func_0x01384978(*(undefined4 *)(_UNK_02b3c7e0 + 0x2b3c558));
    func_0x01384978(*(undefined4 *)(_UNK_02b3c7e4 + 0x2b3c564));
    func_0x01384978(*(undefined4 *)(_UNK_02b3c7e8 + 0x2b3c570));
    func_0x01384978(*(undefined4 *)(_UNK_02b3c7ec + 0x2b3c57c));
    func_0x01384978(*(undefined4 *)(_UNK_02b3c7f0 + 0x2b3c588));
    func_0x01384978(*(undefined4 *)(_UNK_02b3c7f4 + 0x2b3c594));
    *pcVar4 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_34 = 0;
  aiStack_5c[4] = 0;
  aiStack_5c[3] = 0;
  aiStack_5c[5] = 0;
  aiStack_5c[2] = 0;
  aiStack_5c[1] = 0;
  aiStack_5c[0] = 0;
  uStack_30 = uStack_3c;
  uStack_2c = uStack_38;
  iVar1 = func_0x0229f06c(0x97,0);
  if (iVar1 == 0) {
    iVar1 = func_0x02b404cc(param_1,param_2);
    if ((iVar1 == 0) || (*(int *)(iVar1 + 0xc) < 1)) {
      iVar1 = *(int *)(param_1 + 0x48);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03cd6fc4(&uStack_40,iVar1,**(undefined4 **)(_UNK_02b3c7fc + 0x2b3c680));
      puVar5 = *(undefined4 **)(_UNK_02b3c800 + 0x2b3c6a4);
      puVar6 = *(undefined4 **)(_UNK_02b3c804 + 0x2b3c6ac);
      do {
        iVar1 = func_0x03f849ec(&uStack_40,*puVar5);
        if (iVar1 == 0) {
          func_0x03f84b48(&uStack_40,**(undefined4 **)(_UNK_02b3c810 + 0x2b3c730));
          *param_3 = 0;
          return 0;
        }
        aiStack_5c[5] = uStack_2c;
        aiStack_5c[3] = uStack_34;
        aiStack_5c[4] = uStack_30;
        func_0x04356064(aiStack_5c + 3,aiStack_5c + 1,aiStack_5c,*puVar6);
        iVar1 = aiStack_5c[0];
        if (aiStack_5c[0] == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x02b3c4a4(iVar1);
      } while (iVar3 != param_2);
      *param_3 = iVar1;
      func_0x03f84b48(&uStack_40,**(undefined4 **)(_UNK_02b3c808 + 0x2b3c714));
    }
    else {
      iVar1 = func_0x0328eea8(iVar1,0,**(undefined4 **)(_UNK_02b3c7f8 + 0x2b3c648));
      *param_3 = iVar1;
    }
    uVar2 = 1;
  }
  else {
    iVar1 = func_0x0229f13c(0x97,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02176988(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.Activity$$LoadConfig RVA 0x2b2c818 =====

/* WARNING: Removing unreachable block (ram,0x02b3cc08) */
/* WARNING: Removing unreachable block (ram,0x02b3cc14) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b3c818(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int aiStack_38 [5];
  
  pcVar7 = (char *)(_UNK_02b3cd10 + 0x2b3c830);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b3cd14 + 0x2b3c844));
    func_0x01384978(*(undefined4 *)(_UNK_02b3cd18 + 0x2b3c850));
    func_0x01384978(*(undefined4 *)(_UNK_02b3cd1c + 0x2b3c85c));
    func_0x01384978(*(undefined4 *)(_UNK_02b3cd20 + 0x2b3c868));
    func_0x01384978(*(undefined4 *)(_UNK_02b3cd24 + 0x2b3c874));
    func_0x01384978(*(undefined4 *)(_UNK_02b3cd28 + 0x2b3c880));
    func_0x01384978(*(undefined4 *)(_UNK_02b3cd2c + 0x2b3c88c));
    func_0x01384978(*(undefined4 *)(_UNK_02b3cd30 + 0x2b3c898));
    *pcVar7 = '\x01';
  }
  aiStack_38[3] = 0;
  aiStack_38[2] = 0;
  aiStack_38[1] = 0;
  aiStack_38[0] = 0;
  iVar1 = func_0x0229f06c(0x7350,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7350,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
    return;
  }
  uVar2 = func_0x01824f88(0);
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xd0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(iVar1 + 0x1c);
  iVar1 = func_0x036b7270(**(undefined4 **)(_UNK_02b3cd34 + 0x2b3c93c));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x034658b4(iVar1,**(undefined4 **)(_UNK_02b3cd38 + 0x2b3c960));
  do {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar3;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_02b3cd58 + 0x2b3c988)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_02b3c9d0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_02b3cd58 + 0x2b3c988),0);
LAB_02b3c9d0:
    iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    if (iVar1 == 0) break;
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar3;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_02b3cd3c + 0x2b3ca04)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_02b3ca4c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_02b3cd3c + 0x2b3ca04),0);
LAB_02b3ca4c:
    (*(code *)*puVar4)(&uStack_40,piVar3,puVar4[1]);
    aiStack_38[3] = uStack_3c;
    aiStack_38[2] = uStack_40;
    func_0x04358ad8(aiStack_38 + 2,aiStack_38 + 1,aiStack_38,
                    **(undefined4 **)(_UNK_02b3cd40 + 0x2b3ca74));
    iVar1 = aiStack_38[0];
    if (aiStack_38[0] == 0) {
      func_0x01384bf0();
    }
    iVar8 = *(int *)(iVar1 + 0x18);
    if (*(char *)(_UNK_02b3cd44 + 0x2b3caac) == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b3cd48 + 0x2b3cac0));
      *(undefined1 *)(_UNK_02b3cd4c + 0x2b3cad0) = 1;
    }
    if (iVar8 == 0) {
      uVar9 = 0;
      uVar2 = 0;
    }
    else {
      uVar2 = func_0x0466f590(iVar8,0);
      uVar9 = *(undefined4 *)(iVar8 + 8);
    }
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    func_0x01c32494(&uStack_40,iVar11,uVar2,uVar9,0);
    uVar2 = uStack_40;
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar10 = *(int *)(param_1 + 0x44);
    iVar8 = func_0x01384be4(**(undefined4 **)(_UNK_02b3cd50 + 0x2b3cb3c));
    func_0x04874ed4(iVar8,0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar8 + 8) = iVar1;
    *(undefined4 *)(iVar8 + 0xc) = uVar2;
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    func_0x03dcf240(iVar10,uVar9,iVar8,**(undefined4 **)(_UNK_02b3cd54 + 0x2b3cb74));
  } while( true );
  if (piVar3 != (int *)0x0) {
    iVar1 = *piVar3;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_02b3cd5c + 0x2b3cba8)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_02b3cbf0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_02b3cd5c + 0x2b3cba8),0);
LAB_02b3cbf0:
    (*(code *)*puVar4)(piVar3,puVar4[1]);
  }
  func_0x02b3cd6c(param_1);
  return;
}



// ===== FAT.Activity.TypeInfo$$.ctor RVA 0x2b2cd64 =====

void FUN_02b3cd64(void)

{
  return;
}



// ===== FAT.Activity$$CheckConfR RVA 0x2b2cd6c =====

/* WARNING: Removing unreachable block (ram,0x02b3d17c) */
/* WARNING: Removing unreachable block (ram,0x02b3d188) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b3cd6c(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int aiStack_38 [5];
  
  pcVar9 = (char *)(_UNK_02b3d3e0 + 0x2b3cd84);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b3d3e4 + 0x2b3cd98));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d3e8 + 0x2b3cda4));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d3ec + 0x2b3cdb0));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d3f0 + 0x2b3cdbc));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d3f4 + 0x2b3cdc8));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d3f8 + 0x2b3cdd4));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d3fc + 0x2b3cde0));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d400 + 0x2b3cdec));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d404 + 0x2b3cdf8));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d408 + 0x2b3ce04));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d40c + 0x2b3ce10));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d410 + 0x2b3ce1c));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d414 + 0x2b3ce28));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d418 + 0x2b3ce34));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d41c + 0x2b3ce40));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d420 + 0x2b3ce4c));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d424 + 0x2b3ce58));
    *pcVar9 = '\x01';
  }
  aiStack_38[3] = 0;
  aiStack_38[2] = 0;
  aiStack_38[1] = 0;
  aiStack_38[0] = 0;
  iVar1 = func_0x0229f06c(0x7351,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar6) {
      func_0x0484e5ec(*(undefined4 *)(iVar1 + 8),0,iVar6,0);
    }
    uVar14 = func_0x01c34eb8(0);
    iVar6 = (int)((ulonglong)uVar14 >> 0x20);
    iVar1 = func_0x01824f88(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x034658b4(iVar1,**(undefined4 **)(_UNK_02b3d428 + 0x2b3cf34));
LAB_02b3cf40:
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar2;
    uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_02b3d438 + 0x2b3cf5c)) {
          puVar4 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
          goto LAB_02b3cfa4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02b3d438 + 0x2b3cf5c),0);
LAB_02b3cfa4:
    iVar3 = (*(code *)*puVar4)(piVar2,puVar4[1]);
    if (iVar3 != 0) {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = *piVar2;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_02b3d42c + 0x2b3cfd8)) {
            puVar4 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
            goto LAB_02b3d020;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02b3d42c + 0x2b3cfd8),0);
LAB_02b3d020:
      (*(code *)*puVar4)(&uStack_40,piVar2,puVar4[1]);
      aiStack_38[3] = uStack_3c;
      aiStack_38[2] = uStack_40;
      func_0x04358ad8(aiStack_38 + 2,aiStack_38 + 1,aiStack_38,
                      **(undefined4 **)(_UNK_02b3d430 + 0x2b3d048));
      iVar3 = aiStack_38[0];
      if (aiStack_38[0] == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar3 + 0x24);
      bVar13 = *(uint *)(iVar3 + 0x20) < (uint)uVar14;
      if ((int)(iVar5 - (iVar6 + (uint)bVar13)) < 0 ==
          (SBORROW4(iVar5,iVar6) != SBORROW4(iVar5 - iVar6,(uint)bVar13))) {
        iVar5 = *(int *)(param_1 + 8);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar12 = *(int *)(iVar5 + 8);
        uVar7 = *(uint *)(iVar5 + 0xc);
        piVar8 = *(int **)(_UNK_02b3d434 + 0x2b3d0b4);
        *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
        iVar11 = *piVar8;
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        if (uVar7 < *(uint *)(iVar12 + 0xc)) {
          *(uint *)(iVar5 + 0xc) = uVar7 + 1;
          *(int *)(iVar12 + uVar7 * 4 + 0x10) = iVar3;
        }
        else {
          func_0x0328f170(iVar5,iVar3,
                          *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
        }
      }
      goto LAB_02b3cf40;
    }
    if (piVar2 != (int *)0x0) {
      iVar6 = *piVar2;
      uVar7 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_02b3d43c + 0x2b3d11c)) {
            puVar4 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
            goto LAB_02b3d164;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02b3d43c + 0x2b3d11c),0);
LAB_02b3d164:
      (*(code *)*puVar4)(piVar2,puVar4[1]);
    }
    piVar2 = *(int **)(_UNK_02b3d440 + 0x2b3d19c);
    iVar3 = *piVar2;
    iVar5 = *(int *)(param_1 + 8);
    iVar6 = *(int *)(iVar3 + 0x74);
    *(undefined8 *)(param_1 + 0x60) = uVar14;
    if (iVar6 == 0) {
      func_0x01384ab4(iVar3);
      iVar3 = *piVar2;
    }
    iVar6 = *(int *)(*(int *)(iVar3 + 0x5c) + 4);
    if (iVar6 == 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4(iVar3);
        iVar3 = *piVar2;
      }
      uVar10 = **(undefined4 **)(iVar3 + 0x5c);
      iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_02b3d444 + 0x2b3d1fc));
      func_0x03c751dc(iVar6,uVar10,**(undefined4 **)(_UNK_02b3d448 + 0x2b3d21c),0);
      *(int *)(*(int *)(*piVar2 + 0x5c) + 4) = iVar6;
    }
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x03290edc(iVar5,iVar6,**(undefined4 **)(_UNK_02b3d44c + 0x2b3d24c));
    iVar6 = *(int *)(param_1 + 8);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar6 + 0xc) < 1) {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_40 = func_0x03465bcc(iVar1,**(undefined4 **)(_UNK_02b3d450 + 0x2b3d294));
      uVar10 = func_0x01384abc(**(undefined4 **)(_UNK_02b3d454 + 0x2b3d2a4),&uStack_40);
      uVar10 = func_0x0467272c(**(undefined4 **)(_UNK_02b3d458 + 0x2b3d2c8),
                               **(undefined4 **)(_UNK_02b3d45c + 0x2b3d2d4),uVar10,0);
      if (*(int *)(**(int **)(_UNK_02b3d460 + 0x2b3d2e8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar10,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7351,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.Activity$$FAT.IUserDataHolder.FillData RVA 0x2b2d468 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02b3d468(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  int *piStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  int *piStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  int *piStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int *piStack_b4;
  ulonglong uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_9c;
  uint uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int *piStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int *piStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int *piStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  uint uStack_30;
  undefined8 uStack_2c;
  
  pcVar8 = (char *)(_UNK_02b3ddac + 0x2b3d484);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b3ddb0 + 0x2b3d498));
    func_0x01384978(*(undefined4 *)(_UNK_02b3ddb4 + 0x2b3d4a4));
    func_0x01384978(*(undefined4 *)(_UNK_02b3ddb8 + 0x2b3d4b0));
    func_0x01384978(*(undefined4 *)(_UNK_02b3ddbc + 0x2b3d4bc));
    func_0x01384978(*(undefined4 *)(_UNK_02b3ddc0 + 0x2b3d4c8));
    func_0x01384978(*(undefined4 *)(_UNK_02b3ddc4 + 0x2b3d4d4));
    func_0x01384978(*(undefined4 *)(_UNK_02b3ddc8 + 0x2b3d4e0));
    func_0x01384978(*(undefined4 *)(_UNK_02b3ddcc + 0x2b3d4ec));
    func_0x01384978(*(undefined4 *)(_UNK_02b3ddd0 + 0x2b3d4f8));
    func_0x01384978(*(undefined4 *)(_UNK_02b3ddd4 + 0x2b3d504));
    func_0x01384978(*(undefined4 *)(_UNK_02b3ddd8 + 0x2b3d510));
    func_0x01384978(*(undefined4 *)(_UNK_02b3dddc + 0x2b3d51c));
    func_0x01384978(*(undefined4 *)(_UNK_02b3dde0 + 0x2b3d528));
    func_0x01384978(*(undefined4 *)(_UNK_02b3dde4 + 0x2b3d534));
    func_0x01384978(*(undefined4 *)(_UNK_02b3dde8 + 0x2b3d540));
    func_0x01384978(*(undefined4 *)(_UNK_02b3ddec + 0x2b3d54c));
    func_0x01384978(*(undefined4 *)(_UNK_02b3ddf0 + 0x2b3d558));
    func_0x01384978(*(undefined4 *)(_UNK_02b3ddf4 + 0x2b3d564));
    func_0x01384978(*(undefined4 *)(_UNK_02b3ddf8 + 0x2b3d570));
    func_0x01384978(*(undefined4 *)(_UNK_02b3ddfc + 0x2b3d57c));
    func_0x01384978(*(undefined4 *)(_UNK_02b3de00 + 0x2b3d588));
    func_0x01384978(*(undefined4 *)(_UNK_02b3de04 + 0x2b3d594));
    func_0x01384978(*(undefined4 *)(_UNK_02b3de08 + 0x2b3d5a0));
    func_0x01384978(*(undefined4 *)(_UNK_02b3de0c + 0x2b3d5ac));
    func_0x01384978(*(undefined4 *)(_UNK_02b3de10 + 0x2b3d5b8));
    func_0x01384978(*(undefined4 *)(_UNK_02b3de14 + 0x2b3d5c4));
    *pcVar8 = '\x01';
  }
  uStack_dc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_d8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_d4 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  piStack_34 = (int *)0x0;
  uStack_2c = CONCAT44(piStack_d4,uStack_d8);
  uStack_78 = 0;
  uStack_88 = 0;
  uStack_64 = 0;
  uStack_98 = 0;
  uStack_c0 = 0;
  uStack_4c = 0;
  piStack_50 = (int *)0x0;
  uStack_48 = 0;
  uStack_54 = 0;
  uStack_58 = 0;
  piStack_5c = (int *)0x0;
  uStack_68 = 0;
  uStack_9c = 0;
  uStack_a4 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c4 = 0;
  piStack_c8 = (int *)0x0;
  uStack_cc = 0;
  iStack_d0 = 0;
  uStack_e0 = 0;
  uStack_bc = uStack_dc;
  uStack_b8 = uStack_d8;
  piStack_b4 = piStack_d4;
  uStack_94 = uStack_dc;
  uStack_90 = uStack_d8;
  uStack_8c = piStack_d4;
  uStack_84 = uStack_dc;
  uStack_80 = uStack_d8;
  piStack_7c = piStack_d4;
  uStack_74 = uStack_dc;
  uStack_70 = uStack_d8;
  uStack_6c = piStack_d4;
  uStack_3c = uStack_dc;
  uStack_38 = uStack_d8;
  uStack_30 = uStack_dc;
  iVar1 = func_0x0229f06c(0x7356,0);
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
    iVar13 = *(int *)(iVar1 + 0x30);
    if (iVar13 == 0) {
      iVar13 = func_0x01384be4(**(undefined4 **)(_UNK_02b3de18 + 0x2b3d6ec));
      func_0x0177e310(iVar13,0);
      *(int *)(iVar1 + 0x30) = iVar13;
    }
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03cd6fc4(&uStack_108,iVar1,**(undefined4 **)(_UNK_02b3de1c + 0x2b3d72c));
    piStack_34 = piStack_fc;
    uStack_30 = uStack_f8;
    uStack_2c = CONCAT44(uStack_f0,uStack_f4);
    uStack_40 = uStack_108;
    uStack_3c = uStack_104;
    uStack_38 = uStack_100;
    puVar9 = *(undefined4 **)(_UNK_02b3de20 + 0x2b3d760);
    while (iVar1 = func_0x03f849ec(&uStack_40,**(undefined4 **)(_UNK_02b3de28 + 0x2b3d768)),
          iVar1 != 0) {
      uStack_48 = (undefined4)uStack_2c;
      piStack_50 = piStack_34;
      uStack_4c = uStack_30;
      func_0x04356064(&piStack_50,&uStack_58,&piStack_5c,
                      **(undefined4 **)(_UNK_02b3de24 + 0x2b3d78c));
      uVar10 = uStack_58;
      piVar11 = piStack_5c;
      if (iVar13 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar13 + 0x18);
      if (piVar11 == (int *)0x0) {
        func_0x01384bf0();
      }
      uVar2 = (**(code **)(*piVar11 + 0x160))(piVar11,*(undefined4 *)(*piVar11 + 0x164));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0346500c(iVar1,uVar10,uVar2,*puVar9);
    }
    func_0x03f84b48(&uStack_40,**(undefined4 **)(_UNK_02b3de2c + 0x2b3d810));
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d61474(&uStack_108,iVar1,**(undefined4 **)(_UNK_02b3de34 + 0x2b3d840));
    uStack_88 = uStack_108;
    uStack_84 = uStack_104;
    uStack_80 = uStack_100;
    piStack_7c = piStack_fc;
    uStack_78 = uStack_f8;
    uStack_74 = uStack_f4;
    uStack_70 = uStack_f0;
    uStack_6c = uStack_ec;
    uStack_68 = uStack_e8;
    uStack_64 = uStack_e4;
    puVar14 = *(undefined4 **)(_UNK_02b3de38 + 0x2b3d870);
    puVar9 = *(undefined4 **)(_UNK_02b3de3c + 0x2b3d878);
    while (iVar1 = func_0x03f9a9bc(&uStack_88,*puVar14), iVar1 != 0) {
      uStack_98 = uStack_78;
      uStack_94 = uStack_74;
      uStack_90 = uStack_70;
      uStack_8c = uStack_6c;
      func_0x043589f0(&uStack_98,&uStack_9c,&uStack_a8,**(undefined4 **)(_UNK_02b3de44 + 0x2b3d894))
      ;
      uVar4 = uStack_9c;
      uVar2 = uStack_a4;
      uVar10 = uStack_a8;
      if (iVar13 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar13 + 0x1c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03461fa8(iVar1,uVar4,uVar10,uVar2,*puVar9);
    }
    func_0x03f9ab08(&uStack_88,**(undefined4 **)(_UNK_02b3de48 + 0x2b3d904));
    uVar10 = *(undefined4 *)(param_1 + 0x58);
    uVar2 = *(undefined4 *)(param_1 + 0x5c);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar13 + 0x20) = uVar10;
    iVar1 = *(int *)(param_1 + 0x44);
    *(undefined4 *)(iVar13 + 0x24) = uVar2;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03dcf754(&uStack_108,iVar1,**(undefined4 **)(_UNK_02b3de50 + 0x2b3d94c));
    uStack_b0 = (ulonglong)uStack_f8;
    uStack_c0 = uStack_108;
    uStack_bc = uStack_104;
    uStack_b8 = uStack_100;
    piStack_b4 = piStack_fc;
    puVar9 = *(undefined4 **)(_UNK_02b3de54 + 0x2b3d978);
    while (iVar1 = func_0x03fa87cc(&uStack_c0,**(undefined4 **)(_UNK_02b3de64 + 0x2b3d980)),
          iVar1 != 0) {
      uStack_c4 = (undefined4)uStack_b0;
      piStack_c8 = piStack_b4;
      func_0x0435a580(&piStack_c8,&uStack_cc,&iStack_d0,**(undefined4 **)(_UNK_02b3de5c + 0x2b3d9a0)
                     );
      uVar10 = uStack_cc;
      iVar1 = iStack_d0;
      iVar12 = *(int *)(iVar13 + 0x28);
      iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_02b3de60 + 0x2b3d9d0));
      func_0x0177df68(iVar3,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = *(undefined4 *)(iVar1 + 0x14);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar4 = *(undefined4 *)(iVar1 + 0x18);
      uVar5 = *(undefined4 *)(iVar1 + 0x1c);
      *(undefined4 *)(iVar3 + 0xc) = uVar2;
      *(undefined4 *)(iVar3 + 0x10) = uVar4;
      *(undefined4 *)(iVar3 + 0x14) = uVar5;
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      func_0x0346500c(iVar12,uVar10,iVar3,*puVar9);
    }
    func_0x03fa890c(&uStack_c0,**(undefined4 **)(_UNK_02b3de68 + 0x2b3da3c));
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_108,iVar1,**(undefined4 **)(_UNK_02b3de70 + 0x2b3da6c));
    uStack_e0 = uStack_108;
    uStack_dc = uStack_104;
    uStack_d8 = uStack_100;
    piStack_d4 = piStack_fc;
    puVar9 = *(undefined4 **)(_UNK_02b3de74 + 0x2b3da8c);
    puVar14 = *(undefined4 **)(_UNK_02b3de78 + 0x2b3da94);
    while (iVar1 = func_0x03f5f428(&uStack_e0,*puVar9), piVar11 = piStack_d4, iVar1 != 0) {
      iVar1 = *(int *)(iVar13 + 0x2c);
      if (piStack_d4 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = *piVar11;
      uVar10 = (**(code **)(iVar3 + 0x160))(piVar11,*(undefined4 *)(iVar3 + 0x164));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03652b00(iVar1,uVar10,*puVar14);
    }
    func_0x03f5f424(&uStack_e0,**(undefined4 **)(_UNK_02b3de80 + 0x2b3dafc));
    piVar11 = *(int **)(param_1 + 0x28);
    if (piVar11 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar11;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_02b3de88 + 0x2b3db28)) {
          puVar9 = (undefined4 *)(iVar1 + *piVar7 * 8 + 200);
          goto LAB_02b3db70;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_02b3de88 + 0x2b3db28),1);
LAB_02b3db70:
    (*(code *)*puVar9)(piVar11,param_2,puVar9[1]);
  }
  else {
    iVar1 = func_0x0229f13c(0x7356,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Activity$$FAT.IUserDataHolder.SetData RVA 0x2b2de90 =====

/* WARNING: Removing unreachable block (ram,0x02b3e560) */
/* WARNING: Removing unreachable block (ram,0x02b3e554) */
/* WARNING: Removing unreachable block (ram,0x02b3e32c) */
/* WARNING: Removing unreachable block (ram,0x02b3e338) */
/* WARNING: Removing unreachable block (ram,0x02b3e800) */
/* WARNING: Removing unreachable block (ram,0x02b3e80c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b3de90(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  
  pcVar10 = (char *)(_UNK_02b3eaec + 0x2b3deac);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b3eaf0 + 0x2b3dec0));
    func_0x01384978(*(undefined4 *)(_UNK_02b3eaf4 + 0x2b3decc));
    func_0x01384978(*(undefined4 *)(_UNK_02b3eaf8 + 0x2b3ded8));
    func_0x01384978(*(undefined4 *)(_UNK_02b3eafc + 0x2b3dee4));
    func_0x01384978(*(undefined4 *)(_UNK_02b3eb00 + 0x2b3def0));
    func_0x01384978(*(undefined4 *)(_UNK_02b3eb04 + 0x2b3defc));
    func_0x01384978(*(undefined4 *)(_UNK_02b3eb08 + 0x2b3df08));
    func_0x01384978(*(undefined4 *)(_UNK_02b3eb0c + 0x2b3df14));
    func_0x01384978(*(undefined4 *)(_UNK_02b3eb10 + 0x2b3df20));
    func_0x01384978(*(undefined4 *)(_UNK_02b3eb14 + 0x2b3df2c));
    func_0x01384978(*(undefined4 *)(_UNK_02b3eb18 + 0x2b3df38));
    func_0x01384978(*(undefined4 *)(_UNK_02b3eb1c + 0x2b3df44));
    func_0x01384978(*(undefined4 *)(_UNK_02b3eb20 + 0x2b3df50));
    func_0x01384978(*(undefined4 *)(_UNK_02b3eb24 + 0x2b3df5c));
    func_0x01384978(*(undefined4 *)(_UNK_02b3eb28 + 0x2b3df68));
    func_0x01384978(*(undefined4 *)(_UNK_02b3eb2c + 0x2b3df74));
    func_0x01384978(*(undefined4 *)(_UNK_02b3eb30 + 0x2b3df80));
    *pcVar10 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_2c = 0;
  uStack_50 = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  iStack_38 = 0;
  uStack_3c = 0;
  uStack_40 = 0;
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_5c = 0;
  uStack_60 = 0;
  iStack_64 = 0;
  iStack_68 = 0;
  iVar1 = func_0x0229f06c(0x7358,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7358,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
    return;
  }
  piVar11 = *(int **)(param_1 + 0x28);
  if (piVar11 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar11;
  uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_02b3eb34 + 0x2b3e034)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
        goto LAB_02b3e07c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_02b3eb34 + 0x2b3e034),0);
LAB_02b3e07c:
  (*(code *)*puVar2)(piVar11,param_2,puVar2[1]);
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
  iVar1 = *(int *)(iVar1 + 0x30);
  if (iVar1 == 0) {
    return;
  }
  iVar9 = *(int *)(iVar1 + 0x18);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  piVar11 = (int *)func_0x034658b4(iVar9,**(undefined4 **)(_UNK_02b3eb38 + 0x2b3e0ec));
LAB_02b3e108:
  if (piVar11 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar9 = *piVar11;
  uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_02b3eb3c + 0x2b3e124)) {
        puVar2 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
        goto LAB_02b3e16c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_02b3eb3c + 0x2b3e124),0);
LAB_02b3e16c:
  iVar9 = (*(code *)*puVar2)(piVar11,puVar2[1]);
  if (iVar9 != 0) {
    if (piVar11 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar9 = *piVar11;
    uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_02b3eb40 + 0x2b3e1a0)) {
          puVar2 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
          goto LAB_02b3e1e8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_02b3eb40 + 0x2b3e1a0),0);
LAB_02b3e1e8:
    (*(code *)*puVar2)(&uStack_78,piVar11,puVar2[1]);
    uStack_2c = uStack_74;
    uStack_30 = uStack_78;
    func_0x04358ad8(&uStack_30,&uStack_34,&iStack_38,**(undefined4 **)(_UNK_02b3eb44 + 0x2b3e210));
    uVar5 = uStack_34;
    iVar9 = iStack_38;
    if (iStack_38 == 0) {
      func_0x01384bf0();
    }
    uVar14 = *(undefined4 *)(iVar9 + 0x24);
    func_0x038fd264(&uStack_40,uVar5,*(undefined4 *)(iVar9 + 0x2c),
                    **(undefined4 **)(_UNK_02b3eb48 + 0x2b3e250));
    func_0x02b3eb94(&uStack_78,param_1,uStack_40,uStack_3c,uVar14,0xffffffff,iVar9,0,0);
    if ((uStack_78 & 1) == 0) {
      func_0x02b3eea0(param_1,uStack_40,uStack_3c,uVar14,uStack_74);
    }
    goto LAB_02b3e108;
  }
  if (piVar11 != (int *)0x0) {
    iVar9 = *piVar11;
    uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_02b3eb4c + 0x2b3e2cc)) {
          puVar2 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
          goto LAB_02b3e314;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_02b3eb4c + 0x2b3e2cc),0);
LAB_02b3e314:
    (*(code *)*puVar2)(piVar11,puVar2[1]);
  }
  iVar9 = *(int *)(iVar1 + 0x1c);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  piVar11 = (int *)func_0x03462894(iVar9,**(undefined4 **)(_UNK_02b3eb50 + 0x2b3e360));
  do {
    if (piVar11 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar9 = *piVar11;
    uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_02b3eb64 + 0x2b3e390)) {
          puVar2 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
          goto LAB_02b3e3d8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_02b3eb64 + 0x2b3e390),0);
LAB_02b3e3d8:
    iVar9 = (*(code *)*puVar2)(piVar11,puVar2[1]);
    if (iVar9 == 0) break;
    if (piVar11 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar9 = *piVar11;
    uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_02b3eb58 + 0x2b3e40c)) {
          puVar2 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
          goto LAB_02b3e454;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_02b3eb58 + 0x2b3e40c),0);
LAB_02b3e454:
    (*(code *)*puVar2)(&uStack_78,piVar11,puVar2[1]);
    uStack_50 = uStack_78;
    uStack_4c = uStack_74;
    uStack_48 = uStack_70;
    uStack_44 = uStack_6c;
    func_0x043589f0(&uStack_50,&uStack_34,&uStack_58,**(undefined4 **)(_UNK_02b3eb5c + 0x2b3e474));
    uVar13 = uStack_34;
    uVar14 = uStack_54;
    uVar5 = uStack_58;
    iVar9 = *(int *)(param_1 + 0x38);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    func_0x03d60f38(iVar9,uVar13,uVar5,uVar14,**(undefined4 **)(_UNK_02b3eb60 + 0x2b3e4b8));
  } while( true );
  if (piVar11 != (int *)0x0) {
    iVar9 = *piVar11;
    uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_02b3eb68 + 0x2b3e4f4)) {
          puVar2 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
          goto LAB_02b3e53c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_02b3eb68 + 0x2b3e4f4),0);
LAB_02b3e53c:
    (*(code *)*puVar2)(piVar11,puVar2[1]);
  }
  uVar5 = *(undefined4 *)(iVar1 + 0x24);
  iVar9 = *(int *)(iVar1 + 0x28);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0x20);
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  piVar11 = (int *)func_0x034658b4(iVar9,**(undefined4 **)(_UNK_02b3eb6c + 0x2b3e594));
  piVar7 = *(int **)(_UNK_02b3eb70 + 0x2b3e5ac);
  do {
    puVar2 = *(undefined4 **)(_UNK_02b3eb7c + 0x2b3e5bc);
    do {
      if (piVar11 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar9 = *piVar11;
      uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_02b3eb80 + 0x2b3e5d4)) {
            puVar3 = (undefined4 *)(iVar9 + *piVar8 * 8 + 0xc0);
            goto LAB_02b3e61c;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_02b3eb80 + 0x2b3e5d4),0);
LAB_02b3e61c:
      iVar9 = (*(code *)*puVar3)(piVar11,puVar3[1]);
      if (iVar9 == 0) {
        if (piVar11 == (int *)0x0) goto LAB_02b3e7f8;
        iVar9 = *piVar11;
        uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
        if (uVar6 == 0) goto LAB_02b3e7cc;
        piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        goto LAB_02b3e7b4;
      }
      if (piVar11 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar9 = *piVar11;
      uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        do {
          if (piVar8[-1] == *piVar7) {
            puVar3 = (undefined4 *)(iVar9 + *piVar8 * 8 + 0xc0);
            goto LAB_02b3e690;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar11,*piVar7,0);
LAB_02b3e690:
      (*(code *)*puVar3)(&uStack_78,piVar11,puVar3[1]);
      uStack_5c = uStack_74;
      uStack_60 = uStack_78;
      func_0x04358ad8(&uStack_60,&uStack_34,&iStack_64,*puVar2);
      uVar5 = uStack_34;
      iVar9 = iStack_64;
      iVar12 = *(int *)(param_1 + 0x44);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x03dd1078(iVar12,uVar5,&iStack_68,**(undefined4 **)(_UNK_02b3eb78 + 0x2b3e6f0));
      iVar12 = iStack_68;
    } while (iVar4 == 0);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar5 = *(undefined4 *)(iVar9 + 0xc);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uVar14 = *(undefined4 *)(iVar9 + 0x10);
    uVar13 = *(undefined4 *)(iVar9 + 0x14);
    *(undefined4 *)(iVar12 + 0x14) = uVar5;
    if (iStack_68 == 0) {
      func_0x01384bf0();
      uVar5 = *(undefined4 *)(iVar9 + 0x10);
      uVar15 = *(undefined4 *)(iVar9 + 0x14);
      iVar9 = iStack_68;
      uRam00000018 = uVar14;
      uRam0000001c = uVar13;
      if (iStack_68 == 0) {
        func_0x01384bf0();
        iVar9 = 0;
      }
    }
    else {
      *(undefined4 *)(iStack_68 + 0x18) = uVar14;
      *(undefined4 *)(iStack_68 + 0x1c) = uVar13;
      iVar9 = iStack_68;
      uVar5 = uVar14;
      uVar15 = uVar13;
    }
    *(undefined4 *)(iVar9 + 0x20) = uVar5;
    *(undefined4 *)(iVar9 + 0x24) = uVar15;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 2;
    if (uVar6 == 0) break;
LAB_02b3e7b4:
    if (piVar7[-1] == **(int **)(_UNK_02b3eb84 + 0x2b3e7a0)) {
      puVar2 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
      goto LAB_02b3e7e8;
    }
  }
LAB_02b3e7cc:
  puVar2 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_02b3eb84 + 0x2b3e7a0),0);
LAB_02b3e7e8:
  (*(code *)*puVar2)(piVar11,puVar2[1]);
LAB_02b3e7f8:
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02b3eb88 + 0x2b3e820));
  func_0x03ccb96c(uVar5,param_1,**(undefined4 **)(_UNK_02b3eb8c + 0x2b3e838),0);
  func_0x02b3f250(param_1,uVar5,*(undefined4 *)(iVar1 + 0x2c));
  func_0x02b3f670(param_1);
  return;
}



// ===== FAT.Activity$$TryAdd RVA 0x2b2eb94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b3eb94(uint *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8,
                 undefined4 param_9)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uStack_48;
  uint uStack_44;
  undefined4 uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_02b3ee64 + 0x2b3ebb4);
  uStack_28 = param_9;
  uStack_2c = param_8;
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b3ee68 + 0x2b3ebdc));
    func_0x01384978(*(undefined4 *)(_UNK_02b3ee6c + 0x2b3ebe8));
    func_0x01384978(*(undefined4 *)(_UNK_02b3ee70 + 0x2b3ebf4));
    func_0x01384978(*(undefined4 *)(_UNK_02b3ee74 + 0x2b3ec00));
    func_0x01384978(*(undefined4 *)(_UNK_02b3ee78 + 0x2b3ec0c));
    func_0x01384978(*(undefined4 *)(_UNK_02b3ee7c + 0x2b3ec18));
    *pcVar6 = '\x01';
  }
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x1c8,0);
  if (iVar1 == 0) {
    if ((param_8 & 1) == 0) {
      iVar1 = func_0x02b439c4(param_2,param_3,param_4,&uStack_30);
      if (iVar1 == 0) {
        iVar1 = func_0x02b44f74(param_2,param_5);
        if (iVar1 == 0) goto LAB_02b3ed00;
        uStack_34 = **(uint **)(_UNK_02b3ee84 + 0x2b3ecfc);
LAB_02b3ed54:
        puVar2 = *(undefined4 **)(_UNK_02b3ee98 + 0x2b3ed60);
      }
      else {
        puVar2 = *(undefined4 **)(_UNK_02b3ee80 + 0x2b3ecd8);
        uStack_34 = uStack_30;
      }
      uVar5 = *puVar2;
      uStack_38 = 0;
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
LAB_02b3ed00:
      piVar3 = (int *)func_0x02b44ae8(param_2,param_5);
      if (piVar3 == (int *)0x0) {
        uStack_3c = param_5;
        uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_02b3ee88 + 0x2b3ed88),&uStack_3c);
        uStack_38 = param_3;
        uStack_34 = param_4;
        uVar4 = func_0x01384abc(**(undefined4 **)(_UNK_02b3ee8c + 0x2b3eda4),&uStack_38);
        uVar5 = func_0x0467277c(**(undefined4 **)(_UNK_02b3ee90 + 0x2b3edc4),
                                **(undefined4 **)(_UNK_02b3ee94 + 0x2b3edd0),uVar5,uVar4,0);
        func_0x02b45174(&uStack_48,param_2,param_3,param_4,uVar5);
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        goto LAB_02b3ec9c;
      }
      (**(code **)(*piVar3 + 0x108))
                (&uStack_38,piVar3,param_6,param_3,param_4,param_5,*(undefined4 *)(*piVar3 + 0x10c))
      ;
      if ((uStack_38 & 1) == 0) goto LAB_02b3ed54;
      (**(code **)(*piVar3 + 0xe0))
                (&uStack_38,piVar3,param_2,param_3,param_4,param_5,param_7,&uStack_2c,
                 *(undefined4 *)(*piVar3 + 0xe4));
      uStack_38 = uStack_38 & 1;
      puVar2 = *(undefined4 **)(_UNK_02b3ee9c + 0x2b3ee4c);
      *param_1 = 0;
      param_1[1] = 0;
      uVar5 = *puVar2;
    }
    func_0x038f3b0c(param_1,uStack_38,uStack_34,uVar5);
  }
  else {
    iVar1 = func_0x0229f13c(0x1c8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217f328(&uStack_38,iVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                    ,0);
LAB_02b3ec9c:
    *param_1 = uStack_38;
    param_1[1] = uStack_34;
  }
  return;
}



// ===== FAT.Activity$$RecordFail RVA 0x2b2eea0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b3eea0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_02b3f204 + 0x2b3eec0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b3f208 + 0x2b3eed8));
    func_0x01384978(*(undefined4 *)(_UNK_02b3f20c + 0x2b3eee4));
    func_0x01384978(*(undefined4 *)(_UNK_02b3f210 + 0x2b3eef0));
    func_0x01384978(*(undefined4 *)(_UNK_02b3f214 + 0x2b3eefc));
    func_0x01384978(*(undefined4 *)(_UNK_02b3f218 + 0x2b3ef08));
    func_0x01384978(*(undefined4 *)(_UNK_02b3f21c + 0x2b3ef14));
    func_0x01384978(*(undefined4 *)(_UNK_02b3f220 + 0x2b3ef20));
    func_0x01384978(*(undefined4 *)(_UNK_02b3f224 + 0x2b3ef2c));
    func_0x01384978(*(undefined4 *)(_UNK_02b3f228 + 0x2b3ef38));
    *pcVar5 = '\x01';
  }
  uStack_24 = 0;
  iVar1 = func_0x0229f06c(0x212,0);
  if (iVar1 == 0) {
    iVar1 = func_0x04660760(param_5,**(undefined4 **)(_UNK_02b3f22c + 0x2b3efb4),0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x40);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x03cd8a44(iVar1,param_2,param_3,&uStack_24,
                              **(undefined4 **)(_UNK_02b3f230 + 0x2b3efec));
      if ((iVar1 == 0) || (iVar1 = func_0x04660760(uStack_24,param_5,0), iVar1 == 0)) {
        iVar1 = *(int *)(param_1 + 0x40);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x03cd6a44(iVar1,param_2,param_3,param_5,**(undefined4 **)(_UNK_02b3f234 + 0x2b3f040));
        piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02b3f238 + 0x2b3f05c),4);
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        piVar6 = *(int **)(_UNK_02b3f23c + 0x2b3f07c);
        iVar1 = *piVar6;
        if ((iVar1 != 0) &&
           (iVar1 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar1 == 0)) {
          uVar3 = func_0x01384c10();
          func_0x01384aa0(uVar3,0);
        }
        iVar1 = *piVar6;
        if (piVar2[3] == 0) {
          func_0x01384bf4();
        }
        piVar2[4] = iVar1;
        uStack_2c = param_2;
        uStack_28 = param_3;
        iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_02b3f240 + 0x2b3f0cc),&uStack_2c);
        if ((iVar1 != 0) &&
           (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
          uVar3 = func_0x01384c10();
          func_0x01384aa0(uVar3,0);
        }
        if ((uint)piVar2[3] < 2) {
          func_0x01384bf4();
        }
        piVar2[5] = iVar1;
        uStack_30 = param_4;
        iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_02b3f244 + 0x2b3f12c),&uStack_30);
        if ((iVar1 != 0) &&
           (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
          uVar3 = func_0x01384c10();
          func_0x01384aa0(uVar3,0);
        }
        if ((uint)piVar2[3] < 3) {
          func_0x01384bf4();
        }
        piVar2[6] = iVar1;
        if ((param_5 != 0) &&
           (iVar1 = func_0x01384ab8(param_5,*(undefined4 *)(*piVar2 + 0x20)), iVar1 == 0)) {
          uVar3 = func_0x01384c10();
          func_0x01384aa0(uVar3,0);
        }
        if ((uint)piVar2[3] < 4) {
          func_0x01384bf4();
        }
        piVar2[7] = param_5;
        uVar3 = func_0x046727d0(**(undefined4 **)(_UNK_02b3f248 + 0x2b3f1cc),piVar2,0);
        if (*(int *)(**(int **)(_UNK_02b3f24c + 0x2b3f1e0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c2874(uVar3,0);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x212,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217f80c(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.Activity$$<FAT.IUserDataHolder.SetData>g__R|32_0 RVA 0x2b2f250 =====

/* WARNING: Removing unreachable block (ram,0x02b3f558) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b3f250(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 uVar10;
  byte abStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar9 = (char *)(_UNK_02b3f640 + 0x2b3f270);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b3f644 + 0x2b3f284));
    func_0x01384978(*(undefined4 *)(_UNK_02b3f648 + 0x2b3f290));
    func_0x01384978(*(undefined4 *)(_UNK_02b3f64c + 0x2b3f29c));
    func_0x01384978(*(undefined4 *)(_UNK_02b3f650 + 0x2b3f2a8));
    func_0x01384978(*(undefined4 *)(_UNK_02b3f654 + 0x2b3f2b4));
    *pcVar9 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  if (param_3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar4 = *param_3;
  uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_02b3f658 + 0x2b3f2e4)) {
        puVar5 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0xc0);
        goto LAB_02b3f32c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(param_3,**(int **)(_UNK_02b3f658 + 0x2b3f2e4),0);
LAB_02b3f32c:
  piVar7 = (int *)(*(code *)*puVar5)(param_3,puVar5[1]);
LAB_02b3f344:
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar4 = *piVar7;
  uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
    do {
      if (piVar8[-1] == **(int **)(_UNK_02b3f65c + 0x2b3f360)) {
        puVar5 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
        goto LAB_02b3f3a8;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_02b3f65c + 0x2b3f360),0);
LAB_02b3f3a8:
  iVar4 = (*(code *)*puVar5)(piVar7,puVar5[1]);
  if (iVar4 != 0) {
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar4 = *piVar7;
    uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_02b3f660 + 0x2b3f3dc)) {
          puVar5 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
          goto LAB_02b3f424;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_02b3f660 + 0x2b3f3dc),0);
LAB_02b3f424:
    iVar4 = (*(code *)*puVar5)(piVar7,puVar5[1]);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar10 = *(undefined4 *)(iVar4 + 0x24);
    func_0x038fd264(&uStack_30,*(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(iVar4 + 0x2c),
                    **(undefined4 **)(_UNK_02b3f664 + 0x2b3f45c));
    uVar2 = uStack_2c;
    uVar1 = uStack_30;
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b45304(abStack_38,param_1,param_2,uVar1,uVar2,uVar10,iVar4,0,0);
    uVar3 = uStack_2c;
    uVar2 = uStack_30;
    uVar1 = uStack_34;
    if ((abStack_38[0] & 1) == 0) {
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      FUN_02b3eea0(param_1,uVar2,uVar3,uVar10,uVar1);
    }
    goto LAB_02b3f344;
  }
  if (piVar7 != (int *)0x0) {
    iVar4 = *piVar7;
    uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_02b3f668 + 0x2b3f4f8)) {
          puVar5 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
          goto LAB_02b3f540;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_02b3f668 + 0x2b3f4f8),0);
LAB_02b3f540:
    (*(code *)*puVar5)(piVar7,puVar5[1]);
  }
  return;
}



// ===== FAT.Activity$$PrepareRes RVA 0x2b2f670 =====

/* WARNING: Removing unreachable block (ram,0x02b3f94c) */
/* WARNING: Removing unreachable block (ram,0x02b3f940) */
/* WARNING: Removing unreachable block (ram,0x02b3facc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b3f670(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  int *piStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  int aiStack_34 [4];
  
  pcVar4 = (char *)(_UNK_02b3fc70 + 0x2b3f688);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b3fc74 + 0x2b3f69c));
    func_0x01384978(*(undefined4 *)(_UNK_02b3fc78 + 0x2b3f6a8));
    func_0x01384978(*(undefined4 *)(_UNK_02b3fc7c + 0x2b3f6b4));
    func_0x01384978(*(undefined4 *)(_UNK_02b3fc80 + 0x2b3f6c0));
    func_0x01384978(*(undefined4 *)(_UNK_02b3fc84 + 0x2b3f6cc));
    func_0x01384978(*(undefined4 *)(_UNK_02b3fc88 + 0x2b3f6d8));
    func_0x01384978(*(undefined4 *)(_UNK_02b3fc8c + 0x2b3f6e4));
    func_0x01384978(*(undefined4 *)(_UNK_02b3fc90 + 0x2b3f6f0));
    *pcVar4 = '\x01';
  }
  uStack_4c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_50 = 0;
  aiStack_34[2] = 0;
  aiStack_34[1] = 0;
  aiStack_34[0] = 0;
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_64 = 0;
  uStack_68 = 0;
  piStack_6c = (int *)0x0;
  uStack_44 = (ulonglong)uStack_4c << 0x20;
  uStack_3c = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),uStack_48);
  iVar1 = func_0x0229f06c(0x735c,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02b3fc94 + 0x2b3f784) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x028c8d78(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0302a45c(aiStack_34 + 1,iVar1,aiStack_34,**(undefined4 **)(_UNK_02b3fc98 + 0x2b3f7c0));
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03cd6fc4(&uStack_88,iVar1,**(undefined4 **)(_UNK_02b3fc9c + 0x2b3f7e8));
    uStack_44._0_4_ = uStack_7c;
    uStack_44._4_4_ = uStack_78;
    uStack_50 = uStack_88;
    uStack_4c = uStack_84;
    uStack_48 = uStack_80;
    uStack_3c = uStack_74;
    while (iVar1 = func_0x03f849ec(&uStack_50,**(undefined4 **)(_UNK_02b3fca8 + 0x2b3f820)),
          iVar1 != 0) {
      uStack_58 = (undefined4)uStack_3c;
      uStack_60 = (undefined4)uStack_44;
      uStack_5c = uStack_44._4_4_;
      func_0x04356064(&uStack_60,&uStack_68,&piStack_6c,**(undefined4 **)(_UNK_02b3fca0 + 0x2b3f844)
                     );
      piVar3 = piStack_6c;
      if (piStack_6c == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = (**(code **)(*piVar3 + 0x198))(piVar3,*(undefined4 *)(*piVar3 + 0x19c));
      iVar1 = aiStack_34[0];
      if (iVar2 != 0) {
        iVar2 = piVar3[0xe];
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar5 = *(undefined4 *)(iVar2 + 0xc);
        uVar6 = *(undefined4 *)(iVar2 + 0x10);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar1 + 8);
        uVar7 = *(uint *)(iVar1 + 0xc);
        piVar3 = *(int **)(_UNK_02b3fca4 + 0x2b3f8d0);
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        iVar8 = *piVar3;
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (uVar7 < *(uint *)(iVar2 + 0xc)) {
          *(uint *)(iVar1 + 0xc) = uVar7 + 1;
          iVar2 = iVar2 + uVar7 * 8;
          *(undefined4 *)(iVar2 + 0x10) = uVar5;
          *(undefined4 *)(iVar2 + 0x14) = uVar6;
        }
        else {
          func_0x032f8384(iVar1,uVar5,uVar6,
                          *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
        }
      }
    }
    func_0x03f84b48(&uStack_50,**(undefined4 **)(_UNK_02b3fcac + 0x2b3f930));
    iVar1 = *(int *)(param_1 + 0x48);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03cd6fc4(&uStack_88,iVar1,**(undefined4 **)(_UNK_02b3fcb0 + 0x2b3f974));
    uStack_44._0_4_ = uStack_7c;
    uStack_44._4_4_ = uStack_78;
    uStack_50 = uStack_88;
    uStack_4c = uStack_84;
    uStack_48 = uStack_80;
    uStack_3c = uStack_74;
    while (iVar1 = func_0x03f849ec(&uStack_50,**(undefined4 **)(_UNK_02b3fcc0 + 0x2b3f9ac)),
          iVar1 != 0) {
      uStack_58 = (undefined4)uStack_3c;
      uStack_60 = (undefined4)uStack_44;
      uStack_5c = uStack_44._4_4_;
      func_0x04356064(&uStack_60,&uStack_68,&piStack_6c,**(undefined4 **)(_UNK_02b3fcb8 + 0x2b3f9d0)
                     );
      piVar3 = piStack_6c;
      if (piStack_6c == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = (**(code **)(*piVar3 + 0x198))(piVar3,*(undefined4 *)(*piVar3 + 0x19c));
      iVar1 = aiStack_34[0];
      if (iVar2 != 0) {
        iVar2 = piVar3[0xe];
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar5 = *(undefined4 *)(iVar2 + 0xc);
        uVar6 = *(undefined4 *)(iVar2 + 0x10);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar1 + 8);
        uVar7 = *(uint *)(iVar1 + 0xc);
        piVar3 = *(int **)(_UNK_02b3fcbc + 0x2b3fa5c);
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        iVar8 = *piVar3;
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (uVar7 < *(uint *)(iVar2 + 0xc)) {
          *(uint *)(iVar1 + 0xc) = uVar7 + 1;
          iVar2 = iVar2 + uVar7 * 8;
          *(undefined4 *)(iVar2 + 0x10) = uVar5;
          *(undefined4 *)(iVar2 + 0x14) = uVar6;
        }
        else {
          func_0x032f8384(iVar1,uVar5,uVar6,
                          *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
        }
      }
    }
    func_0x03f84b48(&uStack_50,**(undefined4 **)(_UNK_02b3fcc4 + 0x2b3fab8));
    func_0x02b3fccc(&uStack_88,aiStack_34[0]);
    *(undefined4 *)(param_1 + 0x70) = uStack_88;
    *(undefined4 *)(param_1 + 0x74) = uStack_84;
    func_0x028c98a0(aiStack_34 + 1,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x735c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.Activity$$<PrepareRes>g__W|33_0 RVA 0x2b2fccc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b3fccc(undefined4 *param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar1 = (char *)(_UNK_02b3fd6c + 0x2b3fce8);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b3fd70 + 0x2b3fcfc));
    *pcVar1 = '\x01';
  }
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_1c = 0;
  uStack_30 = 0xffffffff;
  uStack_2c = 0;
  uStack_24 = param_2;
  if (*(int *)(**(int **)(_UNK_02b3fd74 + 0x2b3fd20) + 0x1c) == 0) {
    func_0x0140024c();
  }
  func_0x02b499fc(&uStack_30);
  func_0x019dd7dc(&uStack_38,&uStack_2c,0);
  *param_1 = uStack_38;
  param_1[1] = uStack_34;
  return;
}



// ===== FAT.Activity$$_RegisterUpdate RVA 0x2b2fd78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02b3fd78(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  code *extraout_r1;
  code *extraout_r1_00;
  uint extraout_r1_01;
  code *pcVar6;
  undefined4 extraout_r2;
  undefined4 uVar7;
  int *piVar8;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  int iVar9;
  int iVar10;
  undefined4 unaff_r5;
  uint uVar11;
  undefined4 uVar12;
  undefined4 unaff_r6;
  char *pcVar13;
  uint unaff_r9;
  int iVar14;
  int unaff_r10;
  undefined1 uVar15;
  undefined8 uVar16;
  code *pcStack_50;
  uint uStack_4c;
  uint uStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  code *pcStack_38;
  code *pcStack_34;
  code *pcStack_30;
  uint uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = func_0x0229f06c(0x202,0);
  if (iVar2 == 0) {
    param_1 = *(int *)(param_1 + 0x78);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar13 = (char *)(_UNK_02b60960 + 0x2b6071c);
    uStack_20 = unaff_r4;
    uStack_1c = unaff_r5;
    uStack_18 = unaff_r6;
    if (*pcVar13 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b60964 + 0x2b60730),param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_02b60968 + 0x2b6073c));
      func_0x01384978(*(undefined4 *)(_UNK_02b6096c + 0x2b60748));
      func_0x01384978(*(undefined4 *)(_UNK_02b60970 + 0x2b60754));
      func_0x01384978(*(undefined4 *)(_UNK_02b60974 + 0x2b60760));
      *pcVar13 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x203,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0xc);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar1 = func_0x0422b0f8(iVar2,param_2,**(undefined4 **)(_UNK_02b60978 + 0x2b607d0));
      if (uVar1 != 0) {
        return uVar1;
      }
      if (*(char *)(param_1 + 0x18) != '\0') {
        iVar2 = *(int *)(param_1 + 0x10);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x0328f4d8(iVar2,param_2,**(undefined4 **)(_UNK_02b6097c + 0x2b60810));
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_1 + 0x10);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar10 = *(int *)(iVar2 + 8);
          uVar1 = *(uint *)(iVar2 + 0xc);
          piVar5 = *(int **)(_UNK_02b60980 + 0x2b60850);
          *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
          iVar14 = *piVar5;
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          if (uVar1 < *(uint *)(iVar10 + 0xc)) {
            *(uint *)(iVar2 + 0xc) = uVar1 + 1;
            *(uint *)(iVar10 + uVar1 * 4 + 0x10) = param_2;
          }
          else {
            func_0x0328f170(iVar2,param_2,
                            *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x10) + 0x60) + 0x38));
          }
        }
        iVar2 = *(int *)(param_1 + 0x14);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uStack_18 = *(undefined4 *)
                     (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(**(int **)(_UNK_02b60984 +
                                                                             0x2b60954) + 0x10) +
                                                         0x60) + 0x5c) + 0x10) + 0x60) + 0xa0);
        uVar1 = func_0x030ffc18(*(undefined4 *)(iVar2 + 8),param_2,0,*(undefined4 *)(iVar2 + 0xc));
        if (-1 < (int)uVar1) {
          func_0x03290bd4(iVar2,uVar1);
        }
        return ~uVar1 >> 0x1f;
      }
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar10 = *(int *)(iVar2 + 8);
      uVar1 = *(uint *)(iVar2 + 0xc);
      piVar5 = *(int **)(_UNK_02b60988 + 0x2b608ac);
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
      iVar14 = *piVar5;
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      if (uVar1 < *(uint *)(iVar10 + 0xc)) {
        *(uint *)(iVar2 + 0xc) = uVar1 + 1;
        *(uint *)(iVar10 + uVar1 * 4 + 0x10) = param_2;
      }
      else {
        func_0x0328f170(iVar2,param_2,
                        *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x10) + 0x60) + 0x38));
      }
      iVar2 = *(int *)(param_1 + 0xc);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar12 = uStack_1c;
      uStack_24 = uStack_20;
      pcVar6 = *(code **)(*(int *)(*(int *)(**(int **)(_UNK_02b6098c + 0x2b60910) + 0x10) + 0x60) +
                         0x54);
      uStack_1c = uStack_18;
      uStack_20 = uVar12;
      if (*(int *)(iVar2 + 8) == 0) {
        func_0x0422cb74(iVar2,0,*(undefined4 *)(*(int *)(*(int *)(pcVar6 + 0x10) + 0x60) + 0x38));
      }
      iVar14 = func_0x0422e7e0(iVar2,param_2,
                               *(undefined4 *)(*(int *)(*(int *)(pcVar6 + 0x10) + 0x60) + 0x58));
      iVar9 = *(int *)(iVar2 + 8);
      iVar10 = iVar9;
      if (iVar9 == 0) {
        func_0x02457d50();
        iVar10 = *(int *)(iVar2 + 8);
        uVar15 = 1;
        if (iVar10 == 0) {
LAB_0422d248:
          uVar16 = func_0x02457d50();
          uVar1 = (uint)((ulonglong)uVar16 >> 0x20);
          iVar2 = (int)uVar16;
          iStack_44 = unaff_r10;
          if ((bool)uVar15) {
            iStack_44 = unaff_r10 +
                        (int)(short)((ulonglong)uVar16 >> 0x10) * (int)(short)&pcStack_38;
            *(undefined8 *)(unaff_r9 - 0xfc) = uVar16;
          }
          uStack_3c = 0x422d24c;
          iVar10 = *(int *)(iVar2 + 8);
          pcStack_50 = pcVar6;
          uStack_4c = param_2;
          uStack_48 = unaff_r9;
          iStack_40 = iVar14;
          if (iVar10 == 0) {
            func_0x02457d50();
          }
          func_0x02457e94(extraout_r2,*(undefined4 *)(iVar10 + 0xc));
          iVar10 = *(int *)(iVar2 + 0xc);
          if (iVar10 == 0) {
            func_0x02457d50();
          }
          if (*(uint *)(iVar10 + 0xc) <= uVar1) {
            func_0x02457d5c();
          }
          iVar14 = *(int *)(iVar2 + 0xc);
          *(undefined4 *)(iVar10 + uVar1 * 0xc + 0x10) = extraout_r2;
          if (iVar14 == 0) {
            func_0x02457d50();
          }
          uVar11 = *(uint *)(iVar14 + 0xc);
          if (uVar11 <= uVar1) {
            func_0x02457d5c();
            uVar11 = *(uint *)(iVar14 + 0xc);
          }
          *(undefined4 *)(iVar14 + uVar1 * 0xc + 0x18) = extraout_r3;
          if (uVar11 <= uVar1) {
            func_0x02457d5c();
          }
          iVar10 = *(int *)(iVar2 + 0xc);
          if (iVar10 == 0) {
            func_0x02457d50();
          }
          iVar14 = *(int *)(iVar2 + 8);
          if (iVar14 == 0) {
            func_0x02457d50();
          }
          if (*(uint *)(iVar14 + 0xc) <= extraout_r1_01) {
            func_0x02457d5c();
          }
          iVar14 = *(int *)(iVar14 + extraout_r1_01 * 4 + 0x10);
          if (*(uint *)(iVar10 + 0xc) <= uVar1) {
            func_0x02457d5c();
          }
          iVar2 = *(int *)(iVar2 + 8);
          *(int *)(iVar10 + uVar1 * 0xc + 0x14) = iVar14 + -1;
          if (iVar2 == 0) {
            func_0x02457d50();
          }
          if (*(uint *)(iVar2 + 0xc) <= extraout_r1_01) {
            func_0x02457d5c();
          }
          uVar11 = iVar2 + extraout_r1_01 * 4;
          *(uint *)(uVar11 + 0x10) = uVar1 + 1;
          return uVar11;
        }
      }
      pcStack_30 = pcVar6;
      uStack_2c = param_2;
      func_0x02457e94(iVar14,*(undefined4 *)(iVar9 + 0xc));
      iVar9 = *(int *)(iVar2 + 0xc);
      iStack_28 = iVar2;
      if (*(code **)(iVar10 + 0xc) <= extraout_r1) {
        func_0x02457d5c();
      }
      unaff_r9 = *(int *)(iVar10 + (int)extraout_r1 * 4 + 0x10) - 1;
      pcStack_34 = extraout_r1;
      if (-1 < (int)unaff_r9) {
        param_2 = 0;
        pcVar6 = extraout_r1;
        do {
          if (iVar9 == 0) {
            func_0x02457d50();
          }
          if (*(uint *)(iVar9 + 0xc) <= unaff_r9) {
            func_0x02457d5c();
          }
          unaff_r10 = iVar9 + unaff_r9 * 0xc;
          if (*(int *)(unaff_r10 + 0x10) == iVar14) {
            piVar5 = *(int **)(iStack_28 + 0x1c);
            if (*(uint *)(iVar9 + 0xc) <= unaff_r9) {
              func_0x02457d5c();
            }
            uVar12 = *(undefined4 *)(unaff_r10 + 0x18);
            if (piVar5 == (int *)0x0) {
              func_0x02457d50();
            }
            iVar2 = *(int *)(*(int *)(*(int *)(pcStack_30 + 0x10) + 0x60) + 0x10);
            if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
              iVar2 = func_0x02457d84(iVar2);
            }
            iVar10 = *piVar5;
            uVar1 = (uint)*(ushort *)(iVar10 + 0xb6);
            if (uVar1 != 0) {
              piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar2) {
                  puVar3 = (undefined4 *)(iVar10 + *piVar8 * 8 + 0xc0);
                  goto LAB_0422d008;
                }
                uVar1 = uVar1 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar1 != 0);
            }
            puVar3 = (undefined4 *)func_0x02457d88(piVar5,iVar2,0);
LAB_0422d008:
            pcVar6 = (code *)*puVar3;
            iVar2 = (*pcVar6)(piVar5,uVar12,uStack_2c,puVar3[1]);
            if (iVar2 != 0) {
              return 0;
            }
          }
          if (iVar9 == 0) {
            func_0x02457d50();
          }
          uVar1 = *(uint *)(iVar9 + 0xc);
          uVar15 = param_2 == uVar1;
          if ((int)uVar1 <= (int)param_2) {
            func_0x02457d6c(*(undefined4 *)(iRam0422d24c + 0x422d214));
            uVar12 = func_0x02457d58();
            uVar7 = func_0x02457d6c(*(undefined4 *)(iRam0422d250 + 0x422d228));
            func_0x04824950(uVar12,uVar7,0);
            func_0x02457d90(uVar12,pcStack_30);
            func_0x02457d94();
            goto LAB_0422d248;
          }
          if (uVar1 <= unaff_r9) {
            func_0x02457d5c();
          }
          unaff_r9 = *(uint *)(unaff_r10 + 0x14);
          param_2 = param_2 + 1;
        } while (unaff_r9 < 0x80000000);
      }
      iVar2 = iStack_28;
      uVar1 = uStack_2c;
      pcVar6 = pcStack_34;
      uVar11 = *(uint *)(iStack_28 + 0x18);
      if ((int)uVar11 < 0) {
        iVar10 = *(int *)(iStack_28 + 0x14);
        if (iVar9 == 0) {
          func_0x02457d50();
        }
        if (iVar10 == *(int *)(iVar9 + 0xc)) {
          func_0x0422cc40(iVar2,*(undefined4 *)(*(int *)(*(int *)(pcStack_30 + 0x10) + 0x60) + 0xc4)
                         );
          iVar10 = *(int *)(iVar2 + 8);
          iVar9 = *(int *)(iVar2 + 0xc);
          if (iVar10 == 0) {
            func_0x02457d50();
          }
          uVar11 = *(uint *)(iVar2 + 0x14);
          uVar12 = *(undefined4 *)(iVar10 + 0xc);
          *(uint *)(iVar2 + 0x14) = uVar11 + 1;
          func_0x02457e94(iVar14,uVar12);
          pcVar6 = extraout_r1_00;
          if (iVar9 == 0) {
            func_0x02457d50();
            iVar9 = 0;
          }
        }
        else {
          uVar11 = *(uint *)(iVar2 + 0x14);
          *(uint *)(iVar2 + 0x14) = uVar11 + 1;
        }
      }
      else {
        if (iVar9 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar9 + 0xc) <= uVar11) {
          func_0x02457d5c();
        }
        *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar9 + uVar11 * 0xc + 0x14);
      }
      uVar4 = *(uint *)(iVar9 + 0xc);
      if (uVar4 <= uVar11) {
        func_0x02457d5c();
        uVar4 = *(uint *)(iVar9 + 0xc);
      }
      iVar10 = iVar9 + uVar11 * 0xc;
      *(int *)(iVar10 + 0x10) = iVar14;
      if (uVar4 <= uVar11) {
        func_0x02457d5c();
        uVar4 = *(uint *)(iVar9 + 0xc);
      }
      *(uint *)(iVar10 + 0x18) = uVar1;
      if (uVar4 <= uVar11) {
        func_0x02457d5c();
      }
      iVar14 = *(int *)(iVar2 + 8);
      if (iVar14 == 0) {
        func_0x02457d50();
      }
      if (*(code **)(iVar14 + 0xc) <= pcVar6) {
        func_0x02457d5c();
      }
      iVar14 = *(int *)(iVar14 + (int)pcVar6 * 4 + 0x10);
      if (*(uint *)(iVar9 + 0xc) <= uVar11) {
        func_0x02457d5c();
      }
      iVar9 = *(int *)(iVar2 + 8);
      *(int *)(iVar10 + 0x14) = iVar14 + -1;
      if (iVar9 == 0) {
        func_0x02457d50();
      }
      if (*(code **)(iVar9 + 0xc) <= pcVar6) {
        func_0x02457d5c();
      }
      *(uint *)(iVar9 + (int)pcVar6 * 4 + 0x10) = uVar11 + 1;
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
      *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 1;
      return 1;
    }
    iVar2 = func_0x0229f13c(0x203,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x202,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  pcStack_34 = *(code **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  pcStack_30 = *(code **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  pcStack_38 = (code *)0x0;
  iStack_28 = 0;
  func_0x0245494c(&pcStack_50,0,param_2,0);
  pcStack_38 = pcStack_50;
  pcStack_34 = (code *)uStack_4c;
  pcStack_30 = (code *)uStack_48;
  uStack_2c = iStack_44;
  iStack_28 = iStack_40;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&pcStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&pcStack_38,param_1,0);
  func_0x01485278(&pcStack_38,param_2,0);
  iVar10 = *(int *)(iVar2 + 8);
  uVar12 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 3;
  if (iVar2 == 0) {
    uVar7 = 2;
  }
  uVar1 = func_0x0245495c(iVar10,uVar12,&pcStack_38,uVar7,0,0);
  return uVar1;
}



// ===== FAT.Activity$$_UnregisterUpdate RVA 0x2b2fdf0 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Possible PIC construction at 0x02b60b2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02b60b30) */
/* WARNING: Removing unreachable block (ram,0x02b60b3c) */
/* WARNING: Removing unreachable block (ram,0x02b60b40) */
/* WARNING: Removing unreachable block (ram,0x0422b33c) */
/* WARNING: Removing unreachable block (ram,0x0422b358) */
/* WARNING: Removing unreachable block (ram,0x0422b388) */
/* WARNING: Removing unreachable block (ram,0x0422b398) */
/* WARNING: Removing unreachable block (ram,0x0422b3bc) */
/* WARNING: Removing unreachable block (ram,0x0422b3c0) */
/* WARNING: Removing unreachable block (ram,0x0422b3d0) */
/* WARNING: Removing unreachable block (ram,0x0422b3ec) */
/* WARNING: Removing unreachable block (ram,0x0422b3f4) */
/* WARNING: Removing unreachable block (ram,0x0422b3f8) */
/* WARNING: Removing unreachable block (ram,0x0422b404) */
/* WARNING: Removing unreachable block (ram,0x0422b408) */
/* WARNING: Removing unreachable block (ram,0x0422b420) */
/* WARNING: Removing unreachable block (ram,0x0422b430) */
/* WARNING: Removing unreachable block (ram,0x0422b434) */
/* WARNING: Removing unreachable block (ram,0x0422b44c) */
/* WARNING: Removing unreachable block (ram,0x0422b450) */
/* WARNING: Removing unreachable block (ram,0x0422b46c) */
/* WARNING: Removing unreachable block (ram,0x0422b478) */
/* WARNING: Removing unreachable block (ram,0x0422b488) */
/* WARNING: Removing unreachable block (ram,0x0422b490) */
/* WARNING: Removing unreachable block (ram,0x0422b4b8) */
/* WARNING: Removing unreachable block (ram,0x0422b49c) */
/* WARNING: Removing unreachable block (ram,0x0422b4a8) */
/* WARNING: Removing unreachable block (ram,0x0422b4c4) */
/* WARNING: Removing unreachable block (ram,0x0422b530) */
/* WARNING: Removing unreachable block (ram,0x0422b57c) */
/* WARNING: Removing unreachable block (ram,0x0422b588) */
/* WARNING: Removing unreachable block (ram,0x0422b58c) */
/* WARNING: Removing unreachable block (ram,0x0422b59c) */
/* WARNING: Removing unreachable block (ram,0x0422b5a0) */
/* WARNING: Removing unreachable block (ram,0x0422b5ac) */
/* WARNING: Removing unreachable block (ram,0x0422b5b0) */
/* WARNING: Removing unreachable block (ram,0x0422b5c0) */
/* WARNING: Removing unreachable block (ram,0x0422b5c4) */
/* WARNING: Removing unreachable block (ram,0x0422b538) */
/* WARNING: Removing unreachable block (ram,0x0422b540) */
/* WARNING: Removing unreachable block (ram,0x0422b548) */
/* WARNING: Removing unreachable block (ram,0x0422b554) */
/* WARNING: Removing unreachable block (ram,0x0422b55c) */
/* WARNING: Removing unreachable block (ram,0x0422b568) */
/* WARNING: Removing unreachable block (ram,0x0422b56c) */
/* WARNING: Removing unreachable block (ram,0x0422b5cc) */
/* WARNING: Removing unreachable block (ram,0x0422b5d8) */
/* WARNING: Removing unreachable block (ram,0x0422b5e0) */
/* WARNING: Removing unreachable block (ram,0x0422b5f0) */
/* WARNING: Removing unreachable block (ram,0x0422b5f4) */
/* WARNING: Removing unreachable block (ram,0x0422b610) */
/* WARNING: Removing unreachable block (ram,0x0422b614) */
/* WARNING: Removing unreachable block (ram,0x0422b630) */
/* WARNING: Removing unreachable block (ram,0x0422b634) */
/* WARNING: Removing unreachable block (ram,0x0422b638) */
/* WARNING: Removing unreachable block (ram,0x0422b63c) */
/* WARNING: Removing unreachable block (ram,0x0422b640) */
/* WARNING: Removing unreachable block (ram,0x0422b4ec) */
/* WARNING: Removing unreachable block (ram,0x0422b4f4) */
/* WARNING: Removing unreachable block (ram,0x0422b4f8) */
/* WARNING: Removing unreachable block (ram,0x0422b650) */
/* WARNING: Removing unreachable block (ram,0x0422b690) */
/* WARNING: Removing unreachable block (ram,0x0422b504) */
/* WARNING: Removing unreachable block (ram,0x0422b50c) */
/* WARNING: Removing unreachable block (ram,0x0422b510) */
/* WARNING: Removing unreachable block (ram,0x0422b528) */
/* WARNING: Removing unreachable block (ram,0x0422b644) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02b3fdf0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  int iVar5;
  int unaff_r5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 unaff_r11;
  undefined4 *puVar9;
  undefined4 unaff_lr;
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
  
  iVar2 = func_0x0229f06c(0x1a0,0);
  if (iVar2 == 0) {
    param_1 = *(int *)(param_1 + 0x78);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    puVar9 = &uStack_20;
    pcVar7 = (char *)(_UNK_02b60ba0 + 0x2b609a8);
    uStack_20 = unaff_r4;
    iStack_1c = unaff_r5;
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b60ba4 + 0x2b609bc),param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_02b60ba8 + 0x2b609c8));
      func_0x01384978(*(undefined4 *)(_UNK_02b60bac + 0x2b609d4));
      func_0x01384978(*(undefined4 *)(_UNK_02b60bb0 + 0x2b609e0));
      func_0x01384978(*(undefined4 *)(_UNK_02b60bb4 + 0x2b609ec));
      *pcVar7 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x1a1,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0xc);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0422b0f8(iVar2,param_2,**(undefined4 **)(_UNK_02b60bb8 + 0x2b60a5c));
      if (iVar2 != 0) {
        if (*(char *)(param_1 + 0x18) == '\0') {
          iVar2 = *(int *)(param_1 + 8);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar5 = **(int **)(_UNK_02b60bc8 + 0x2b60b28);
          unaff_lr = 0x2b60b30;
          uVar6 = param_2;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x14);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x0328f4d8(iVar2,param_2,**(undefined4 **)(_UNK_02b60bbc + 0x2b60a98));
          if (iVar2 == 0) {
            iVar2 = *(int *)(param_1 + 0x14);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar5 = *(int *)(iVar2 + 8);
            uVar1 = *(uint *)(iVar2 + 0xc);
            piVar3 = *(int **)(_UNK_02b60bc0 + 0x2b60ad8);
            *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
            iVar8 = *piVar3;
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            if (uVar1 < *(uint *)(iVar5 + 0xc)) {
              *(uint *)(iVar2 + 0xc) = uVar1 + 1;
              *(undefined4 *)(iVar5 + uVar1 * 4 + 0x10) = param_2;
            }
            else {
              func_0x0328f170(iVar2,param_2,
                              *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
            }
          }
          iVar2 = *(int *)(param_1 + 0x10);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar5 = **(int **)(_UNK_02b60bc4 + 0x2b60b94);
          uVar6 = uStack_20;
          param_1 = iStack_1c;
          puVar9 = (undefined4 *)register0x00000054;
        }
        puVar9[-1] = unaff_lr;
        puVar9[-2] = unaff_r11;
        puVar9[-3] = param_1;
        puVar9[-4] = uVar6;
        uVar4 = *(undefined4 *)(iVar2 + 0xc);
        uVar6 = *(undefined4 *)(iVar2 + 8);
        puVar9[-6] = *(undefined4 *)
                      (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x5c) +
                                        0x10) + 0x60) + 0xa0);
        uVar1 = func_0x030ffc18(uVar6,param_2,0,uVar4);
        if (-1 < (int)uVar1) {
          func_0x03290bd4(iVar2,uVar1);
        }
        return ~uVar1 >> 0x1f;
      }
      return 0;
    }
    iVar2 = func_0x0229f13c(0x1a1,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x1a0,0);
    if (iVar2 == 0) {
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar5 = *(int *)(iVar2 + 8);
  uVar6 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar2 == 0) {
    uVar4 = 2;
  }
  uVar1 = func_0x0245495c(iVar5,uVar6,&uStack_38,uVar4,0,0);
  return uVar1;
}



// ===== FAT.Activity$$FAT.IUpdate.Update RVA 0x2b2fe68 =====

/* WARNING: Possible PIC construction at 0x02b60ce8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02b60cec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b3fe68(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int unaff_r4;
  int unaff_r5;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 unaff_r6;
  int unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 *puVar10;
  undefined4 unaff_r10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 unaff_lr;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar1 = func_0x0229f06c(0x7360,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x78);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_02b6118c + 0x2b60bec);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b61190 + 0x2b60c00),param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_02b61194 + 0x2b60c0c));
      func_0x01384978(*(undefined4 *)(_UNK_02b61198 + 0x2b60c18));
      func_0x01384978(*(undefined4 *)(_UNK_02b6119c + 0x2b60c24));
      func_0x01384978(*(undefined4 *)(_UNK_02b611a0 + 0x2b60c30));
      func_0x01384978(*(undefined4 *)(_UNK_02b611a4 + 0x2b60c3c));
      func_0x01384978(*(undefined4 *)(_UNK_02b611a8 + 0x2b60c48));
      func_0x01384978(*(undefined4 *)(_UNK_02b611ac + 0x2b60c54));
      func_0x01384978(*(undefined4 *)(_UNK_02b611b0 + 0x2b60c60));
      func_0x01384978(*(undefined4 *)(_UNK_02b611b4 + 0x2b60c6c));
      func_0x01384978(*(undefined4 *)(_UNK_02b611b8 + 0x2b60c78));
      func_0x01384978(*(undefined4 *)(_UNK_02b611bc + 0x2b60c84));
      func_0x01384978(*(undefined4 *)(_UNK_02b611c0 + 0x2b60c90));
      *pcVar8 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    unaff_r7 = 0;
    uStack_38 = 0;
    iVar1 = func_0x0229f06c(0x7361,0);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      puVar10 = *(undefined4 **)(_UNK_02b611c4 + 0x2b60d04);
      piVar11 = *(int **)(_UNK_02b611c8 + 0x2b60d0c);
      do {
        iVar1 = *(int *)(param_1 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar1 + 0xc) <= unaff_r7) {
          iVar1 = *(int *)(param_1 + 0x14);
          *(undefined1 *)(param_1 + 0x18) = 0;
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0328fe1c(&uStack_48,iVar1,**(undefined4 **)(_UNK_02b611cc + 0x2b60dec));
          uStack_38 = uStack_48;
          uStack_34 = uStack_44;
          uStack_30 = uStack_40;
          uStack_2c = uStack_3c;
          puVar3 = *(undefined4 **)(_UNK_02b611d0 + 0x2b60e0c);
          puVar12 = *(undefined4 **)(_UNK_02b611d4 + 0x2b60e14);
          puVar13 = *(undefined4 **)(_UNK_02b611d8 + 0x2b60e1c);
          puVar10 = *(undefined4 **)(_UNK_02b611dc + 0x2b60e24);
          while (iVar1 = func_0x03f5f428(&uStack_38,*puVar3), uVar9 = uStack_2c, iVar1 != 0) {
            iVar1 = *(int *)(param_1 + 0xc);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x0422b0f8(iVar1,uVar9,*puVar12);
            if (iVar1 != 0) {
              iVar1 = *(int *)(param_1 + 8);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              func_0x03290900(iVar1,uVar9,*puVar13);
              iVar1 = *(int *)(param_1 + 0xc);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              func_0x0422b33c(iVar1,uVar9,*puVar10);
            }
          }
          func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_02b611e8 + 0x2b60eb0));
          iVar1 = *(int *)(param_1 + 0x14);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar4 = *(int *)(iVar1 + 0xc);
          *(undefined4 *)(iVar1 + 0xc) = 0;
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          if (0 < iVar4) {
            func_0x0484e5ec(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
          }
          iVar1 = *(int *)(param_1 + 0x10);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0328fe1c(&uStack_48,iVar1,**(undefined4 **)(_UNK_02b611e4 + 0x2b60f18));
          uStack_38 = uStack_48;
          uStack_34 = uStack_44;
          uStack_30 = uStack_40;
          uStack_2c = uStack_3c;
          while (iVar1 = func_0x03f5f428(&uStack_38,*puVar3), uVar9 = uStack_2c, iVar1 != 0) {
            iVar1 = *(int *)(param_1 + 0xc);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x0422b0f8(iVar1,uVar9,*puVar12);
            if (iVar1 == 0) {
              iVar1 = *(int *)(param_1 + 8);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              iVar14 = *(int *)(iVar1 + 8);
              uVar5 = *(uint *)(iVar1 + 0xc);
              piVar11 = *(int **)(_UNK_02b611f0 + 0x2b60f9c);
              *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
              iVar4 = *piVar11;
              if (iVar14 == 0) {
                func_0x01384bf0();
              }
              if (uVar5 < *(uint *)(iVar14 + 0xc)) {
                *(uint *)(iVar1 + 0xc) = uVar5 + 1;
                *(undefined4 *)(iVar14 + uVar5 * 4 + 0x10) = uVar9;
              }
              else {
                func_0x0328f170(iVar1,uVar9,
                                *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38));
              }
              iVar1 = *(int *)(param_1 + 0xc);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              func_0x0422bd74(iVar1,uVar9,**(undefined4 **)(_UNK_02b611f4 + 0x2b60ffc));
            }
          }
          func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_02b611f8 + 0x2b61018));
          iVar1 = *(int *)(param_1 + 0x10);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar4 = *(int *)(iVar1 + 0xc);
          *(undefined4 *)(iVar1 + 0xc) = 0;
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          if (0 < iVar4) {
            func_0x0484e5ec(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
          }
          return;
        }
        iVar1 = *(int *)(param_1 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        piVar2 = (int *)func_0x0328eea8(iVar1,unaff_r7,*puVar10);
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar2;
        uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar7[-1] == *piVar11) {
              puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
              goto LAB_02b60da4;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_02b60da4:
        (*(code *)*puVar3)(piVar2,param_2,puVar3[1]);
        unaff_r7 = unaff_r7 + 1;
      } while( true );
    }
    iVar1 = func_0x0229f13c(0x7361,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2b60cec;
    unaff_r4 = param_1;
    unaff_r5 = iVar1;
    unaff_r8 = param_2;
    register0x00000054 = (BADSPACEBASE *)&uStack_48;
  }
  else {
    iVar1 = func_0x0229f13c(0x7360,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
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
  iVar4 = *(int *)(iVar1 + 0x10);
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
  iVar4 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 3;
  if (iVar1 == 0) {
    uVar6 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar4,uVar9,(undefined1 *)((int)register0x00000054 + -0x38),uVar6);
  return;
}



// ===== FAT.Activity$$RankingData RVA 0x2b2fee0 =====

/* WARNING: Removing unreachable block (ram,0x02b40360) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02b3fee0(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int *piVar15;
  int iStack_28;
  
  pcVar11 = (char *)(_UNK_02b4046c + 0x2b3fef8);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b40470 + 0x2b3ff0c));
    func_0x01384978(*(undefined4 *)(_UNK_02b40474 + 0x2b3ff18));
    func_0x01384978(*(undefined4 *)(_UNK_02b40478 + 0x2b3ff24));
    func_0x01384978(*(undefined4 *)(_UNK_02b4047c + 0x2b3ff30));
    func_0x01384978(*(undefined4 *)(_UNK_02b40480 + 0x2b3ff3c));
    func_0x01384978(*(undefined4 *)(_UNK_02b40484 + 0x2b3ff48));
    func_0x01384978(*(undefined4 *)(_UNK_02b40488 + 0x2b3ff54));
    func_0x01384978(*(undefined4 *)(_UNK_02b4048c + 0x2b3ff60));
    func_0x01384978(*(undefined4 *)(_UNK_02b40490 + 0x2b3ff6c));
    func_0x01384978(*(undefined4 *)(_UNK_02b40494 + 0x2b3ff78));
    func_0x01384978(*(undefined4 *)(_UNK_02b40498 + 0x2b3ff84));
    *pcVar11 = '\x01';
  }
  iVar14 = 0;
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x1198,0);
  if (iVar1 == 0) {
    pcVar2 = (char *)func_0x02b404cc(param_1,0x1e);
    iVar1 = 0;
    if (pcVar2 != (char *)0x0) {
      iVar1 = *(int *)(pcVar2 + 0xc);
      pcVar11 = pcVar2;
    }
    if (pcVar2 != (char *)0x0 && iVar1 != 0) {
      iVar14 = func_0x01384be4(**(undefined4 **)(_UNK_02b4049c + 0x2b40008));
      func_0x017a929c(iVar14,0);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar14 + 0xc);
      piVar3 = (int *)func_0x02f86d64(pcVar11,**(undefined4 **)(_UNK_02b404a0 + 0x2b40030));
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar4 = *piVar3;
      uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_02b404a4 + 0x2b4005c)) {
            puVar5 = (undefined4 *)(iVar4 + *piVar9 * 8 + 0xc0);
            goto LAB_02b400a8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_02b404a4 + 0x2b4005c),0);
LAB_02b400a8:
      piVar3 = (int *)(*(code *)*puVar5)(piVar3,puVar5[1]);
      piVar9 = *(int **)(_UNK_02b404a8 + 0x2b400cc);
      piVar15 = *(int **)(_UNK_02b404ac + 0x2b400d4);
      puVar5 = *(undefined4 **)(_UNK_02b404b0 + 0x2b400dc);
LAB_02b400d8:
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar4 = *piVar3;
      uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar10[-1] == *piVar9) {
            puVar6 = (undefined4 *)(iVar4 + *piVar10 * 8 + 0xc0);
            goto LAB_02b40134;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined4 *)func_0x014002dc(piVar3,*piVar9,0);
LAB_02b40134:
      iVar4 = (*(code *)*puVar6)(piVar3,puVar6[1]);
      if (iVar4 != 0) {
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar4 = *piVar3;
        uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar10[-1] == *piVar15) {
              puVar6 = (undefined4 *)(iVar4 + *piVar10 * 8 + 0xc0);
              goto LAB_02b401a8;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined4 *)func_0x014002dc(piVar3,*piVar15,0);
LAB_02b401a8:
        iVar4 = (*(code *)*puVar6)(piVar3,puVar6[1]);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar7 = func_0x02a09284(iVar4,0);
        if (iVar7 != 0) {
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          uVar12 = *(undefined4 *)(iVar4 + 0x3c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar7 = func_0x03470a60(iVar1,uVar12,&iStack_28,*puVar5);
          if (iVar7 == 0) {
            iVar7 = func_0x01384be4(**(undefined4 **)(_UNK_02b404b4 + 0x2b40224));
            func_0x017a8b44(iVar7,0);
            uVar12 = func_0x01384be4(**(undefined4 **)(_UNK_02b404b8 + 0x2b40240));
            func_0x017a85b4(uVar12,0);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            uVar13 = *(undefined4 *)(iVar4 + 0x3c);
            *(undefined4 *)(iVar7 + 0xc) = uVar12;
            iStack_28 = iVar7;
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x03470bac(iVar1,uVar13,iVar7,**(undefined4 **)(_UNK_02b404bc + 0x2b40280));
            iVar7 = iStack_28;
            if (iStack_28 == 0) {
              func_0x01384bf0();
            }
            func_0x02a078d8(iVar4,*(undefined4 *)(iVar7 + 0xc),0);
            piVar15 = *(int **)(_UNK_02b404c0 + 0x2b402c4);
          }
          iVar7 = iStack_28;
          if (iStack_28 == 0) {
            func_0x01384bf0();
          }
          func_0x02a079b4(iVar4,*(undefined4 *)(iVar7 + 0x10),0);
        }
        goto LAB_02b400d8;
      }
      if (piVar3 != (int *)0x0) {
        iVar1 = *piVar3;
        uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar9[-1] == **(int **)(_UNK_02b404c4 + 0x2b40300)) {
              puVar5 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
              goto LAB_02b40348;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_02b404c4 + 0x2b40300),0);
LAB_02b40348:
        (*(code *)*puVar5)(piVar3,puVar5[1]);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x1198,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar14 = func_0x021bf62c(iVar1,param_1,0);
  }
  return iVar14;
}



// ===== FAT.Activity$$LookupActive RVA 0x2b304cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b404cc(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_02b4058c + 0x2b404e8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b40590 + 0x2b404fc));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x98,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03dd1078(iVar1,param_2,&uStack_14,**(undefined4 **)(_UNK_02b40594 + 0x2b40578));
  }
  else {
    iVar1 = func_0x0229f13c(0x98,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02176868(iVar1,param_1,param_2,0);
  }
  return uStack_14;
}



// ===== FAT.Activity$$OnPostSetUserData RVA 0x2b30598 =====

/* WARNING: Possible PIC construction at 0x028c3f24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x028c3f90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028c3f28) */
/* WARNING: Removing unreachable block (ram,0x028c3f94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b40598(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *unaff_r4;
  int iVar5;
  int iVar6;
  undefined4 unaff_r5;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *unaff_lr;
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
  undefined4 *puStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  
  pcVar7 = (char *)(_UNK_02b406c8 + 0x2b405ac);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b406cc + 0x2b405c0));
    func_0x01384978(*(undefined4 *)(_UNK_02b406d0 + 0x2b405cc));
    func_0x01384978(*(undefined4 *)(_UNK_02b406d4 + 0x2b405d8));
    func_0x01384978(*(undefined4 *)(_UNK_02b406d8 + 0x2b405e4));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x7362,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7362,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    puStack_20 = (undefined4 *)0x0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    puStack_20 = (undefined4 *)uStack_38;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar8,&uStack_30,uVar3);
    return;
  }
  func_0x02b406ec(param_1);
  func_0x02b4095c(param_1,0,0);
  if (*(int *)(**(int **)(_UNK_02b406dc + 0x2b40654) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_02b406e0 + 0x2b40670));
  uVar8 = func_0x01384be4(**(undefined4 **)(_UNK_02b406e4 + 0x2b40684));
  func_0x0478dedc(uVar8,param_1,**(undefined4 **)(_UNK_02b406e8 + 0x2b406a0),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_028c3fcc + 0x28c3e84);
  puStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c3fd0 + 0x28c3e98),uVar8,0);
    *pcVar7 = '\x01';
  }
  iVar5 = func_0x0229f06c(0xd17,0);
  if (iVar5 != 0) {
    iVar5 = func_0x0229f13c(0xd17,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = uStack_14;
    puStack_20 = puStack_18;
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,uVar8,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar5 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar5 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar2,0);
    func_0x01485278(&uStack_38,uVar8,0);
    iVar6 = *(int *)(iVar5 + 8);
    uVar8 = *(undefined4 *)(iVar5 + 0xc);
    iVar2 = *(int *)(iVar5 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_38,uVar3,0,0);
    return;
  }
  puVar4 = (undefined4 *)(iVar2 + 8);
  piVar9 = (int *)0x0;
  piVar1 = (int *)func_0x0487929c(*puVar4,uVar8,0);
  piVar10 = *(int **)(_UNK_028c3fd4 + 0x28c3f0c);
  if (piVar1 == (int *)0x0) {
    *puVar4 = 0;
  }
  else {
    iVar2 = *piVar10;
    if (*piVar1 != iVar2) {
      unaff_lr = (undefined4 *)0x28c3f28;
      register0x00000054 = (BADSPACEBASE *)&puStack_18;
      goto SUB_01384fb4;
    }
    *puVar4 = piVar1;
    piVar9 = piVar1;
    if (*piVar1 != iVar2) {
      func_0x01384fb4(piVar1);
      piVar9 = (int *)*puVar4;
    }
  }
  piVar1 = (int *)func_0x0487907c(piVar9,uVar8,0);
  if (piVar1 == (int *)0x0) {
    *puVar4 = 0;
    return;
  }
  iVar2 = *piVar10;
  if (*piVar1 == iVar2) {
    *puVar4 = piVar1;
    puVar4 = puStack_18;
    if (*piVar1 == iVar2) {
      return;
    }
  }
  else {
    unaff_lr = (undefined4 *)0x28c3f94;
    register0x00000054 = (BADSPACEBASE *)&puStack_18;
  }
SUB_01384fb4:
  *(undefined4 **)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 **)((int)register0x00000054 + -8) = puVar4;
  func_0x0142996c((undefined4 **)((int)register0x00000054 + -0x14),*(undefined4 *)(*piVar1 + 0x20),
                  iVar2);
  puVar4 = *(undefined4 **)((int)register0x00000054 + -0xc);
  if (((uint)*(undefined4 **)((int)register0x00000054 + -0x14) & 1) == 0) {
    puVar4 = (undefined4 *)((uint)((int)register0x00000054 + -0x14) | 1);
  }
  iVar2 = func_0x01419d2c(puVar4);
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  func_0x01418ff0(iVar2,0);
  if (((uint)*(undefined4 **)((int)register0x00000054 + -0x14) & 1) != 0) {
    func_0x0148d9d4(*(undefined4 **)((int)register0x00000054 + -0xc));
  }
  return;
}



// ===== FAT.Activity$$CheckLimbo RVA 0x2b306ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b406ec(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int *piStack_14;
  
  pcVar4 = (char *)(_UNK_02b40928 + 0x2b40704);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4092c + 0x2b40718));
    func_0x01384978(*(undefined4 *)(_UNK_02b40930 + 0x2b40724));
    func_0x01384978(*(undefined4 *)(_UNK_02b40934 + 0x2b40730));
    func_0x01384978(*(undefined4 *)(_UNK_02b40938 + 0x2b4073c));
    func_0x01384978(*(undefined4 *)(_UNK_02b4093c + 0x2b40748));
    func_0x01384978(*(undefined4 *)(_UNK_02b40940 + 0x2b40754));
    *pcVar4 = '\x01';
  }
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_14 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_20 = 0;
  iVar2 = func_0x0229f06c(0x7363,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar2 + 0xc);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (0 < iVar3) {
      func_0x0484e5ec(*(undefined4 *)(iVar2 + 8),0,iVar3,0);
    }
    iVar2 = *(int *)(param_1 + 0x2c);
    uVar5 = *(undefined4 *)(param_1 + 0x4c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0328f380(iVar2,uVar5,**(undefined4 **)(_UNK_02b40944 + 0x2b40810));
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_20,iVar2,**(undefined4 **)(_UNK_02b40948 + 0x2b4083c));
    puVar6 = *(undefined4 **)(_UNK_02b4094c + 0x2b40850);
    while (iVar2 = func_0x03f5f428(&uStack_20,*puVar6), piVar1 = piStack_14, iVar2 != 0) {
      if (piStack_14 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar1;
      (**(code **)(iVar2 + 0x1c8))(piVar1,*(undefined4 *)(iVar2 + 0x1cc));
    }
    func_0x03f5f424(&uStack_20,**(undefined4 **)(_UNK_02b40950 + 0x2b40894));
  }
  else {
    iVar2 = func_0x0229f13c(0x7363,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.Activity$$CheckRefresh RVA 0x2b3095c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4095c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
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
  
  pcVar7 = (char *)(_UNK_02b40ad0 + 0x2b4097c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b40ad4 + 0x2b40990));
    func_0x01384978(*(undefined4 *)(_UNK_02b40ad8 + 0x2b4099c));
    func_0x01384978(*(undefined4 *)(_UNK_02b40adc + 0x2b409a8));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x1a9,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x03cd675c(iVar2,**(undefined4 **)(_UNK_02b40ae0 + 0x2b40a1c));
    if (0 < iVar2) {
      func_0x02b4558c(param_1);
    }
    func_0x02b45d7c(param_1,param_3);
    func_0x02b46034(param_1);
    func_0x02b46318(param_1);
    func_0x02b4639c(param_1,param_2);
    func_0x02b467e4(param_1,param_2);
    if (*(char *)(param_1 + 0x34) != '\0') {
      piVar3 = *(int **)(_UNK_02b40ae4 + 0x2b40a80);
      *(undefined1 *)(param_1 + 0x34) = 0;
      if (*(int *)(*piVar3 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_02b40ae8 + 0x2b40aa0));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0229f06c(0x3f,0);
      if (iVar1 == 0) {
        iVar2 = *(int *)(iVar2 + 8);
        if (iVar2 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
        return;
      }
      iVar1 = func_0x0229f13c(0x3f,0);
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
      func_0x01485278(&uStack_30,iVar2,0);
      iVar5 = *(int *)(iVar1 + 8);
      uVar6 = *(undefined4 *)(iVar1 + 0xc);
      iVar2 = *(int *)(iVar1 + 0x10);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar4 = 2;
      if (iVar2 == 0) {
        uVar4 = 1;
      }
      func_0x0245495c(iVar5,uVar6,&uStack_30,uVar4,0,0);
      return;
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x1a9,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x0217f950(iVar2,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.Activity$$Startup RVA 0x2b30aec =====

/* WARNING: Possible PIC construction at 0x0349e5d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0349e62c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0349e694: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0349e5dc) */
/* WARNING: Removing unreachable block (ram,0x0349e698) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b40aec(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_r4;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  int unaff_lr;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  byte abStack_34 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int aiStack_20 [3];
  
  pcVar8 = (char *)(_UNK_02b40cb0 + 0x2b40b00);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b40cb4 + 0x2b40b14));
    func_0x01384978(*(undefined4 *)(_UNK_02b40cb8 + 0x2b40b20));
    func_0x01384978(*(undefined4 *)(_UNK_02b40cbc + 0x2b40b2c));
    func_0x01384978(*(undefined4 *)(_UNK_02b40cc0 + 0x2b40b38));
    func_0x01384978(*(undefined4 *)(_UNK_02b40cc4 + 0x2b40b44));
    func_0x01384978(*(undefined4 *)(_UNK_02b40cc8 + 0x2b40b50));
    func_0x01384978(*(undefined4 *)(_UNK_02b40ccc + 0x2b40b5c));
    func_0x01384978(*(undefined4 *)(_UNK_02b40cd0 + 0x2b40b68));
    func_0x01384978(*(undefined4 *)(_UNK_02b40cd4 + 0x2b40b74));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x7366,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7366,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    aiStack_20[0] = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    aiStack_20[0] = iStack_38;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_30,uVar5,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02b40cd8 + 0x2b40bcc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_02b40cdc + 0x2b40be8));
  uVar9 = func_0x01384be4(**(undefined4 **)(_UNK_02b40ce0 + 0x2b40bfc));
  func_0x03ccb96c(uVar9,param_1,**(undefined4 **)(_UNK_02b40ce4 + 0x2b40c18),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0349e8d8(iVar2,uVar9,**(undefined4 **)(_UNK_02b40ce8 + 0x2b40c3c));
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_02b40cec + 0x2b40c50));
  uVar9 = func_0x01384be4(**(undefined4 **)(_UNK_02b40cf0 + 0x2b40c64));
  func_0x03ccac64(uVar9,param_1,**(undefined4 **)(_UNK_02b40cf4 + 0x2b40c80),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = **(int **)(_UNK_02b40cf8 + 0x2b40ca4);
  iVar7 = 0;
  aiStack_20[0] = unaff_r4;
  piVar3 = (int *)func_0x0487929c(*(undefined4 *)(iVar2 + 8),uVar9,0);
  iVar6 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 4);
  if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
    iVar6 = func_0x02457d84(iVar6);
  }
  if ((piVar3 == (int *)0x0) || (iVar7 = func_0x02457d4c(piVar3,iVar6), iVar7 != 0)) {
    iVar6 = *(int *)(iVar4 + 0x10);
    *(int *)(iVar2 + 8) = iVar7;
    iVar6 = *(int *)(*(int *)(iVar6 + 0x60) + 4);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = func_0x02457d84(iVar6);
    }
    if ((piVar3 == (int *)0x0) || (iVar7 = func_0x02457d4c(piVar3,iVar6), iVar7 != 0)) {
      iVar7 = 0;
      piVar3 = (int *)func_0x0487907c(*(undefined4 *)(iVar2 + 8),uVar9,0);
      iVar6 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 4);
      if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
        iVar6 = func_0x02457d84(iVar6);
      }
      if ((piVar3 == (int *)0x0) || (iVar7 = func_0x02457d4c(piVar3,iVar6), iVar7 != 0)) {
        iVar6 = *(int *)(iVar4 + 0x10);
        *(int *)(iVar2 + 8) = iVar7;
        iVar6 = *(int *)(*(int *)(iVar6 + 0x60) + 4);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x02457d84(iVar6);
        }
        if ((piVar3 == (int *)0x0) || (iVar2 = func_0x02457d4c(piVar3,iVar6), iVar2 != 0)) {
          return;
        }
      }
      else {
        unaff_lr = 0x349e698;
        aiStack_20[0] = iVar6;
        register0x00000054 = (BADSPACEBASE *)aiStack_20;
      }
    }
    else {
      unaff_lr = 0x349e630;
      aiStack_20[0] = iVar6;
      register0x00000054 = (BADSPACEBASE *)aiStack_20;
    }
  }
  else {
    unaff_lr = 0x349e5dc;
    aiStack_20[0] = iVar6;
    register0x00000054 = (BADSPACEBASE *)aiStack_20;
  }
  *(int *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = aiStack_20[0];
  func_0x0142996c((int *)((int)register0x00000054 + -0x14),*(undefined4 *)(*piVar3 + 0x20),iVar6);
  uVar1 = *(uint *)((int)register0x00000054 + -0xc);
  if ((*(byte *)((int)register0x00000054 + -0x14) & 1) == 0) {
    uVar1 = (uint)((int)register0x00000054 + -0x14) | 1;
  }
  iVar2 = func_0x01419d2c(uVar1);
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  func_0x01418ff0(iVar2,0);
  if ((*(byte *)((int)register0x00000054 + -0x14) & 1) != 0) {
    func_0x0148d9d4(*(int *)((int)register0x00000054 + -0xc));
  }
  return;
}



// ===== FAT.Activity$$DebugReset RVA 0x2b30cfc =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b40cfc(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_74;
  int aiStack_68 [6];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  longlong lStack_34;
  undefined8 uStack_2c;
  
  pcVar3 = (char *)(_UNK_02b41144 + 0x2b40d14);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b41148 + 0x2b40d28));
    func_0x01384978(*(undefined4 *)(_UNK_02b4114c + 0x2b40d34));
    func_0x01384978(*(undefined4 *)(_UNK_02b41150 + 0x2b40d40));
    func_0x01384978(*(undefined4 *)(_UNK_02b41154 + 0x2b40d4c));
    func_0x01384978(*(undefined4 *)(_UNK_02b41158 + 0x2b40d58));
    func_0x01384978(*(undefined4 *)(_UNK_02b4115c + 0x2b40d64));
    func_0x01384978(*(undefined4 *)(_UNK_02b41160 + 0x2b40d70));
    func_0x01384978(*(undefined4 *)(_UNK_02b41164 + 0x2b40d7c));
    func_0x01384978(*(undefined4 *)(_UNK_02b41168 + 0x2b40d88));
    func_0x01384978(*(undefined4 *)(_UNK_02b4116c + 0x2b40d94));
    func_0x01384978(*(undefined4 *)(_UNK_02b41170 + 0x2b40da0));
    *pcVar3 = '\x01';
  }
  aiStack_68[5] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  lStack_34 = (ulonglong)(uint)aiStack_68[5] << 0x20;
  uStack_2c = CONCAT44(uStack_4c,uStack_50);
  aiStack_68[4] = 0;
  uStack_44 = 0;
  uStack_48 = 0;
  aiStack_68[3] = 0;
  aiStack_68[2] = 0;
  aiStack_68[1] = 0;
  aiStack_68[0] = 0;
  uStack_3c = aiStack_68[5];
  uStack_38 = uStack_50;
  iVar2 = func_0x0229f06c(0x7369,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03cd6fc4(&uStack_88,iVar2,**(undefined4 **)(_UNK_02b41174 + 0x2b40e50));
    uStack_40 = uStack_88;
    uStack_3c = uStack_84;
    uStack_38 = uStack_80;
    uStack_2c = uStack_74;
    puVar4 = *(undefined4 **)(_UNK_02b41178 + 0x2b40e7c);
    while (iVar2 = func_0x03f849ec(&uStack_40,*puVar4), iVar2 != 0) {
      piVar1 = (int *)uStack_2c;
      if ((int *)uStack_2c == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar1 + 0x1c0))(piVar1,*(undefined4 *)(*piVar1 + 0x1c4));
      iVar2 = *(int *)(param_1 + 0x28);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x02c03744(iVar2,piVar1,0);
    }
    func_0x03f84b48(&uStack_40,**(undefined4 **)(_UNK_02b4117c + 0x2b40ee0));
    FUN_02b3b724(param_1);
    FUN_02b3c818(param_1);
    iVar2 = *(int *)(param_1 + 0x38);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03d611a0(iVar2,**(undefined4 **)(_UNK_02b41184 + 0x2b40f14));
    iVar2 = *(int *)(param_1 + 0x44);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03dcf754(aiStack_68 + 4,iVar2,**(undefined4 **)(_UNK_02b41188 + 0x2b40f44));
    puVar4 = *(undefined4 **)(_UNK_02b4118c + 0x2b40f6c);
    puVar5 = *(undefined4 **)(_UNK_02b41190 + 0x2b40f74);
    while (iVar2 = func_0x03fa87cc(aiStack_68 + 4,*puVar4), iVar2 != 0) {
      aiStack_68[3] = uStack_48;
      aiStack_68[2] = uStack_4c;
      func_0x0435a580(aiStack_68 + 2,aiStack_68 + 1,aiStack_68,*puVar5);
      iVar2 = aiStack_68[0];
      if (aiStack_68[0] == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar2 + 0x14) = 0;
      *(undefined4 *)(iVar2 + 0x18) = 0;
      *(undefined4 *)(iVar2 + 0x1c) = 0;
    }
    func_0x03fa890c(aiStack_68 + 4,**(undefined4 **)(_UNK_02b41198 + 0x2b40fd0));
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    FUN_02b4095c(param_1,0,1);
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0xfc);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    FUN_01e83ff8(iVar2,0,0);
  }
  else {
    iVar2 = func_0x0229f13c(0x7369,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.Activity$$DebugExpire RVA 0x2b311a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b411a4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar5 = (char *)(_UNK_02b413f0 + 0x2b411bc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b413f4 + 0x2b411d0));
    func_0x01384978(*(undefined4 *)(_UNK_02b413f8 + 0x2b411dc));
    func_0x01384978(*(undefined4 *)(_UNK_02b413fc + 0x2b411e8));
    func_0x01384978(*(undefined4 *)(_UNK_02b41400 + 0x2b411f4));
    func_0x01384978(*(undefined4 *)(_UNK_02b41404 + 0x2b41200));
    func_0x01384978(*(undefined4 *)(_UNK_02b41408 + 0x2b4120c));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_2c = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_28 = uStack_34;
  uStack_24 = uStack_30;
  iVar4 = func_0x0229f06c(0x7371,0);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0xc);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x03cd6fc4(&uStack_38,iVar4,**(undefined4 **)(_UNK_02b4140c + 0x2b412ac));
    iVar4 = func_0x03f849ec(&uStack_38,**(undefined4 **)(_UNK_02b41410 + 0x2b412c0));
    if (iVar4 != 0) {
      uStack_48 = CONCAT44(uStack_28,uStack_2c);
      uStack_40 = uStack_24;
      func_0x04356064(&uStack_48,&uStack_50,&uStack_54,**(undefined4 **)(_UNK_02b41414 + 0x2b412e4))
      ;
      uVar3 = uStack_4c;
      uVar2 = uStack_50;
      uVar1 = uStack_54;
      iVar4 = *(int *)(param_1 + 0xc);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x03cd82c0(iVar4,uVar2,uVar3,**(undefined4 **)(_UNK_02b41418 + 0x2b41324));
      func_0x02b41428(param_1,uVar1,1);
    }
    func_0x03f84b48(&uStack_38,**(undefined4 **)(_UNK_02b4141c + 0x2b41350));
  }
  else {
    iVar4 = func_0x0229f13c(0x7371,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar4,param_1,0);
  }
  return;
}



// ===== FAT.Activity$$WhenEnd RVA 0x2b31428 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b41428(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  undefined8 uVar5;
  
  pcVar3 = (char *)(_UNK_02b41654 + 0x2b41448);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b41658 + 0x2b4145c));
    func_0x01384978(*(undefined4 *)(_UNK_02b4165c + 0x2b41468));
    func_0x01384978(*(undefined4 *)(_UNK_02b41660 + 0x2b41474));
    func_0x01384978(*(undefined4 *)(_UNK_02b41664 + 0x2b41480));
    func_0x01384978(*(undefined4 *)(_UNK_02b41668 + 0x2b4148c));
    func_0x01384978(*(undefined4 *)(_UNK_02b4166c + 0x2b41498));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x19e,0);
  if (iVar1 == 0) {
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
    }
    piVar4 = (int *)param_2[4];
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = (**(code **)(*piVar4 + 0x138))(piVar4,*(undefined4 *)(*piVar4 + 0x13c));
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x38);
      uVar2 = func_0x02b449f8(param_2);
      uVar5 = func_0x01c34eb8(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d60f38(iVar1,uVar2,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20),
                      **(undefined4 **)(_UNK_02b41670 + 0x2b4156c));
    }
    iVar1 = func_0x01384ab8(param_2,**(undefined4 **)(_UNK_02b41674 + 0x2b41584));
    if (iVar1 != 0) {
      FUN_02b3fdf0(param_1,iVar1);
    }
    if (*(int *)(**(int **)(_UNK_02b41678 + 0x2b415a8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02b4167c + 0x2b415c4));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x034a1be0(iVar1,param_2,param_3,**(undefined4 **)(_UNK_02b41680 + 0x2b415ec));
    (**(code **)(*param_2 + 0x1c0))(param_2,*(undefined4 *)(*param_2 + 0x1c4));
    *(undefined1 *)(param_1 + 0x34) = 1;
    uVar2 = func_0x02b3c4a4(param_2);
    piVar4 = (int *)func_0x02b44ae8(param_1,uVar2);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x118))
                (piVar4,param_1,param_2,param_3,*(undefined4 *)(*piVar4 + 0x11c));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x19e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02175630(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Activity$$DebugReportReady RVA 0x2b31684 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b41684(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar5 = (char *)(_UNK_02b41b94 + 0x2b4169c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b41b98 + 0x2b416b0));
    func_0x01384978(*(undefined4 *)(_UNK_02b41b9c + 0x2b416bc));
    func_0x01384978(*(undefined4 *)(_UNK_02b41ba0 + 0x2b416c8));
    func_0x01384978(*(undefined4 *)(_UNK_02b41ba4 + 0x2b416d4));
    func_0x01384978(*(undefined4 *)(_UNK_02b41ba8 + 0x2b416e0));
    func_0x01384978(*(undefined4 *)(_UNK_02b41bac + 0x2b416ec));
    func_0x01384978(*(undefined4 *)(_UNK_02b41bb0 + 0x2b416f8));
    func_0x01384978(*(undefined4 *)(_UNK_02b41bb4 + 0x2b41704));
    func_0x01384978(*(undefined4 *)(_UNK_02b41bb8 + 0x2b41710));
    func_0x01384978(*(undefined4 *)(_UNK_02b41bbc + 0x2b4171c));
    func_0x01384978(*(undefined4 *)(_UNK_02b41bc0 + 0x2b41728));
    *pcVar5 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_44 = 0;
  uStack_48 = 0;
  uStack_4c = 0;
  iStack_50 = 0;
  iVar2 = func_0x0229f06c(0x7372,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02b41bc4 + 0x2b417ac));
    func_0x04681d0c(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar8 = func_0x0467ad0c(iVar2,**(undefined4 **)(_UNK_02b41bc8 + 0x2b417dc),0);
    func_0x01c3600c(&uStack_70,(int)((ulonglong)uVar8 >> 0x20),*(undefined4 *)(param_1 + 0x58),
                    *(undefined4 *)(param_1 + 0x5c),0);
    uStack_58 = uStack_70;
    uStack_54 = uStack_6c;
    uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_02b41bcc + 0x2b41810),&uStack_58);
    uVar3 = func_0x046604e4(**(undefined4 **)(_UNK_02b41bd0 + 0x2b41834),uVar3,0);
    if ((int)uVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x04683ed4((int)uVar8,uVar3,0);
    iVar6 = *(int *)(param_1 + 0x44);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x03dcf754(&uStack_70,iVar6,**(undefined4 **)(_UNK_02b41bd4 + 0x2b41878));
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    uStack_38 = uStack_68;
    uStack_34 = uStack_64;
    uStack_30 = uStack_60;
    puVar7 = *(undefined4 **)(_UNK_02b41bd8 + 0x2b418ac);
    while (iVar6 = func_0x03fa87cc(&uStack_40,*puVar7), iVar6 != 0) {
      uStack_44 = (undefined4)uStack_30;
      uStack_48 = uStack_34;
      func_0x0435a580(&uStack_48,&uStack_4c,&iStack_50,**(undefined4 **)(_UNK_02b41bdc + 0x2b418cc))
      ;
      iVar6 = iStack_50;
      uStack_70 = uStack_4c;
      uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_02b41be0 + 0x2b418f8),&uStack_70);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x04684824(iVar2,uVar3,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x0467ac30(iVar4,0x20,0);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      cVar1 = *(char *)(iVar6 + 0x10);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x046845c4(iVar2,cVar1 != '\0',0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x0467ac30(iVar4,0x20,0);
      uVar3 = *(undefined4 *)(iVar6 + 0x14);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x046846a0(iVar2,uVar3,0);
      if (0 < *(int *)(iVar6 + 0x14)) {
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar8 = func_0x0467ac30(iVar2,0x28,0);
        func_0x01c3600c(&uStack_70,(int)((ulonglong)uVar8 >> 0x20),*(undefined4 *)(iVar6 + 0x18),
                        *(undefined4 *)(iVar6 + 0x1c),0);
        uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_02b41be4 + 0x2b41a0c),&uStack_70);
        if ((int)uVar8 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x04684824((int)uVar8,uVar3,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x0467ac30(iVar4,0x29,0);
      }
      if (*(int *)(iVar6 + 0xc) == 0) {
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0467ad0c(iVar2,**(undefined4 **)(_UNK_02b41be8 + 0x2b41a80),0);
      }
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x04683eb4(iVar2,0);
    }
    func_0x03fa890c(&uStack_40,**(undefined4 **)(_UNK_02b41bf0 + 0x2b41ab4));
  }
  else {
    iVar2 = func_0x0229f13c(0x7372,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.Activity$$S RVA 0x2b31bf8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b41bf8(int param_1,uint param_2,int *param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  int iStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_02b41d78 + 0x2b41c18);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b41d7c + 0x2b41c30));
    func_0x01384978(*(undefined4 *)(_UNK_02b41d80 + 0x2b41c3c));
    func_0x01384978(*(undefined4 *)(_UNK_02b41d84 + 0x2b41c48));
    func_0x01384978(*(undefined4 *)(_UNK_02b41d88 + 0x2b41c54));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6256,0);
  if (iVar1 == 0) {
    *param_3 = param_1;
    param_3[1] = param_2;
    func_0x0362c9cc(&iStack_28,**(undefined4 **)(_UNK_02b41d8c + 0x2b41cc4));
    *param_4 = iStack_28;
    param_4[1] = iStack_24;
    uVar2 = func_0x01adfe1c(param_1,param_2,param_5,**(undefined4 **)(_UNK_02b41d90 + 0x2b41cec));
    if (0 < (int)uVar2) {
      piVar4 = *(int **)(_UNK_02b41d94 + 0x2b41d10);
      iVar1 = *piVar4;
      if (param_2 < uVar2) {
        func_0x0484bb74(0);
      }
      if ((*(ushort *)(*(int *)(iVar1 + 0x10) + 0xbd) & 1) == 0) {
        func_0x014001f0();
      }
      *param_3 = param_1;
      param_3[1] = uVar2;
      iVar1 = *piVar4;
      if (param_2 <= uVar2) {
        func_0x0484bb74(0);
      }
      if ((*(ushort *)(*(int *)(iVar1 + 0x10) + 0xbd) & 1) == 0) {
        func_0x014001f0();
      }
      *param_4 = param_1 + (uVar2 + 1) * 2;
      param_4[1] = param_2 - (uVar2 + 1);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6256,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0223b7f4(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.Activity$$DebugActivate RVA 0x2b31d98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b41d98(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  char *pcVar11;
  undefined4 uVar12;
  uint uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar11 = (char *)(_UNK_02b424ec + 0x2b41db4);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b424f0 + 0x2b41dc8));
    func_0x01384978(*(undefined4 *)(_UNK_02b424f4 + 0x2b41dd4));
    func_0x01384978(*(undefined4 *)(_UNK_02b424f8 + 0x2b41de0));
    func_0x01384978(*(undefined4 *)(_UNK_02b424fc + 0x2b41dec));
    func_0x01384978(*(undefined4 *)(_UNK_02b42500 + 0x2b41df8));
    func_0x01384978(*(undefined4 *)(_UNK_02b42504 + 0x2b41e04));
    func_0x01384978(*(undefined4 *)(_UNK_02b42508 + 0x2b41e10));
    func_0x01384978(*(undefined4 *)(_UNK_02b4250c + 0x2b41e1c));
    func_0x01384978(*(undefined4 *)(_UNK_02b42510 + 0x2b41e28));
    func_0x01384978(*(undefined4 *)(_UNK_02b42514 + 0x2b41e34));
    func_0x01384978(*(undefined4 *)(_UNK_02b42518 + 0x2b41e40));
    func_0x01384978(*(undefined4 *)(_UNK_02b4251c + 0x2b41e4c));
    func_0x01384978(*(undefined4 *)(_UNK_02b42520 + 0x2b41e58));
    func_0x01384978(*(undefined4 *)(_UNK_02b42524 + 0x2b41e64));
    func_0x01384978(*(undefined4 *)(_UNK_02b42528 + 0x2b41e70));
    func_0x01384978(*(undefined4 *)(_UNK_02b4252c + 0x2b41e7c));
    func_0x01384978(*(undefined4 *)(_UNK_02b42530 + 0x2b41e88));
    func_0x01384978(*(undefined4 *)(_UNK_02b42534 + 0x2b41e94));
    *pcVar11 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  iStack_34 = 0;
  uStack_38 = 0;
  iStack_3c = 0;
  uStack_40 = 0;
  uStack_44 = 0;
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_5c = 0;
  iVar1 = func_0x0229f06c(0x6258,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b42538 + 0x2b41f24));
    uVar12 = 0;
    func_0x04874ed4(iVar1,0);
    pcVar11 = (char *)(_UNK_02b4253c + 0x2b41f44);
    if (*pcVar11 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b42540 + 0x2b41f58));
      *pcVar11 = '\x01';
    }
    uVar2 = 0;
    if (param_2 != 0) {
      uVar2 = func_0x0466f590(param_2,0);
      uVar12 = *(undefined4 *)(param_2 + 8);
    }
    FUN_02b41bf8(uVar2,uVar12,&uStack_30,&uStack_38,0x2c);
    FUN_02b41bf8(uStack_30,uStack_2c,&uStack_30,&uStack_40,0x2d);
    iVar3 = func_0x04822334(uStack_30,uStack_2c,&uStack_44,0);
    iVar4 = iStack_34;
    uVar12 = uStack_38;
    if (iVar3 == 0) {
      uVar12 = func_0x01384988(*(undefined4 *)(_UNK_02b42544 + 0x2b423e8));
      uVar2 = func_0x0106f8b0(&uStack_30,uVar12);
      uVar12 = *(undefined4 *)(_UNK_02b42548 + 0x2b42404);
      goto LAB_02b42400;
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = 0;
    iVar4 = func_0x04822334(uVar12,iVar4,(undefined4 *)(iVar1 + 8),0);
    if (iVar4 == 0) {
      if (0 < iStack_34) {
        uVar12 = func_0x0362c518(&uStack_38,**(undefined4 **)(_UNK_02b42554 + 0x2b42020));
        uVar12 = func_0x046634e0(**(undefined4 **)(_UNK_02b42558 + 0x2b4203c),uVar12,0);
        if (*(int *)(**(int **)(_UNK_02b4255c + 0x2b42050) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c2874(uVar12,0);
      }
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar1 + 8) = 0xe10;
    }
    if (0 < iStack_3c) {
      iVar5 = func_0x01adfe1c(uStack_40,iStack_3c,0x61,**(undefined4 **)(_UNK_02b42560 + 0x2b4209c))
      ;
      iVar4 = iStack_3c;
      uVar12 = uStack_40;
      uStack_40 = uVar12;
      if (iVar5 == iStack_3c + -1) {
        iVar3 = **(int **)(_UNK_02b42564 + 0x2b420cc);
        if (iStack_3c == 0) {
          func_0x0484bb74(0);
        }
        if ((*(ushort *)(*(int *)(iVar3 + 0x10) + 0xbd) & 1) == 0) {
          func_0x014001f0();
        }
        iVar3 = 1;
        uStack_40 = uVar12;
        iStack_3c = iVar4 + -1;
      }
    }
    iVar5 = func_0x0362c8c8(&uStack_40,**(undefined4 **)(_UNK_02b42568 + 0x2b42108));
    iVar4 = iStack_3c;
    uVar12 = uStack_40;
    if (iVar5 == 0) {
      iVar5 = **(int **)(_UNK_02b42580 + 0x2b42188);
      if (*pcVar11 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02b42584 + 0x2b421a0));
        *pcVar11 = '\x01';
      }
      if (iVar5 == 0) {
        uVar9 = 0;
        uVar2 = 0;
      }
      else {
        uVar2 = func_0x0466f590(iVar5,0);
        uVar9 = *(undefined4 *)(iVar5 + 8);
      }
      iVar4 = func_0x02b54110(uVar12,iVar4,uVar2,uVar9,**(undefined4 **)(_UNK_02b42588 + 0x2b421e0))
      ;
      if (iVar4 < 0) {
        iVar4 = func_0x04822334(uStack_40,iStack_3c,&uStack_5c,0);
        if (iVar4 == 0) goto LAB_02b424c4;
        uStack_6c = 0;
        uStack_70 = 0;
        func_0x0350813c(&uStack_70,uStack_5c,**(undefined4 **)(_UNK_02b42594 + 0x2b42280));
        uVar2 = 100;
        puVar6 = *(undefined4 **)(_UNK_02b42598 + 0x2b422a8);
        uVar10 = uStack_70;
        uVar12 = uStack_6c;
      }
      else {
        iVar4 = func_0x01827aec(uStack_44,0);
        uStack_64 = 0;
        uStack_68 = 0;
        if (iVar4 != 0) {
          uStack_64 = 0;
          uStack_68 = 0;
          func_0x0350813c(&uStack_68,*(undefined4 *)(iVar4 + 0x18),
                          **(undefined4 **)(_UNK_02b4258c + 0x2b42220),0);
        }
        uVar2 = 0xb;
        puVar6 = *(undefined4 **)(_UNK_02b42590 + 0x2b42250);
        uVar10 = uStack_68;
        uVar12 = uStack_64;
      }
    }
    else {
      iVar4 = func_0x02b425c0(uStack_44,iVar3);
      uStack_64 = 0;
      uStack_68 = 0;
      if (iVar4 != 0) {
        uStack_64 = 0;
        uStack_68 = 0;
        func_0x0350813c(&uStack_68,*(undefined4 *)(iVar4 + 0x14),
                        **(undefined4 **)(_UNK_02b4256c + 0x2b42144),0);
      }
      uVar2 = 10;
      puVar6 = *(undefined4 **)(_UNK_02b42570 + 0x2b42174);
      uVar10 = uStack_68;
      uVar12 = uStack_64;
    }
    uStack_64 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x038fa1f0(&uStack_68,uVar2,uVar10,uVar12,*puVar6);
    uVar10 = uStack_68;
    uStack_50 = uStack_64;
    uStack_4c = uStack_60;
    if ((uStack_64 & 0xff) == 0) {
      uVar2 = *(undefined4 *)(_UNK_02b42574 + 0x2b42420);
      uVar12 = func_0x01384988(uVar2);
      uVar12 = func_0x0106f8b0(&uStack_30,uVar12);
      uVar2 = func_0x01384988(uVar2);
      uVar2 = func_0x0106f8b0(&uStack_40,uVar2);
      uVar9 = func_0x01384988(*(undefined4 *)(_UNK_02b42578 + 0x2b42458));
      uVar7 = func_0x01384988(*(undefined4 *)(_UNK_02b4257c + 0x2b42468));
      uVar12 = func_0x046722b4(uVar9,uVar12,uVar7,uVar2,0);
      do {
        func_0x01384988(*(undefined4 *)(_UNK_02b4254c + 0x2b42494));
        uVar2 = func_0x01384be4();
        func_0x04867a60(uVar2,uVar12,0);
        uVar12 = func_0x01384988(*(undefined4 *)(_UNK_02b42550 + 0x2b424b4));
        func_0x01384aa0(uVar2,uVar12);
        func_0x01384928();
LAB_02b424c4:
        uVar12 = func_0x01384988(*(undefined4 *)(_UNK_02b4259c + 0x2b424d0));
        uVar2 = func_0x0106f8b0(&uStack_40,uVar12);
        uVar12 = *(undefined4 *)(&UNK_02b424ec + _UNK_02b425a0);
LAB_02b42400:
        uVar12 = func_0x01384988(uVar12);
        uVar12 = func_0x046634e0(uVar12,uVar2,0);
      } while( true );
    }
    uVar2 = func_0x03508154(&uStack_50,**(undefined4 **)(_UNK_02b425a4 + 0x2b422e8));
    func_0x038fd264(&uStack_58,uStack_44,uVar10,**(undefined4 **)(_UNK_02b425a8 + 0x2b42304));
    uVar12 = uStack_44;
    iVar4 = *(int *)(param_1 + 0x38);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x03d62718(iVar4,uVar12,**(undefined4 **)(_UNK_02b425ac + 0x2b42334));
    uVar9 = uStack_54;
    uVar12 = uStack_58;
    uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_02b425b0 + 0x2b42350));
    func_0x03ccb96c(uVar7,iVar1,**(undefined4 **)(_UNK_02b425b4 + 0x2b42370),0);
    uVar8 = 1;
    if (iVar3 != 0) {
      uVar8 = 0x101;
    }
    FUN_02b3eb94(&uStack_68,param_1,uVar12,uVar9,uVar2,0,0,uVar8,uVar7);
    if ((uStack_68 & 1) == 0) {
      FUN_02b3eea0(param_1,uStack_58,uStack_54,uVar2,uStack_64);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6258,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Activity.<>c__DisplayClass44_0$$.ctor RVA 0x2b325b8 =====

void FUN_02b425b8(void)

{
  return;
}



// ===== FAT.Activity$$DebugInsert RVA 0x2b32634 =====

/* WARNING: Possible PIC construction at 0x02b42aec: Changing call to branch */

void FUN_02b42634(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  uint extraout_r3;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  uint unaff_r6;
  int iVar11;
  uint unaff_r7;
  int iVar12;
  char *extraout_r12;
  undefined1 uVar13;
  undefined1 uVar14;
  bool bVar15;
  bool bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  undefined8 uVar20;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar9 = (char *)(iRam02b42bf8 + 0x2b42650);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(iRam02b42bfc + 0x2b42664));
    func_0x01384978(*(undefined4 *)(iRam02b42c00 + 0x2b42670));
    func_0x01384978(*(undefined4 *)(iRam02b42c04 + 0x2b4267c));
    func_0x01384978(*(undefined4 *)(iRam02b42c08 + 0x2b42688));
    func_0x01384978(*(undefined4 *)(iRam02b42c0c + 0x2b42694));
    func_0x01384978(*(undefined4 *)(iRam02b42c10 + 0x2b426a0));
    func_0x01384978(*(undefined4 *)(iRam02b42c14 + 0x2b426ac));
    func_0x01384978(*(undefined4 *)(iRam02b42c18 + 0x2b426b8));
    func_0x01384978(*(undefined4 *)(iRam02b42c1c + 0x2b426c4));
    func_0x01384978(*(undefined4 *)(iRam02b42c20 + 0x2b426d0));
    func_0x01384978(*(undefined4 *)(iRam02b42c24 + 0x2b426dc));
    *pcVar9 = '\x01';
  }
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  uStack_3c = 0;
  uStack_40 = 0;
  iStack_44 = 0;
  uStack_48 = 0;
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_5c = 0;
  uStack_60 = 0;
  iVar1 = func_0x0229f06c(0x6255,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6255,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
    return;
  }
  pcVar9 = (char *)(iRam02b42c28 + 0x2b4277c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(iRam02b42c2c + 0x2b42790));
    *pcVar9 = '\x01';
  }
  if (param_2 == 0) {
    uVar6 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = func_0x0466f590(param_2,0);
    uVar6 = *(undefined4 *)(param_2 + 8);
  }
  FUN_02b41bf8(uVar2,uVar6,&uStack_28,&uStack_30);
  FUN_02b41bf8(uStack_30,uStack_2c,&uStack_38,&uStack_30);
  FUN_02b41bf8(uStack_30,uStack_2c,&uStack_40,&uStack_48);
  iVar1 = func_0x04822334(uStack_28,uStack_24,&uStack_4c,0);
  uVar14 = iVar1 == 0;
  uVar13 = 1;
  if ((bool)uVar14) {
    uVar2 = func_0x01384988(*(undefined4 *)(iRam02b42c30 + 0x2b42b04));
    uVar2 = func_0x0106f8b0(&uStack_28,uVar2);
    uVar6 = *(undefined4 *)(iRam02b42c34 + 0x2b42b20);
LAB_02b42ba8:
    uVar6 = func_0x01384988(uVar6);
    uVar3 = func_0x046634e0(uVar6,uVar2,0);
  }
  else {
    iVar1 = func_0x01825050(uStack_4c,0);
    uVar14 = iVar1 == 0;
    uVar13 = 1;
    if ((bool)uVar14) {
      iVar1 = func_0x04822334(uStack_38,uStack_34,&uStack_54,0);
      if (iVar1 == 0) {
        uVar2 = func_0x0362c518(&uStack_38,**(undefined4 **)(iRam02b42c48 + 0x2b42868));
        if (*(int *)(**(int **)(iRam02b42c4c + 0x2b42880) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x02f7e364(uVar2,1,&uStack_50,**(undefined4 **)(iRam02b42c50 + 0x2b428a4));
        uVar14 = iVar1 == 0;
        uVar13 = 1;
        if ((bool)uVar14) {
          uVar2 = func_0x01384988(*(undefined4 *)(iRam02b42c54 + 0x2b42b90));
          uVar2 = func_0x0106f8b0(&uStack_38,uVar2);
          uVar6 = *(undefined4 *)(iRam02b42c58 + 0x2b42bac);
          goto LAB_02b42ba8;
        }
      }
      else {
        uStack_50 = uStack_54;
      }
      iVar1 = func_0x04822334(uStack_40,uStack_3c,&uStack_58,0);
      uVar14 = iVar1 == 0;
      uVar13 = 1;
      if (!(bool)uVar14) {
        iVar1 = func_0x04822334(uStack_48,iStack_44,&uStack_5c,0);
        if (iVar1 == 0) {
          if (0 < iStack_44) {
            uVar2 = func_0x0362c518(&uStack_48,**(undefined4 **)(iRam02b42c64 + 0x2b42904));
            uVar2 = func_0x046634e0(**(undefined4 **)(iRam02b42c68 + 0x2b42920),uVar2,0);
            if (*(int *)(**(int **)(iRam02b42c6c + 0x2b42934) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x028c2874(uVar2,0);
          }
          uStack_5c = 0xe10;
        }
        uVar20 = func_0x01c34eb8(0);
        iVar10 = (int)((ulonglong)uVar20 >> 0x20);
        uVar5 = (uint)uVar20;
        iVar1 = func_0x01384be4(**(undefined4 **)(iRam02b42c70 + 0x2b42974));
        func_0x01654900(iVar1,0);
        uVar4 = uStack_4c;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar1 + 0x10) = uStack_58;
        *(uint *)(iVar1 + 0x40) = uVar5;
        *(uint *)(iVar1 + 0xc) = uVar4;
        *(uint *)(iVar1 + 0x14) = uStack_50;
        iVar11 = *(int *)(param_1 + 8);
        *(int *)(iVar1 + 0x44) = iVar10;
        *(uint *)(iVar1 + 0x20) = uVar5 + uStack_5c;
        *(uint *)(iVar1 + 0x24) = iVar10 + ((int)uStack_5c >> 0x1f) + (uint)CARRY4(uVar5,uStack_5c);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        iVar10 = *(int *)(iVar11 + 8);
        unaff_r7 = *(uint *)(iVar11 + 0xc);
        piVar7 = *(int **)(iRam02b42c74 + 0x2b429f8);
        *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
        iVar12 = *piVar7;
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        if (unaff_r7 < *(uint *)(iVar10 + 0xc)) {
          *(uint *)(iVar11 + 0xc) = unaff_r7 + 1;
          *(int *)(iVar10 + unaff_r7 * 4 + 0x10) = iVar1;
        }
        else {
          func_0x0328f170(iVar11,iVar1,
                          *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
        }
        iVar10 = func_0x01824f88(0);
        unaff_r6 = uStack_4c;
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        func_0x03464bac(iVar10,unaff_r6,iVar1,**(undefined4 **)(iRam02b42c78 + 0x2b42a6c));
        uVar4 = uStack_4c;
        iVar1 = *(int *)(param_1 + 0x38);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x03d62718(iVar1,uVar4,**(undefined4 **)(iRam02b42c7c + 0x2b42a98));
        uVar4 = uStack_50;
        iVar1 = *(int *)(param_1 + 0x44);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x03dd1078(iVar1,uVar4,&uStack_60,**(undefined4 **)(iRam02b42c80 + 0x2b42ac8));
        uVar5 = uStack_60;
        if (iVar1 == 0) {
          return;
        }
        uStack_80 = uVar5;
        if (uStack_60 == 0) {
          func_0x01384bf0();
        }
        goto SUB_02b42c84;
      }
      uVar2 = func_0x01384988(*(undefined4 *)(iRam02b42c5c + 0x2b42b68));
      uVar2 = func_0x0106f8b0(&uStack_40,uVar2);
      uVar6 = *(undefined4 *)(iRam02b42c60 + 0x2b42b84);
      goto LAB_02b42ba8;
    }
    uStack_64 = uStack_4c;
    uVar2 = func_0x01384988(*(undefined4 *)(iRam02b42c40 + 0x2b42b34));
    uVar2 = func_0x01384abc(uVar2,&uStack_64);
    uVar6 = func_0x01384988(*(undefined4 *)(iRam02b42c44 + 0x2b42b4c));
    uVar3 = func_0x046604e4(uVar6,uVar2,0);
  }
  func_0x01384988(*(undefined4 *)(iRam02b42c38 + 0x2b42bc8));
  uVar4 = func_0x01384be4();
  func_0x04867a60(uVar4,uVar3,0);
  uVar2 = func_0x01384988(*(undefined4 *)(iRam02b42c3c + 0x2b42be8));
  func_0x01384aa0(uVar4,uVar2);
  uVar5 = func_0x01384928();
  bVar17 = uVar13;
  if ((bool)uVar14) {
    bVar17 = "wx" < extraout_r12 || extraout_r12 + -0x34400 < (char *)(uint)(byte)uVar13;
  }
  bVar15 = false;
  bVar18 = bVar17;
  if ((bool)uVar14 &&
      extraout_r12 ==
      "_ZNKSt6__ndk17num_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_putES4_RNS_8ios_baseEwx"
      + !(bool)uVar13 + 0x61) {
    bVar18 = 0x7ffffffa < uVar4 || CARRY4(uVar4 + 0x80000005,(uint)bVar17);
    uVar4 = uVar4 + 0x80000005 + (uint)bVar17;
    bVar15 = uVar4 == 0;
  }
  bVar16 = false;
  bVar17 = bVar18;
  if (bVar15) {
    bVar17 = 0xffdaffff < unaff_r7 || CARRY4(unaff_r7 + 0x250000,(uint)bVar18);
    uVar4 = unaff_r7 + 0x250000 + (uint)bVar18;
    bVar16 = uVar4 == 0;
  }
  bVar15 = false;
  bVar18 = bVar17;
  if (bVar16) {
    bVar18 = 0xfffdffff < unaff_r7 || CARRY4(unaff_r7 + 0x20000,(uint)bVar17);
    uVar4 = unaff_r7 + 0x20000 + (uint)bVar17;
    bVar15 = uVar4 == 0;
  }
  bVar16 = false;
  bVar17 = bVar18;
  if (bVar15) {
    bVar17 = 0xfffffedf < unaff_r6 || CARRY4(unaff_r6 + 0x120,(uint)bVar18);
    unaff_r7 = unaff_r6 + 0x120 + (uint)bVar18;
    bVar16 = unaff_r7 == 0;
  }
  bVar18 = bVar17;
  if (bVar16) {
    bVar18 = 0xd3ffffff < uVar4 || CARRY4(uVar4 + 0x2c000000,(uint)bVar17);
  }
  bVar16 = bVar16 && uVar4 + 0x2c000000 + (uint)bVar17 == 0;
  bVar17 = bVar18;
  if (bVar16) {
    bVar17 = 0xfffffff7 < uVar3 || CARRY4(uVar3 + 8,(uint)bVar18);
  }
  bVar16 = bVar16 && uVar3 + 8 + (uint)bVar18 == 0;
  bVar18 = bVar17;
  if (bVar16) {
    bVar18 = 0xffff4fff < uVar4 || CARRY4(uVar4 + 0xb000,(uint)bVar17);
  }
  bVar15 = false;
  bVar19 = bVar18;
  if (bVar16 && uVar4 + 0xb000 + (uint)bVar17 == 0) {
    bVar19 = 0xffe2ffff < unaff_r7 || CARRY4(unaff_r7 + 0x1d0000,(uint)bVar18);
    uVar4 = unaff_r7 + 0x1d0000 + (uint)bVar18;
    bVar15 = uVar4 == 0;
  }
  bVar17 = bVar19;
  if (bVar15) {
    bVar17 = 0xfffffffa < uVar4 || CARRY4(uVar4 + 5,(uint)bVar19);
  }
  bVar15 = bVar15 && uVar4 + 5 + (uint)bVar19 == 0;
  bVar18 = bVar17;
  if (bVar15) {
    bVar18 = 0xafffffff < extraout_r3 || CARRY4(extraout_r3 + 0x50000000,(uint)bVar17);
  }
  bVar16 = false;
  bVar19 = bVar18;
  if (bVar15 && extraout_r3 + 0x50000000 + (uint)bVar17 == 0) {
    bVar19 = 0xffefffff < unaff_r7 || CARRY4(unaff_r7 + 0x100000,(uint)bVar18);
    uVar4 = unaff_r7 + 0x100000 + (uint)bVar18;
    bVar16 = uVar4 == 0;
  }
  bVar15 = false;
  uVar8 = extraout_r3;
  bVar17 = bVar19;
  if (bVar16) {
    bVar17 = &UNK_00f40000 < extraout_r12 || extraout_r12 + -0xf40000 < (char *)(uint)bVar19;
    uVar8 = (int)extraout_r12 - (int)(&UNK_00f40000 + !(bool)bVar19);
    bVar15 = uVar8 == 0;
  }
  bVar18 = bVar17;
  if (bVar15) {
    bVar18 = 0xfffffffa < uVar8 || CARRY4(uVar8 + 5,(uint)bVar17);
  }
  bVar15 = bVar15 && uVar8 + 5 + (uint)bVar17 == 0;
  bVar17 = bVar18;
  if (bVar15) {
    bVar17 = 0xfffffeff < uVar4 || CARRY4(uVar4 + 0x100,(uint)bVar18);
  }
  bVar16 = false;
  bVar19 = bVar17;
  if (bVar15 && uVar4 + 0x100 + (uint)bVar18 == 0) {
    bVar19 = CARRY4(unaff_r7,(uint)bVar17);
    uVar4 = unaff_r7 + bVar17;
    bVar16 = uVar4 == 0;
  }
  bVar17 = bVar19;
  if (bVar16) {
    bVar17 = 0x5fffffff < uVar8 || CARRY4(uVar8 + 0xa0000000,(uint)bVar19);
  }
  bVar16 = bVar16 && uVar8 + 0xa0000000 + (uint)bVar19 == 0;
  bVar18 = bVar17;
  if (bVar16) {
    bVar18 = 0xfffffffe < unaff_r6 || CARRY4(unaff_r6 + 1,(uint)bVar17);
  }
  bVar15 = false;
  bVar19 = bVar18;
  if (bVar16 && unaff_r6 + 1 + (uint)bVar17 == 0) {
    bVar19 = 0xffffff23 < uVar8 || CARRY4(uVar8 + 0xdc,(uint)bVar18);
    uVar4 = uVar8 + 0xdc + (uint)bVar18;
    bVar15 = uVar4 == 0;
  }
  bVar16 = false;
  bVar17 = bVar19;
  if (bVar15) {
    bVar17 = 0x1bffffff < unaff_r7 || CARRY4(unaff_r7 + 0xe4000000,(uint)bVar19);
    uVar4 = unaff_r7 + 0xe4000000 + (uint)bVar19;
    bVar16 = uVar4 == 0;
  }
  bVar18 = bVar17;
  if (bVar16) {
    bVar18 = 0xffffff53 < uVar4 || CARRY4(uVar4 + 0xac,(uint)bVar17);
  }
  bVar16 = bVar16 && uVar4 + 0xac + (uint)bVar17 == 0;
  bVar17 = bVar18;
  if (bVar16) {
    bVar17 = 0xeffffffc < uVar4 || CARRY4(uVar4 + 0x10000003,(uint)bVar18);
  }
  bVar15 = false;
  bVar19 = bVar17;
  if (bVar16 && uVar4 + 0x10000003 + (uint)bVar18 == 0) {
    bVar19 = 0xfffff4ff < unaff_r6 || CARRY4(unaff_r6 + 0xb00,(uint)bVar17);
    unaff_r7 = unaff_r6 + 0xb00 + (uint)bVar17;
    bVar15 = unaff_r7 == 0;
  }
  bVar17 = bVar19;
  if (bVar15) {
    bVar17 = 0xffffdeff < uVar4 || CARRY4(uVar4 + 0x2100,(uint)bVar19);
  }
  bVar16 = false;
  bVar18 = bVar17;
  if (bVar15 && uVar4 + 0x2100 + (uint)bVar19 == 0) {
    bVar18 = 0x77ffffff < unaff_r7 || CARRY4(unaff_r7 + 0x88000000,(uint)bVar17);
    uVar4 = unaff_r7 + 0x88000000 + (uint)bVar17;
    bVar16 = uVar4 == 0;
  }
  bVar17 = bVar18;
  if (bVar16) {
    bVar17 = 0xffffd4ff < uVar4 || CARRY4(uVar4 + 0x2b00,(uint)bVar18);
  }
  bVar15 = false;
  bVar19 = bVar17;
  if (bVar16 && uVar4 + 0x2b00 + (uint)bVar18 == 0) {
    bVar19 = 0x4bffffff < unaff_r7 || CARRY4(unaff_r7 + 0xb4000000,(uint)bVar17);
    uVar4 = unaff_r7 + 0xb4000000 + (uint)bVar17;
    bVar15 = uVar4 == 0;
  }
  bVar17 = bVar19;
  if (bVar15) {
    bVar17 = 0xffffffef < uVar4 || CARRY4(uVar4 + 0x10,(uint)bVar19);
  }
  bVar16 = false;
  bVar18 = bVar17;
  if (bVar15 && uVar4 + 0x10 + (uint)bVar19 == 0) {
    bVar18 = 0xf03fffff < unaff_r7 || CARRY4(unaff_r7 + 0xfc00000,(uint)bVar17);
    uVar4 = unaff_r7 + 0xfc00000 + (uint)bVar17;
    bVar16 = uVar4 == 0;
  }
  bVar15 = false;
  bVar17 = bVar18;
  if (bVar16) {
    bVar17 = 0xfffffddf < uVar4 || CARRY4(uVar4 + 0x220,(uint)bVar18);
    uVar3 = uVar4 + 0x220 + (uint)bVar18;
    bVar15 = uVar3 == 0;
  }
  bVar16 = false;
  bVar18 = bVar17;
  if (bVar15) {
    bVar18 = 0xfffffb3f < uVar3 || CARRY4(uVar3 + 0x4c0,(uint)bVar17);
    uVar5 = uVar3 + 0x4c0 + (uint)bVar17;
    bVar16 = uVar5 == 0;
  }
  bVar17 = bVar18;
  if (bVar16) {
    bVar17 = 0xffe6ffff < uVar4 || CARRY4(uVar4 + 0x190000,(uint)bVar18);
  }
  bVar15 = false;
  bVar19 = bVar17;
  if (bVar16 && uVar4 + 0x190000 + (uint)bVar18 == 0) {
    bVar19 = 0xcfffffff < unaff_r7 || CARRY4(unaff_r7 + 0x30000000,(uint)bVar17);
    uVar4 = unaff_r7 + 0x30000000 + (uint)bVar17;
    bVar15 = uVar4 == 0;
  }
  bVar16 = false;
  bVar17 = bVar19;
  if (bVar15) {
    bVar17 = 0xe4ffffff < unaff_r7 || CARRY4(unaff_r7 + 0x1b000000,(uint)bVar19);
    uVar4 = unaff_r7 + 0x1b000000 + (uint)bVar19;
    bVar16 = uVar4 == 0;
  }
  uStack_80 = uVar3;
  if (bVar16) {
    uVar4 = unaff_r7 + 0xbc000000 + (uint)bVar17;
  }
SUB_02b42c84:
  uStack_7c = uVar4;
  iVar1 = func_0x0229f06c(0x6257,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6257,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_84 = uStack_7c;
    uStack_88 = uStack_80;
    uStack_9c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_98 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_94 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_a0 = 0;
    uStack_90 = 0;
    uStack_80 = unaff_r6;
    uStack_7c = unaff_r7;
    func_0x0245494c(&uStack_b8,0,0);
    uStack_a0 = uStack_b8;
    uStack_9c = uStack_b4;
    uStack_98 = uStack_b0;
    uStack_94 = uStack_ac;
    uStack_90 = uStack_a8;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_a0,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_a0,uVar5,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar10,uVar2,&uStack_a0,uVar6,0,0);
    return;
  }
  *(undefined4 *)(uVar5 + 0x24) = 0;
  *(undefined4 *)(uVar5 + 0x14) = 0;
  *(undefined4 *)(uVar5 + 0x18) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(uVar5 + 0x1c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(uVar5 + 0x20) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  return;
}



// ===== FAT.Activity.TypeInfo$$Clear RVA 0x2b32c84 =====

void FUN_02b42c84(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6257,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6257,0);
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
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  return;
}



// ===== FAT.Activity$$DebugEnd RVA 0x2b32ce8 =====

/* WARNING: Possible PIC construction at 0x02b43220: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02b43224) */
/* WARNING: Removing unreachable block (ram,0x02b43340) */
/* WARNING: Removing unreachable block (ram,0x02b43470) */
/* WARNING: Removing unreachable block (ram,0x02b43468) */
/* WARNING: Removing unreachable block (ram,0x02b4345c) */
/* WARNING: Removing unreachable block (ram,0x02b43454) */
/* WARNING: Removing unreachable block (ram,0x02b433d4) */
/* WARNING: Removing unreachable block (ram,0x02b43428) */
/* WARNING: Removing unreachable block (ram,0x02b43458) */
/* WARNING: Removing unreachable block (ram,0x02b4346c) */
/* WARNING: Removing unreachable block (ram,0x02b43464) */
/* WARNING: Removing unreachable block (ram,0x02b43460) */
/* WARNING: Removing unreachable block (ram,0x02b4342c) */
/* WARNING: Removing unreachable block (ram,0x02b433d8) */
/* WARNING: Removing unreachable block (ram,0x02b43474) */
/* WARNING: Removing unreachable block (ram,0x02b433dc) */
/* WARNING: Removing unreachable block (ram,0x02b43430) */
/* WARNING: Removing unreachable block (ram,0x02b433e0) */
/* WARNING: Removing unreachable block (ram,0x02b43434) */
/* WARNING: Removing unreachable block (ram,0x02b433e4) */
/* WARNING: Removing unreachable block (ram,0x02b43438) */
/* WARNING: Removing unreachable block (ram,0x02b433e8) */
/* WARNING: Removing unreachable block (ram,0x02b4343c) */
/* WARNING: Removing unreachable block (ram,0x02b433ec) */
/* WARNING: Removing unreachable block (ram,0x02b43440) */
/* WARNING: Removing unreachable block (ram,0x02b433f0) */
/* WARNING: Removing unreachable block (ram,0x02b43444) */
/* WARNING: Removing unreachable block (ram,0x02b4344c) */
/* WARNING: Removing unreachable block (ram,0x02b433f4) */
/* WARNING: Removing unreachable block (ram,0x02b43448) */
/* WARNING: Removing unreachable block (ram,0x02b43450) */
/* WARNING: Removing unreachable block (ram,0x02b433f8) */
/* WARNING: Removing unreachable block (ram,0x02b433fc) */
/* WARNING: Removing unreachable block (ram,0x02b43400) */
/* WARNING: Removing unreachable block (ram,0x02b43404) */
/* WARNING: Removing unreachable block (ram,0x02b43408) */
/* WARNING: Removing unreachable block (ram,0x02b4340c) */
/* WARNING: Removing unreachable block (ram,0x02b43410) */
/* WARNING: Removing unreachable block (ram,0x02b43418) */
/* WARNING: Removing unreachable block (ram,0x02b43414) */
/* WARNING: Removing unreachable block (ram,0x02b4341c) */
/* WARNING: Removing unreachable block (ram,0x02b43420) */
/* WARNING: Removing unreachable block (ram,0x02b43424) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b42ce8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  ushort *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int unaff_r9;
  uint unaff_r11;
  uint extraout_r12;
  undefined4 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  bool bVar17;
  byte bVar18;
  undefined8 uVar19;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_c8;
  undefined4 *puStack_c4;
  int *piStack_c0;
  undefined4 *puStack_bc;
  undefined4 *puStack_b8;
  int iStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined4 *puStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int *piStack_74;
  int aiStack_6c [7];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  int iStack_34;
  ushort *puStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar9 = (char *)(iRam02b433cc + 0x2b42d04);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(iRam02b433d0 + 0x2b42d18));
    func_0x01384978(*(undefined4 *)(iRam02b433d4 + 0x2b42d24));
    func_0x01384978(*(undefined4 *)(iRam02b433d8 + 0x2b42d30));
    func_0x01384978(*(undefined4 *)(iRam02b433dc + 0x2b42d3c));
    func_0x01384978(*(undefined4 *)(iRam02b433e0 + 0x2b42d48));
    func_0x01384978(*(undefined4 *)(iRam02b433e4 + 0x2b42d54));
    func_0x01384978(*(undefined4 *)(iRam02b433e8 + 0x2b42d60));
    func_0x01384978(*(undefined4 *)(iRam02b433ec + 0x2b42d6c));
    func_0x01384978(*(undefined4 *)(iRam02b433f0 + 0x2b42d78));
    func_0x01384978(*(undefined4 *)(iRam02b433f4 + 0x2b42d84));
    func_0x01384978(*(undefined4 *)(iRam02b433f8 + 0x2b42d90));
    func_0x01384978(*(undefined4 *)(iRam02b433fc + 0x2b42d9c));
    func_0x01384978(*(undefined4 *)(iRam02b43400 + 0x2b42da8));
    func_0x01384978(*(undefined4 *)(iRam02b43404 + 0x2b42db4));
    func_0x01384978(*(undefined4 *)(iRam02b43408 + 0x2b42dc0));
    func_0x01384978(*(undefined4 *)(iRam02b4340c + 0x2b42dcc));
    func_0x01384978(*(undefined4 *)(iRam02b43410 + 0x2b42dd8));
    func_0x01384978(*(undefined4 *)(iRam02b43414 + 0x2b42de4));
    *pcVar9 = '\x01';
  }
  uStack_7c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_78 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_74 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_28 = 0;
  iStack_2c = 0;
  puStack_30 = (ushort *)0x0;
  iStack_34 = 0;
  aiStack_6c[4] = 0;
  aiStack_6c[3] = 0;
  aiStack_6c[5] = 0;
  aiStack_6c[2] = 0;
  aiStack_6c[1] = 0;
  aiStack_6c[0] = 0;
  uStack_50 = 0;
  uStack_80 = 0;
  uStack_44 = 0;
  uStack_3c = CONCAT44(piStack_74,uStack_78);
  uStack_4c = uStack_7c;
  uStack_48 = uStack_78;
  uStack_40 = uStack_7c;
  iVar1 = func_0x0229f06c(0x7373,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7373,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
    return;
  }
  puVar13 = (undefined4 *)0x0;
  iVar1 = func_0x0467229c(param_2,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    puVar10 = (ushort *)0x0;
    puVar13 = (undefined4 *)func_0x04671308(param_2,**(undefined4 **)(iRam02b43418 + 0x2b42ebc),0);
    pcVar9 = (char *)(iRam02b4341c + 0x2b42ed4);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(iRam02b43420 + 0x2b42ee8));
      *pcVar9 = '\x01';
    }
    iVar1 = 0;
    if (param_2 != 0) {
      puVar10 = (ushort *)func_0x0466f590(param_2,0);
      iVar1 = *(int *)(param_2 + 8);
    }
    puStack_30 = puVar10;
    iStack_2c = iVar1;
    if (iVar1 == 0) {
      func_0x01384bf4();
    }
    puVar12 = (undefined4 *)(uint)*puVar10;
    if (*(int *)(**(int **)(iRam02b43424 + 0x2b42f30) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar6 = func_0x04795e38(puVar12,0);
    if (iVar6 == 0) {
      iVar6 = **(int **)(iRam02b43428 + 0x2b42f68);
      if (iVar1 == 0) {
        func_0x0484bb74(0);
      }
      iVar1 = iVar1 + -1;
      if ((*(ushort *)(*(int *)(iVar6 + 0x10) + 0xbd) & 1) == 0) {
        func_0x014001f0();
      }
      puVar10 = puVar10 + 1;
      puStack_30 = puVar10;
      iStack_2c = iVar1;
    }
    iVar1 = func_0x04822334(puVar10,iVar1,&iStack_34,0);
    if (iVar1 != 0) {
      iStack_28 = iStack_34;
      goto LAB_02b43018;
    }
    uVar8 = func_0x0362c518(&puStack_30,**(undefined4 **)(iRam02b4342c + 0x2b42fcc));
    if (*(int *)(**(int **)(iRam02b43430 + 0x2b42fe4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x02f7e364(uVar8,1,&iStack_28,**(undefined4 **)(iRam02b43434 + 0x2b43008));
    if (iVar1 != 0) goto LAB_02b43018;
    uVar8 = func_0x01384988(*(undefined4 *)(iRam02b43438 + 0x2b43254));
    uVar8 = func_0x0106f8b0(&puStack_30,uVar8);
    uVar14 = func_0x01384988(*(undefined4 *)(iRam02b4343c + 0x2b43270));
    uVar8 = func_0x046634e0(uVar14,uVar8,0);
    func_0x01384988(*(undefined4 *)(iRam02b43440 + 0x2b4328c));
    uVar14 = func_0x01384be4();
    func_0x04867a60(uVar14,uVar8,0);
    uVar2 = func_0x01384988(*(undefined4 *)(iRam02b43444 + 0x2b432ac));
    func_0x01384aa0(uVar14,uVar2);
    uVar19 = func_0x01384928();
    puVar11 = (undefined4 *)uVar19;
    if ((int)((ulonglong)uVar19 >> 0x20) != 1) {
      func_0x03f84b48(&uStack_50,**(undefined4 **)(iRam02b43468 + 0x2b43330));
      uVar16 = 1;
      uVar15 = 1;
      func_0x01459844(puVar11);
      uVar14 = 0x2b433cc;
      uVar19 = func_0x01062280();
      piVar5 = (int *)((ulonglong)uVar19 >> 0x20);
      param_1 = (int)uVar19;
      bVar17 = false;
      bVar18 = uVar16;
      if ((bool)uVar15) {
        bVar18 = 0x7800000 < extraout_r12 || extraout_r12 + 0xf8800000 < (uint)(byte)uVar16;
        unaff_r9 = extraout_r12 - (!(bool)uVar16 + 0x7800000);
        bVar17 = unaff_r9 == 0;
      }
                    /* WARNING: Could not recover jumptable at 0x02b433d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (bVar17) {
        (*(code *)((int)puVar11 + bVar18 + 0x180000))();
        return;
      }
      piStack_c0 = (int *)0x0;
                    /* WARNING: Could not recover jumptable at 0x02b43424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x02b43450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x02b43460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x02b43464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x02b4346c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x02b43470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x02b43474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      goto SUB_02b43478;
    }
    piVar5 = (int *)func_0x0145b008(puVar11);
    iVar1 = *piVar5;
    func_0x0145b0f8();
    func_0x03f84b48(&uStack_50,**(undefined4 **)(iRam02b4345c + 0x2b432fc));
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
  }
  else {
    iStack_28 = 0;
LAB_02b43018:
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar6) {
      func_0x0484e5ec(*(undefined4 *)(iVar1 + 8),0,iVar6,0);
    }
    iVar1 = *(int *)(param_1 + 0xc);
    puStack_a4 = puVar13;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03cd6fc4(&uStack_a0,iVar1,**(undefined4 **)(iRam02b43448 + 0x2b43080));
    uStack_44 = uStack_94;
    uStack_40 = uStack_90;
    uStack_50 = uStack_a0;
    uStack_4c = uStack_9c;
    uStack_48 = uStack_98;
    puVar13 = &uStack_44;
    uStack_3c = uStack_8c;
LAB_02b430a4:
    iVar1 = func_0x03f849ec(&uStack_50,**(undefined4 **)(iRam02b43454 + 0x2b430b0));
    if (iVar1 != 0) {
      aiStack_6c[5] = (undefined4)uStack_3c;
      aiStack_6c[3] = uStack_44;
      aiStack_6c[4] = uStack_40;
      func_0x04356064(aiStack_6c + 3,aiStack_6c + 1,aiStack_6c,
                      **(undefined4 **)(iRam02b4344c + 0x2b430d4));
      iVar1 = aiStack_6c[0];
      if (iStack_28 != 0) goto code_r0x02b430fc;
      goto LAB_02b4312c;
    }
    func_0x03f84b48(&uStack_50,**(undefined4 **)(iRam02b43458 + 0x2b431b0));
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar11 = &uStack_80;
  func_0x0328fe1c(puVar11,iVar1,**(undefined4 **)(iRam02b43460 + 0x2b431dc));
  uVar8 = 1;
  puVar12 = *(undefined4 **)(iRam02b43464 + 0x2b431f4);
  iVar1 = func_0x03f5f428(puVar11,*puVar12);
  piVar5 = piStack_74;
  if (iVar1 == 0) {
    func_0x03f5f424(&uStack_80,**(undefined4 **)(iRam02b4346c + 0x2b43238));
    return;
  }
  FUN_02b41428(param_1,piStack_74,1);
  uVar14 = 0x2b43224;
  piStack_c0 = piVar5;
SUB_02b43478:
  pcVar9 = (char *)(_UNK_02b436a8 + 0x2b43494);
  uStack_c8 = uVar8;
  puStack_c4 = puVar11;
  puStack_bc = puVar12;
  puStack_b8 = puVar13;
  iStack_b4 = unaff_r9;
  uStack_b0 = unaff_r11;
  uStack_ac = uVar14;
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b436ac + 0x2b434a8));
    func_0x01384978(*(undefined4 *)(_UNK_02b436b0 + 0x2b434b4));
    func_0x01384978(*(undefined4 *)(_UNK_02b436b4 + 0x2b434c0));
    func_0x01384978(*(undefined4 *)(_UNK_02b436b8 + 0x2b434cc));
    func_0x01384978(*(undefined4 *)(_UNK_02b436bc + 0x2b434d8));
    func_0x01384978(*(undefined4 *)(_UNK_02b436c0 + 0x2b434e4));
    *pcVar9 = '\x01';
  }
  uStack_d4 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  iVar1 = func_0x0229f06c(0x1a6,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03df9f5c(iVar1,piVar5,&uStack_d8,**(undefined4 **)(_UNK_02b436c4 + 0x2b43568));
    uVar8 = uStack_d0;
    uVar14 = uStack_d4;
    uVar2 = uStack_d8;
    if (iVar1 == 0) {
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
        uVar2 = func_0x02b449f8(0);
        func_0x01384bf0();
        uVar14 = func_0x02b4762c(0);
        func_0x01384bf0();
      }
      else {
        uVar2 = func_0x02b449f8(piVar5);
        uVar14 = func_0x02b4762c(piVar5);
      }
      uVar8 = func_0x02b3c4a4(piVar5);
      uStack_dc = uVar2;
      uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_02b436c8 + 0x2b435ec),&uStack_dc);
      uStack_e0 = uVar8;
      uVar4 = func_0x01384abc(**(undefined4 **)(_UNK_02b436cc + 0x2b43608),&uStack_e0);
      uVar3 = func_0x0467277c(**(undefined4 **)(_UNK_02b436d0 + 0x2b43624),
                              **(undefined4 **)(_UNK_02b436d4 + 0x2b43630),uVar3,uVar4);
      if (*(int *)(**(int **)(_UNK_02b436d8 + 0x2b4364c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar3,0);
    }
    func_0x02b4833c(param_1,uVar2,uVar14,uVar8);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar5 + 0x1a8))(piVar5,*(undefined4 *)(*piVar5 + 0x1ac));
  }
  else {
    iVar1 = func_0x0229f13c(0x1a6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,piVar5,0);
  }
  return;
code_r0x02b430fc:
  if (aiStack_6c[0] == 0) {
    func_0x01384bf0();
  }
  iVar6 = func_0x02b3c4a4(iVar1);
  if (puStack_a4 == (undefined4 *)(uint)(iVar6 == iStack_28)) {
LAB_02b4312c:
    iVar6 = *(int *)(param_1 + 0x2c);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar6 + 8);
    unaff_r11 = *(uint *)(iVar6 + 0xc);
    piVar5 = *(int **)(iRam02b43450 + 0x2b4315c);
    *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
    unaff_r9 = *piVar5;
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    if (unaff_r11 < *(uint *)(iVar7 + 0xc)) {
      *(uint *)(iVar6 + 0xc) = unaff_r11 + 1;
      *(int *)(iVar7 + unaff_r11 * 4 + 0x10) = iVar1;
    }
    else {
      func_0x0328f170(iVar6,iVar1,*(undefined4 *)(*(int *)(*(int *)(unaff_r9 + 0x10) + 0x60) + 0x38)
                     );
    }
  }
  goto LAB_02b430a4;
}



// ===== FAT.Activity$$RemoveActive RVA 0x2b33478 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b43478(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_02b436a8 + 0x2b43494);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b436ac + 0x2b434a8));
    func_0x01384978(*(undefined4 *)(_UNK_02b436b0 + 0x2b434b4));
    func_0x01384978(*(undefined4 *)(_UNK_02b436b4 + 0x2b434c0));
    func_0x01384978(*(undefined4 *)(_UNK_02b436b8 + 0x2b434cc));
    func_0x01384978(*(undefined4 *)(_UNK_02b436bc + 0x2b434d8));
    func_0x01384978(*(undefined4 *)(_UNK_02b436c0 + 0x2b434e4));
    *pcVar7 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x1a6,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03df9f5c(iVar1,param_2,&uStack_30,**(undefined4 **)(_UNK_02b436c4 + 0x2b43568));
    uVar4 = uStack_28;
    uVar3 = uStack_2c;
    uVar2 = uStack_30;
    if (iVar1 == 0) {
      if (param_2 == (int *)0x0) {
        func_0x01384bf0();
        uVar2 = func_0x02b449f8(0);
        func_0x01384bf0();
        uVar3 = func_0x02b4762c(0);
        func_0x01384bf0();
      }
      else {
        uVar2 = func_0x02b449f8(param_2);
        uVar3 = func_0x02b4762c(param_2);
      }
      uVar4 = func_0x02b3c4a4(param_2);
      uStack_34 = uVar2;
      uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_02b436c8 + 0x2b435ec),&uStack_34);
      uStack_38 = uVar4;
      uVar6 = func_0x01384abc(**(undefined4 **)(_UNK_02b436cc + 0x2b43608),&uStack_38);
      uVar5 = func_0x0467277c(**(undefined4 **)(_UNK_02b436d0 + 0x2b43624),
                              **(undefined4 **)(_UNK_02b436d4 + 0x2b43630),uVar5,uVar6,0);
      if (*(int *)(**(int **)(_UNK_02b436d8 + 0x2b4364c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar5,0);
    }
    func_0x02b4833c(param_1,uVar2,uVar3,uVar4,param_2);
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined4 *)(*param_2 + 0x1ac));
  }
  else {
    iVar1 = func_0x0229f13c(0x1a6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Activity$$IsActive RVA 0x2b336dc =====

/* WARNING: Possible PIC construction at 0x02b43790: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02b43794) */
/* WARNING: Removing unreachable block (ram,0x02b437a8) */
/* WARNING: Removing unreachable block (ram,0x02b437b4) */
/* WARNING: Removing unreachable block (ram,0x02b437b8) */
/* WARNING: Removing unreachable block (ram,0x02b4379c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02b436dc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_02b437d4 + 0x2b436fc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b437d8 + 0x2b43710));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1ac,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1ac,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217c538(iVar1,param_1,param_2,param_3,0);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x03cd72c4(iVar1,param_2,param_3,
                          *(undefined4 *)
                           (*(int *)(*(int *)(**(int **)(_UNK_02b437dc + 0x2b43790) + 0x10) + 0x60)
                           + 0x84));
  return ~uVar2 >> 0x1f;
}



// ===== FAT.Activity$$IsActive RVA 0x2b337e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b437e0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iStack_14;
  
  pcVar4 = (char *)(_UNK_02b438d8 + 0x2b437fc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b438dc + 0x2b43810));
    func_0x01384978(*(undefined4 *)(_UNK_02b438e0 + 0x2b4381c));
    *pcVar4 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x59d,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x03dd1078(iVar1,param_2,&iStack_14,**(undefined4 **)(_UNK_02b438e4 + 0x2b43898));
    iVar1 = iStack_14;
    uVar2 = 0;
    if (iVar3 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0(0);
      }
      uVar2 = 0;
      if (0 < *(int *)(iVar1 + 0xc)) {
        uVar2 = 1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x59d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02176ae0(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.Activity$$IsExpire RVA 0x2b338e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02b438e8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_02b439b8 + 0x2b43908);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b439bc + 0x2b4391c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1cf,0);
  if (iVar1 == 0) {
    if (param_3 == 0) {
      iVar1 = *(int *)(param_1 + 0x38);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x03d61794(iVar1,param_2,
                              *(undefined4 *)
                               (*(int *)(*(int *)(**(int **)(_UNK_02b439c0 + 0x2b439a8) + 0x10) +
                                        0x60) + 0x84));
      return ~uVar2 >> 0x1f;
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0x1cf,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217c538(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.Activity$$IsInvalid RVA 0x2b339c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b439c4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_02b43a90 + 0x2b439e4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b43a94 + 0x2b439fc));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1c9,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03cd8a44(iVar1,param_2,param_3,param_4,**(undefined4 **)(_UNK_02b43a98 + 0x2b43a7c));
  }
  else {
    iVar1 = func_0x0229f13c(0x1c9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217d4c0(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.Activity$$IsFirst RVA 0x2b33a9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02b43a9c(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iStack_14;
  
  pcVar4 = (char *)(_UNK_02b43b88 + 0x2b43ab8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b43b8c + 0x2b43acc));
    *pcVar4 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x6299,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x03dd1078(iVar1,param_2,&iStack_14,**(undefined4 **)(_UNK_02b43b90 + 0x2b43b48));
    iVar1 = iStack_14;
    uVar2 = 1;
    if (iVar3 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0(1);
      }
      uVar2 = (uint)(*(int *)(iVar1 + 0x20) == 0 && *(int *)(iVar1 + 0x24) == 0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6299,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02176ae0(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.Activity$$RecordOf RVA 0x2b33b94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b43b94(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_02b43c58 + 0x2b43bb0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b43c5c + 0x2b43bc4));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  uStack_18 = 0;
  iVar1 = func_0x0229f06c(0x7374,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d62e04(iVar1,param_2,&uStack_18,**(undefined4 **)(_UNK_02b43c60 + 0x2b43c44));
  }
  else {
    iVar1 = func_0x0229f13c(0x7374,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_18 = func_0x021c41b4(iVar1,param_1,param_2,0);
  }
  return uStack_18;
}



// ===== FAT.Activity$$LookupAny RVA 0x2b33c64 =====

undefined4 FUN_02b43c64(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x349,0);
  if (iVar1 == 0) {
    FUN_02b3c518(param_1,param_2,&uStack_14);
  }
  else {
    iVar1 = func_0x0229f13c(0x349,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x021857c0(iVar1,param_1,param_2,0);
  }
  return uStack_14;
}



// ===== FAT.Activity$$LookupConf RVA 0x2b33ce0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b43ce0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_02b43df8 + 0x2b43d00);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b43dfc + 0x2b43d14));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7375,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7375,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0224d9f8(iVar1,param_1,param_2,param_3,0);
    return;
  }
  piVar5 = *(int **)(param_1 + 0x54);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar5;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_02b43e00 + 0x2b43d90)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xf8);
        goto LAB_02b43dd8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_02b43e00 + 0x2b43d90),7);
LAB_02b43dd8:
                    /* WARNING: Could not recover jumptable at 0x02b43df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar5,param_2,param_3,puVar2[1]);
  return;
}



// ===== FAT.Activity$$LookupAny RVA 0x2b33e04 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b43e04(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  int aiStack_74 [7];
  undefined4 uStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined4 uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar4 = (char *)(_UNK_02b4423c + 0x2b43e28);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b44240 + 0x2b43e3c));
    func_0x01384978(*(undefined4 *)(_UNK_02b44244 + 0x2b43e48));
    func_0x01384978(*(undefined4 *)(_UNK_02b44248 + 0x2b43e54));
    func_0x01384978(*(undefined4 *)(_UNK_02b4424c + 0x2b43e60));
    func_0x01384978(*(undefined4 *)(_UNK_02b44250 + 0x2b43e6c));
    func_0x01384978(*(undefined4 *)(_UNK_02b44254 + 0x2b43e78));
    func_0x01384978(*(undefined4 *)(_UNK_02b44258 + 0x2b43e84));
    func_0x01384978(*(undefined4 *)(_UNK_02b4425c + 0x2b43e90));
    func_0x01384978(*(undefined4 *)(_UNK_02b44260 + 0x2b43e9c));
    func_0x01384978(*(undefined4 *)(_UNK_02b44264 + 0x2b43ea8));
    *pcVar4 = '\x01';
  }
  uStack_54 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_58 = 0;
  uStack_4c = (ulonglong)uStack_54 << 0x20;
  uStack_44 = CONCAT44(iStack_2c,uStack_50);
  aiStack_74[4] = 0;
  aiStack_74[3] = 0;
  aiStack_74[5] = 0;
  aiStack_74[2] = 0;
  aiStack_74[1] = 0;
  aiStack_74[0] = 0;
  uStack_38 = 0;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  iVar1 = func_0x0229f06c(0x7376,0);
  if (iVar1 == 0) {
    if (param_3 < 1) {
      uVar2 = 0;
      *param_4 = 0;
    }
    else {
      iVar1 = FUN_02b404cc(param_1,param_2);
      if ((iVar1 == 0) || (*(int *)(iVar1 + 0xc) < 1)) {
LAB_02b44000:
        iVar1 = *(int *)(param_1 + 0x48);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x03cd6fc4(&uStack_90,iVar1,**(undefined4 **)(_UNK_02b4427c + 0x2b44028));
        uStack_4c._0_4_ = iStack_84;
        uStack_4c._4_4_ = uStack_80;
        uStack_58 = uStack_90;
        uStack_54 = uStack_8c;
        uStack_50 = uStack_88;
        uStack_44 = uStack_7c;
        puVar6 = *(undefined4 **)(_UNK_02b44280 + 0x2b44060);
        puVar5 = *(undefined4 **)(_UNK_02b44284 + 0x2b44068);
        do {
          do {
            iVar1 = func_0x03f849ec(&uStack_58,*puVar6);
            if (iVar1 == 0) {
              func_0x03f84b48(&uStack_58,**(undefined4 **)(_UNK_02b44294 + 0x2b4410c));
              *param_4 = 0;
              return 0;
            }
            aiStack_74[5] = (undefined4)uStack_44;
            aiStack_74[3] = (int)uStack_4c;
            aiStack_74[4] = uStack_4c._4_4_;
            func_0x04356064(aiStack_74 + 3,aiStack_74 + 1,aiStack_74,*puVar5);
            iVar1 = aiStack_74[0];
            if (aiStack_74[0] == 0) {
              func_0x01384bf0();
            }
            iVar3 = func_0x02b3c4a4(iVar1);
          } while (iVar3 != param_2);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x02b4429c(iVar1);
        } while (iVar3 != param_3);
        *param_4 = iVar1;
        func_0x03f84b48(&uStack_58,**(undefined4 **)(_UNK_02b44288 + 0x2b440f0));
      }
      else {
        func_0x0328fe1c(&uStack_90,iVar1,**(undefined4 **)(_UNK_02b44268 + 0x2b43f78));
        uStack_38 = uStack_90;
        uStack_34 = uStack_8c;
        uStack_30 = uStack_88;
        iStack_2c = iStack_84;
        puVar5 = *(undefined4 **)(_UNK_02b4426c + 0x2b43f94);
        do {
          iVar3 = func_0x03f5f428(&uStack_38,*puVar5);
          iVar1 = iStack_2c;
          if (iVar3 == 0) {
            func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_02b44278 + 0x2b43ff8));
            goto LAB_02b44000;
          }
          if (iStack_2c == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x02b4429c(iVar1);
        } while (iVar3 != param_3);
        *param_4 = iVar1;
        func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_02b44270 + 0x2b43fd4));
      }
      uVar2 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7376,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0224db50(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.Activity$$Lookup RVA 0x2b34310 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b44310(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_02b44458 + 0x2b44330);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4445c + 0x2b44344));
    func_0x01384978(*(undefined4 *)(_UNK_02b44460 + 0x2b44350));
    *pcVar4 = '\x01';
  }
  uStack_24 = 0;
  uStack_28 = 0;
  iVar3 = func_0x0229f06c(0x1ad,0);
  if (iVar3 == 0) {
    func_0x038fd264(&uStack_28,param_2,0,**(undefined4 **)(_UNK_02b44464 + 0x2b443c8));
    uVar2 = uStack_24;
    uVar1 = uStack_28;
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    puVar5 = *(undefined4 **)(_UNK_02b44468 + 0x2b44400);
    iVar3 = func_0x03cd8a44(iVar3,uVar1,uVar2,param_3,*puVar5);
    uVar2 = uStack_24;
    uVar1 = uStack_28;
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x48);
      if (iVar3 == 0) {
        func_0x01384bf0(1);
      }
      func_0x03cd8a44(iVar3,uVar1,uVar2,param_3,*puVar5);
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x1ad,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0217c670(iVar3,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Activity$$Lookup RVA 0x2b3446c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b4446c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_02b445b4 + 0x2b4448c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b445b8 + 0x2b444a0));
    func_0x01384978(*(undefined4 *)(_UNK_02b445bc + 0x2b444ac));
    *pcVar4 = '\x01';
  }
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_24 = 0;
  iVar3 = func_0x0229f06c(0x206,0);
  if (iVar3 == 0) {
    func_0x038fd264(&uStack_20,param_2,param_3,**(undefined4 **)(_UNK_02b445c0 + 0x2b44528));
    uVar2 = uStack_1c;
    uVar1 = uStack_20;
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    puVar5 = *(undefined4 **)(_UNK_02b445c4 + 0x2b44560);
    iVar3 = func_0x03cd8a44(iVar3,uVar1,uVar2,&uStack_24,*puVar5);
    uVar2 = uStack_1c;
    uVar1 = uStack_20;
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x48);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x03cd8a44(iVar3,uVar1,uVar2,&uStack_24,*puVar5);
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x206,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_24 = func_0x0217f508(iVar3,param_1,param_2,param_3,0);
  }
  return uStack_24;
}



// ===== FAT.Activity$$LookupWithEventId RVA 0x2b345c8 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b445c8(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  int aiStack_5c [7];
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  
  pcVar4 = (char *)(_UNK_02b449b0 + 0x2b445e8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b449b4 + 0x2b445fc));
    func_0x01384978(*(undefined4 *)(_UNK_02b449b8 + 0x2b44608));
    func_0x01384978(*(undefined4 *)(_UNK_02b449bc + 0x2b44614));
    func_0x01384978(*(undefined4 *)(_UNK_02b449c0 + 0x2b44620));
    func_0x01384978(*(undefined4 *)(_UNK_02b449c4 + 0x2b4462c));
    *pcVar4 = '\x01';
  }
  uStack_3c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  aiStack_5c[4] = 0;
  uStack_40 = 0;
  uStack_34 = (ulonglong)uStack_3c << 0x20;
  uStack_2c = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),uStack_38);
  aiStack_5c[3] = 0;
  aiStack_5c[5] = 0;
  aiStack_5c[2] = 0;
  aiStack_5c[1] = 0;
  aiStack_5c[0] = 0;
  iVar1 = func_0x0229f06c(0x656c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x656c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217c670(iVar1,param_1,param_2,param_3,0);
    return uVar2;
  }
  *param_3 = 0;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03cd6fc4(&uStack_78,iVar1,**(undefined4 **)(_UNK_02b449c8 + 0x2b446ec));
  uStack_34._0_4_ = uStack_6c;
  uStack_34._4_4_ = uStack_68;
  uStack_40 = uStack_78;
  uStack_3c = uStack_74;
  uStack_38 = uStack_70;
  uStack_2c = uStack_64;
  puVar5 = *(undefined4 **)(_UNK_02b449cc + 0x2b44724);
  do {
    iVar1 = func_0x03f849ec(&uStack_40,*puVar5);
    if (iVar1 == 0) {
      func_0x03f84b48(&uStack_40,**(undefined4 **)(_UNK_02b449e4 + 0x2b44798));
      iVar1 = *(int *)(param_1 + 0x48);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03cd6fc4(&uStack_78,iVar1,**(undefined4 **)(_UNK_02b449dc + 0x2b447c8));
      uStack_34._0_4_ = uStack_6c;
      uStack_34._4_4_ = uStack_68;
      uStack_40 = uStack_78;
      uStack_3c = uStack_74;
      uStack_38 = uStack_70;
      uStack_2c = uStack_64;
      do {
        iVar1 = func_0x03f849ec(&uStack_40,*puVar5);
        if (iVar1 == 0) {
          func_0x03f84b48(&uStack_40,**(undefined4 **)(_UNK_02b449e0 + 0x2b44884));
          return 0;
        }
        aiStack_5c[5] = (undefined4)uStack_2c;
        aiStack_5c[3] = (undefined4)uStack_34;
        aiStack_5c[4] = uStack_34._4_4_;
        func_0x04356064(aiStack_5c + 3,aiStack_5c + 1,aiStack_5c,
                        **(undefined4 **)(_UNK_02b449ec + 0x2b4481c));
        iVar1 = aiStack_5c[0];
        if (aiStack_5c[0] == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x02b449f8(iVar1);
      } while (iVar3 != param_2);
      *param_3 = iVar1;
      goto LAB_02b4485c;
    }
    aiStack_5c[5] = (undefined4)uStack_2c;
    aiStack_5c[3] = (undefined4)uStack_34;
    aiStack_5c[4] = uStack_34._4_4_;
    func_0x04356064(aiStack_5c + 3,aiStack_5c + 1,aiStack_5c,
                    **(undefined4 **)(_UNK_02b449d0 + 0x2b44748));
    iVar1 = aiStack_5c[0];
    if (aiStack_5c[0] == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x02b449f8(iVar1);
  } while (iVar3 != param_2);
  *param_3 = iVar1;
LAB_02b4485c:
  func_0x03f84b48(&uStack_40,**(undefined4 **)(_UNK_02b449d4 + 0x2b44868));
  return 1;
}



// ===== FAT.Activity$$LookupWithEventId RVA 0x2b34a6c =====

undefined4 FUN_02b44a6c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x656b,0);
  if (iVar1 == 0) {
    FUN_02b445c8(param_1,param_2,&uStack_14);
  }
  else {
    iVar1 = func_0x0229f13c(0x656b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x0223f538(iVar1,param_1,param_2,0);
  }
  return uStack_14;
}



// ===== FAT.Activity$$GroupOf RVA 0x2b34ae8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b44ae8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
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
  
  iVar1 = func_0x0229f06c(0x1a3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1a3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_0217c428 + 0x217c334);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0217c42c + 0x217c348),param_1,param_2,0);
      *pcVar6 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
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
    uVar5 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0217c430 + 0x217c418));
    return uVar5;
  }
  if (100 < param_2) {
    if (0x75 < param_2) {
      switch(param_2) {
      case 0x76:
      case 0x7b:
      case 0x7f:
        goto LAB_02b44d50;
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
      case 0x7c:
      case 0x7d:
        goto LAB_02b44d14;
      case 0x7e:
LAB_02b44de4:
        return *(undefined4 *)(param_1 + 0x28);
      default:
        switch(param_2) {
        case 0x8b:
        case 0x8f:
          goto LAB_02b44de4;
        default:
          goto LAB_02b44d14;
        case 0x8d:
        case 0x90:
          goto LAB_02b44d50;
        }
      }
    }
    uVar2 = param_2 - 0x66;
    if (uVar2 < 0x10) {
      if ((1 << (uVar2 & 0xff) & 0x231U) != 0) goto LAB_02b44d50;
      if ((1 << (uVar2 & 0xff) & 0x8100U) != 0) goto LAB_02b44de4;
    }
    goto LAB_02b44d14;
  }
  if (0x5a < param_2) {
    if (param_2 != 0x5f) {
      if (param_2 == 0x61) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0xac);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        return *(undefined4 *)(iVar1 + 0x60);
      }
      if (param_2 != 100) goto LAB_02b44d14;
    }
LAB_02b44d50:
    return *(undefined4 *)(param_1 + 0x1c);
  }
  switch(param_2) {
  case 1:
  case 2:
  case 4:
  case 5:
  case 0x11:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x19:
  case 0x1b:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x24:
  case 0x29:
  case 0x2c:
  case 0x32:
  case 0x37:
  case 0x39:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x46:
    goto LAB_02b44d50;
  case 6:
    return *(undefined4 *)(param_1 + 0x20);
  case 7:
  case 8:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xa8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    return *(undefined4 *)(iVar1 + 0x7c);
  case 9:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xac);
    break;
  case 0x12:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xb0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    return *(undefined4 *)(iVar1 + 8);
  case 0x1a:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc0);
    break;
  case 0x23:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xcc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    return *(undefined4 *)(iVar1 + 0x3c);
  case 0x25:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc4);
    break;
  case 0x2b:
  case 0x31:
  case 0x35:
  case 0x36:
  case 0x3c:
  case 0x45:
  case 0x49:
    goto LAB_02b44de4;
  default:
    uVar2 = param_2 - 0x50;
    if (uVar2 < 0xb) {
      if ((1 << (uVar2 & 0xff) & 0x260U) != 0) goto LAB_02b44de4;
      if ((1 << (uVar2 & 0xff) & 0x481U) != 0) goto LAB_02b44d50;
    }
  case 3:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x13:
  case 0x18:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x2a:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x33:
  case 0x34:
  case 0x38:
  case 0x3a:
  case 0x3b:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x47:
  case 0x48:
LAB_02b44d14:
    return *(undefined4 *)(param_1 + 0x24);
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0xc);
}



// ===== FAT.Activity$$LevelValid RVA 0x2b34ec4 =====

undefined4 FUN_02b44ec4(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x2ee4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2ee4,0);
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
    func_0x01485238(&uStack_38,param_1,0);
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
    uVar4 = func_0x0245496c(&uStack_38,0,0);
    return uVar4;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x48);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 0;
  iVar1 = func_0x01dd2b98(iVar1,0);
  if (param_1 <= iVar1) {
    uVar4 = 0;
    if (param_2 == 0) {
      param_2 = 0x7fffffff;
    }
    if (iVar1 < param_2) {
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ===== FAT.Activity$$TypeLimit RVA 0x2b34f74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b44f74(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  int iStack_18;
  int iStack_14;
  
  pcVar6 = (char *)(_UNK_02b4515c + 0x2b44f90);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b45160 + 0x2b44fa4));
    func_0x01384978(*(undefined4 *)(_UNK_02b45164 + 0x2b44fb0));
    func_0x01384978(*(undefined4 *)(_UNK_02b45168 + 0x2b44fbc));
    *pcVar6 = '\x01';
  }
  iStack_14 = 0;
  iStack_18 = 0;
  iVar1 = func_0x0229f06c(0x1ca,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x03dd1078(iVar1,param_2,&iStack_14,**(undefined4 **)(_UNK_02b4516c + 0x2b45040));
    iVar1 = iStack_14;
    uVar2 = 0;
    if (iVar3 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = iStack_14;
      if (*(int *)(iVar1 + 0x24) != 0) {
        if (iStack_14 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar3 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar3 = iStack_14;
        if (*(char *)(iVar1 + 0x1e) == '\0') {
          iVar5 = *(int *)(param_1 + 0x14);
          if (iStack_14 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar3 + 8);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          uVar2 = *(undefined4 *)(iVar3 + 0xc);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar4 = func_0x03dd1078(iVar5,uVar2,&iStack_18,
                                  **(undefined4 **)(_UNK_02b45170 + 0x2b45118));
          iVar5 = iStack_18;
          iVar3 = 0;
          if (iVar4 != 0) {
            if (iStack_18 == 0) {
              func_0x01384bf0();
            }
            iVar3 = *(int *)(iVar5 + 0xc);
          }
          bVar7 = SBORROW4(iVar3,*(int *)(iVar1 + 0x24));
          iVar3 = iVar3 - *(int *)(iVar1 + 0x24);
        }
        else {
          if (iStack_14 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar3 + 0x14);
          bVar7 = SBORROW4(iVar3,*(int *)(iVar1 + 0x24));
          iVar3 = iVar3 - *(int *)(iVar1 + 0x24);
        }
        uVar2 = 0;
        if (iVar3 < 0 == bVar7) {
          uVar2 = 1;
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x1ca,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02176ae0(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.Activity$$Invalid RVA 0x2b35174 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b45174(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_02b452e0 + 0x2b45194);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b452e4 + 0x2b451ac));
    func_0x01384978(*(undefined4 *)(_UNK_02b452e8 + 0x2b451b8));
    func_0x01384978(*(undefined4 *)(_UNK_02b452ec + 0x2b451c4));
    func_0x01384978(*(undefined4 *)(_UNK_02b452f0 + 0x2b451d0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1cb,0);
  if (iVar1 == 0) {
    uVar2 = func_0x046634e0(**(undefined4 **)(_UNK_02b452f4 + 0x2b4524c),param_5,0);
    if (*(int *)(**(int **)(_UNK_02b452f8 + 0x2b45260) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2944(uVar2,0);
    iVar1 = *(int *)(param_2 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03cd6a44(iVar1,param_3,param_4,param_5,**(undefined4 **)(_UNK_02b452fc + 0x2b452a8));
    puVar3 = *(undefined4 **)(_UNK_02b45300 + 0x2b452c8);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x038f3b0c(param_1,0,param_5,*puVar3);
  }
  else {
    iVar1 = func_0x0229f13c(0x1cb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217d64c(&uStack_28,iVar1,param_2,param_3,param_4,param_5,0);
    *param_1 = uStack_28;
    param_1[1] = uStack_24;
  }
  return;
}



// ===== FAT.Activity$$TryAddTo RVA 0x2b35304 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b45304(uint *param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  uint uStack_48;
  uint uStack_44;
  undefined4 uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_02b4555c + 0x2b45324);
  uStack_28 = param_9;
  uStack_2c = param_8;
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b45560 + 0x2b4534c));
    func_0x01384978(*(undefined4 *)(_UNK_02b45564 + 0x2b45358));
    func_0x01384978(*(undefined4 *)(_UNK_02b45568 + 0x2b45364));
    func_0x01384978(*(undefined4 *)(_UNK_02b4556c + 0x2b45370));
    func_0x01384978(*(undefined4 *)(_UNK_02b45570 + 0x2b4537c));
    *pcVar6 = '\x01';
  }
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x735a,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02b439c4(param_2,param_4,param_5,&uStack_30);
    if (iVar1 == 0) {
      piVar2 = (int *)FUN_02b44ae8(param_2,param_6);
      if (piVar2 == (int *)0x0) {
        uStack_3c = param_6;
        uVar4 = func_0x01384abc(**(undefined4 **)(_UNK_02b45578 + 0x2b454e4),&uStack_3c);
        uStack_34 = param_5;
        uStack_38 = param_4;
        uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_02b4557c + 0x2b45500),&uStack_38);
        uVar4 = func_0x0467277c(**(undefined4 **)(_UNK_02b45580 + 0x2b45520),
                                **(undefined4 **)(_UNK_02b45584 + 0x2b4552c),uVar4,uVar3,0);
        FUN_02b45174(&uStack_48,param_2,param_4,param_5,uVar4);
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        goto LAB_02b45400;
      }
      (**(code **)(*piVar2 + 0xe8))
                (&uStack_38,piVar2,param_3,param_2,param_4,param_5,param_6,param_7,&uStack_2c,
                 *(undefined4 *)(*piVar2 + 0xec));
      uStack_38 = uStack_38 & 1;
      puVar5 = *(undefined4 **)(_UNK_02b45588 + 0x2b454bc);
      *param_1 = 0;
      param_1[1] = 0;
      uVar4 = *puVar5;
    }
    else {
      uStack_38 = 0;
      uVar4 = **(undefined4 **)(_UNK_02b45574 + 0x2b45438);
      *param_1 = 0;
      param_1[1] = 0;
      uStack_34 = uStack_30;
    }
    func_0x038f3b0c(param_1,uStack_38,uStack_34,uVar4);
  }
  else {
    iVar1 = func_0x0229f13c(0x735a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0224d814(&uStack_38,iVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                    ,0);
LAB_02b45400:
    *param_1 = uStack_38;
    param_1[1] = uStack_34;
  }
  return;
}



// ===== FAT.Activity$$CheckEnd RVA 0x2b3558c =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02b4558c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined4 *puVar15;
  bool bVar16;
  undefined8 uVar17;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  int iStack_60;
  int aiStack_5c [7];
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  
  pcVar10 = (char *)(_UNK_02b45d1c + 0x2b455a4);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b45d20 + 0x2b455b8));
    func_0x01384978(*(undefined4 *)(_UNK_02b45d24 + 0x2b455c4));
    func_0x01384978(*(undefined4 *)(_UNK_02b45d28 + 0x2b455d0));
    func_0x01384978(*(undefined4 *)(_UNK_02b45d2c + 0x2b455dc));
    func_0x01384978(*(undefined4 *)(_UNK_02b45d30 + 0x2b455e8));
    func_0x01384978(*(undefined4 *)(_UNK_02b45d34 + 0x2b455f4));
    func_0x01384978(*(undefined4 *)(_UNK_02b45d38 + 0x2b45600));
    func_0x01384978(*(undefined4 *)(_UNK_02b45d3c + 0x2b4560c));
    func_0x01384978(*(undefined4 *)(_UNK_02b45d40 + 0x2b45618));
    func_0x01384978(*(undefined4 *)(_UNK_02b45d44 + 0x2b45624));
    func_0x01384978(*(undefined4 *)(_UNK_02b45d48 + 0x2b45630));
    *pcVar10 = '\x01';
  }
  uStack_3c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_40 = 0;
  uStack_34 = (ulonglong)uStack_3c << 0x20;
  uStack_2c = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),uStack_38);
  aiStack_5c[4] = 0;
  aiStack_5c[3] = 0;
  aiStack_5c[5] = 0;
  aiStack_5c[2] = 0;
  aiStack_5c[1] = 0;
  aiStack_5c[0] = 0;
  iStack_60 = 0;
  uStack_64 = 0;
  iVar1 = func_0x0229f06c(0x1aa,0);
  if (iVar1 == 0) {
    uVar17 = func_0x01c34eb8(0);
    iVar1 = (int)((ulonglong)uVar17 >> 0x20);
    uVar8 = (uint)uVar17;
    iVar11 = *(int *)(param_1 + 0x2c);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar11 + 0xc);
    *(undefined4 *)(iVar11 + 0xc) = 0;
    *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
    if (0 < iVar7) {
      func_0x0484e5ec(*(undefined4 *)(iVar11 + 8),0,iVar7,0);
    }
    iVar11 = *(int *)(param_1 + 0x30);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar11 + 0xc);
    *(undefined4 *)(iVar11 + 0xc) = 0;
    *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
    if (0 < iVar7) {
      func_0x0484e5ec(*(undefined4 *)(iVar11 + 8),0,iVar7,0);
    }
    iVar11 = *(int *)(param_1 + 0xc);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    func_0x03cd6fc4(&uStack_80,iVar11,**(undefined4 **)(_UNK_02b45d4c + 0x2b45768));
    uStack_40 = uStack_80;
    uStack_3c = uStack_7c;
    uStack_38 = uStack_78;
    uStack_34._0_4_ = uStack_74;
    uStack_34._4_4_ = uStack_70;
    uStack_2c = uStack_6c;
    while (iVar11 = func_0x03f849ec(&uStack_40,**(undefined4 **)(_UNK_02b45d60 + 0x2b45798)),
          iVar11 != 0) {
      aiStack_5c[3] = (undefined4)uStack_34;
      aiStack_5c[4] = uStack_34._4_4_;
      aiStack_5c[5] = (undefined4)uStack_2c;
      func_0x04356064(aiStack_5c + 3,aiStack_5c + 1,aiStack_5c,
                      **(undefined4 **)(_UNK_02b45d50 + 0x2b457c0));
      iVar11 = aiStack_5c[0];
      iVar7 = *(int *)(param_1 + 0x2c);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar12 = *(int *)(iVar7 + 8);
      uVar13 = *(uint *)(iVar7 + 0xc);
      piVar6 = *(int **)(_UNK_02b45d54 + 0x2b4580c);
      *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
      iVar14 = *piVar6;
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      if (uVar13 < *(uint *)(iVar12 + 0xc)) {
        *(uint *)(iVar7 + 0xc) = uVar13 + 1;
        *(int *)(iVar12 + uVar13 * 4 + 0x10) = iVar11;
      }
      else {
        func_0x0328f170(iVar7,iVar11,
                        *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x10) + 0x60) + 0x38));
      }
      piVar6 = *(int **)(param_1 + 0x54);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x02b449f8(iVar11);
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar7 = *piVar6;
      uVar13 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (uVar13 != 0) {
        piVar9 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_02b45d58 + 0x2b45888)) {
            puVar3 = (undefined4 *)(iVar7 + *piVar9 * 8 + 0xf8);
            goto LAB_02b458d0;
          }
          uVar13 = uVar13 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar13 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02b45d58 + 0x2b45888),7);
LAB_02b458d0:
      iVar12 = (*(code *)*puVar3)(piVar6,uVar2,&iStack_60,puVar3[1]);
      iVar7 = iStack_60;
      if (iVar12 != 0) {
        if (iStack_60 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar7 + 0x1c) != 0) {
          iVar7 = *(int *)(param_1 + 0x30);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          iVar12 = *(int *)(iVar7 + 8);
          uVar13 = *(uint *)(iVar7 + 0xc);
          piVar6 = *(int **)(_UNK_02b45d5c + 0x2b4593c);
          *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
          iVar14 = *piVar6;
          if (iVar12 == 0) {
            func_0x01384bf0();
          }
          if (uVar13 < *(uint *)(iVar12 + 0xc)) {
            *(uint *)(iVar7 + 0xc) = uVar13 + 1;
            *(int *)(iVar12 + uVar13 * 4 + 0x10) = iVar11;
          }
          else {
            func_0x0328f170(iVar7,iVar11,
                            *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x10) + 0x60) + 0x38));
          }
        }
      }
    }
    func_0x03f84b48(&uStack_40,**(undefined4 **)(_UNK_02b45d64 + 0x2b45990));
    iVar11 = 0;
    puVar3 = *(undefined4 **)(_UNK_02b45d6c + 0x2b459a8);
    while( true ) {
      iVar7 = *(int *)(param_1 + 0x2c);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar7 + 0xc) <= iVar11) break;
      iVar7 = *(int *)(param_1 + 0x2c);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x0328eea8(iVar7,iVar11,*puVar3);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar12 = *(int *)(iVar7 + 0x34);
      bVar16 = uVar8 < *(uint *)(iVar7 + 0x30);
      if ((int)(iVar1 - (iVar12 + (uint)bVar16)) < 0 ==
          (SBORROW4(iVar1,iVar12) != SBORROW4(iVar1 - iVar12,(uint)bVar16))) {
LAB_02b45a28:
        FUN_02b41428(param_1,iVar7,1);
        FUN_02b43478(param_1,iVar7);
      }
      else {
        iVar12 = *(int *)(iVar7 + 0x2c);
        bVar16 = uVar8 < *(uint *)(iVar7 + 0x28);
        if ((int)(iVar1 - (iVar12 + (uint)bVar16)) < 0 !=
            (SBORROW4(iVar1,iVar12) != SBORROW4(iVar1 - iVar12,(uint)bVar16))) goto LAB_02b45a28;
      }
      iVar11 = iVar11 + 1;
    }
    iVar1 = 0;
    puVar15 = *(undefined4 **)(_UNK_02b45d74 + 0x2b45a64);
    while( true ) {
      iVar11 = *(int *)(param_1 + 0x30);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar11 + 0xc) <= iVar1) break;
      iVar11 = *(int *)(param_1 + 0x30);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar11 = func_0x0328eea8(iVar11,iVar1,*puVar3);
      if (iVar11 == 0) {
        func_0x01384bf0();
        uVar2 = func_0x02b449f8(0);
        func_0x01384bf0();
      }
      else {
        uVar2 = func_0x02b449f8(iVar11);
      }
      uVar4 = func_0x02b4762c(iVar11);
      uStack_7c = 0;
      uStack_80 = 0;
      func_0x038fd264(&uStack_80,uVar2,uVar4,*puVar15);
      iVar7 = FUN_02b436dc(param_1,uStack_80,uStack_7c);
      if (iVar7 != 0) {
        piVar6 = *(int **)(param_1 + 0x54);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        uVar2 = func_0x02b449f8(iVar11);
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar7 = *piVar6;
        uVar8 = (uint)*(ushort *)(iVar7 + 0xb6);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(int *)(iVar7 + 0x58) + 4);
          do {
            if (piVar9[-1] == **(int **)(_UNK_02b45d78 + 0x2b45b44)) {
              puVar5 = (undefined4 *)(iVar7 + *piVar9 * 8 + 0xc0);
              goto LAB_02b45b8c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02b45d78 + 0x2b45b44),0);
LAB_02b45b8c:
        iVar7 = (*(code *)*puVar5)(piVar6,uVar2,puVar5[1]);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar7 = FUN_02b44310(param_1,*(undefined4 *)(iVar7 + 0x1c),&uStack_64);
        if (iVar7 == 0) {
          FUN_02b41428(param_1,iVar11,1);
          FUN_02b43478(param_1,iVar11);
        }
      }
      iVar1 = iVar1 + 1;
    }
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar11 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar11) {
      func_0x0484e5ec(*(undefined4 *)(iVar1 + 8),0,iVar11,0);
    }
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar11 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar11) {
      func_0x0484e5ec(*(undefined4 *)(iVar1 + 8),0,iVar11,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x1aa,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.Activity$$CheckTypeReady RVA 0x2b35d7c =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b45d7c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  bool bVar8;
  ulonglong uVar9;
  int aiStack_50 [6];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_02b46004 + 0x2b45d98);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b46008 + 0x2b45dac));
    func_0x01384978(*(undefined4 *)(_UNK_02b4600c + 0x2b45db8));
    func_0x01384978(*(undefined4 *)(_UNK_02b46010 + 0x2b45dc4));
    func_0x01384978(*(undefined4 *)(_UNK_02b46014 + 0x2b45dd0));
    func_0x01384978(*(undefined4 *)(_UNK_02b46018 + 0x2b45ddc));
    *pcVar4 = '\x01';
  }
  aiStack_50[5] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  aiStack_50[4] = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  aiStack_50[3] = 0;
  aiStack_50[2] = 0;
  aiStack_50[1] = 0;
  aiStack_50[0] = 0;
  iVar1 = func_0x0229f06c(0x1ae,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar1 + 0x1c);
    uVar6 = *(undefined4 *)(iVar1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03dcf754(aiStack_50 + 4,iVar1,**(undefined4 **)(_UNK_02b4601c + 0x2b45eac));
    puVar7 = *(undefined4 **)(_UNK_02b46020 + 0x2b45ecc);
    while (iVar1 = func_0x03fa87cc(aiStack_50 + 4,*puVar7), iVar1 != 0) {
      aiStack_50[3] = uStack_30;
      aiStack_50[2] = uStack_34;
      func_0x0435a580(aiStack_50 + 2,aiStack_50 + 1,aiStack_50,
                      **(undefined4 **)(_UNK_02b46024 + 0x2b45eec));
      iVar1 = aiStack_50[0];
      if (aiStack_50[0] == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar1 + 0xc);
      if (iVar3 != 0) {
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uVar9 = func_0x01c31034(iVar5,uVar6,iVar3,0);
        uVar2 = (undefined4)(uVar9 >> 0x20);
        bVar8 = (uVar9 & 0x100) == 0;
        if (bVar8) {
          uVar2 = 0;
        }
        *(byte *)(iVar1 + 0x10) = (byte)uVar9 & 1;
        if (bVar8) {
          *(undefined4 *)(iVar1 + 0xc) = uVar2;
        }
      }
    }
    func_0x03fa890c(aiStack_50 + 4,**(undefined4 **)(_UNK_02b4602c + 0x2b45f64));
  }
  else {
    iVar1 = func_0x0229f13c(0x1ae,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021744a8(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Activity$$CheckTypeCount RVA 0x2b36034 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b46034(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int aiStack_50 [6];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_02b462e8 + 0x2b4604c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b462ec + 0x2b46060));
    func_0x01384978(*(undefined4 *)(_UNK_02b462f0 + 0x2b4606c));
    func_0x01384978(*(undefined4 *)(_UNK_02b462f4 + 0x2b46078));
    func_0x01384978(*(undefined4 *)(_UNK_02b462f8 + 0x2b46084));
    func_0x01384978(*(undefined4 *)(_UNK_02b462fc + 0x2b46090));
    *pcVar5 = '\x01';
  }
  aiStack_50[5] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  aiStack_50[4] = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  aiStack_50[3] = 0;
  aiStack_50[2] = 0;
  aiStack_50[1] = 0;
  aiStack_50[0] = 0;
  iVar1 = func_0x0229f06c(0x1b7,0);
  if (iVar1 == 0) {
    uVar8 = func_0x01c34eb8(0);
    iVar1 = (int)((ulonglong)uVar8 >> 0x20);
    uVar2 = (uint)uVar8;
    iVar3 = *(int *)(param_1 + 0x5c);
    bVar7 = *(uint *)(param_1 + 0x58) < uVar2;
    if ((int)(iVar3 - (iVar1 + (uint)bVar7)) < 0 !=
        (SBORROW4(iVar3,iVar1) != SBORROW4(iVar3 - iVar1,(uint)bVar7))) {
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 8);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x01c35bd8(&uStack_58,*(undefined4 *)(iVar3 + 0x42c),0,0,1,0);
      uVar8 = func_0x01c35eb0(uStack_58,uStack_54,0);
      iVar3 = *(int *)(param_1 + 0x44);
      *(undefined8 *)(param_1 + 0x58) = uVar8;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x03dcf754(aiStack_50 + 4,iVar3,**(undefined4 **)(_UNK_02b46300 + 0x2b461c0));
      puVar6 = *(undefined4 **)(_UNK_02b46304 + 0x2b461e4);
      while (iVar3 = func_0x03fa87cc(aiStack_50 + 4,*puVar6), iVar3 != 0) {
        aiStack_50[3] = uStack_30;
        aiStack_50[2] = uStack_34;
        func_0x0435a580(aiStack_50 + 2,aiStack_50 + 1,aiStack_50,
                        **(undefined4 **)(_UNK_02b46308 + 0x2b46204));
        iVar3 = aiStack_50[0];
        if (aiStack_50[0] == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar3 + 0x1c);
        bVar7 = uVar2 < *(uint *)(iVar3 + 0x18);
        if ((int)(iVar1 - (iVar4 + (uint)bVar7)) < 0 ==
            (SBORROW4(iVar1,iVar4) != SBORROW4(iVar1 - iVar4,(uint)bVar7))) {
          *(undefined4 *)(iVar3 + 0x14) = 0;
        }
      }
      func_0x03fa890c(aiStack_50 + 4,**(undefined4 **)(_UNK_02b46310 + 0x2b46250));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x1b7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.Activity$$CheckEventTrigger RVA 0x2b36318 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b46318(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined8 uVar12;
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
  
  iVar1 = func_0x0229f06c(0x1bb,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 0xd0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_02b5b490 + 0x2b5b110);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b5b494 + 0x2b5b124),0);
      func_0x01384978(*(undefined4 *)(_UNK_02b5b498 + 0x2b5b130));
      func_0x01384978(*(undefined4 *)(_UNK_02b5b49c + 0x2b5b13c));
      *pcVar6 = '\x01';
    }
    iVar1 = 0;
    iVar5 = func_0x0229f06c(0x1bc,0);
    if (iVar5 == 0) {
      uVar12 = func_0x01c34eb8(0);
      iVar5 = (int)((ulonglong)uVar12 >> 0x20);
      uVar2 = (uint)uVar12;
      puVar10 = *(undefined4 **)(_UNK_02b5b4a0 + 0x2b5b1ac);
      do {
        iVar7 = *(int *)(param_1 + 0x18);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar1) {
          iVar1 = 0;
          while( true ) {
            iVar7 = *(int *)(param_1 + 0x10);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            if (*(int *)(iVar7 + 0xc) <= iVar1) break;
            iVar7 = *(int *)(param_1 + 0x10);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            iVar7 = func_0x0328eea8(iVar7,iVar1,*puVar10);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            uVar3 = func_0x02b5d430(param_1,*(undefined4 *)(iVar7 + 0x10));
            if ((uVar3 & 0x100) == 0) {
              iVar7 = *(int *)(param_1 + 0x10);
              if (iVar7 == 0) {
                func_0x01384bf0();
              }
              func_0x03290bd4(iVar7,iVar1,**(undefined4 **)(_UNK_02b5b4ac + 0x2b5b35c));
              iVar1 = iVar1 + -1;
            }
            else if ((uVar3 & 1) != 0) {
              iVar9 = *(int *)(param_1 + 0x10);
              if (iVar9 == 0) {
                func_0x01384bf0();
              }
              func_0x03290bd4(iVar9,iVar1,**(undefined4 **)(_UNK_02b5b4b0 + 0x2b5b39c));
              func_0x02b5ccdc(param_1,*(undefined4 *)(param_1 + 0x14),iVar7);
              func_0x02b5d7dc(param_1,iVar7,uVar2,iVar5);
              iVar1 = iVar1 + -1;
            }
            iVar1 = iVar1 + 1;
          }
          iVar1 = 0;
          while( true ) {
            iVar7 = *(int *)(param_1 + 0x14);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            if (*(int *)(iVar7 + 0xc) <= iVar1) break;
            iVar7 = *(int *)(param_1 + 0x14);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            iVar7 = func_0x0328eea8(iVar7,iVar1,*puVar10);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            iVar9 = *(int *)(iVar7 + 0x2c);
            bVar11 = uVar2 < *(uint *)(iVar7 + 0x28);
            if (((int)(iVar5 - (iVar9 + (uint)bVar11)) < 0 ==
                 (SBORROW4(iVar5,iVar9) != SBORROW4(iVar5 - iVar9,(uint)bVar11))) &&
               (iVar7 = func_0x02b5b6f4(param_1,iVar7,uVar2,iVar5), iVar7 != 0)) {
              iVar7 = *(int *)(param_1 + 0x14);
              if (iVar7 == 0) {
                func_0x01384bf0();
              }
              func_0x03290bd4(iVar7,iVar1,**(undefined4 **)(_UNK_02b5b4b4 + 0x2b5b470));
              iVar1 = iVar1 + -1;
            }
            iVar1 = iVar1 + 1;
          }
          return;
        }
        iVar7 = *(int *)(param_1 + 0x18);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar7 = func_0x0328eea8(iVar7,iVar1,*puVar10);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar9 = *(int *)(iVar7 + 0xc);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        if (*(char *)(iVar9 + 0x1d) == '\0') {
LAB_02b5b240:
          iVar7 = *(int *)(param_1 + 0x18);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          func_0x03290bd4(iVar7,iVar1,**(undefined4 **)(_UNK_02b5b4a4 + 0x2b5b264));
          iVar1 = iVar1 + -1;
        }
        else {
          iVar9 = *(int *)(iVar7 + 0xc);
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
          if ((*(char *)(iVar9 + 0x1c) != '\0') ||
             (uVar3 = func_0x02b5d430(param_1,*(undefined4 *)(iVar7 + 0x14)), (uVar3 & 0x100) == 0))
          goto LAB_02b5b240;
          if ((uVar3 & 1) != 0) {
            iVar9 = *(int *)(param_1 + 0x18);
            if (iVar9 == 0) {
              func_0x01384bf0();
            }
            func_0x03290bd4(iVar9,iVar1,**(undefined4 **)(_UNK_02b5b4a8 + 0x2b5b2a8));
            func_0x02b5d540(param_1,iVar7,uVar2,iVar5);
            func_0x02b5d5dc(param_1,iVar7);
            iVar1 = iVar1 + -1;
          }
        }
        iVar1 = iVar1 + 1;
      } while( true );
    }
    iVar1 = func_0x0229f13c(0x1bc,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x1bb,0);
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
  uVar8 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  func_0x0245495c(iVar5,uVar8,&uStack_30,uVar4,0,0);
  return;
}



// ===== FAT.Activity$$CheckEventTime RVA 0x2b3639c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4639c(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined8 uVar12;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar6 = (char *)(_UNK_02b467a8 + 0x2b463b8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b467ac + 0x2b463cc));
    func_0x01384978(*(undefined4 *)(_UNK_02b467b0 + 0x2b463d8));
    func_0x01384978(*(undefined4 *)(_UNK_02b467b4 + 0x2b463e4));
    func_0x01384978(*(undefined4 *)(_UNK_02b467b8 + 0x2b463f0));
    func_0x01384978(*(undefined4 *)(_UNK_02b467bc + 0x2b463fc));
    func_0x01384978(*(undefined4 *)(_UNK_02b467c0 + 0x2b46408));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_3c = 0;
  uStack_40 = 0;
  iStack_44 = 0;
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x207,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x2c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_01cf430c(iVar1,0);
    uVar12 = func_0x01c34eb8(0);
    iVar5 = (int)((ulonglong)uVar12 >> 0x20);
    uVar2 = (uint)uVar12;
    iVar8 = *(int *)(param_1 + 8);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_58,iVar8,**(undefined4 **)(_UNK_02b467c4 + 0x2b464e4));
    uStack_38 = uStack_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    iStack_2c = iStack_4c;
    puVar7 = *(undefined4 **)(_UNK_02b467c8 + 0x2b46504);
    puVar9 = *(undefined4 **)(_UNK_02b467cc + 0x2b4650c);
LAB_02b46508:
    iVar3 = func_0x03f5f428(&uStack_38,*puVar7);
    iVar8 = iStack_2c;
    if (iVar3 != 0) {
      if (iStack_2c == 0) {
        func_0x01384bf0();
      }
      func_0x038fd264(&uStack_40,*(undefined4 *)(iVar8 + 0xc),0,*puVar9);
      iVar3 = *(int *)(iVar8 + 0x44);
      bVar11 = uVar2 < *(uint *)(iVar8 + 0x40);
      if ((((int)(iVar5 - (iVar3 + (uint)bVar11)) < 0 ==
            (SBORROW4(iVar5,iVar3) != SBORROW4(iVar5 - iVar3,(uint)bVar11))) &&
          (iVar3 = *(int *)(iVar8 + 0x24), bVar11 = uVar2 < *(uint *)(iVar8 + 0x20),
          (int)(iVar5 - (iVar3 + (uint)bVar11)) < 0 !=
          (SBORROW4(iVar5,iVar3) != SBORROW4(iVar5 - iVar3,(uint)bVar11)))) &&
         (iVar3 = FUN_02b436dc(param_1,uStack_40,uStack_3c), iVar3 == 0)) {
        iVar3 = *(int *)(param_1 + 0x44);
        uVar10 = *(undefined4 *)(iVar8 + 0x14);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x03dd1078(iVar3,uVar10,&iStack_44,**(undefined4 **)(_UNK_02b467d0 + 0x2b465ac)
                               );
        iVar3 = iStack_44;
        puVar7 = *(undefined4 **)(_UNK_02b467d4 + 0x2b465dc);
        if (iVar4 != 0) {
          if (iStack_44 == 0) {
            func_0x01384bf0();
          }
          if (*(char *)(iVar3 + 0x10) == '\0') goto LAB_02b46508;
        }
        iVar3 = 0;
        if (iVar1 != 0) {
          iVar3 = iStack_44;
        }
        if (iVar1 != 0 && iVar3 != 0) {
          iVar3 = *(int *)(iVar3 + 8);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          if (*(char *)(iVar3 + 0x1d) != '\0') goto LAB_02b46508;
        }
        if (*(char *)(iVar8 + 0x2c) == '\0') {
          if (*(int *)(iVar8 + 0x1c) != 0) {
            uStack_54 = 0;
            uStack_58 = 0;
            func_0x038fd264(&uStack_58,*(int *)(iVar8 + 0x1c),0,*puVar9);
            iVar3 = FUN_02b436dc(param_1,uStack_58,uStack_54);
            if (iVar3 == 0) goto LAB_02b46508;
          }
          FUN_02b3eb94(&uStack_58,param_1,uStack_40,uStack_3c,*(undefined4 *)(iVar8 + 0x14),param_2,
                       0,0,0);
          if ((uStack_58 & 1) == 0) {
            FUN_02b3eea0(param_1,uStack_40,uStack_3c,*(undefined4 *)(iVar8 + 0x14),uStack_54);
          }
        }
      }
      goto LAB_02b46508;
    }
    func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_02b467dc + 0x2b466ec));
  }
  else {
    iVar1 = func_0x0229f13c(0x207,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Activity$$CheckFollowEvent RVA 0x2b367e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b467e4(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  undefined4 *puVar14;
  bool bVar15;
  undefined8 uVar16;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar9 = (char *)(_UNK_02b46cd8 + 0x2b46800);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b46cdc + 0x2b46814));
    func_0x01384978(*(undefined4 *)(_UNK_02b46ce0 + 0x2b46820));
    func_0x01384978(*(undefined4 *)(_UNK_02b46ce4 + 0x2b4682c));
    func_0x01384978(*(undefined4 *)(_UNK_02b46ce8 + 0x2b46838));
    func_0x01384978(*(undefined4 *)(_UNK_02b46cec + 0x2b46844));
    func_0x01384978(*(undefined4 *)(_UNK_02b46cf0 + 0x2b46850));
    func_0x01384978(*(undefined4 *)(_UNK_02b46cf4 + 0x2b4685c));
    func_0x01384978(*(undefined4 *)(_UNK_02b46cf8 + 0x2b46868));
    func_0x01384978(*(undefined4 *)(_UNK_02b46cfc + 0x2b46874));
    func_0x01384978(*(undefined4 *)(_UNK_02b46d00 + 0x2b46880));
    *pcVar9 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iStack_3c = 0;
  uStack_44 = 0;
  uStack_48 = 0;
  iStack_4c = 0;
  iVar1 = func_0x0229f06c(0x213,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x2c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_01cf430c(iVar1,0);
    uVar16 = func_0x01c34eb8(0);
    iVar6 = (int)((ulonglong)uVar16 >> 0x20);
    uVar2 = (uint)uVar16;
    iVar10 = *(int *)(param_1 + 0x38);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = func_0x03d60c5c(iVar10,**(undefined4 **)(_UNK_02b46d04 + 0x2b46958));
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    func_0x0432fc0c(&uStack_60,iVar10,**(undefined4 **)(_UNK_02b46d08 + 0x2b46984));
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    uStack_30 = uStack_58;
    uStack_2c = uStack_54;
    puVar14 = *(undefined4 **)(_UNK_02b46d0c + 0x2b469a8);
    piVar13 = *(int **)(_UNK_02b46d10 + 0x2b469b0);
LAB_02b469ac:
    iVar10 = func_0x03f9af78(&uStack_38,*puVar14);
    uVar11 = uStack_2c;
    if (iVar10 != 0) {
      piVar12 = *(int **)(param_1 + 0x54);
      if (piVar12 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar10 = *piVar12;
      uVar7 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar8[-1] == *piVar13) {
            puVar3 = (undefined4 *)(iVar10 + *piVar8 * 8 + 0xf8);
            goto LAB_02b46a24;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar12,*piVar13,7);
LAB_02b46a24:
      iVar4 = (*(code *)*puVar3)(piVar12,uVar11,&iStack_3c,puVar3[1]);
      iVar10 = iStack_3c;
      if (iVar4 != 0) {
        if (iStack_3c == 0) {
          func_0x01384bf0();
        }
        iVar4 = iStack_3c;
        if (*(int *)(iVar10 + 0x28) != 0) {
          if (iStack_3c == 0) {
            func_0x01384bf0();
          }
          uVar11 = *(undefined4 *)(iVar4 + 0x28);
          if (*(int *)(**(int **)(_UNK_02b46d14 + 0x2b46a7c) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar10 = func_0x036a1750(uVar11,**(undefined4 **)(_UNK_02b46d18 + 0x2b46a9c));
          if (iVar10 != 0) {
            func_0x038fd264(&uStack_48,*(undefined4 *)(iVar10 + 0xc),0,
                            **(undefined4 **)(_UNK_02b46d1c + 0x2b46abc));
            iVar4 = *(int *)(iVar10 + 0x44);
            bVar15 = uVar2 < *(uint *)(iVar10 + 0x40);
            if ((((int)(iVar6 - (iVar4 + (uint)bVar15)) < 0 ==
                  (SBORROW4(iVar6,iVar4) != SBORROW4(iVar6 - iVar4,(uint)bVar15))) &&
                (iVar4 = *(int *)(iVar10 + 0x34), bVar15 = uVar2 < *(uint *)(iVar10 + 0x30),
                (int)(iVar6 - (iVar4 + (uint)bVar15)) < 0 !=
                (SBORROW4(iVar6,iVar4) != SBORROW4(iVar6 - iVar4,(uint)bVar15)))) &&
               (iVar4 = FUN_02b436dc(param_1,uStack_48,uStack_44), iVar4 == 0)) {
              iVar4 = *(int *)(param_1 + 0x44);
              uVar11 = *(undefined4 *)(iVar10 + 0x14);
              if (iVar4 == 0) {
                func_0x01384bf0();
              }
              iVar5 = func_0x03dd1078(iVar4,uVar11,&iStack_4c,
                                      **(undefined4 **)(_UNK_02b46d20 + 0x2b46b3c));
              iVar4 = iStack_4c;
              if (iVar5 != 0) {
                if (iStack_4c == 0) {
                  func_0x01384bf0();
                }
                if (*(char *)(iVar4 + 0x10) == '\0') goto LAB_02b469ac;
              }
              iVar4 = 0;
              if (iVar1 != 0) {
                iVar4 = iStack_4c;
              }
              if (iVar1 != 0 && iVar4 != 0) {
                iVar4 = *(int *)(iVar4 + 8);
                if (iVar4 == 0) {
                  func_0x01384bf0();
                }
                if (*(char *)(iVar4 + 0x1d) != '\0') goto LAB_02b469ac;
              }
              FUN_02b3eb94(&uStack_60,param_1,uStack_48,uStack_44,*(undefined4 *)(iVar10 + 0x14),
                           param_2,0,0,0);
              if ((uStack_60 & 1) == 0) {
                FUN_02b3eea0(param_1,uStack_48,uStack_44,*(undefined4 *)(iVar10 + 0x14),uStack_5c);
              }
            }
          }
        }
      }
      goto LAB_02b469ac;
    }
    func_0x03f9af74(&uStack_38,**(undefined4 **)(_UNK_02b46d28 + 0x2b46c10));
  }
  else {
    iVar1 = func_0x0229f13c(0x213,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Activity$$<CheckEventTime>g__Active|68_0 RVA 0x2b36d30 =====

undefined4 FUN_02b46d30(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(param_1 + 0x44);
  uVar1 = 0;
  bVar3 = param_3 < *(uint *)(param_1 + 0x40);
  if ((int)(param_4 - (iVar2 + (uint)bVar3)) < 0 ==
      (SBORROW4(param_4,iVar2) != SBORROW4(param_4 - iVar2,(uint)bVar3))) {
    iVar2 = *(int *)(param_1 + 0x24);
    uVar1 = 0;
    bVar3 = param_3 < *(uint *)(param_1 + 0x20);
    if ((int)(param_4 - (iVar2 + (uint)bVar3)) < 0 !=
        (SBORROW4(param_4,iVar2) != SBORROW4(param_4 - iVar2,(uint)bVar3))) {
      uVar1 = 1;
    }
  }
  return uVar1;
}



// ===== FAT.Activity$$<CheckEventTime>g__WaitTag|68_1 RVA 0x2b36d80 =====

bool FUN_02b46d80(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    return *(char *)(iVar1 + 0x1d) != '\0';
  }
  return false;
}



// ===== FAT.Activity$$CheckEventTime RVA 0x2b36db0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b46db0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined8 uVar12;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar6 = (char *)(_UNK_02b47214 + 0x2b46dd0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b47218 + 0x2b46de4));
    func_0x01384978(*(undefined4 *)(_UNK_02b4721c + 0x2b46df0));
    func_0x01384978(*(undefined4 *)(_UNK_02b47220 + 0x2b46dfc));
    func_0x01384978(*(undefined4 *)(_UNK_02b47224 + 0x2b46e08));
    func_0x01384978(*(undefined4 *)(_UNK_02b47228 + 0x2b46e14));
    func_0x01384978(*(undefined4 *)(_UNK_02b4722c + 0x2b46e20));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_3c = 0;
  uStack_40 = 0;
  iStack_44 = 0;
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x7377,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x2c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_01cf430c(iVar1,0);
    uVar12 = func_0x01c34eb8(0);
    iVar5 = (int)((ulonglong)uVar12 >> 0x20);
    uVar2 = (uint)uVar12;
    iVar9 = *(int *)(param_1 + 8);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_58,iVar9,**(undefined4 **)(_UNK_02b47230 + 0x2b46f08));
    uStack_38 = uStack_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    iStack_2c = iStack_4c;
    puVar7 = *(undefined4 **)(_UNK_02b47234 + 0x2b46f24);
    puVar8 = *(undefined4 **)(_UNK_02b47238 + 0x2b46f2c);
LAB_02b46f30:
    iVar3 = func_0x03f5f428(&uStack_38,*puVar7);
    iVar9 = iStack_2c;
    if (iVar3 != 0) {
      if ((param_3 == 0) ||
         (iVar3 = (**(code **)(param_3 + 0xc))
                            (*(undefined4 *)(param_3 + 0x20),iStack_2c,
                             *(undefined4 *)(param_3 + 0x14)), iVar3 != 0)) {
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        func_0x038fd264(&uStack_40,*(undefined4 *)(iVar9 + 0xc),0,*puVar8);
        iVar3 = *(int *)(iVar9 + 0x44);
        bVar11 = uVar2 < *(uint *)(iVar9 + 0x40);
        if ((((int)(iVar5 - (iVar3 + (uint)bVar11)) < 0 ==
              (SBORROW4(iVar5,iVar3) != SBORROW4(iVar5 - iVar3,(uint)bVar11))) &&
            (iVar3 = *(int *)(iVar9 + 0x24), bVar11 = uVar2 < *(uint *)(iVar9 + 0x20),
            (int)(iVar5 - (iVar3 + (uint)bVar11)) < 0 !=
            (SBORROW4(iVar5,iVar3) != SBORROW4(iVar5 - iVar3,(uint)bVar11)))) &&
           (iVar3 = FUN_02b436dc(param_1,uStack_40,uStack_3c), iVar3 == 0)) {
          iVar3 = *(int *)(param_1 + 0x44);
          uVar10 = *(undefined4 *)(iVar9 + 0x14);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar4 = func_0x03dd1078(iVar3,uVar10,&iStack_44,
                                  **(undefined4 **)(_UNK_02b4723c + 0x2b46ff8));
          iVar3 = iStack_44;
          puVar7 = *(undefined4 **)(_UNK_02b47240 + 0x2b47020);
          puVar8 = *(undefined4 **)(_UNK_02b47244 + 0x2b47028);
          if (iVar4 != 0) {
            if (iStack_44 == 0) {
              func_0x01384bf0();
            }
            puVar8 = *(undefined4 **)(_UNK_02b47248 + 0x2b47050);
            if (*(char *)(iVar3 + 0x10) == '\0') goto LAB_02b46f30;
          }
          iVar3 = 0;
          if (iVar1 != 0) {
            iVar3 = iStack_44;
          }
          if (iVar1 != 0 && iVar3 != 0) {
            iVar3 = *(int *)(iVar3 + 8);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            puVar8 = *(undefined4 **)(_UNK_02b4724c + 0x2b4713c);
            if (*(char *)(iVar3 + 0x1d) != '\0') goto LAB_02b46f30;
          }
          if (*(char *)(iVar9 + 0x2c) == '\0') {
            if (*(int *)(iVar9 + 0x1c) != 0) {
              uStack_54 = 0;
              uStack_58 = 0;
              func_0x038fd264(&uStack_58,*(int *)(iVar9 + 0x1c),0,*puVar8);
              iVar3 = FUN_02b436dc(param_1,uStack_58,uStack_54);
              if (iVar3 == 0) goto LAB_02b46f30;
            }
            FUN_02b3eb94(&uStack_58,param_1,uStack_40,uStack_3c,*(undefined4 *)(iVar9 + 0x14),
                         param_2,0,0,0);
            if ((uStack_58 & 1) == 0) {
              FUN_02b3eea0(param_1,uStack_40,uStack_3c,*(undefined4 *)(iVar9 + 0x14),uStack_54);
            }
          }
        }
      }
      goto LAB_02b46f30;
    }
    func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_02b47254 + 0x2b47154));
  }
  else {
    iVar1 = func_0x0229f13c(0x7377,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217ab90(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Activity$$<CheckEventTime>g__Active|69_0 RVA 0x2b3725c =====

undefined4 FUN_02b4725c(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(param_1 + 0x44);
  uVar1 = 0;
  bVar3 = param_3 < *(uint *)(param_1 + 0x40);
  if ((int)(param_4 - (iVar2 + (uint)bVar3)) < 0 ==
      (SBORROW4(param_4,iVar2) != SBORROW4(param_4 - iVar2,(uint)bVar3))) {
    iVar2 = *(int *)(param_1 + 0x24);
    uVar1 = 0;
    bVar3 = param_3 < *(uint *)(param_1 + 0x20);
    if ((int)(param_4 - (iVar2 + (uint)bVar3)) < 0 !=
        (SBORROW4(param_4,iVar2) != SBORROW4(param_4 - iVar2,(uint)bVar3))) {
      uVar1 = 1;
    }
  }
  return uVar1;
}



// ===== FAT.Activity$$<CheckEventTime>g__WaitTag|69_1 RVA 0x2b372ac =====

bool FUN_02b472ac(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    return *(char *)(iVar1 + 0x1d) != '\0';
  }
  return false;
}



// ===== FAT.Activity$$<CheckFollowEvent>g__Active|70_0 RVA 0x2b372dc =====

undefined4 FUN_02b472dc(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(param_1 + 0x44);
  uVar1 = 0;
  bVar3 = param_3 < *(uint *)(param_1 + 0x40);
  if ((int)(param_4 - (iVar2 + (uint)bVar3)) < 0 ==
      (SBORROW4(param_4,iVar2) != SBORROW4(param_4 - iVar2,(uint)bVar3))) {
    iVar2 = *(int *)(param_1 + 0x34);
    uVar1 = 0;
    bVar3 = param_3 < *(uint *)(param_1 + 0x30);
    if ((int)(param_4 - (iVar2 + (uint)bVar3)) < 0 !=
        (SBORROW4(param_4,iVar2) != SBORROW4(param_4 - iVar2,(uint)bVar3))) {
      uVar1 = 1;
    }
  }
  return uVar1;
}



// ===== FAT.Activity$$<CheckFollowEvent>g__WaitTag|70_1 RVA 0x2b3732c =====

bool FUN_02b4732c(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    return *(char *)(iVar1 + 0x1d) != '\0';
  }
  return false;
}



// ===== FAT.Activity$$GetTypeInfo RVA 0x2b3735c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b4735c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iStack_14;
  
  pcVar4 = (char *)(_UNK_02b4743c + 0x2b47378);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b47440 + 0x2b4738c));
    *pcVar4 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x27c6,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x03dd1078(iVar1,param_2,&iStack_14,**(undefined4 **)(_UNK_02b47444 + 0x2b47408));
    iVar1 = iStack_14;
    uVar2 = 0;
    if (iVar3 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0(0);
      }
      uVar2 = *(undefined4 *)(iVar1 + 8);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x27c6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021fde84(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.Activity$$CheckTypeReady RVA 0x2b37448 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02b47448(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iStack_18;
  ushort uStack_12;
  
  pcVar6 = (char *)(_UNK_02b475c8 + 0x2b47464);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b475cc + 0x2b47478));
    func_0x01384978(*(undefined4 *)(_UNK_02b475d0 + 0x2b47484));
    *pcVar6 = '\x01';
  }
  iStack_18 = 0;
  iVar1 = func_0x0229f06c(0x737a,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x03dd1078(iVar1,param_2,&iStack_18,**(undefined4 **)(_UNK_02b475d4 + 0x2b47500));
    iVar1 = iStack_18;
    if (iVar3 != 0) {
      if (iStack_18 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) != 0) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0xd0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar3 = iStack_18;
        iVar4 = *(int *)(iVar1 + 0x1c);
        uVar5 = *(undefined4 *)(iVar1 + 0x20);
        if (iStack_18 == 0) {
          func_0x01384bf0();
        }
        uVar7 = *(undefined4 *)(iVar3 + 0xc);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar2 = func_0x01c31034(iVar4,uVar5,uVar7,0);
        return uVar2;
      }
    }
    uStack_12 = 0;
    func_0x038ee404(&uStack_12,0,0,**(undefined4 **)(_UNK_02b475d8 + 0x2b475ac));
    uVar2 = (uint)uStack_12;
  }
  else {
    iVar1 = func_0x0229f13c(0x737a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0224dcbc(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.Activity$$<CheckEnd>g__CheckEnd|77_0 RVA 0x2b375dc =====

undefined4 FUN_02b475dc(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(param_1 + 0x34);
  uVar1 = 1;
  bVar3 = param_3 < *(uint *)(param_1 + 0x30);
  if ((int)(param_4 - (iVar2 + (uint)bVar3)) < 0 !=
      (SBORROW4(param_4,iVar2) != SBORROW4(param_4 - iVar2,(uint)bVar3))) {
    iVar2 = *(int *)(param_1 + 0x2c);
    uVar1 = 0;
    bVar3 = param_3 < *(uint *)(param_1 + 0x28);
    if ((int)(param_4 - (iVar2 + (uint)bVar3)) < 0 !=
        (SBORROW4(param_4,iVar2) != SBORROW4(param_4 - iVar2,(uint)bVar3))) {
      uVar1 = 1;
    }
  }
  return uVar1;
}



// ===== FAT.Activity$$AddActive RVA 0x2b37690 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b47690(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  longlong lStack_38;
  int *piStack_30;
  int iStack_2c;
  undefined8 uStack_28;
  
  iVar1 = func_0x0229f06c(499,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(499,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = param_5;
    uStack_28 = (ulonglong)uStack_28._4_4_ << 0x20;
    piStack_30 = param_4;
    func_0x0217eff0(iVar1,param_1,param_2,param_3);
    return;
  }
  if (param_4 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = (**(code **)(*param_4 + 0x198))(param_4,*(undefined4 *)(*param_4 + 0x19c));
  iVar2 = 0;
  if (param_5 != 0) {
    iVar2 = (**(code **)(*param_4 + 400))(param_4,*(undefined4 *)(*param_4 + 0x194));
  }
  if (iVar2 == 0 && iVar1 == 0) {
    piStack_30 = (int *)param_5;
    func_0x02b47974(param_1,param_2,param_3,param_4);
    return;
  }
  pcVar5 = (char *)(_UNK_02b47948 + 0x2b47798);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4794c + 0x2b477ac));
    func_0x01384978(*(undefined4 *)(_UNK_02b47950 + 0x2b477b8));
    func_0x01384978(*(undefined4 *)(_UNK_02b47954 + 0x2b477c4));
    func_0x01384978(*(undefined4 *)(_UNK_02b47958 + 0x2b477d0));
    func_0x01384978(*(undefined4 *)(_UNK_02b4795c + 0x2b477dc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1f9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1f9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piStack_30 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    lStack_38 = (ulonglong)*(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4) << 0x20;
    uStack_28._0_4_ = 0;
    func_0x0245494c(auStack_50,0,param_4,0);
    piStack_30 = (int *)uStack_48;
    iStack_2c = uStack_44;
    uStack_28 = CONCAT44(uStack_28._4_4_,uStack_40);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&lStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&lStack_38,param_1,0);
    func_0x01485278(&lStack_38,param_4,0);
    iVar2 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar2,uVar4,&lStack_38,uVar3,0,0);
    return;
  }
  if (param_4 == (int *)0x0) {
    func_0x01384bf0();
    iVar1 = func_0x02b48934(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
      goto LAB_02b478b8;
    }
    iVar1 = *(int *)(param_1 + 0x48);
    func_0x01384bf0();
  }
  else {
    iVar1 = func_0x02b48934(param_4);
    if (iVar1 == 0) {
LAB_02b478b8:
      func_0x02b489c0(&lStack_38,param_4);
      uStack_28 = lStack_38;
      uVar4 = func_0x01384abc(**(undefined4 **)(_UNK_02b47960 + 0x2b478d8),&lStack_38);
      uVar4 = func_0x0467272c(**(undefined4 **)(_UNK_02b47964 + 0x2b47904),
                              **(undefined4 **)(_UNK_02b47968 + 0x2b47910),uVar4,0);
      if (*(int *)(**(int **)(_UNK_02b4796c + 0x2b47924) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar4,0);
      return;
    }
    iVar1 = *(int *)(param_1 + 0x48);
  }
  func_0x02b48ab8(&uStack_28,param_4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_40 = **(undefined4 **)(_UNK_02b47970 + 0x2b478a4);
  func_0x03cd6a44(iVar1,(undefined4)uStack_28,uStack_28._4_4_,param_4);
  return;
}



// ===== FAT.Activity$$AddPending RVA 0x2b3777c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4777c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  longlong lStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  pcVar5 = (char *)(_UNK_02b47948 + 0x2b47798);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4794c + 0x2b477ac));
    func_0x01384978(*(undefined4 *)(_UNK_02b47950 + 0x2b477b8));
    func_0x01384978(*(undefined4 *)(_UNK_02b47954 + 0x2b477c4));
    func_0x01384978(*(undefined4 *)(_UNK_02b47958 + 0x2b477d0));
    func_0x01384978(*(undefined4 *)(_UNK_02b4795c + 0x2b477dc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1f9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1f9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    lStack_38 = (ulonglong)*(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4) << 0x20;
    uStack_28._0_4_ = 0;
    func_0x0245494c(auStack_50,0,param_2,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = CONCAT44(uStack_28._4_4_,uStack_40);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&lStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&lStack_38,param_1,0);
    func_0x01485278(&lStack_38,param_2,0);
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
    func_0x0245495c(iVar3,uVar4,&lStack_38,uVar2,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar1 = func_0x02b48934(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
      goto LAB_02b478b8;
    }
    iVar1 = *(int *)(param_1 + 0x48);
    func_0x01384bf0();
  }
  else {
    iVar1 = func_0x02b48934(param_2);
    if (iVar1 == 0) {
LAB_02b478b8:
      func_0x02b489c0(&lStack_38,param_2);
      uStack_20 = uStack_30;
      uStack_28 = lStack_38;
      uVar4 = func_0x01384abc(**(undefined4 **)(_UNK_02b47960 + 0x2b478d8),&lStack_38);
      uVar4 = func_0x0467272c(**(undefined4 **)(_UNK_02b47964 + 0x2b47904),
                              **(undefined4 **)(_UNK_02b47968 + 0x2b47910),uVar4,0);
      if (*(int *)(**(int **)(_UNK_02b4796c + 0x2b47924) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar4,0);
      return;
    }
    iVar1 = *(int *)(param_1 + 0x48);
  }
  func_0x02b48ab8(&uStack_28,param_2);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_40 = **(undefined4 **)(_UNK_02b47970 + 0x2b478a4);
  func_0x03cd6a44(iVar1,(undefined4)uStack_28,uStack_28._4_4_,param_2);
  return;
}



// ===== FAT.Activity$$AcceptActive RVA 0x2b37974 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b47974(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_02b48240 + 0x2b47994);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b48244 + 0x2b479ac));
    func_0x01384978(*(undefined4 *)(_UNK_02b48248 + 0x2b479b8));
    func_0x01384978(*(undefined4 *)(_UNK_02b4824c + 0x2b479c4));
    func_0x01384978(*(undefined4 *)(_UNK_02b48250 + 0x2b479d0));
    func_0x01384978(*(undefined4 *)(_UNK_02b48254 + 0x2b479dc));
    func_0x01384978(*(undefined4 *)(_UNK_02b48258 + 0x2b479e8));
    func_0x01384978(*(undefined4 *)(_UNK_02b4825c + 0x2b479f4));
    func_0x01384978(*(undefined4 *)(_UNK_02b48260 + 0x2b47a00));
    func_0x01384978(*(undefined4 *)(_UNK_02b48264 + 0x2b47a0c));
    func_0x01384978(*(undefined4 *)(_UNK_02b48268 + 0x2b47a18));
    func_0x01384978(*(undefined4 *)(_UNK_02b4826c + 0x2b47a24));
    func_0x01384978(*(undefined4 *)(_UNK_02b48270 + 0x2b47a30));
    func_0x01384978(*(undefined4 *)(_UNK_02b48274 + 0x2b47a3c));
    func_0x01384978(*(undefined4 *)(_UNK_02b48278 + 0x2b47a48));
    func_0x01384978(*(undefined4 *)(_UNK_02b4827c + 0x2b47a54));
    func_0x01384978(*(undefined4 *)(_UNK_02b48280 + 0x2b47a60));
    func_0x01384978(*(undefined4 *)(_UNK_02b48284 + 0x2b47a6c));
    func_0x01384978(*(undefined4 *)(_UNK_02b48288 + 0x2b47a78));
    func_0x01384978(*(undefined4 *)(_UNK_02b4828c + 0x2b47a84));
    func_0x01384978(*(undefined4 *)(_UNK_02b48290 + 0x2b47a90));
    func_0x01384978(*(undefined4 *)(_UNK_02b48294 + 0x2b47a9c));
    func_0x01384978(*(undefined4 *)(_UNK_02b48298 + 0x2b47aa8));
    func_0x01384978(*(undefined4 *)(_UNK_02b4829c + 0x2b47ab4));
    func_0x01384978(*(undefined4 *)(_UNK_02b482a0 + 0x2b47ac0));
    func_0x01384978(*(undefined4 *)(_UNK_02b482a4 + 0x2b47acc));
    func_0x01384978(*(undefined4 *)(_UNK_02b482a8 + 0x2b47ad8));
    func_0x01384978(*(undefined4 *)(_UNK_02b482ac + 0x2b47ae4));
    func_0x01384978(*(undefined4 *)(_UNK_02b482b0 + 0x2b47af0));
    func_0x01384978(*(undefined4 *)(_UNK_02b482b4 + 0x2b47afc));
    func_0x01384978(*(undefined4 *)(_UNK_02b482b8 + 0x2b47b08));
    func_0x01384978(*(undefined4 *)(_UNK_02b482bc + 0x2b47b14));
    *pcVar6 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  iStack_34 = 0;
  iStack_38 = 0;
  iStack_3c = 0;
  iVar1 = func_0x0229f06c(0x1fc,0);
  if (iVar1 == 0) {
    if (param_4 == (int *)0x0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02b3c4a4(param_4);
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03df9f5c(iVar1,param_4,&uStack_30,**(undefined4 **)(_UNK_02b482c0 + 0x2b47bd0));
    if (iVar1 != 0) {
      piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02b482c4 + 0x2b47bf0),4);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      piVar7 = *(int **)(_UNK_02b482c8 + 0x2b47c10);
      iVar1 = *piVar7;
      if ((iVar1 != 0) &&
         (iVar1 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar1 == 0)) {
        uVar4 = func_0x01384c10();
        func_0x01384aa0(uVar4,0);
      }
      iVar1 = *piVar7;
      if (piVar3[3] == 0) {
        func_0x01384bf4();
      }
      piVar3[4] = iVar1;
      uStack_44 = param_2;
      uStack_40 = param_3;
      iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_02b482cc + 0x2b47c60),&uStack_44);
      if ((iVar1 != 0) &&
         (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar5 == 0)) {
        uVar4 = func_0x01384c10();
        func_0x01384aa0(uVar4,0);
      }
      if ((uint)piVar3[3] < 2) {
        func_0x01384bf4();
      }
      piVar3[5] = iVar1;
      uStack_48 = uVar2;
      iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_02b482d0 + 0x2b47cbc),&uStack_48);
      if ((iVar1 != 0) &&
         (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar5 == 0)) {
        uVar4 = func_0x01384c10();
        func_0x01384aa0(uVar4,0);
      }
      if ((uint)piVar3[3] < 3) {
        func_0x01384bf4();
      }
      piVar3[6] = iVar1;
      uStack_58 = CONCAT44(uStack_2c,uStack_30);
      uStack_50 = uStack_28;
      iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_02b482d4 + 0x2b47d20),&uStack_58);
      if ((iVar1 != 0) &&
         (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar5 == 0)) {
        uVar4 = func_0x01384c10();
        func_0x01384aa0(uVar4,0);
      }
      if ((uint)piVar3[3] < 4) {
        func_0x01384bf4();
      }
      piVar3[7] = iVar1;
      uVar4 = func_0x046727d0(**(undefined4 **)(_UNK_02b482d8 + 0x2b47d8c),piVar3,0);
      if (*(int *)(**(int **)(_UNK_02b482dc + 0x2b47da0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2944(uVar4,0);
      func_0x02b4833c(param_1,uStack_30,uStack_2c,uStack_28,param_4);
    }
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03cd6a44(iVar1,param_2,param_3,param_4,**(undefined4 **)(_UNK_02b482e0 + 0x2b47df8));
    iVar1 = *(int *)(param_1 + 0x10);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x039252cc(&uStack_58,param_2,param_3,uVar2,**(undefined4 **)(_UNK_02b482e4 + 0x2b47e18));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03df7f8c(iVar1,param_4,(undefined4)uStack_58,uStack_58._4_4_,uStack_50,
                    **(undefined4 **)(_UNK_02b482e8 + 0x2b47e64));
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03dd1078(iVar1,uVar2,&iStack_34,**(undefined4 **)(_UNK_02b482ec + 0x2b47e98));
    if (iVar1 == 0) {
      iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b482f0 + 0x2b47eb4));
      func_0x0328e950(iVar1,**(undefined4 **)(_UNK_02b482f4 + 0x2b47ec8));
      iVar5 = *(int *)(param_1 + 0x14);
      iStack_34 = iVar1;
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x03dcf240(iVar5,uVar2,iVar1,**(undefined4 **)(_UNK_02b482f8 + 0x2b47ef8));
    }
    iVar1 = iStack_34;
    if (iStack_34 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar1 + 8);
    uVar9 = *(uint *)(iVar1 + 0xc);
    piVar3 = *(int **)(_UNK_02b482fc + 0x2b47f34);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    iVar8 = *piVar3;
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    if (uVar9 < *(uint *)(iVar5 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar9 + 1;
      *(int **)(iVar5 + uVar9 * 4 + 0x10) = param_4;
    }
    else {
      func_0x0328f170(iVar1,param_4,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38))
      ;
    }
    iVar1 = func_0x01384ab8(param_4,**(undefined4 **)(_UNK_02b48300 + 0x2b47f88));
    if (iVar1 != 0) {
      iVar5 = *(int *)(param_1 + 0x18);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar8 = func_0x03dd1078(iVar5,uVar2,&iStack_3c,**(undefined4 **)(_UNK_02b48304 + 0x2b47fc0));
      iVar5 = iStack_3c;
      if (iStack_3c == 0 || iVar8 == 0) {
        iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02b48308 + 0x2b47fe8));
        func_0x0328e950(iVar5,**(undefined4 **)(_UNK_02b4830c + 0x2b47ffc));
        iVar8 = *(int *)(param_1 + 0x18);
        iStack_3c = iVar5;
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        func_0x03dcf240(iVar8,uVar2,iVar5,**(undefined4 **)(_UNK_02b48310 + 0x2b4802c));
        iVar5 = iStack_3c;
        if (iStack_3c == 0) {
          func_0x01384bf0();
          iVar5 = 0;
        }
      }
      iVar8 = func_0x0328f4d8(iVar5,iVar1,**(undefined4 **)(_UNK_02b48314 + 0x2b48054));
      iVar5 = iStack_3c;
      if (iVar8 == 0) {
        if (iStack_3c == 0) {
          func_0x01384bf0();
        }
        iVar8 = *(int *)(iVar5 + 8);
        uVar9 = *(uint *)(iVar5 + 0xc);
        piVar3 = *(int **)(_UNK_02b48318 + 0x2b48094);
        *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
        iVar10 = *piVar3;
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        if (uVar9 < *(uint *)(iVar8 + 0xc)) {
          *(uint *)(iVar5 + 0xc) = uVar9 + 1;
          *(int *)(iVar8 + uVar9 * 4 + 0x10) = iVar1;
        }
        else {
          func_0x0328f170(iVar5,iVar1,
                          *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
        }
      }
    }
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x03dd1078(iVar1,uVar2,&iStack_38,**(undefined4 **)(_UNK_02b4831c + 0x2b48104));
    iVar1 = iStack_38;
    if (iVar5 != 0) {
      if (iStack_38 == 0) {
        func_0x01384bf0();
      }
      func_0x02b486c4(iVar1,param_4);
    }
    if (param_5 != 0) {
      func_0x019a862c(param_4,0);
    }
    if (param_4 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*param_4 + 0x1b8))(param_4,param_5,*(undefined4 *)(*param_4 + 0x1bc));
    iVar1 = func_0x01384ab8(param_4,**(undefined4 **)(_UNK_02b48320 + 0x2b48174));
    if (iVar1 != 0) {
      FUN_02b3fd78(param_1,iVar1);
    }
    func_0x02b48734(param_1,**(undefined4 **)(_UNK_02b48324 + 0x2b48198));
    if (*(int *)(**(int **)(_UNK_02b48328 + 0x2b481ac) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02b4832c + 0x2b481c8));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x034a1be0(iVar1,param_4,param_5,**(undefined4 **)(_UNK_02b48330 + 0x2b481f0));
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02b48334 + 0x2b48204));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0349eb38(iVar1,param_4,**(undefined4 **)(_UNK_02b48338 + 0x2b48228));
    *(undefined1 *)(param_1 + 0x34) = 1;
  }
  else {
    iVar1 = func_0x0229f13c(0x1fc,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217eff0(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.Activity$$RemoveActive RVA 0x2b3833c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4833c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_2c;
  int iStack_28;
  
  pcVar3 = (char *)(_UNK_02b4865c + 0x2b4835c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b48660 + 0x2b48374));
    func_0x01384978(*(undefined4 *)(_UNK_02b48664 + 0x2b48380));
    func_0x01384978(*(undefined4 *)(_UNK_02b48668 + 0x2b4838c));
    func_0x01384978(*(undefined4 *)(_UNK_02b4866c + 0x2b48398));
    func_0x01384978(*(undefined4 *)(_UNK_02b48670 + 0x2b483a4));
    func_0x01384978(*(undefined4 *)(_UNK_02b48674 + 0x2b483b0));
    func_0x01384978(*(undefined4 *)(_UNK_02b48678 + 0x2b483bc));
    func_0x01384978(*(undefined4 *)(_UNK_02b4867c + 0x2b483c8));
    func_0x01384978(*(undefined4 *)(_UNK_02b48680 + 0x2b483d4));
    func_0x01384978(*(undefined4 *)(_UNK_02b48684 + 0x2b483e0));
    func_0x01384978(*(undefined4 *)(_UNK_02b48688 + 0x2b483ec));
    func_0x01384978(*(undefined4 *)(_UNK_02b4868c + 0x2b483f8));
    func_0x01384978(*(undefined4 *)(_UNK_02b48690 + 0x2b48404));
    *pcVar3 = '\x01';
  }
  iStack_28 = 0;
  iStack_2c = 0;
  iVar1 = func_0x0229f06c(0x1a7,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    uStack_34 = 0;
    uStack_38 = 0;
    func_0x038fd264(&uStack_38,param_2,param_3,**(undefined4 **)(_UNK_02b48694 + 0x2b48484));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03cd82c0(iVar1,uStack_38,uStack_34,**(undefined4 **)(_UNK_02b48698 + 0x2b484b8));
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03df982c(iVar1,param_5,**(undefined4 **)(_UNK_02b4869c + 0x2b484e0));
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x03dd1078(iVar1,param_4,&iStack_28,**(undefined4 **)(_UNK_02b486a0 + 0x2b4850c));
    iVar1 = iStack_28;
    if (iVar2 != 0) {
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      func_0x03290900(iVar1,param_5,**(undefined4 **)(_UNK_02b486a4 + 0x2b4853c));
    }
    iVar1 = func_0x01384ab8(param_5,**(undefined4 **)(_UNK_02b486a8 + 0x2b48550));
    if (iVar1 != 0) {
      iVar2 = *(int *)(param_1 + 0x18);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x03dd1078(iVar2,param_4,&iStack_2c,**(undefined4 **)(_UNK_02b486ac + 0x2b48588))
      ;
      if (iStack_2c != 0 && iVar2 != 0) {
        func_0x03290900(iStack_2c,iVar1,**(undefined4 **)(_UNK_02b486b0 + 0x2b4860c));
        iVar1 = iStack_2c;
        if (iStack_2c == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar1 + 0xc) == 0) {
          iVar1 = *(int *)(param_1 + 0x18);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x03dd09a4(iVar1,param_4,**(undefined4 **)(_UNK_02b486b4 + 0x2b48650));
        }
      }
    }
    if (*(int *)(**(int **)(_UNK_02b486b8 + 0x2b485b0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02b486bc + 0x2b485cc));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0349eb38(iVar1,param_5,**(undefined4 **)(_UNK_02b486c0 + 0x2b485f0));
  }
  else {
    iVar1 = func_0x0229f13c(0x1a7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217c434(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.Activity.TypeInfo$$Record RVA 0x2b386c4 =====

void FUN_02b486c4(int param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_r1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
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
  undefined4 uStack_1c;
  
  iVar1 = func_0x0229f06c(0x1fd,0);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    uVar7 = func_0x0229f06c(0x1fe,0);
    uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((int)uVar7 == 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
        uVar5 = extraout_r1;
      }
      uStack_38 = 0;
      func_0x01c3600c(&uStack_20,uVar5,*(undefined4 *)(param_2 + 0x30),
                      *(undefined4 *)(param_2 + 0x34));
      uVar3 = uStack_1c;
      uVar5 = uStack_20;
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
      uStack_38 = *(undefined4 *)(iVar1 + 0x42c);
      uStack_34 = 0;
      uStack_2c = 1;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x01c35c78(&uStack_20,0,uVar5,uVar3);
      uVar7 = func_0x01c35eb0(uStack_20,uStack_1c,0);
      iVar1 = (int)((ulonglong)uVar7 >> 0x20);
      uVar2 = *(uint *)(param_1 + 0x18);
      iVar4 = *(int *)(param_1 + 0x1c);
      bVar6 = uVar2 < (uint)uVar7;
      if ((int)(iVar4 - (iVar1 + (uint)bVar6)) < 0 !=
          (SBORROW4(iVar4,iVar1) != SBORROW4(iVar4 - iVar1,(uint)bVar6))) {
        *(undefined8 *)(param_1 + 0x18) = uVar7;
        *(uint *)(param_1 + 0x20) = uVar2;
        *(int *)(param_1 + 0x24) = iVar4;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x1fe,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x1fd,0);
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
  return;
}



// ===== FAT.Activity$$Observe RVA 0x2b38734 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b48734(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
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
  
  pcVar4 = (char *)(_UNK_02b48914 + 0x2b48750);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b48918 + 0x2b48764));
    func_0x01384978(*(undefined4 *)(_UNK_02b4891c + 0x2b48770));
    func_0x01384978(*(undefined4 *)(_UNK_02b48920 + 0x2b4877c));
    func_0x01384978(*(undefined4 *)(_UNK_02b48924 + 0x2b48788));
    *pcVar4 = '\x01';
  }
  iVar6 = 0;
  iVar1 = func_0x0229f06c(0x204,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x204,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar6,uVar5,&uStack_38,uVar3,0,0);
    return;
  }
  puVar8 = *(undefined4 **)(_UNK_02b48928 + 0x2b487ec);
  puVar9 = *(undefined4 **)(_UNK_02b4892c + 0x2b487f4);
  do {
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) <= iVar6) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x0328eea8(iVar1,iVar6,*puVar8);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = (**(code **)(*piVar2 + 0x1d8))(piVar2,param_2,*(undefined4 *)(*piVar2 + 0x1dc));
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x50);
      if (iVar1 == 0) {
        func_0x01384bf0();
        iVar1 = *(int *)(param_1 + 0x50);
        iVar7 = iRam0000000c + -1;
        if (iVar1 != 0) goto LAB_02b4888c;
        func_0x01384bf0();
        iVar1 = 0;
        uVar5 = func_0x0328eea8(0,iVar7,*puVar8);
        func_0x01384bf0();
      }
      else {
        iVar7 = *(int *)(iVar1 + 0xc) + -1;
LAB_02b4888c:
        uVar5 = func_0x0328eea8(iVar1,iVar7,*puVar8);
      }
      func_0x0328eef4(iVar1,iVar6,uVar5,**(undefined4 **)(_UNK_02b48930 + 0x2b488b4));
      iVar1 = *(int *)(param_1 + 0x50);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar6 = iVar6 + -1;
      func_0x03290bd4(iVar1,iVar7,*puVar9);
    }
    iVar6 = iVar6 + 1;
  } while( true );
}



// ===== FAT.Activity$$RemovePending RVA 0x2b38b40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02b48b40(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 extraout_r2;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined4 *extraout_r3;
  undefined4 *extraout_r3_00;
  undefined4 unaff_r4;
  int *piVar10;
  int iVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int unaff_r9;
  uint uVar16;
  undefined8 uVar17;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  uint uStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  uint uStack_40;
  int iStack_3c;
  undefined8 uStack_38;
  int iStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  pcVar12 = (char *)(_UNK_02b48d44 + 0x2b48b5c);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b48d48 + 0x2b48b70));
    func_0x01384978(*(undefined4 *)(_UNK_02b48d4c + 0x2b48b7c));
    func_0x01384978(*(undefined4 *)(_UNK_02b48d50 + 0x2b48b88));
    func_0x01384978(*(undefined4 *)(_UNK_02b48d54 + 0x2b48b94));
    func_0x01384978(*(undefined4 *)(_UNK_02b48d58 + 0x2b48ba0));
    func_0x01384978(*(undefined4 *)(_UNK_02b48d5c + 0x2b48bac));
    *pcVar12 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x737b,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x737b,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = (ulonglong)*(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4) << 0x20;
    uStack_28._0_4_ = 0;
    func_0x0245494c(&iStack_50,0,param_2,0);
    iStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = CONCAT44(uStack_28._4_4_,uStack_40);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar11 = *(int *)(iVar2 + 8);
    uVar14 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar2 == 0) {
      uVar7 = 2;
    }
    uVar1 = func_0x0245495c(iVar11,uVar14,&uStack_38,uVar7);
    return uVar1;
  }
  iVar2 = *(int *)(param_1 + 0x48);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x02b48ab8(&uStack_28,param_2);
  uVar14 = (int)uStack_28;
  uVar7 = uStack_28._4_4_;
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x03cd6ce8(iVar2,uVar14,uVar7,**(undefined4 **)(_UNK_02b48d60 + 0x2b48c44));
  if (iVar2 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x02b489c0(&uStack_38,param_2);
    uStack_20 = iStack_30;
    uStack_28 = uStack_38;
    uVar14 = func_0x01384abc(**(undefined4 **)(_UNK_02b48d64 + 0x2b48cd4),&uStack_38);
    uVar14 = func_0x0467272c(**(undefined4 **)(_UNK_02b48d68 + 0x2b48d00),
                             **(undefined4 **)(_UNK_02b48d6c + 0x2b48d0c),uVar14,0);
    if (*(int *)(**(int **)(_UNK_02b48d70 + 0x2b48d20) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar1 = func_0x028c2874(uVar14,0);
    return uVar1;
  }
  iVar2 = *(int *)(param_1 + 0x48);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x02b48ab8(&uStack_28,param_2);
  uVar14 = (int)uStack_28;
  uVar7 = uStack_28._4_4_;
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iStack_30 = **(int **)(_UNK_02b48d74 + 0x2b48c98);
  uStack_28 = CONCAT44(unaff_r4,uStack_28._4_4_);
  uStack_2c = uVar14;
  if (*(int *)(iVar2 + 8) != 0) {
    piVar10 = *(int **)(iVar2 + 0x20);
    if (piVar10 == (int *)0x0) {
      uVar1 = func_0x038fdca0(&uStack_2c,
                              *(undefined4 *)(*(int *)(*(int *)(iStack_30 + 0x10) + 0x60) + 0xc4));
    }
    else {
      iVar11 = *(int *)(*(int *)(*(int *)(iStack_30 + 0x10) + 0x60) + 4);
      if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
        iVar11 = func_0x02457d84(iVar11);
      }
      iVar3 = *piVar10;
      uVar1 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar1 != 0) {
        piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar11) {
            puVar4 = (undefined4 *)(iVar3 + *piVar8 * 8 + 200);
            goto LAB_03cd8394;
          }
          uVar1 = uVar1 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar1 != 0);
      }
      puVar4 = (undefined4 *)func_0x02457d88(piVar10,iVar11,1);
LAB_03cd8394:
      uVar1 = (*(code *)*puVar4)(piVar10,uVar14,uVar7,puVar4[1]);
      unaff_r9 = iVar2;
    }
    iVar3 = *(int *)(iVar2 + 8);
    iVar11 = iVar3;
    if (iVar3 == 0) {
      func_0x02457d50();
      iVar11 = *(int *)(iVar2 + 8);
      if (iVar11 == 0) {
        uVar17 = func_0x02457d50();
        uVar14 = (undefined4)((ulonglong)uVar17 >> 0x20);
        iVar9 = (int)uVar17;
        uStack_64 = 0;
        if (*(int *)(iVar9 + 8) != 0) {
          piVar10 = *(int **)(iVar9 + 0x20);
          uStack_7c = uVar14;
          uStack_78 = extraout_r2;
          uStack_74 = uVar1;
          iStack_70 = iVar11;
          iStack_6c = iVar2;
          iStack_68 = iVar3;
          iStack_60 = unaff_r9;
          if (piVar10 == (int *)0x0) {
            uVar1 = func_0x038fdca0(&uStack_7c,
                                    *(undefined4 *)
                                     (*(int *)(*(int *)(iStack_50 + 0x10) + 0x60) + 0xc4));
          }
          else {
            iVar2 = *(int *)(*(int *)(*(int *)(iStack_50 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
              iVar2 = func_0x02457d84(iVar2);
            }
            iVar11 = *piVar10;
            uVar1 = (uint)*(ushort *)(iVar11 + 0xb6);
            if (uVar1 != 0) {
              piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar2) {
                  puVar4 = (undefined4 *)(iVar11 + *piVar8 * 8 + 200);
                  goto LAB_03cd8748;
                }
                uVar1 = uVar1 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar1 != 0);
            }
            puVar4 = (undefined4 *)func_0x02457d88(piVar10,iVar2,1);
LAB_03cd8748:
            uVar1 = (*(code *)*puVar4)(piVar10,uVar14,extraout_r2,puVar4[1]);
          }
          iVar11 = *(int *)(iVar9 + 8);
          iVar2 = iVar11;
          if (iVar11 == 0) {
            func_0x02457d50();
            iVar2 = *(int *)(iVar9 + 8);
            if (iVar2 == 0) {
              iVar2 = func_0x02457d50();
              uVar1 = func_0x03cd72c4(iVar2);
              if ((int)uVar1 < 0) {
                uVar14 = 0;
              }
              else {
                iVar2 = *(int *)(iVar2 + 0xc);
                if (iVar2 == 0) {
                  func_0x02457d50();
                }
                if (*(uint *)(iVar2 + 0xc) <= uVar1) {
                  func_0x02457d5c();
                }
                uVar14 = *(undefined4 *)(iVar2 + uVar1 * 0x14 + 0x20);
              }
              *extraout_r3_00 = uVar14;
              return ~uVar1 >> 0x1f;
            }
          }
          func_0x02457e94(uVar1 & 0x7fffffff,*(undefined4 *)(iVar11 + 0xc));
          if (*(uint *)(iVar2 + 0xc) <= extraout_r1_00) {
            func_0x02457d5c();
          }
          uVar5 = *(int *)(iVar2 + extraout_r1_00 * 4 + 0x10) - 1;
          if (-1 < (int)uVar5) {
            uVar16 = 0xffffffff;
            do {
              uVar6 = uVar5;
              iVar2 = *(int *)(iVar9 + 0xc);
              if (iVar2 == 0) {
                func_0x02457d50();
              }
              if (*(uint *)(iVar2 + 0xc) <= uVar6) {
                func_0x02457d5c();
              }
              uVar7 = uStack_78;
              uVar14 = uStack_7c;
              iVar2 = iVar2 + uVar6 * 0x14;
              if (*(uint *)(iVar2 + 0x10) == (uVar1 & 0x7fffffff)) {
                piVar10 = *(int **)(iVar9 + 0x20);
                if (piVar10 == (int *)0x0) {
                  piVar10 = (int *)func_0x031143d0(*(undefined4 *)
                                                    (*(int *)(*(int *)(iStack_50 + 0x10) + 0x60) +
                                                    0xc));
                  uVar7 = uStack_78;
                  uVar14 = uStack_7c;
                  uVar13 = *(undefined4 *)(iVar2 + 0x18);
                  uVar15 = *(undefined4 *)(iVar2 + 0x1c);
                  if (piVar10 == (int *)0x0) {
                    func_0x02457d50(0,uVar13,uVar15);
                  }
                  iVar11 = (**(code **)(*piVar10 + 0x100))
                                     (piVar10,uVar13,uVar15,uVar14,uVar7,
                                      *(undefined4 *)(*piVar10 + 0x104));
                }
                else {
                  uVar15 = *(undefined4 *)(iVar2 + 0x18);
                  uVar13 = *(undefined4 *)(iVar2 + 0x1c);
                  if (piVar10 == (int *)0x0) {
                    func_0x02457d50();
                  }
                  iVar11 = *(int *)(*(int *)(*(int *)(iStack_50 + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
                    iVar11 = func_0x02457d84(iVar11);
                  }
                  iVar3 = *piVar10;
                  uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
                  if (uVar5 != 0) {
                    piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                    do {
                      if (piVar8[-1] == iVar11) {
                        puVar4 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
                        goto LAB_03cd8924;
                      }
                      uVar5 = uVar5 - 1;
                      piVar8 = piVar8 + 2;
                    } while (uVar5 != 0);
                  }
                  puVar4 = (undefined4 *)func_0x02457d88(piVar10,iVar11,0);
LAB_03cd8924:
                  iVar11 = (*(code *)*puVar4)(piVar10,uVar15,uVar13,uVar14,uVar7,puVar4[1]);
                }
                if (iVar11 != 0) {
                  if ((int)uVar16 < 0) {
                    iVar11 = *(int *)(iVar9 + 8);
                    iVar3 = *(int *)(iVar2 + 0x14);
                    if (iVar11 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar11 + 0xc) <= extraout_r1_00) {
                      func_0x02457d5c();
                    }
                    *(int *)(iVar11 + extraout_r1_00 * 4 + 0x10) = iVar3 + 1;
                  }
                  else {
                    iVar11 = *(int *)(iVar9 + 0xc);
                    if (iVar11 == 0) {
                      func_0x02457d50();
                    }
                    uVar14 = *(undefined4 *)(iVar2 + 0x14);
                    if (*(uint *)(iVar11 + 0xc) <= uVar16) {
                      func_0x02457d5c();
                    }
                    *(undefined4 *)(iVar11 + uVar16 * 0x14 + 0x14) = uVar14;
                  }
                  *extraout_r3 = *(undefined4 *)(iVar2 + 0x20);
                  uVar14 = *(undefined4 *)(iVar9 + 0x14);
                  *(undefined4 *)(iVar2 + 0x20) = 0;
                  iVar3 = *(int *)(iVar9 + 0x1c);
                  iVar11 = *(int *)(iVar9 + 0x18);
                  *(undefined4 *)(iVar2 + 0x14) = uVar14;
                  *(uint *)(iVar2 + 0x10) = 0xffffffff;
                  *(int *)(iVar9 + 0x1c) = iVar3 + 1;
                  *(uint *)(iVar9 + 0x14) = uVar6;
                  *(int *)(iVar9 + 0x18) = iVar11 + 1;
                  return 1;
                }
              }
              uVar5 = *(uint *)(iVar2 + 0x14);
              uVar16 = uVar6;
            } while (*(uint *)(iVar2 + 0x14) < 0x80000000);
          }
        }
        *extraout_r3 = 0;
        return 0;
      }
    }
    uVar1 = uVar1 & 0x7fffffff;
    func_0x02457e94(uVar1,*(undefined4 *)(iVar3 + 0xc));
    if (*(uint *)(iVar11 + 0xc) <= extraout_r1) {
      func_0x02457d5c();
    }
    uVar5 = *(int *)(iVar11 + extraout_r1 * 4 + 0x10) - 1;
    if (-1 < (int)uVar5) {
      uVar16 = 0xffffffff;
      uStack_44 = extraout_r1;
      uStack_40 = uVar1;
      iStack_3c = iVar2;
      do {
        uVar6 = uVar5;
        iVar11 = *(int *)(iVar2 + 0xc);
        if (iVar11 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar11 + 0xc) <= uVar6) {
          func_0x02457d5c();
        }
        uVar14 = uStack_2c;
        iVar11 = iVar11 + uVar6 * 0x14;
        if (*(uint *)(iVar11 + 0x10) == uVar1) {
          piVar10 = *(int **)(iVar2 + 0x20);
          if (piVar10 == (int *)0x0) {
            piVar10 = (int *)func_0x031143d0(*(undefined4 *)
                                              (*(int *)(*(int *)(iStack_30 + 0x10) + 0x60) + 0xc));
            uVar14 = *(undefined4 *)(iVar11 + 0x18);
            uVar13 = *(undefined4 *)(iVar11 + 0x1c);
            iVar2 = (int)uStack_28;
            uVar7 = uStack_2c;
            if (piVar10 == (int *)0x0) {
              uStack_38 = CONCAT44(uVar14,uStack_2c);
              func_0x02457d50(0,uVar14,uVar13);
              uVar14 = uStack_38._4_4_;
              uVar7 = (int)uStack_38;
            }
            uStack_4c = *(undefined4 *)(*piVar10 + 0x104);
            iStack_50 = iVar2;
            iVar3 = (**(code **)(*piVar10 + 0x100))(piVar10,uVar14,uVar13,uVar7);
          }
          else {
            uVar13 = *(undefined4 *)(iVar11 + 0x18);
            uVar7 = *(undefined4 *)(iVar11 + 0x1c);
            uStack_38 = CONCAT44(uStack_38._4_4_,(int)uStack_28);
            if (piVar10 == (int *)0x0) {
              func_0x02457d50();
            }
            uStack_38 = CONCAT44(uVar7,(int)uStack_38);
            iVar2 = *(int *)(*(int *)(*(int *)(iStack_30 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
              iVar2 = func_0x02457d84(iVar2);
            }
            iVar3 = *piVar10;
            uVar1 = (uint)*(ushort *)(iVar3 + 0xb6);
            if (uVar1 != 0) {
              piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar2) {
                  puVar4 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
                  goto LAB_03cd8570;
                }
                uVar1 = uVar1 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar1 != 0);
            }
            puVar4 = (undefined4 *)func_0x02457d88(piVar10,iVar2,0);
LAB_03cd8570:
            uStack_4c = puVar4[1];
            iStack_50 = (int)uStack_38;
            iVar3 = (*(code *)*puVar4)(piVar10,uVar13,uStack_38._4_4_,uVar14);
          }
          iVar2 = iStack_3c;
          uVar1 = uStack_40;
          if (iVar3 != 0) {
            if ((int)uVar16 < 0) {
              iVar3 = *(int *)(iStack_3c + 8);
              iVar9 = *(int *)(iVar11 + 0x14);
              if (iVar3 == 0) {
                func_0x02457d50();
              }
              uVar1 = uStack_44;
              if (*(uint *)(iVar3 + 0xc) <= uStack_44) {
                func_0x02457d5c();
              }
              *(int *)(iVar3 + uVar1 * 4 + 0x10) = iVar9 + 1;
            }
            else {
              iVar3 = *(int *)(iStack_3c + 0xc);
              if (iVar3 == 0) {
                func_0x02457d50();
              }
              uVar14 = *(undefined4 *)(iVar11 + 0x14);
              if (*(uint *)(iVar3 + 0xc) <= uVar16) {
                func_0x02457d5c();
              }
              *(undefined4 *)(iVar3 + uVar16 * 0x14 + 0x14) = uVar14;
            }
            uVar14 = *(undefined4 *)(iVar2 + 0x14);
            *(undefined4 *)(iVar11 + 0x20) = 0;
            iVar3 = *(int *)(iVar2 + 0x18);
            iVar9 = *(int *)(iVar2 + 0x1c);
            *(uint *)(iVar11 + 0x10) = 0xffffffff;
            *(undefined4 *)(iVar11 + 0x14) = uVar14;
            *(uint *)(iVar2 + 0x14) = uVar6;
            *(int *)(iVar2 + 0x18) = iVar3 + 1;
            *(int *)(iVar2 + 0x1c) = iVar9 + 1;
            return 1;
          }
        }
        uVar5 = *(uint *)(iVar11 + 0x14);
        uVar16 = uVar6;
      } while (*(uint *)(iVar11 + 0x14) < 0x80000000);
    }
  }
  return 0;
}



// ===== FAT.Activity$$AcceptPending RVA 0x2b38d78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b48d78(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  longlong lStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_02b48fac + 0x2b48d94);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b48fb0 + 0x2b48da8));
    func_0x01384978(*(undefined4 *)(_UNK_02b48fb4 + 0x2b48db4));
    func_0x01384978(*(undefined4 *)(_UNK_02b48fb8 + 0x2b48dc0));
    func_0x01384978(*(undefined4 *)(_UNK_02b48fbc + 0x2b48dcc));
    func_0x01384978(*(undefined4 *)(_UNK_02b48fc0 + 0x2b48dd8));
    func_0x01384978(*(undefined4 *)(_UNK_02b48fc4 + 0x2b48de4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x2f01,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2f01,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    lStack_38 = (ulonglong)*(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4) << 0x20;
    uStack_28._0_4_ = 0;
    func_0x0245494c(auStack_50,0,param_2,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = CONCAT44(uStack_28._4_4_,uStack_40);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&lStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&lStack_38,param_1,0);
    func_0x01485278(&lStack_38,param_2,0);
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
    func_0x0245495c(iVar3,uVar5,&lStack_38,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x02b48ab8(&uStack_28,param_2);
  uVar5 = (undefined4)uStack_28;
  uVar2 = uStack_28._4_4_;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x03cd6ce8(iVar1,uVar5,uVar2,**(undefined4 **)(_UNK_02b48fc8 + 0x2b48e7c));
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x02b489c0(&lStack_38,param_2);
    uStack_20 = uStack_30;
    uStack_28 = lStack_38;
    uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_02b48fcc + 0x2b48f3c),&lStack_38);
    uVar5 = func_0x0467272c(**(undefined4 **)(_UNK_02b48fd0 + 0x2b48f68),
                            **(undefined4 **)(_UNK_02b48fd4 + 0x2b48f74),uVar5,0);
    if (*(int *)(**(int **)(_UNK_02b48fd8 + 0x2b48f88) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2874(uVar5,0);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x48);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x02b48ab8(&uStack_28,param_2);
    uVar5 = (undefined4)uStack_28;
    uVar2 = uStack_28._4_4_;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03cd82c0(iVar1,uVar5,uVar2,**(undefined4 **)(_UNK_02b48fdc + 0x2b48ed0));
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x02b48ab8(&uStack_28,param_2);
    uStack_40 = 1;
    FUN_02b47974(param_1,(undefined4)uStack_28,uStack_28._4_4_,param_2);
  }
  return;
}



// ===== FAT.Activity$$SyncRecordTS RVA 0x2b38fe0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b48fe0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iStack_14;
  
  pcVar4 = (char *)(_UNK_02b490d8 + 0x2b48ffc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b490dc + 0x2b49010));
    *pcVar4 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x7367,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02b3c4a4(param_2);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x03dd1078(iVar1,uVar2,&iStack_14,**(undefined4 **)(_UNK_02b490e0 + 0x2b490a4));
    iVar1 = iStack_14;
    if (iVar3 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      func_0x02b490e4(iVar1,param_2);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7367,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Activity.TypeInfo$$Sync RVA 0x2b390e4 =====

void FUN_02b490e4(int param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_r1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
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
  undefined4 uStack_1c;
  
  uVar7 = func_0x0229f06c(0x1fe,0);
  uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if ((int)uVar7 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
      uVar5 = extraout_r1;
    }
    uStack_38 = 0;
    func_0x01c3600c(&uStack_20,uVar5,*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34)
                   );
    uVar3 = uStack_1c;
    uVar5 = uStack_20;
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
    uStack_38 = *(undefined4 *)(iVar1 + 0x42c);
    uStack_34 = 0;
    uStack_2c = 1;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x01c35c78(&uStack_20,0,uVar5,uVar3);
    uVar7 = func_0x01c35eb0(uStack_20,uStack_1c,0);
    iVar1 = (int)((ulonglong)uVar7 >> 0x20);
    uVar2 = *(uint *)(param_1 + 0x18);
    iVar4 = *(int *)(param_1 + 0x1c);
    bVar6 = uVar2 < (uint)uVar7;
    if ((int)(iVar4 - (iVar1 + (uint)bVar6)) < 0 !=
        (SBORROW4(iVar4,iVar1) != SBORROW4(iVar4 - iVar1,(uint)bVar6))) {
      *(undefined8 *)(param_1 + 0x18) = uVar7;
      *(uint *)(param_1 + 0x20) = uVar2;
      *(int *)(param_1 + 0x24) = iVar4;
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x1fe,0);
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
  return;
}



// ===== FAT.Activity$$EndImmediate RVA 0x2b39200 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b49200(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_02b4933c + 0x2b4921c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b49340 + 0x2b49230));
    func_0x01384978(*(undefined4 *)(_UNK_02b49344 + 0x2b4923c));
    *pcVar3 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0x737c,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x03dd1078(iVar1,param_2,&iStack_1c,**(undefined4 **)(_UNK_02b49348 + 0x2b492b8));
    iVar1 = iStack_1c;
    if (iVar2 != 0) {
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x03290f78(iVar1,**(undefined4 **)(_UNK_02b4934c + 0x2b492e4));
      uVar4 = 0;
      while( true ) {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar4) break;
        if (*(uint *)(iVar1 + 0xc) <= uVar4) {
          func_0x01384bf4();
        }
        func_0x02b49350(param_1,*(undefined4 *)(iVar1 + 0x10 + uVar4 * 4),1);
        uVar4 = uVar4 + 1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x737c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0224dddc(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Activity$$EndImmediate RVA 0x2b39350 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b49350(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
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
  
  pcVar8 = (char *)(_UNK_02b49454 + 0x2b49370);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b49458 + 0x2b49384));
    *pcVar8 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x19d,0);
  if (iVar3 == 0) {
    FUN_02b41428(param_1,param_2,param_3);
    FUN_02b43478(param_1,param_2);
    puVar4 = *(undefined4 **)(_UNK_02b4945c + 0x2b49408);
    *(undefined1 *)(param_1 + 0x34) = 1;
    iVar3 = func_0x03668dfc(*puVar4);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x01c36988(iVar3,0);
    if (iVar3 != 0) {
      pcVar8 = (char *)(_UNK_02b40ad0 + 0x2b4097c);
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02b40ad4 + 0x2b40990));
        func_0x01384978(*(undefined4 *)(_UNK_02b40ad8 + 0x2b4099c));
        func_0x01384978(*(undefined4 *)(_UNK_02b40adc + 0x2b409a8));
        *pcVar8 = '\x01';
      }
      iVar3 = func_0x0229f06c(0x1a9,0);
      if (iVar3 == 0) {
        iVar3 = *(int *)(param_1 + 0xc);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x03cd675c(iVar3,**(undefined4 **)(_UNK_02b40ae0 + 0x2b40a1c));
        if (0 < iVar3) {
          FUN_02b4558c(param_1);
        }
        FUN_02b45d7c(param_1,1);
        FUN_02b46034(param_1);
        FUN_02b46318(param_1);
        FUN_02b4639c(param_1,0);
        FUN_02b467e4(param_1,0);
        if (*(char *)(param_1 + 0x34) != '\0') {
          piVar2 = *(int **)(_UNK_02b40ae4 + 0x2b40a80);
          *(undefined1 *)(param_1 + 0x34) = 0;
          if (*(int *)(*piVar2 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar3 = func_0x0300d558(**(undefined4 **)(_UNK_02b40ae8 + 0x2b40aa0));
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0229f06c(0x3f,0);
          if (iVar1 == 0) {
            iVar3 = *(int *)(iVar3 + 8);
            if (iVar3 == 0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x14));
            return;
          }
          iVar1 = func_0x0229f13c(0x3f,0);
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
          func_0x01485278(&uStack_30,iVar3,0);
          iVar6 = *(int *)(iVar1 + 8);
          uVar7 = *(undefined4 *)(iVar1 + 0xc);
          iVar3 = *(int *)(iVar1 + 0x10);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          uVar5 = 2;
          if (iVar3 == 0) {
            uVar5 = 1;
          }
          func_0x0245495c(iVar6,uVar7,&uStack_30,uVar5,0,0);
          return;
        }
      }
      else {
        iVar3 = func_0x0229f13c(0x1a9,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uStack_20 = 0;
        func_0x0217f950(iVar3,param_1,0,1);
      }
      return;
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x19d,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02175630(iVar3,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.Activity$$EqualsEndImmediate RVA 0x2b39460 =====

void FUN_02b49460(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x737d,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x737d,0);
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



// ===== FAT.Activity$$AddLimbo RVA 0x2b394b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b494b4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  longlong lStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong lStack_28;
  undefined4 uStack_20;
  
  pcVar6 = (char *)(_UNK_02b496a8 + 0x2b494d0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b496ac + 0x2b494e4));
    func_0x01384978(*(undefined4 *)(_UNK_02b496b0 + 0x2b494f0));
    func_0x01384978(*(undefined4 *)(_UNK_02b496b4 + 0x2b494fc));
    func_0x01384978(*(undefined4 *)(_UNK_02b496b8 + 0x2b49508));
    func_0x01384978(*(undefined4 *)(_UNK_02b496bc + 0x2b49514));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x3b56,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3b56,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    lStack_38 = (ulonglong)*(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4) << 0x20;
    lStack_28._0_4_ = 0;
    func_0x0245494c(auStack_50,0,param_2,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    lStack_28 = CONCAT44(lStack_28._4_4_,uStack_40);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&lStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&lStack_38,param_1,0);
    func_0x01485278(&lStack_38,param_2,0);
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
    func_0x0245495c(iVar4,uVar5,&lStack_38,uVar3,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar1 = func_0x02b48934(0);
    if (iVar1 != 0) {
      func_0x01384bf0();
      goto LAB_02b4959c;
    }
  }
  else {
    iVar1 = func_0x02b48934(param_2);
    if (iVar1 != 0) {
LAB_02b4959c:
      func_0x02b489c0(&lStack_38,param_2);
      uStack_20 = uStack_30;
      lStack_28 = lStack_38;
      uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_02b496c0 + 0x2b495bc),&lStack_38);
      uVar5 = func_0x0467272c(**(undefined4 **)(_UNK_02b496c4 + 0x2b495e8),
                              **(undefined4 **)(_UNK_02b496c8 + 0x2b495f4),uVar5,0);
      if (*(int *)(**(int **)(_UNK_02b496cc + 0x2b49608) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar5,0);
      return;
    }
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar1 + 8);
  uVar7 = *(uint *)(iVar1 + 0xc);
  piVar2 = *(int **)(_UNK_02b496d0 + 0x2b49658);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  iVar8 = *piVar2;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  if (uVar7 < *(uint *)(iVar4 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar7 + 1;
    *(int *)(iVar4 + uVar7 * 4 + 0x10) = param_2;
    return;
  }
  uVar7 = *(uint *)(iVar1 + 0xc);
  func_0x0328f754(iVar1,uVar7 + 1,
                  *(undefined4 *)
                   (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38) +
                                     0x10) + 0x60) + 0x3c));
  iVar4 = *(int *)(iVar1 + 8);
  *(uint *)(iVar1 + 0xc) = uVar7 + 1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  if (*(uint *)(iVar4 + 0xc) <= uVar7) {
    func_0x01384bf4();
  }
  *(int *)(iVar4 + uVar7 * 4 + 0x10) = param_2;
  return;
}



// ===== FAT.Activity$$RemoveLimbo RVA 0x2b396d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02b496d4(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  pcVar6 = (char *)(_UNK_02b49890 + 0x2b496f0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b49894 + 0x2b49704));
    func_0x01384978(*(undefined4 *)(_UNK_02b49898 + 0x2b49710));
    func_0x01384978(*(undefined4 *)(_UNK_02b4989c + 0x2b4971c));
    func_0x01384978(*(undefined4 *)(_UNK_02b498a0 + 0x2b49728));
    func_0x01384978(*(undefined4 *)(_UNK_02b498a4 + 0x2b49734));
    func_0x01384978(*(undefined4 *)(_UNK_02b498a8 + 0x2b49740));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x3b4f,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x3b4f,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = 0;
    uStack_30 = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),
                         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8));
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    uVar1 = func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
    return uVar1;
  }
  iVar2 = *(int *)(param_1 + 0x4c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0328f4d8(iVar2,param_2,**(undefined4 **)(_UNK_02b498ac + 0x2b497b4));
  if (iVar2 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x02b489c0(&uStack_30,param_2);
    uStack_18 = uStack_28;
    uStack_20 = uStack_30;
    uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_02b498b0 + 0x2b49820),&uStack_30);
    uVar5 = func_0x0467272c(**(undefined4 **)(_UNK_02b498b4 + 0x2b4984c),
                            **(undefined4 **)(_UNK_02b498b8 + 0x2b49858),uVar5,0);
    if (*(int *)(**(int **)(_UNK_02b498bc + 0x2b4986c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar1 = func_0x028c2874(uVar5,0);
    return uVar1;
  }
  iVar2 = *(int *)(param_1 + 0x4c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uStack_18 = *(undefined4 *)
               (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(**(int **)(_UNK_02b498c0 + 0x2b497e4) +
                                                            0x10) + 0x60) + 0x5c) + 0x10) + 0x60) +
               0xa0);
  uVar1 = func_0x030ffc18(*(undefined4 *)(iVar2 + 8),param_2,0,*(undefined4 *)(iVar2 + 0xc));
  if (-1 < (int)uVar1) {
    func_0x03290bd4(iVar2,uVar1);
  }
  return ~uVar1 >> 0x1f;
}



// ===== FAT.Activity$$Observe RVA 0x2b398c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b498c4(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
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
  
  pcVar4 = (char *)(_UNK_02b499b8 + 0x2b498dc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b499bc + 0x2b498f0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x68b6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x68b6,0);
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
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar1 + 8);
  uVar8 = *(uint *)(iVar1 + 0xc);
  piVar2 = *(int **)(_UNK_02b499c0 + 0x2b49970);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  iVar5 = *piVar2;
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  if (uVar8 < *(uint *)(iVar7 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar8 + 1;
    *(undefined4 *)(iVar7 + uVar8 * 4 + 0x10) = param_2;
    return;
  }
  uVar8 = *(uint *)(iVar1 + 0xc);
  func_0x0328f754(iVar1,uVar8 + 1,
                  *(undefined4 *)
                   (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38) +
                                     0x10) + 0x60) + 0x3c));
  iVar5 = *(int *)(iVar1 + 8);
  *(uint *)(iVar1 + 0xc) = uVar8 + 1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  if (*(uint *)(iVar5 + 0xc) <= uVar8) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar5 + uVar8 * 4 + 0x10) = param_2;
  return;
}



// ===== FAT.Activity$$<OnPostSetUserData>b__38_0 RVA 0x2b399c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b499c4(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
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
  
  pcVar7 = (char *)(_UNK_02b40ad0 + 0x2b4097c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b40ad4 + 0x2b40990));
    func_0x01384978(*(undefined4 *)(_UNK_02b40ad8 + 0x2b4099c));
    func_0x01384978(*(undefined4 *)(_UNK_02b40adc + 0x2b409a8));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x1a9,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x03cd675c(iVar2,**(undefined4 **)(_UNK_02b40ae0 + 0x2b40a1c));
    if (0 < iVar2) {
      FUN_02b4558c(param_1);
    }
    FUN_02b45d7c(param_1,1);
    FUN_02b46034(param_1);
    FUN_02b46318(param_1);
    FUN_02b4639c(param_1,0);
    FUN_02b467e4(param_1,0);
    if (*(char *)(param_1 + 0x34) != '\0') {
      piVar3 = *(int **)(_UNK_02b40ae4 + 0x2b40a80);
      *(undefined1 *)(param_1 + 0x34) = 0;
      if (*(int *)(*piVar3 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_02b40ae8 + 0x2b40aa0));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0229f06c(0x3f,0);
      if (iVar1 == 0) {
        iVar2 = *(int *)(iVar2 + 8);
        if (iVar2 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
        return;
      }
      iVar1 = func_0x0229f13c(0x3f,0);
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
      func_0x01485278(&uStack_30,iVar2,0);
      iVar5 = *(int *)(iVar1 + 8);
      uVar6 = *(undefined4 *)(iVar1 + 0xc);
      iVar2 = *(int *)(iVar1 + 0x10);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar4 = 2;
      if (iVar2 == 0) {
        uVar4 = 1;
      }
      func_0x0245495c(iVar5,uVar6,&uStack_30,uVar4,0,0);
      return;
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x1a9,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x0217f950(iVar2,param_1,0,1);
  }
  return;
}



// ===== FAT.Activity$$<Startup>b__39_0 RVA 0x2b399d0 =====

/* WARNING: Removing unreachable block (ram,0x02b3d17c) */
/* WARNING: Removing unreachable block (ram,0x02b3d188) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_02b3cd6c(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int aiStack_38 [5];
  
  pcVar9 = (char *)(_UNK_02b3d3e0 + 0x2b3cd84);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b3d3e4 + 0x2b3cd98));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d3e8 + 0x2b3cda4));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d3ec + 0x2b3cdb0));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d3f0 + 0x2b3cdbc));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d3f4 + 0x2b3cdc8));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d3f8 + 0x2b3cdd4));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d3fc + 0x2b3cde0));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d400 + 0x2b3cdec));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d404 + 0x2b3cdf8));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d408 + 0x2b3ce04));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d40c + 0x2b3ce10));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d410 + 0x2b3ce1c));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d414 + 0x2b3ce28));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d418 + 0x2b3ce34));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d41c + 0x2b3ce40));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d420 + 0x2b3ce4c));
    func_0x01384978(*(undefined4 *)(_UNK_02b3d424 + 0x2b3ce58));
    *pcVar9 = '\x01';
  }
  aiStack_38[3] = 0;
  aiStack_38[2] = 0;
  aiStack_38[1] = 0;
  aiStack_38[0] = 0;
  iVar1 = func_0x0229f06c(0x7351,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar6) {
      func_0x0484e5ec(*(undefined4 *)(iVar1 + 8),0,iVar6,0);
    }
    uVar14 = func_0x01c34eb8(0);
    iVar6 = (int)((ulonglong)uVar14 >> 0x20);
    iVar1 = func_0x01824f88(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x034658b4(iVar1,**(undefined4 **)(_UNK_02b3d428 + 0x2b3cf34));
LAB_02b3cf40:
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar2;
    uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_02b3d438 + 0x2b3cf5c)) {
          puVar4 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
          goto LAB_02b3cfa4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02b3d438 + 0x2b3cf5c),0);
LAB_02b3cfa4:
    iVar3 = (*(code *)*puVar4)(piVar2,puVar4[1]);
    if (iVar3 != 0) {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = *piVar2;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_02b3d42c + 0x2b3cfd8)) {
            puVar4 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
            goto LAB_02b3d020;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02b3d42c + 0x2b3cfd8),0);
LAB_02b3d020:
      (*(code *)*puVar4)(&uStack_40,piVar2,puVar4[1]);
      aiStack_38[3] = uStack_3c;
      aiStack_38[2] = uStack_40;
      func_0x04358ad8(aiStack_38 + 2,aiStack_38 + 1,aiStack_38,
                      **(undefined4 **)(_UNK_02b3d430 + 0x2b3d048));
      iVar3 = aiStack_38[0];
      if (aiStack_38[0] == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar3 + 0x24);
      bVar13 = *(uint *)(iVar3 + 0x20) < (uint)uVar14;
      if ((int)(iVar5 - (iVar6 + (uint)bVar13)) < 0 ==
          (SBORROW4(iVar5,iVar6) != SBORROW4(iVar5 - iVar6,(uint)bVar13))) {
        iVar5 = *(int *)(param_1 + 8);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar12 = *(int *)(iVar5 + 8);
        uVar7 = *(uint *)(iVar5 + 0xc);
        piVar8 = *(int **)(_UNK_02b3d434 + 0x2b3d0b4);
        *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
        iVar11 = *piVar8;
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        if (uVar7 < *(uint *)(iVar12 + 0xc)) {
          *(uint *)(iVar5 + 0xc) = uVar7 + 1;
          *(int *)(iVar12 + uVar7 * 4 + 0x10) = iVar3;
        }
        else {
          func_0x0328f170(iVar5,iVar3,
                          *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
        }
      }
      goto LAB_02b3cf40;
    }
    if (piVar2 != (int *)0x0) {
      iVar6 = *piVar2;
      uVar7 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_02b3d43c + 0x2b3d11c)) {
            puVar4 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
            goto LAB_02b3d164;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02b3d43c + 0x2b3d11c),0);
LAB_02b3d164:
      (*(code *)*puVar4)(piVar2,puVar4[1]);
    }
    piVar2 = *(int **)(_UNK_02b3d440 + 0x2b3d19c);
    iVar3 = *piVar2;
    iVar5 = *(int *)(param_1 + 8);
    iVar6 = *(int *)(iVar3 + 0x74);
    *(undefined8 *)(param_1 + 0x60) = uVar14;
    if (iVar6 == 0) {
      func_0x01384ab4(iVar3);
      iVar3 = *piVar2;
    }
    iVar6 = *(int *)(*(int *)(iVar3 + 0x5c) + 4);
    if (iVar6 == 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4(iVar3);
        iVar3 = *piVar2;
      }
      uVar10 = **(undefined4 **)(iVar3 + 0x5c);
      iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_02b3d444 + 0x2b3d1fc));
      func_0x03c751dc(iVar6,uVar10,**(undefined4 **)(_UNK_02b3d448 + 0x2b3d21c),0);
      *(int *)(*(int *)(*piVar2 + 0x5c) + 4) = iVar6;
    }
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x03290edc(iVar5,iVar6,**(undefined4 **)(_UNK_02b3d44c + 0x2b3d24c));
    iVar6 = *(int *)(param_1 + 8);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar6 + 0xc) < 1) {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_40 = func_0x03465bcc(iVar1,**(undefined4 **)(_UNK_02b3d450 + 0x2b3d294));
      uVar10 = func_0x01384abc(**(undefined4 **)(_UNK_02b3d454 + 0x2b3d2a4),&uStack_40);
      uVar10 = func_0x0467272c(**(undefined4 **)(_UNK_02b3d458 + 0x2b3d2c8),
                               **(undefined4 **)(_UNK_02b3d45c + 0x2b3d2d4),uVar10,0);
      if (*(int *)(**(int **)(_UNK_02b3d460 + 0x2b3d2e8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar10,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7351,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.Activity$$<CheckConfR>g__P|62_0 RVA 0x2b399d4 =====

undefined4 FUN_02b499d4(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 0x14) == 9) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// ===== FAT.Activity.<<PrepareRes>g__W|33_0>d$$MoveNext RVA 0x2b399fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b499fc(int *param_1)

{
  short sVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  int *piStack_28;
  int iStack_24;
  int *piStack_20;
  int iStack_1c;
  
  pcVar6 = (char *)(_UNK_02b49e5c + 0x2b49a14);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b49e60 + 0x2b49a28));
    func_0x01384978(*(undefined4 *)(_UNK_02b49e64 + 0x2b49a34));
    *pcVar6 = '\x01';
  }
  iStack_1c = 0;
  piStack_20 = (int *)0x0;
  if (*param_1 == 0) {
    piStack_20 = (int *)param_1[4];
    iStack_1c = param_1[5];
    *param_1 = -1;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else {
    piVar8 = *(int **)(_UNK_02b49e68 + 0x2b49a60);
    iVar7 = param_1[3];
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x024504b0(&piStack_28,iVar7,0);
    pcVar6 = (char *)(_UNK_02b49e6c + 0x2b49a94);
    iStack_1c = iStack_24;
    piStack_20 = piStack_28;
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b49e70 + 0x2b49ab0));
      *pcVar6 = '\x01';
    }
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar6 = (char *)(_UNK_02b49e74 + 0x2b49ad8);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b49e78 + 0x2b49aec));
      *pcVar6 = '\x01';
    }
    piVar8 = piStack_20;
    if (piStack_20 != (int *)0x0) {
      iVar7 = *piStack_20;
      uVar3 = (uint)*(ushort *)(iVar7 + 0xb6);
      sVar1 = (short)iStack_1c;
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_02b49e7c + 0x2b49b10)) {
            puVar2 = (undefined4 *)(iVar7 + *piVar4 * 8 + 0xc0);
            goto LAB_02b49b80;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piStack_20,**(int **)(_UNK_02b49e7c + 0x2b49b10),0);
LAB_02b49b80:
      iVar7 = (*(code *)*puVar2)(piVar8,(int)sVar1,puVar2[1]);
      if (iVar7 == 0) {
        puVar2 = *(undefined4 **)(_UNK_02b49e80 + 0x2b49cfc);
        param_1[4] = (int)piStack_20;
        param_1[5] = iStack_1c;
        uVar5 = *puVar2;
        *param_1 = 0;
        func_0x02b54260(param_1 + 1,&piStack_20,param_1,uVar5);
        return;
      }
    }
  }
  pcVar6 = (char *)(_UNK_02b49e84 + 0x2b49ba8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b49e88 + 0x2b49bbc));
    *pcVar6 = '\x01';
  }
  piVar8 = piStack_20;
  if (piStack_20 != (int *)0x0) {
    iVar7 = *piStack_20;
    uVar3 = (uint)*(ushort *)(iVar7 + 0xb6);
    sVar1 = (short)iStack_1c;
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_02b49e8c + 0x2b49be0)) {
          puVar2 = (undefined4 *)(iVar7 + *piVar4 * 8 + 0xd0);
          goto LAB_02b49c2c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piStack_20,**(int **)(_UNK_02b49e8c + 0x2b49be0),2);
LAB_02b49c2c:
    (*(code *)*puVar2)(piVar8,(int)sVar1,puVar2[1]);
  }
  iVar7 = _UNK_02b49e90;
  *param_1 = -2;
  if (*(char *)(iVar7 + 0x2b49c54) == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b49e94 + 0x2b49c68));
    *(char *)(iVar7 + 0x2b49c54) = '\x01';
  }
  piVar8 = (int *)param_1[1];
  if (piVar8 != (int *)0x0) {
    iVar7 = *piVar8;
    uVar3 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_02b49e98 + 0x2b49c8c)) {
          puVar2 = (undefined4 *)(iVar7 + *piVar4 * 8 + 0xd0);
          goto LAB_02b49cd4;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_02b49e98 + 0x2b49c8c),2);
LAB_02b49cd4:
    (*(code *)*puVar2)(piVar8,puVar2[1]);
  }
  return;
}



// ===== FAT.Activity.<<PrepareRes>g__W|33_0>d$$SetStateMachine RVA 0x2b39eb0 =====

void FUN_02b49eb0(int param_1,undefined4 param_2)

{
  (*(code *)&UNK_04f6eae8)(param_1 + 4,param_2,0);
  return;
}



// ===== FAT.Activity.<>c$$.cctor RVA 0x2b39ebc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b49ebc(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_02b49f14 + 0x2b49ecc);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b49f18 + 0x2b49ee0));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_02b49f1c + 0x2b49ef4);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x04874ed4(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.Activity.<>c$$.ctor RVA 0x2b39f20 =====

void FUN_02b49f20(void)

{
  return;
}



// ===== FAT.Activity.<>c$$<CheckConfR>b__62_1 RVA 0x2b39f28 =====

int FUN_02b49f28(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(param_2 + 0x14);
  iVar1 = 0;
  if (iVar2 == 9) {
    iVar1 = -1;
  }
  if (param_3 == 0) {
    func_0x01384bf0();
  }
  if ((iVar2 == 9) == (*(int *)(param_3 + 0x14) == 9)) {
    iVar1 = *(int *)(param_2 + 0xc) - *(int *)(param_3 + 0xc);
  }
  else if (*(int *)(param_3 + 0x14) == 9) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



// ===== FAT.Activity.<>c__DisplayClass44_0$$<DebugActivate>b__0 RVA 0x2b39fa0 =====

void FUN_02b49fa0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = func_0x01c34eb8(0);
  iVar2 = (int)((ulonglong)uVar5 >> 0x20);
  uVar1 = (uint)uVar5;
  uVar4 = *(uint *)(param_1 + 8);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar3 = iVar2 + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar1,uVar4);
  func_0x02b49ff4(param_2,iVar3,uVar1,iVar2,uVar1 + uVar4,iVar3);
  return;
}


