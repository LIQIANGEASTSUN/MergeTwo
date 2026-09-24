
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0330edb4(int param_1)

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
  
  pcVar5 = (char *)(_UNK_0330f4a4 + 0x330edcc);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0330f4a8 + 0x330ede0));
    func_0x01438628(*(undefined4 *)(_UNK_0330f4ac + 0x330edec));
    func_0x01438628(*(undefined4 *)(_UNK_0330f4b0 + 0x330edf8));
    func_0x01438628(*(undefined4 *)(_UNK_0330f4b4 + 0x330ee04));
    func_0x01438628(*(undefined4 *)(_UNK_0330f4b8 + 0x330ee10));
    func_0x01438628(*(undefined4 *)(_UNK_0330f4bc + 0x330ee1c));
    func_0x01438628(*(undefined4 *)(_UNK_0330f4c0 + 0x330ee28));
    func_0x01438628(*(undefined4 *)(_UNK_0330f4c4 + 0x330ee34));
    func_0x01438628(*(undefined4 *)(_UNK_0330f4c8 + 0x330ee40));
    func_0x01438628(*(undefined4 *)(_UNK_0330f4cc + 0x330ee4c));
    func_0x01438628(*(undefined4 *)(_UNK_0330f4d0 + 0x330ee58));
    func_0x01438628(*(undefined4 *)(_UNK_0330f4d4 + 0x330ee64));
    func_0x01438628(*(undefined4 *)(_UNK_0330f4d8 + 0x330ee70));
    func_0x01438628(*(undefined4 *)(_UNK_0330f4dc + 0x330ee7c));
    func_0x01438628(*(undefined4 *)(_UNK_0330f4e0 + 0x330ee88));
    func_0x01438628(*(undefined4 *)(_UNK_0330f4e4 + 0x330ee94));
    func_0x01438628(*(undefined4 *)(_UNK_0330f4e8 + 0x330eea0));
    func_0x01438628(*(undefined4 *)(_UNK_0330f4ec + 0x330eeac));
    func_0x01438628(*(undefined4 *)(_UNK_0330f4f0 + 0x330eeb8));
    func_0x01438628(*(undefined4 *)(_UNK_0330f4f4 + 0x330eec4));
    func_0x01438628(*(undefined4 *)(_UNK_0330f4f8 + 0x330eed0));
    func_0x01438628(*(undefined4 *)(_UNK_0330f4fc + 0x330eedc));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x13d8,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0330f500 + 0x330ef40) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0330f504 + 0x330ef5c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0330f508 + 0x330ef7c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x270);
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x04753c80(iVar1,uVar2,**(undefined4 **)(_UNK_0330f50c + 0x330efc4));
    if (iVar3 == 0) {
      func_0x0330f558(param_1);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0330f510 + 0x330efe8));
      func_0x026f22a8(iVar3,0);
      if (*(int *)(**(int **)(_UNK_0330f514 + 0x330f004) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x03b2c734(**(undefined4 **)(_UNK_0330f518 + 0x330f020));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x01f903f0(iVar4,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026f2120(iVar3,uVar2,0);
      iVar4 = func_0x0330f5c0(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar4 = func_0x0330f5c0(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x04cd366c(&uStack_48,iVar4,**(undefined4 **)(_UNK_0330f51c + 0x330f0c4));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar6 = *(undefined4 **)(_UNK_0330f520 + 0x330f0e0);
        puVar9 = *(undefined4 **)(_UNK_0330f524 + 0x330f0e8);
        while (iVar4 = func_0x04873f24(&uStack_38,*puVar6), uVar2 = uStack_2c, iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar3 + 0x18);
          iVar4 = func_0x0330f6f8(param_1,uVar2);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar4 + 8);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar7,uVar2,*puVar9);
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        }
        func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_0330f528 + 0x330f164));
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar3 + 100);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x03b75c84(iVar4,**(undefined4 **)(_UNK_0330f530 + 0x330f1a4));
      iVar4 = 0;
      puVar6 = *(undefined4 **)(_UNK_0330f534 + 0x330f1bc);
      puVar9 = *(undefined4 **)(_UNK_0330f538 + 0x330f1c4);
      while( true ) {
        iVar7 = func_0x0330f5c0(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar4) break;
        iVar10 = *(int *)(iVar3 + 100);
        iVar7 = func_0x0330f5c0(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x04cd26d0(iVar7,iVar4,*puVar6);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        func_0x03b75ba0(iVar10,uVar2,*puVar9);
        iVar4 = iVar4 + 1;
      }
      uVar11 = func_0x029f3fe4(param_1,0);
      if ((int)uVar11 != 0) {
        func_0x026f1a28(iVar3,(int)((ulonglong)uVar11 >> 0x20),*(undefined4 *)(param_1 + 0x18),
                        *(undefined4 *)(param_1 + 0x1c),0);
        func_0x026f1af8(iVar3,extraout_r1,*(undefined4 *)(param_1 + 0x20),
                        *(undefined4 *)(param_1 + 0x24),0);
      }
      if (*(int *)(**(int **)(_UNK_0330f540 + 0x330f2a4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_0330f544 + 0x330f2c0));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x1c);
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
        iVar7 = 0;
        puVar6 = *(undefined4 **)(_UNK_0330f548 + 0x330f2fc);
        do {
          iVar8 = *(int *)(iVar3 + 0x48);
          iVar10 = func_0x04cfd760(iVar4,iVar7,*puVar6);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar10 + 8);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar10 = func_0x04cd2d7c(iVar8,uVar2,**(undefined4 **)(_UNK_0330f54c + 0x330f33c));
          if (iVar10 == 0) {
            iVar8 = *(int *)(iVar3 + 0x48);
            iVar10 = func_0x04cfd760(iVar4,iVar7,*puVar6);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar10 + 8);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            func_0x03b75ba0(iVar8,uVar2,*puVar9);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar4 + 0xc));
      }
      uVar2 = func_0x029f05a0(param_1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x03b73a64(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_0330f550 + 0x330f3d4));
    }
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b73d40(iVar1,uVar2,**(undefined4 **)(_UNK_0330f554 + 0x330f408));
  }
  else {
    iVar1 = func_0x029540a4(0x13d8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028a0c74(iVar1,param_1,0);
  }
  return;
}

