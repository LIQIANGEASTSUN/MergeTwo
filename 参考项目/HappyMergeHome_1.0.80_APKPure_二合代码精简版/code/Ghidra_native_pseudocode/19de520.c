
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_019ee520(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int aiStack_24 [3];
  
  pcVar6 = (char *)(_UNK_019ee688 + 0x19ee538);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019ee68c + 0x19ee54c));
    func_0x01438628(*(undefined4 *)(_UNK_019ee690 + 0x19ee558));
    func_0x01438628(*(undefined4 *)(_UNK_019ee694 + 0x19ee564));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x477,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x477,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    puStack_34 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    puStack_38 = (undefined4 *)0x0;
    uStack_28 = 0;
    func_0x024f56c0(&puStack_50,0,param_2,0);
    puStack_38 = puStack_50;
    puStack_34 = (undefined4 *)uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&puStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&puStack_38,param_1,0);
    func_0x01523a2c(&puStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    uVar7 = func_0x024f56d0(iVar5,uVar7,&puStack_38,uVar4,0,0);
    return uVar7;
  }
  iVar1 = FUN_019edb58(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = *(undefined4 *)(iVar1 + 0x20);
  iVar1 = FUN_019edb58(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x026c1c40(iVar1,*(int *)(iVar1 + 0x20) + param_2,0);
  iVar1 = FUN_019edb58(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = *(undefined4 *)(iVar1 + 0x20);
  if (*(int *)(**(int **)(_UNK_019ee698 + 0x19ee620) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_019ee69c + 0x19ee640));
  iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_019ee6a0 + 0x19ee654));
  func_0x019ede9c(iVar5,uVar7,uVar4);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x02953fd4(0x478,0,0);
  if (iVar3 == 0) {
    if (iVar5 == 0) {
      return 0;
    }
    uVar7 = *(undefined4 *)(iVar5 + 8);
    uVar4 = *(undefined4 *)(iVar5 + 0xc);
    pcVar6 = (char *)(_UNK_029903f0 + 0x29901d4);
    aiStack_24[0] = iVar1;
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_029903f4 + 0x29901ec));
      func_0x01438628(*(undefined4 *)(_UNK_029903f8 + 0x29901f8));
      func_0x01438628(*(undefined4 *)(_UNK_029903fc + 0x2990204));
      func_0x01438628(*(undefined4 *)(_UNK_02990400 + 0x2990210));
      *pcVar6 = '\x01';
    }
    uStack_28 = 0;
    uStack_2c = 0;
    iVar5 = func_0x02953fd4(0x226,0);
    if (iVar5 == 0) {
      iVar5 = *(int *)(iVar1 + 0x14);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x04753c80(iVar5,uVar7,**(undefined4 **)(_UNK_02990404 + 0x2990298));
      uVar2 = 0;
      if (iVar5 != 0) {
        iVar5 = *(int *)(iVar1 + 0x14);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x0475399c(iVar5,uVar7,**(undefined4 **)(_UNK_02990408 + 0x29902cc));
        if (iVar5 != 0) {
          iVar5 = *(int *)(iVar1 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x024f2f10(iVar5,0);
          if (iVar5 == 0) {
            iVar1 = *(int *)(iVar1 + 0x10);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x024f2f20(iVar1,200,0);
            if (iVar1 == 0) {
              return 0;
            }
          }
          puStack_34 = &uStack_28;
          puStack_38 = &uStack_30;
          piStack_3c = aiStack_24;
          uStack_40 = 0;
          uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0299040c + 0x2990340));
          func_0x0298fd74(uVar2,uVar7,uVar4);
          iVar1 = *(int *)(aiStack_24[0] + 0x18);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x03a39760(iVar1,uVar2,**(undefined4 **)(_UNK_02990410 + 0x299038c));
          func_0x010b8c68(&uStack_40);
          uVar2 = 1;
        }
      }
    }
    else {
      iVar5 = func_0x029540a4(0x226,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uStack_48 = 0;
      uVar2 = func_0x02871898(iVar5,iVar1,uVar7,uVar4);
    }
    return uVar2;
  }
  iVar3 = func_0x029540a4(0x478,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puStack_34 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  puStack_38 = (undefined4 *)0x0;
  uStack_28 = 0;
  func_0x024f56c0(&puStack_50,0,iVar5,0);
  puStack_38 = puStack_50;
  puStack_34 = (undefined4 *)uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01523a6c(&puStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01523a6c(&puStack_38,iVar1,0);
  func_0x01523a6c(&puStack_38,iVar5,0);
  iVar5 = *(int *)(iVar3 + 8);
  uVar7 = *(undefined4 *)(iVar3 + 0xc);
  iVar1 = *(int *)(iVar3 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  func_0x024f56d0(iVar5,uVar7,&puStack_38,uVar4,0,0);
  uVar7 = func_0x024f56e0(&puStack_38,0,0);
  return uVar7;
}

