
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016ef2ac(int param_1)

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
  
  pcVar5 = (char *)(_UNK_016ef99c + 0x16ef2c4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016ef9a0 + 0x16ef2d8));
    func_0x01438628(*(undefined4 *)(_UNK_016ef9a4 + 0x16ef2e4));
    func_0x01438628(*(undefined4 *)(_UNK_016ef9a8 + 0x16ef2f0));
    func_0x01438628(*(undefined4 *)(_UNK_016ef9ac + 0x16ef2fc));
    func_0x01438628(*(undefined4 *)(_UNK_016ef9b0 + 0x16ef308));
    func_0x01438628(*(undefined4 *)(_UNK_016ef9b4 + 0x16ef314));
    func_0x01438628(*(undefined4 *)(_UNK_016ef9b8 + 0x16ef320));
    func_0x01438628(*(undefined4 *)(_UNK_016ef9bc + 0x16ef32c));
    func_0x01438628(*(undefined4 *)(_UNK_016ef9c0 + 0x16ef338));
    func_0x01438628(*(undefined4 *)(_UNK_016ef9c4 + 0x16ef344));
    func_0x01438628(*(undefined4 *)(_UNK_016ef9c8 + 0x16ef350));
    func_0x01438628(*(undefined4 *)(_UNK_016ef9cc + 0x16ef35c));
    func_0x01438628(*(undefined4 *)(_UNK_016ef9d0 + 0x16ef368));
    func_0x01438628(*(undefined4 *)(_UNK_016ef9d4 + 0x16ef374));
    func_0x01438628(*(undefined4 *)(_UNK_016ef9d8 + 0x16ef380));
    func_0x01438628(*(undefined4 *)(_UNK_016ef9dc + 0x16ef38c));
    func_0x01438628(*(undefined4 *)(_UNK_016ef9e0 + 0x16ef398));
    func_0x01438628(*(undefined4 *)(_UNK_016ef9e4 + 0x16ef3a4));
    func_0x01438628(*(undefined4 *)(_UNK_016ef9e8 + 0x16ef3b0));
    func_0x01438628(*(undefined4 *)(_UNK_016ef9ec + 0x16ef3bc));
    func_0x01438628(*(undefined4 *)(_UNK_016ef9f0 + 0x16ef3c8));
    func_0x01438628(*(undefined4 *)(_UNK_016ef9f4 + 0x16ef3d4));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x1866,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_016ef9f8 + 0x16ef438) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016ef9fc + 0x16ef454));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_016efa00 + 0x16ef474));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 700);
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x024eede4(iVar1,uVar2,**(undefined4 **)(_UNK_016efa04 + 0x16ef4bc));
    if (iVar3 == 0) {
      func_0x016efa50(param_1);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_016efa08 + 0x16ef4e0));
      func_0x026f22a8(iVar3,0);
      if (*(int *)(**(int **)(_UNK_016efa0c + 0x16ef4fc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e96a8(**(undefined4 **)(_UNK_016efa10 + 0x16ef518));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x01f903f0(iVar4,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026f2120(iVar3,uVar2,0);
      iVar4 = func_0x016efab8(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar4 = func_0x016efab8(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x024ef7ac(&uStack_48,iVar4,**(undefined4 **)(_UNK_016efa14 + 0x16ef5bc));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar6 = *(undefined4 **)(_UNK_016efa18 + 0x16ef5d8);
        puVar9 = *(undefined4 **)(_UNK_016efa1c + 0x16ef5e0);
        while (iVar4 = func_0x015101bc(&uStack_38,*puVar6), uVar2 = uStack_2c, iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar3 + 0x18);
          iVar4 = func_0x016efbf0(param_1,uVar2);
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
        func_0x024ef7bc(&uStack_38,**(undefined4 **)(_UNK_016efa20 + 0x16ef65c));
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar3 + 100);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x024f04c8(iVar4,**(undefined4 **)(_UNK_016efa28 + 0x16ef69c));
      iVar4 = 0;
      puVar6 = *(undefined4 **)(_UNK_016efa2c + 0x16ef6b4);
      puVar9 = *(undefined4 **)(_UNK_016efa30 + 0x16ef6bc);
      while( true ) {
        iVar7 = func_0x016efab8(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar4) break;
        iVar10 = *(int *)(iVar3 + 100);
        iVar7 = func_0x016efab8(param_1);
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
        func_0x026f1a28(iVar3,(int)((ulonglong)uVar11 >> 0x20),*(undefined4 *)(param_1 + 0x18),
                        *(undefined4 *)(param_1 + 0x1c),0);
        func_0x026f1af8(iVar3,extraout_r1,*(undefined4 *)(param_1 + 0x20),
                        *(undefined4 *)(param_1 + 0x24),0);
      }
      if (*(int *)(**(int **)(_UNK_016efa38 + 0x16ef79c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_016efa3c + 0x16ef7b8));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x1c);
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
        iVar7 = 0;
        puVar6 = *(undefined4 **)(_UNK_016efa40 + 0x16ef7f4);
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
          iVar10 = func_0x024f0f34(iVar8,uVar2,**(undefined4 **)(_UNK_016efa44 + 0x16ef834));
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
      func_0x024f0ea4(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_016efa48 + 0x16ef8cc));
    }
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f04d4(iVar1,uVar2,**(undefined4 **)(_UNK_016efa4c + 0x16ef900));
  }
  else {
    iVar1 = func_0x029540a4(0x1866,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028a0c74(iVar1,param_1,0);
  }
  return;
}

