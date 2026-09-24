
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c86aac(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01c86e30 + 0x1c86ac4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c86e34 + 0x1c86ad8));
    func_0x01438628(*(undefined4 *)(_UNK_01c86e38 + 0x1c86ae4));
    func_0x01438628(*(undefined4 *)(_UNK_01c86e3c + 0x1c86af0));
    func_0x01438628(*(undefined4 *)(_UNK_01c86e40 + 0x1c86afc));
    func_0x01438628(*(undefined4 *)(_UNK_01c86e44 + 0x1c86b08));
    func_0x01438628(*(undefined4 *)(_UNK_01c86e48 + 0x1c86b14));
    func_0x01438628(*(undefined4 *)(_UNK_01c86e4c + 0x1c86b20));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x02953fd4(0xaddb,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01c81224(param_1);
    if (iVar1 != 0) {
      piVar7 = *(int **)(_UNK_01c86e50 + 0x1c86b90);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar8 = *(undefined4 **)(_UNK_01c86e54 + 0x1c86bac);
      iVar1 = func_0x014e9518(*puVar8);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar5 = 0;
      iVar1 = func_0x02b0c7f8(iVar1,0);
      if (iVar1 != 0) {
        iVar1 = **(int **)(**(int **)(_UNK_01c86e58 + 0x1c86be4) + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar5 = 0;
        iVar1 = func_0x02b67784(iVar1,0);
        if (iVar1 == 0) {
          if (*(int *)(*piVar7 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(*puVar8);
          piVar9 = *(int **)(_UNK_01c86e5c + 0x1c86c3c);
          iVar6 = *piVar9;
          if (*(int *)(iVar6 + 0x74) == 0) {
            func_0x014387a4();
            iVar6 = *piVar9;
          }
          uVar3 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0xc08);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar5 = 0;
          uVar3 = func_0x02b0fc08(iVar1,uVar3,0);
          if (*(int *)(**(int **)(_UNK_01c86e60 + 0x1c86c88) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x024ef144(uVar3,0,0);
          if (iVar1 == 0) {
            iVar1 = FUN_01c733a0(param_1);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            if (*(char *)(iVar1 + 0x20) != '\0') {
              iVar1 = FUN_01c733a0(param_1);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              if (*(char *)(iVar1 + 0x21) != '\0') {
                return 0;
              }
            }
            if (*(int *)(param_1 + 0x44) != 0) {
              iVar1 = FUN_01c733a0(param_1);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              if (*(char *)(iVar1 + 0x20) != '\0') {
                FUN_01c84c48(param_1);
                if (*(int *)(*piVar7 + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar1 = func_0x014e9518(*puVar8);
                iVar6 = *piVar9;
                if (*(int *)(iVar6 + 0x74) == 0) {
                  func_0x014387a4();
                  iVar6 = *piVar9;
                }
                uVar5 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0xc08);
                piVar7 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01c86e64 + 0x1c86d78),1);
                uStack_24 = uStack_24 & 0xffffff;
                iVar6 = func_0x014387ac(**(undefined4 **)(_UNK_01c86e68 + 0x1c86d98),
                                        (int)&uStack_24 + 3);
                if (piVar7 == (int *)0x0) {
                  func_0x014388e4();
                }
                if ((iVar6 != 0) &&
                   (iVar2 = func_0x014387a8(iVar6,*(undefined4 *)(*piVar7 + 0x20)), iVar2 == 0)) {
                  uVar3 = func_0x01438904();
                  func_0x01438790(uVar3,0);
                }
                if (piVar7[3] == 0) {
                  func_0x014388e8();
                }
                piVar7[4] = iVar6;
                func_0x014385cc(piVar7 + 4,iVar6);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                func_0x02b0c90c(iVar1,uVar5,piVar7,0);
                uVar5 = 1;
              }
            }
          }
        }
      }
    }
    return uVar5;
  }
  iVar1 = func_0x029540a4(0xaddb,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar6 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x024f56d0(iVar6,uVar5,&uStack_30,uVar3,0,0);
  uVar5 = func_0x024f56e0(&uStack_30,0,0);
  return uVar5;
}

