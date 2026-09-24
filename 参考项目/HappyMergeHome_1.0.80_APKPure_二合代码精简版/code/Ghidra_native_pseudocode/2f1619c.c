
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f2619c(undefined4 *param_1,undefined4 param_2,int param_3)

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
  
  pcVar8 = (char *)(_UNK_02f26528 + 0x2f261bc);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f2652c + 0x2f261d0));
    func_0x01438628(*(undefined4 *)(_UNK_02f26530 + 0x2f261dc));
    func_0x01438628(*(undefined4 *)(_UNK_02f26534 + 0x2f261e8));
    func_0x01438628(*(undefined4 *)(_UNK_02f26538 + 0x2f261f4));
    func_0x01438628(*(undefined4 *)(_UNK_02f2653c + 0x2f26200));
    func_0x01438628(*(undefined4 *)(_UNK_02f26540 + 0x2f2620c));
    func_0x01438628(*(undefined4 *)(_UNK_02f26544 + 0x2f26218));
    func_0x01438628(*(undefined4 *)(_UNK_02f26548 + 0x2f26224));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3a32,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02f25aac(param_2,0);
    if (iVar1 == 0) {
      puVar12 = *(undefined4 **)(_UNK_02f26574 + 0x2f26448);
      *param_1 = 0;
      param_1[1] = 0;
      uVar7 = *puVar12;
    }
    else {
      if (*(int *)(**(int **)(_UNK_02f2654c + 0x2f262ac) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f26550 + 0x2f262cc));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x38);
      if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
        iVar10 = 0;
        puVar12 = *(undefined4 **)(_UNK_02f26554 + 0x2f26308);
        do {
          iVar2 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_02f26558 + 0x2f26314));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (param_3 == 0) {
            func_0x014388e4();
          }
          if (iVar2 == *(int *)(param_3 + 0x10)) {
            if (*(int *)(**(int **)(_UNK_02f2655c + 0x2f26354) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x02af5448(param_3,0);
            iVar3 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_02f26560 + 0x2f26384));
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
              iVar4 = func_0x04cd26d0(iVar3,iVar9,*puVar12);
              if (iVar9 < iVar11 + -1) {
                if ((iVar4 < iVar2) &&
                   (iVar11 = func_0x04cd26d0(iVar3,iVar9 + 1,*puVar12), iVar2 <= iVar11)) {
LAB_02f26468:
                  iVar2 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_02f26564 + 0x2f26478))
                  ;
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = *(int *)(iVar2 + 0x14);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  uVar5 = func_0x04cd26d0(iVar2,iVar9,*puVar12);
                  iVar1 = func_0x04cfd760(iVar1,iVar10,**(undefined4 **)(_UNK_02f26568 + 0x2f264c4))
                  ;
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x18);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar6 = func_0x04cd26d0(iVar1,iVar9,*puVar12);
                  puVar12 = *(undefined4 **)(_UNK_02f2656c + 0x2f26514);
                  *param_1 = 0;
                  param_1[1] = 0;
                  uVar7 = *puVar12;
                  goto LAB_02f2645c;
                }
              }
              else if (iVar4 < iVar2) goto LAB_02f26468;
              iVar9 = iVar9 + 1;
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(iVar1 + 0xc));
      }
      uVar7 = **(undefined4 **)(_UNK_02f26570 + 0x2f2642c);
      *param_1 = 0;
      param_1[1] = 0;
    }
    uVar5 = 0;
    uVar6 = 0;
LAB_02f2645c:
    func_0x03fc9b24(param_1,uVar5,uVar6,uVar7);
  }
  else {
    iVar1 = func_0x029540a4(0x3a32,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d4168(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

