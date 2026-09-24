
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a2fe8(int param_1)

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
  
  pcVar5 = (char *)(_UNK_017a36e0 + 0x17a3000);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017a36e4 + 0x17a3014));
    func_0x01438628(*(undefined4 *)(_UNK_017a36e8 + 0x17a3020));
    func_0x01438628(*(undefined4 *)(_UNK_017a36ec + 0x17a302c));
    func_0x01438628(*(undefined4 *)(_UNK_017a36f0 + 0x17a3038));
    func_0x01438628(*(undefined4 *)(_UNK_017a36f4 + 0x17a3044));
    func_0x01438628(*(undefined4 *)(_UNK_017a36f8 + 0x17a3050));
    func_0x01438628(*(undefined4 *)(_UNK_017a36fc + 0x17a305c));
    func_0x01438628(*(undefined4 *)(_UNK_017a3700 + 0x17a3068));
    func_0x01438628(*(undefined4 *)(_UNK_017a3704 + 0x17a3074));
    func_0x01438628(*(undefined4 *)(_UNK_017a3708 + 0x17a3080));
    func_0x01438628(*(undefined4 *)(_UNK_017a370c + 0x17a308c));
    func_0x01438628(*(undefined4 *)(_UNK_017a3710 + 0x17a3098));
    func_0x01438628(*(undefined4 *)(_UNK_017a3714 + 0x17a30a4));
    func_0x01438628(*(undefined4 *)(_UNK_017a3718 + 0x17a30b0));
    func_0x01438628(*(undefined4 *)(_UNK_017a371c + 0x17a30bc));
    func_0x01438628(*(undefined4 *)(_UNK_017a3720 + 0x17a30c8));
    func_0x01438628(*(undefined4 *)(_UNK_017a3724 + 0x17a30d4));
    func_0x01438628(*(undefined4 *)(_UNK_017a3728 + 0x17a30e0));
    func_0x01438628(*(undefined4 *)(_UNK_017a372c + 0x17a30ec));
    func_0x01438628(*(undefined4 *)(_UNK_017a3730 + 0x17a30f8));
    func_0x01438628(*(undefined4 *)(_UNK_017a3734 + 0x17a3104));
    func_0x01438628(*(undefined4 *)(_UNK_017a3738 + 0x17a3110));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x1739,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_017a373c + 0x17a3174) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017a3740 + 0x17a3190));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_017a3744 + 0x17a31b0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x30c);
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x024eede4(iVar1,uVar2,**(undefined4 **)(_UNK_017a3748 + 0x17a31f8));
    if (iVar3 == 0) {
      func_0x017a3794(param_1);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_017a374c + 0x17a321c));
      func_0x026ce8d8(iVar3,0);
      if (*(int *)(**(int **)(_UNK_017a3750 + 0x17a3238) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e96a8(**(undefined4 **)(_UNK_017a3754 + 0x17a3254));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x01f903f0(iVar4,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026ce694(iVar3,uVar2,0);
      iVar4 = func_0x017a37fc(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar4 = func_0x017a37fc(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x024ef7ac(&uStack_48,iVar4,**(undefined4 **)(_UNK_017a3758 + 0x17a32f8));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar6 = *(undefined4 **)(_UNK_017a375c + 0x17a3314);
        puVar9 = *(undefined4 **)(_UNK_017a3760 + 0x17a331c);
        while (iVar4 = func_0x015101bc(&uStack_38,*puVar6), uVar2 = uStack_2c, iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar3 + 0x18);
          iVar4 = func_0x017a3934(param_1,uVar2);
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
        func_0x024ef7bc(&uStack_38,**(undefined4 **)(_UNK_017a3764 + 0x17a3398));
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar3 + 100);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x024f04c8(iVar4,**(undefined4 **)(_UNK_017a376c + 0x17a33d8));
      iVar4 = 0;
      puVar6 = *(undefined4 **)(_UNK_017a3770 + 0x17a33f0);
      puVar9 = *(undefined4 **)(_UNK_017a3774 + 0x17a33f8);
      while( true ) {
        iVar7 = func_0x017a37fc(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar4) break;
        iVar10 = *(int *)(iVar3 + 100);
        iVar7 = func_0x017a37fc(param_1);
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
        func_0x026cdf9c(iVar3,(int)((ulonglong)uVar11 >> 0x20),*(undefined4 *)(param_1 + 0x18),
                        *(undefined4 *)(param_1 + 0x1c),0);
        func_0x026ce06c(iVar3,extraout_r1,*(undefined4 *)(param_1 + 0x20),
                        *(undefined4 *)(param_1 + 0x24),0);
      }
      if (*(int *)(**(int **)(_UNK_017a377c + 0x17a34d8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_017a3780 + 0x17a34f4));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x1c);
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
        iVar7 = 0;
        puVar6 = *(undefined4 **)(_UNK_017a3784 + 0x17a3530);
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
          iVar10 = func_0x024f0f34(iVar8,uVar2,**(undefined4 **)(_UNK_017a3788 + 0x17a3570));
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
      func_0x024f0ea4(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_017a378c + 0x17a3608));
      func_0x017a39f0(param_1);
    }
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f04d4(iVar1,uVar2,**(undefined4 **)(_UNK_017a3790 + 0x17a3644));
  }
  else {
    iVar1 = func_0x029540a4(0x1739,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028a812c(iVar1,param_1,0);
  }
  return;
}

