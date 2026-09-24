
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c3c930(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_20;
  
  iVar1 = func_0x02953fd4(0xe81,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xe81,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_20 = 0;
    uVar2 = func_0x0286e8b4(iVar1,param_1,param_2,param_3);
    return uVar2;
  }
  pcVar4 = (char *)(_UNK_02c3d504 + 0x2c3d044);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c3d508 + 0x2c3d058));
    func_0x01438628(*(undefined4 *)(_UNK_02c3d50c + 0x2c3d064));
    func_0x01438628(*(undefined4 *)(_UNK_02c3d510 + 0x2c3d070));
    func_0x01438628(*(undefined4 *)(_UNK_02c3d514 + 0x2c3d07c));
    func_0x01438628(*(undefined4 *)(_UNK_02c3d518 + 0x2c3d088));
    func_0x01438628(*(undefined4 *)(_UNK_02c3d51c + 0x2c3d094));
    func_0x01438628(*(undefined4 *)(_UNK_02c3d520 + 0x2c3d0a0));
    func_0x01438628(*(undefined4 *)(_UNK_02c3d524 + 0x2c3d0ac));
    func_0x01438628(*(undefined4 *)(_UNK_02c3d528 + 0x2c3d0b8));
    func_0x01438628(*(undefined4 *)(_UNK_02c3d52c + 0x2c3d0c4));
    func_0x01438628(*(undefined4 *)(_UNK_02c3d530 + 0x2c3d0d0));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar2 = 0;
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0xe82,0);
  if (iVar1 == 0) {
    uVar9 = func_0x02c3d564(param_1,param_2);
    iVar3 = (int)uVar9;
    iVar1 = 0;
    iVar5 = (int)((ulonglong)uVar9 >> 0x20);
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0xc);
      iVar5 = iVar3;
    }
    if (iVar3 != 0 && iVar1 != 0) {
      func_0x0152da0c(&uStack_48,iVar5,**(undefined4 **)(_UNK_02c3d534 + 0x2c3d17c));
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      iStack_2c = iStack_3c;
      puVar6 = *(undefined4 **)(_UNK_02c3d538 + 0x2c3d19c);
      piVar8 = *(int **)(_UNK_02c3d53c + 0x2c3d1a4);
      iVar1 = 0;
LAB_02c3d1a4:
      iStack_4c = iVar1;
      iVar1 = func_0x04878f14(&uStack_38,*puVar6);
      iVar5 = iStack_2c;
      if (iVar1 != 0) {
        iVar1 = iStack_4c;
        if (iStack_2c != 0) {
          uVar2 = *(undefined4 *)(iStack_2c + 0xc);
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x024eec50(uVar2,0,0);
          if (iVar3 == 0) {
            if (param_3 != 0) {
              iVar3 = *(int *)(iVar5 + 0xc);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = FUN_02c251d8(iVar3,0);
              if (iVar3 != 0) goto LAB_02c3d1a4;
            }
            iVar1 = iVar5;
            if (iStack_4c != 0) {
              if (*(int *)(**(int **)(_UNK_02c3d540 + 0x2c3d238) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c3d544 + 0x2c3d254));
              iVar3 = *(int *)(iVar5 + 0xc);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              uVar2 = FUN_02c1969c(iVar3,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x029a6fa8(iVar1,uVar2,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar7 = *(int *)(iVar1 + 0x2c);
              iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c3d548 + 0x2c3d2b8));
              iVar3 = *(int *)(iStack_4c + 0xc);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              uVar2 = FUN_02c1969c(iVar3,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar3 = func_0x029a6fa8(iVar1,uVar2,0);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar1 = iStack_4c;
              if (*(int *)(iVar3 + 0x2c) < iVar7) {
                iStack_4c = iVar5;
                iVar1 = iStack_4c;
              }
            }
          }
        }
        goto LAB_02c3d1a4;
      }
      func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02c3d550 + 0x2c3d32c));
      if (iStack_4c == 0) {
        uVar2 = 0;
      }
      else {
        FUN_02c3aa18(param_1,1);
        if (*(int *)(**(int **)(_UNK_02c3d558 + 0x2c3d358) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c3d55c + 0x2c3d374));
        piVar8 = *(int **)(_UNK_02c3d560 + 0x2c3d388);
        iVar5 = **(int **)(*piVar8 + 0x5c);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x02c3d868(iVar5);
        iVar3 = **(int **)(*piVar8 + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02c3d868(iVar3);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar2 = FUN_02bec634(iVar3,iStack_4c,0);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        FUN_02bed744(&uStack_48,iVar5,uVar2,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        FUN_02c38c68(iVar1,uStack_48,uStack_44,uStack_40,0x3f800000,0);
        uVar2 = 1;
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0xe82,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0286e8b4(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}

