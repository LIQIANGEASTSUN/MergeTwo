
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cce16c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
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
  
  pcVar3 = (char *)(_UNK_01cce57c + 0x1cce180);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01cce580 + 0x1cce194));
    func_0x01438628(*(undefined4 *)(_UNK_01cce584 + 0x1cce1a0));
    func_0x01438628(*(undefined4 *)(_UNK_01cce588 + 0x1cce1ac));
    func_0x01438628(*(undefined4 *)(_UNK_01cce58c + 0x1cce1b8));
    func_0x01438628(*(undefined4 *)(_UNK_01cce590 + 0x1cce1c4));
    func_0x01438628(*(undefined4 *)(_UNK_01cce594 + 0x1cce1d0));
    func_0x01438628(*(undefined4 *)(_UNK_01cce598 + 0x1cce1dc));
    func_0x01438628(*(undefined4 *)(_UNK_01cce59c + 0x1cce1e8));
    func_0x01438628(*(undefined4 *)(_UNK_01cce5a0 + 0x1cce1f4));
    func_0x01438628(*(undefined4 *)(_UNK_01cce5a4 + 0x1cce200));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x02953fd4(0x1a94,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x110))(param_1,0,*(undefined4 *)(*param_1 + 0x114));
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_01cce5a8 + 0x1cce27c) + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar4 = 0;
      iVar1 = func_0x02c35d10(0x4c,0);
      if ((iVar1 != 0) && (iVar1 = FUN_01ccdf84(param_1), iVar1 == 0)) {
        iVar1 = FUN_01ccc5a4(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(char *)(iVar1 + 0xc) == '\0') {
          if (*(int *)(**(int **)(_UNK_01cce5ac + 0x1cce2e4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x03b2c734(**(undefined4 **)(_UNK_01cce5b0 + 0x1cce300));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x020e9710(iVar1,0);
          iVar7 = FUN_01ccc5a4(param_1);
          if (iVar1 == 0) {
            uVar4 = 1;
          }
          else {
            uVar4 = *(undefined4 *)(iVar1 + 0x194);
          }
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          func_0x026a7620(iVar7,uVar4,0);
          iVar1 = FUN_01ccc5a4(param_1);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x026a70ac(iVar1,1,0);
          iVar1 = FUN_01ccc5a4(param_1);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x026a74a8(iVar1,1,0);
          FUN_01ccca64(param_1);
          func_0x01cce5d0(param_1);
          if (*(int *)(**(int **)(_UNK_01cce5b4 + 0x1cce3c4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01cce5b8 + 0x1cce3e0));
          piVar5 = *(int **)(_UNK_01cce5bc + 0x1cce3f4);
          iVar7 = *piVar5;
          if (*(int *)(iVar7 + 0x74) == 0) {
            func_0x014387a4();
            iVar7 = *piVar5;
          }
          piVar5 = *(int **)(_UNK_01cce5c0 + 0x1cce414);
          iVar8 = *piVar5;
          uVar4 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0xd38);
          iVar7 = *(int *)(iVar8 + 0x1c);
          if (iVar7 == 0) {
            func_0x014909d8(iVar8);
            iVar7 = *(int *)(iVar8 + 0x1c);
          }
          iVar7 = *(int *)(iVar7 + 8);
          if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
            iVar7 = func_0x0149097c();
          }
          if (*(int *)(iVar7 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar7 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
          if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
            iVar7 = func_0x0149097c();
          }
          uVar2 = **(undefined4 **)(iVar7 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x02b0c90c(iVar1,uVar4,uVar2,0);
          if (*(int *)(**(int **)(_UNK_01cce5c4 + 0x1cce4a4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01cce5c8 + 0x1cce4c0));
          piVar6 = *(int **)(_UNK_01cce5cc + 0x1cce4d4);
          iVar7 = *piVar6;
          if (*(int *)(iVar7 + 0x74) == 0) {
            func_0x014387a4();
            iVar7 = *piVar6;
          }
          iVar8 = *piVar5;
          uVar4 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x340);
          iVar7 = *(int *)(iVar8 + 0x1c);
          if (iVar7 == 0) {
            func_0x014909d8(iVar8);
            iVar7 = *(int *)(iVar8 + 0x1c);
          }
          iVar7 = *(int *)(iVar7 + 8);
          if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
            iVar7 = func_0x0149097c();
          }
          if (*(int *)(iVar7 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar7 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
          if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
            iVar7 = func_0x0149097c();
          }
          uVar2 = **(undefined4 **)(iVar7 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x029901b4(iVar1,uVar4,uVar2,0);
          uVar4 = 1;
        }
      }
    }
    return uVar4;
  }
  iVar1 = func_0x029540a4(0x1a94,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar7 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x024f56d0(iVar7,uVar4,&uStack_30,uVar2,0,0);
  uVar4 = func_0x024f56e0(&uStack_30,0,0);
  return uVar4;
}

