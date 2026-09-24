
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03009c84(int param_1)

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
  
  pcVar5 = (char *)(_UNK_0300a37c + 0x3009c9c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0300a380 + 0x3009cb0));
    func_0x01438628(*(undefined4 *)(_UNK_0300a384 + 0x3009cbc));
    func_0x01438628(*(undefined4 *)(_UNK_0300a388 + 0x3009cc8));
    func_0x01438628(*(undefined4 *)(_UNK_0300a38c + 0x3009cd4));
    func_0x01438628(*(undefined4 *)(_UNK_0300a390 + 0x3009ce0));
    func_0x01438628(*(undefined4 *)(_UNK_0300a394 + 0x3009cec));
    func_0x01438628(*(undefined4 *)(_UNK_0300a398 + 0x3009cf8));
    func_0x01438628(*(undefined4 *)(_UNK_0300a39c + 0x3009d04));
    func_0x01438628(*(undefined4 *)(_UNK_0300a3a0 + 0x3009d10));
    func_0x01438628(*(undefined4 *)(_UNK_0300a3a4 + 0x3009d1c));
    func_0x01438628(*(undefined4 *)(_UNK_0300a3a8 + 0x3009d28));
    func_0x01438628(*(undefined4 *)(_UNK_0300a3ac + 0x3009d34));
    func_0x01438628(*(undefined4 *)(_UNK_0300a3b0 + 0x3009d40));
    func_0x01438628(*(undefined4 *)(_UNK_0300a3b4 + 0x3009d4c));
    func_0x01438628(*(undefined4 *)(_UNK_0300a3b8 + 0x3009d58));
    func_0x01438628(*(undefined4 *)(_UNK_0300a3bc + 0x3009d64));
    func_0x01438628(*(undefined4 *)(_UNK_0300a3c0 + 0x3009d70));
    func_0x01438628(*(undefined4 *)(_UNK_0300a3c4 + 0x3009d7c));
    func_0x01438628(*(undefined4 *)(_UNK_0300a3c8 + 0x3009d88));
    func_0x01438628(*(undefined4 *)(_UNK_0300a3cc + 0x3009d94));
    func_0x01438628(*(undefined4 *)(_UNK_0300a3d0 + 0x3009da0));
    func_0x01438628(*(undefined4 *)(_UNK_0300a3d4 + 0x3009dac));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0xf56,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0300a3d8 + 0x3009e10) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0300a3dc + 0x3009e2c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0300a3e0 + 0x3009e4c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x390);
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x04753c80(iVar1,uVar2,**(undefined4 **)(_UNK_0300a3e4 + 0x3009e94));
    if (iVar3 == 0) {
      func_0x0300a430(param_1);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0300a3e8 + 0x3009eb8));
      FUN_026efebc(iVar3,0);
      if (*(int *)(**(int **)(_UNK_0300a3ec + 0x3009ed4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x03b2c734(**(undefined4 **)(_UNK_0300a3f0 + 0x3009ef0));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x01f903f0(iVar4,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      FUN_026efba8(iVar3,uVar2,0);
      iVar4 = func_0x0300a498(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar4 = func_0x0300a498(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x04cd366c(&uStack_48,iVar4,**(undefined4 **)(_UNK_0300a3f4 + 0x3009f94));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar6 = *(undefined4 **)(_UNK_0300a3f8 + 0x3009fb0);
        puVar9 = *(undefined4 **)(_UNK_0300a3fc + 0x3009fb8);
        while (iVar4 = func_0x04873f24(&uStack_38,*puVar6), uVar2 = uStack_2c, iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar3 + 0x18);
          iVar4 = func_0x0300a5d0(param_1,uVar2);
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
        func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_0300a400 + 0x300a034));
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar3 + 100);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x03b75c84(iVar4,**(undefined4 **)(_UNK_0300a408 + 0x300a074));
      iVar4 = 0;
      puVar6 = *(undefined4 **)(_UNK_0300a40c + 0x300a08c);
      puVar9 = *(undefined4 **)(_UNK_0300a410 + 0x300a094);
      while( true ) {
        iVar7 = func_0x0300a498(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar4) break;
        iVar10 = *(int *)(iVar3 + 100);
        iVar7 = func_0x0300a498(param_1);
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
        FUN_026ef4b0(iVar3,(int)((ulonglong)uVar11 >> 0x20),*(undefined4 *)(param_1 + 0x18),
                     *(undefined4 *)(param_1 + 0x1c),0);
        FUN_026ef580(iVar3,extraout_r1,*(undefined4 *)(param_1 + 0x20),
                     *(undefined4 *)(param_1 + 0x24),0);
      }
      if (*(int *)(**(int **)(_UNK_0300a418 + 0x300a174) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_0300a41c + 0x300a190));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x1c);
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
        iVar7 = 0;
        puVar6 = *(undefined4 **)(_UNK_0300a420 + 0x300a1cc);
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
          iVar10 = func_0x04cd2d7c(iVar8,uVar2,**(undefined4 **)(_UNK_0300a424 + 0x300a20c));
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
      func_0x03b73a64(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_0300a428 + 0x300a2a4));
      func_0x0300a68c(param_1);
    }
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b73d40(iVar1,uVar2,**(undefined4 **)(_UNK_0300a42c + 0x300a2e0));
  }
  else {
    iVar1 = func_0x029540a4(0xf56,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0289639c(iVar1,param_1,0);
  }
  return;
}

