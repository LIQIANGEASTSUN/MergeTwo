
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0167eacc(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_0167ee54 + 0x167eaec);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0167ee58 + 0x167eb00));
    func_0x01438628(*(undefined4 *)(_UNK_0167ee5c + 0x167eb0c));
    func_0x01438628(*(undefined4 *)(_UNK_0167ee60 + 0x167eb18));
    func_0x01438628(*(undefined4 *)(_UNK_0167ee64 + 0x167eb24));
    func_0x01438628(*(undefined4 *)(_UNK_0167ee68 + 0x167eb30));
    func_0x01438628(*(undefined4 *)(_UNK_0167ee6c + 0x167eb3c));
    func_0x01438628(*(undefined4 *)(_UNK_0167ee70 + 0x167eb48));
    func_0x01438628(*(undefined4 *)(_UNK_0167ee74 + 0x167eb54));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3bbe,0);
  if (iVar1 == 0) {
    iVar1 = FUN_016769c0(param_2);
    if (iVar1 == 0) {
      uVar7 = **(undefined4 **)(_UNK_0167eea0 + 0x167ed70);
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      if (*(int *)(**(int **)(_UNK_0167ee78 + 0x167ebd4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0167ee7c + 0x167ebf4));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x18);
      if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
        iVar10 = 0;
        puVar12 = *(undefined4 **)(_UNK_0167ee80 + 0x167ec30);
        do {
          iVar2 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_0167ee84 + 0x167ec3c));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (param_3 == 0) {
            func_0x014388e4();
          }
          if (iVar2 == *(int *)(param_3 + 0x10)) {
            if (*(int *)(**(int **)(_UNK_0167ee88 + 0x167ec7c) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x02af5448(param_3,0);
            iVar3 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_0167ee8c + 0x167ecac));
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x10);
            iVar9 = 0;
            while( true ) {
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar11 = *(int *)(iVar3 + 0xc);
              if (iVar11 <= iVar9) break;
              iVar4 = func_0x024f0530(iVar3,iVar9,*puVar12);
              if (iVar9 < iVar11 + -1) {
                if ((iVar4 < iVar2) &&
                   (iVar11 = func_0x024f0530(iVar3,iVar9 + 1,*puVar12), iVar2 <= iVar11)) {
LAB_0167ed94:
                  iVar2 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_0167ee90 + 0x167eda4))
                  ;
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = *(int *)(iVar2 + 0x14);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  uVar5 = func_0x024f0530(iVar2,iVar9,*puVar12);
                  iVar1 = func_0x0152983c(iVar1,iVar10,**(undefined4 **)(_UNK_0167ee94 + 0x167edf0))
                  ;
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x18);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar6 = func_0x024f0530(iVar1,iVar9,*puVar12);
                  puVar12 = *(undefined4 **)(_UNK_0167ee98 + 0x167ee40);
                  *param_1 = 0;
                  param_1[1] = 0;
                  uVar7 = *puVar12;
                  goto LAB_0167ed88;
                }
              }
              else if (iVar4 < iVar2) goto LAB_0167ed94;
              iVar9 = iVar9 + 1;
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(iVar1 + 0xc));
      }
      uVar7 = **(undefined4 **)(_UNK_0167ee9c + 0x167ed54);
      *param_1 = 0;
      param_1[1] = 0;
    }
    uVar5 = 0;
    uVar6 = 0;
LAB_0167ed88:
    func_0x024f1088(param_1,uVar5,uVar6,uVar7);
  }
  else {
    iVar1 = func_0x029540a4(0x3bbe,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d4168(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

