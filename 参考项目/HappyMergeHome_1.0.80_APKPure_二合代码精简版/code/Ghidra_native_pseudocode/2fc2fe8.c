
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fd2fe8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_02fd33cc + 0x2fd3000);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fd33d0 + 0x2fd3014));
    func_0x01438628(*(undefined4 *)(_UNK_02fd33d4 + 0x2fd3020));
    func_0x01438628(*(undefined4 *)(_UNK_02fd33d8 + 0x2fd302c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd33dc + 0x2fd3038));
    func_0x01438628(*(undefined4 *)(_UNK_02fd33e0 + 0x2fd3044));
    func_0x01438628(*(undefined4 *)(_UNK_02fd33e4 + 0x2fd3050));
    func_0x01438628(*(undefined4 *)(_UNK_02fd33e8 + 0x2fd305c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd33ec + 0x2fd3068));
    func_0x01438628(*(undefined4 *)(_UNK_02fd33f0 + 0x2fd3074));
    func_0x01438628(*(undefined4 *)(_UNK_02fd33f4 + 0x2fd3080));
    func_0x01438628(*(undefined4 *)(_UNK_02fd33f8 + 0x2fd308c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd33fc + 0x2fd3098));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7108,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x7108,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02fd3400 + 0x2fd30f4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd3404 + 0x2fd3110));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_02fd3408 + 0x2fd3130));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x38c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_02fd340c + 0x2fd3164));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02fd3410 + 0x2fd317c));
  func_0x04cfd2f0(iVar1,uVar6,**(undefined4 **)(_UNK_02fd3414 + 0x2fd3194));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar7) {
    puVar9 = *(undefined4 **)(_UNK_02fd3418 + 0x2fd31c0);
    puVar8 = *(undefined4 **)(_UNK_02fd341c + 0x2fd31c8);
    do {
      if (*(int *)(**(int **)(_UNK_02fd3420 + 0x2fd31d0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd3424 + 0x2fd31ec));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_02fd3428 + 0x2fd320c));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x38c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x04cfd760(iVar1,uVar7,*puVar9);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x03b73d40(iVar5,uVar6,*puVar8);
      iVar2 = func_0x029f05a0(param_1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x04cfd760(iVar1,uVar7,*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x04f6a364(iVar2,uVar6,0);
      if (iVar2 == 0) {
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar5 + 0x14);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x046c2130(iVar2,**(undefined4 **)(_UNK_02fd342c + 0x2fd32e4));
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) == 0) {
            if (*(int *)(**(int **)(_UNK_02fd3430 + 0x2fd331c) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd3434 + 0x2fd3338));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_02fd3438 + 0x2fd3358));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x38c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar6 = func_0x04cfd760(iVar1,uVar7,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x03b73bf8(iVar5,uVar6,**(undefined4 **)(_UNK_02fd343c + 0x2fd33b0));
          }
        }
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 < 0x80000000);
  }
  return;
}

