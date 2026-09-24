
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031457fc(int param_1)

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
  
  pcVar5 = (char *)(_UNK_03145ef4 + 0x3145814);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03145ef8 + 0x3145828));
    func_0x01438628(*(undefined4 *)(_UNK_03145efc + 0x3145834));
    func_0x01438628(*(undefined4 *)(_UNK_03145f00 + 0x3145840));
    func_0x01438628(*(undefined4 *)(_UNK_03145f04 + 0x314584c));
    func_0x01438628(*(undefined4 *)(_UNK_03145f08 + 0x3145858));
    func_0x01438628(*(undefined4 *)(_UNK_03145f0c + 0x3145864));
    func_0x01438628(*(undefined4 *)(_UNK_03145f10 + 0x3145870));
    func_0x01438628(*(undefined4 *)(_UNK_03145f14 + 0x314587c));
    func_0x01438628(*(undefined4 *)(_UNK_03145f18 + 0x3145888));
    func_0x01438628(*(undefined4 *)(_UNK_03145f1c + 0x3145894));
    func_0x01438628(*(undefined4 *)(_UNK_03145f20 + 0x31458a0));
    func_0x01438628(*(undefined4 *)(_UNK_03145f24 + 0x31458ac));
    func_0x01438628(*(undefined4 *)(_UNK_03145f28 + 0x31458b8));
    func_0x01438628(*(undefined4 *)(_UNK_03145f2c + 0x31458c4));
    func_0x01438628(*(undefined4 *)(_UNK_03145f30 + 0x31458d0));
    func_0x01438628(*(undefined4 *)(_UNK_03145f34 + 0x31458dc));
    func_0x01438628(*(undefined4 *)(_UNK_03145f38 + 0x31458e8));
    func_0x01438628(*(undefined4 *)(_UNK_03145f3c + 0x31458f4));
    func_0x01438628(*(undefined4 *)(_UNK_03145f40 + 0x3145900));
    func_0x01438628(*(undefined4 *)(_UNK_03145f44 + 0x314590c));
    func_0x01438628(*(undefined4 *)(_UNK_03145f48 + 0x3145918));
    func_0x01438628(*(undefined4 *)(_UNK_03145f4c + 0x3145924));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x1768,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03145f50 + 0x3145988) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03145f54 + 0x31459a4));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_03145f58 + 0x31459c4));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x2fc);
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x04753c80(iVar1,uVar2,**(undefined4 **)(_UNK_03145f5c + 0x3145a0c));
    if (iVar3 == 0) {
      func_0x03145fa8(param_1);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_03145f60 + 0x3145a30));
      func_0x026f15d8(iVar3,0);
      if (*(int *)(**(int **)(_UNK_03145f64 + 0x3145a4c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x03b2c734(**(undefined4 **)(_UNK_03145f68 + 0x3145a68));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x01f903f0(iVar4,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026f12d8(iVar3,uVar2,0);
      iVar4 = func_0x03146010(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar4 = func_0x03146010(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x04cd366c(&uStack_48,iVar4,**(undefined4 **)(_UNK_03145f6c + 0x3145b0c));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar6 = *(undefined4 **)(_UNK_03145f70 + 0x3145b28);
        puVar9 = *(undefined4 **)(_UNK_03145f74 + 0x3145b30);
        while (iVar4 = func_0x04873f24(&uStack_38,*puVar6), uVar2 = uStack_2c, iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar3 + 0x18);
          iVar4 = func_0x03146148(param_1,uVar2);
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
        func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_03145f78 + 0x3145bac));
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar3 + 100);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x03b75c84(iVar4,**(undefined4 **)(_UNK_03145f80 + 0x3145bec));
      iVar4 = 0;
      puVar6 = *(undefined4 **)(_UNK_03145f84 + 0x3145c04);
      puVar9 = *(undefined4 **)(_UNK_03145f88 + 0x3145c0c);
      while( true ) {
        iVar7 = func_0x03146010(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar4) break;
        iVar10 = *(int *)(iVar3 + 100);
        iVar7 = func_0x03146010(param_1);
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
        func_0x026f0be0(iVar3,(int)((ulonglong)uVar11 >> 0x20),*(undefined4 *)(param_1 + 0x18),
                        *(undefined4 *)(param_1 + 0x1c),0);
        func_0x026f0cb0(iVar3,extraout_r1,*(undefined4 *)(param_1 + 0x20),
                        *(undefined4 *)(param_1 + 0x24),0);
      }
      if (*(int *)(**(int **)(_UNK_03145f90 + 0x3145cec) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_03145f94 + 0x3145d08));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x1c);
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
        iVar7 = 0;
        puVar6 = *(undefined4 **)(_UNK_03145f98 + 0x3145d44);
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
          iVar10 = func_0x04cd2d7c(iVar8,uVar2,**(undefined4 **)(_UNK_03145f9c + 0x3145d84));
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
      func_0x03b73a64(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_03145fa0 + 0x3145e1c));
      func_0x03146204(param_1);
    }
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b73d40(iVar1,uVar2,**(undefined4 **)(_UNK_03145fa4 + 0x3145e58));
  }
  else {
    iVar1 = func_0x029540a4(0x1768,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028a8c5c(iVar1,param_1,0);
  }
  return;
}

