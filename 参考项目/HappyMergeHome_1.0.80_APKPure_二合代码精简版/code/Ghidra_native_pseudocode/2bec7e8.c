
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bfc7e8(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02bfcc08 + 0x2bfc800);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bfcc0c + 0x2bfc814));
    func_0x01438628(*(undefined4 *)(_UNK_02bfcc10 + 0x2bfc820));
    func_0x01438628(*(undefined4 *)(_UNK_02bfcc14 + 0x2bfc82c));
    func_0x01438628(*(undefined4 *)(_UNK_02bfcc18 + 0x2bfc838));
    func_0x01438628(*(undefined4 *)(_UNK_02bfcc1c + 0x2bfc844));
    func_0x01438628(*(undefined4 *)(_UNK_02bfcc20 + 0x2bfc850));
    func_0x01438628(*(undefined4 *)(_UNK_02bfcc24 + 0x2bfc85c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2187,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2187,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  if (0 < param_1[0x2d]) {
    func_0x02bff75c(param_1,param_1[0x2d],0);
  }
  piVar9 = *(int **)(_UNK_02bfcc28 + 0x2bfc8d0);
  piVar6 = param_1 + 0x2f;
  iVar1 = *piVar6;
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024eec50(iVar1,0,0);
  if (iVar1 == 0) {
    piVar8 = (int *)0x0;
    if (param_2 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(_UNK_02bfcc2c + 0x2bfc934) + 0xb8);
      if ((uVar2 <= *(byte *)(*param_2 + 0xb8)) &&
         (piVar8 = param_2,
         *(int *)(*(int *)(*param_2 + 100) + uVar2 * 4 + -4) !=
         **(int **)(_UNK_02bfcc2c + 0x2bfc934))) {
        piVar8 = (int *)0x0;
      }
    }
    iVar1 = param_1[5];
    iVar4 = param_1[0x2f];
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar7 = func_0x014e94d8(iVar1,0);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024eec50(iVar4,uVar7,0);
    if (iVar1 == 0) {
      piVar10 = *(int **)(_UNK_02bfcc38 + 0x2bfca3c);
      iVar1 = *piVar6;
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x014387a4();
      }
      pcVar5 = (char *)(_UNK_02bfcc3c + 0x2bfca5c);
      if (*pcVar5 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02bfcc40 + 0x2bfca70));
        *pcVar5 = '\x01';
      }
      iVar4 = *piVar10;
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x014387a4();
        iVar4 = *piVar10;
      }
      func_0x0362bc28(iVar1,piVar8,*(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x10),
                      **(undefined4 **)(_UNK_02bfcc44 + 0x2bfcaa0));
      iVar1 = param_1[0x30];
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar12 = func_0x024ef144(iVar1,0,0);
      iVar1 = (int)((ulonglong)uVar12 >> 0x20);
      bVar11 = (int)uVar12 != 0;
      if (bVar11) {
        iVar1 = param_1[0x2e];
      }
      if (bVar11 && iVar1 != 0) {
        func_0x02bfcc54(param_1);
      }
      uVar7 = func_0x02bff51c(param_1,piVar8);
      iVar1 = param_1[0x2f];
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x024eec50(uVar7,iVar1,0);
      if (iVar1 != 0) {
        iVar1 = param_1[0x30];
        if (*(int *)(*piVar9 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x024eec50(iVar1,0,0);
        if (iVar1 != 0) {
          iVar1 = *piVar6;
          if (*(int *)(*piVar10 + 0x74) == 0) {
            func_0x014387a4();
          }
          pcVar5 = (char *)(_UNK_02bfcc48 + 0x2bfcb80);
          if (*pcVar5 == '\0') {
            func_0x01438628(*(undefined4 *)(_UNK_02bfcc4c + 0x2bfcb94));
            *pcVar5 = '\x01';
          }
          iVar4 = *piVar10;
          if (*(int *)(iVar4 + 0x74) == 0) {
            func_0x014387a4();
            iVar4 = *piVar10;
          }
          func_0x0362bc28(iVar1,piVar8,*(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x14),
                          **(undefined4 **)(_UNK_02bfcc50 + 0x2bfcbc4));
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0x120))(param_1,1,*(undefined4 *)(*param_1 + 0x124));
      func_0x02bfebcc(param_1,piVar8);
      if (param_1[4] != -1) {
        if (*(int *)(**(int **)(_UNK_02bfcc30 + 0x2bfc9ec) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bfcc34 + 0x2bfca08));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        FUN_02b9f600(iVar1,1,0);
      }
    }
    param_1[0x2e] = 0;
    func_0x014385cc(param_1 + 0x2e,0);
    param_1[0x2f] = 0;
    func_0x014385cc(piVar6,0);
    *(undefined1 *)(param_1 + 0x32) = 0;
  }
  else {
    param_1[0x2e] = 0;
    func_0x014385cc(param_1 + 0x2e,0);
    *(undefined1 *)(param_1 + 0x32) = 0;
  }
  param_1[0x2d] = -1;
  return;
}

