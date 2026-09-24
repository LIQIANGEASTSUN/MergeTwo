
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018c3704(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_018c3dfc + 0x18c371c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018c3e00 + 0x18c3730));
    func_0x01438628(*(undefined4 *)(_UNK_018c3e04 + 0x18c373c));
    func_0x01438628(*(undefined4 *)(_UNK_018c3e08 + 0x18c3748));
    func_0x01438628(*(undefined4 *)(_UNK_018c3e0c + 0x18c3754));
    func_0x01438628(*(undefined4 *)(_UNK_018c3e10 + 0x18c3760));
    func_0x01438628(*(undefined4 *)(_UNK_018c3e14 + 0x18c376c));
    func_0x01438628(*(undefined4 *)(_UNK_018c3e18 + 0x18c3778));
    func_0x01438628(*(undefined4 *)(_UNK_018c3e1c + 0x18c3784));
    func_0x01438628(*(undefined4 *)(_UNK_018c3e20 + 0x18c3790));
    func_0x01438628(*(undefined4 *)(_UNK_018c3e24 + 0x18c379c));
    func_0x01438628(*(undefined4 *)(_UNK_018c3e28 + 0x18c37a8));
    func_0x01438628(*(undefined4 *)(_UNK_018c3e2c + 0x18c37b4));
    func_0x01438628(*(undefined4 *)(_UNK_018c3e30 + 0x18c37c0));
    func_0x01438628(*(undefined4 *)(_UNK_018c3e34 + 0x18c37cc));
    func_0x01438628(*(undefined4 *)(_UNK_018c3e38 + 0x18c37d8));
    func_0x01438628(*(undefined4 *)(_UNK_018c3e3c + 0x18c37e4));
    func_0x01438628(*(undefined4 *)(_UNK_018c3e40 + 0x18c37f0));
    func_0x01438628(*(undefined4 *)(_UNK_018c3e44 + 0x18c37fc));
    func_0x01438628(*(undefined4 *)(_UNK_018c3e48 + 0x18c3808));
    func_0x01438628(*(undefined4 *)(_UNK_018c3e4c + 0x18c3814));
    func_0x01438628(*(undefined4 *)(_UNK_018c3e50 + 0x18c3820));
    func_0x01438628(*(undefined4 *)(_UNK_018c3e54 + 0x18c382c));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0xefa,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_018c3e58 + 0x18c3890) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018c3e5c + 0x18c38ac));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_018c3e60 + 0x18c38cc));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x348);
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x024eede4(iVar1,uVar2,**(undefined4 **)(_UNK_018c3e64 + 0x18c3914));
    if (iVar3 == 0) {
      func_0x018c3eb0(param_1);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_018c3e68 + 0x18c3938));
      func_0x026efebc(iVar3,0);
      if (*(int *)(**(int **)(_UNK_018c3e6c + 0x18c3954) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e96a8(**(undefined4 **)(_UNK_018c3e70 + 0x18c3970));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x01f903f0(iVar4,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026efba8(iVar3,uVar2,0);
      iVar4 = func_0x018c3f18(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar4 = func_0x018c3f18(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x024ef7ac(&uStack_48,iVar4,**(undefined4 **)(_UNK_018c3e74 + 0x18c3a14));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar6 = *(undefined4 **)(_UNK_018c3e78 + 0x18c3a30);
        puVar9 = *(undefined4 **)(_UNK_018c3e7c + 0x18c3a38);
        while (iVar4 = func_0x015101bc(&uStack_38,*puVar6), uVar2 = uStack_2c, iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar3 + 0x18);
          iVar4 = func_0x018c4050(param_1,uVar2);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar4 + 8);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar7,uVar2,*puVar9);
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        }
        func_0x024ef7bc(&uStack_38,**(undefined4 **)(_UNK_018c3e80 + 0x18c3ab4));
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar3 + 100);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x024f04c8(iVar4,**(undefined4 **)(_UNK_018c3e88 + 0x18c3af4));
      iVar4 = 0;
      puVar6 = *(undefined4 **)(_UNK_018c3e8c + 0x18c3b0c);
      puVar9 = *(undefined4 **)(_UNK_018c3e90 + 0x18c3b14);
      while( true ) {
        iVar7 = func_0x018c3f18(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar4) break;
        iVar10 = *(int *)(iVar3 + 100);
        iVar7 = func_0x018c3f18(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x024f0530(iVar7,iVar4,*puVar6);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        func_0x024f05ac(iVar10,uVar2,*puVar9);
        iVar4 = iVar4 + 1;
      }
      uVar11 = func_0x029f3fe4(param_1,0);
      if ((int)uVar11 != 0) {
        func_0x026ef4b0(iVar3,(int)((ulonglong)uVar11 >> 0x20),*(undefined4 *)(param_1 + 0x18),
                        *(undefined4 *)(param_1 + 0x1c),0);
        func_0x026ef580(iVar3,extraout_r1,*(undefined4 *)(param_1 + 0x20),
                        *(undefined4 *)(param_1 + 0x24),0);
      }
      if (*(int *)(**(int **)(_UNK_018c3e98 + 0x18c3bf4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_018c3e9c + 0x18c3c10));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x1c);
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
        iVar7 = 0;
        puVar6 = *(undefined4 **)(_UNK_018c3ea0 + 0x18c3c4c);
        do {
          iVar8 = *(int *)(iVar3 + 0x48);
          iVar10 = func_0x0152983c(iVar4,iVar7,*puVar6);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar10 + 8);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar10 = func_0x024f0f34(iVar8,uVar2,**(undefined4 **)(_UNK_018c3ea4 + 0x18c3c8c));
          if (iVar10 == 0) {
            iVar8 = *(int *)(iVar3 + 0x48);
            iVar10 = func_0x0152983c(iVar4,iVar7,*puVar6);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar10 + 8);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            func_0x024f05ac(iVar8,uVar2,*puVar9);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar4 + 0xc));
      }
      uVar2 = func_0x029f05a0(param_1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x024f0ea4(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_018c3ea8 + 0x18c3d24));
      func_0x018c410c(param_1);
    }
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f04d4(iVar1,uVar2,**(undefined4 **)(_UNK_018c3eac + 0x18c3d60));
  }
  else {
    iVar1 = func_0x029540a4(0xefa,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0289639c(iVar1,param_1,0);
  }
  return;
}

