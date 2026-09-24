
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fd91e0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_02fd94f4 + 0x2fd9200);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fd94f8 + 0x2fd9214));
    func_0x01438628(*(undefined4 *)(_UNK_02fd94fc + 0x2fd9220));
    func_0x01438628(*(undefined4 *)(_UNK_02fd9500 + 0x2fd922c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd9504 + 0x2fd9238));
    func_0x01438628(*(undefined4 *)(_UNK_02fd9508 + 0x2fd9244));
    func_0x01438628(*(undefined4 *)(_UNK_02fd950c + 0x2fd9250));
    func_0x01438628(*(undefined4 *)(_UNK_02fd9510 + 0x2fd925c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd9514 + 0x2fd9268));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7114,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02fd9518 + 0x2fd92d8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_02fc8d20();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_02fd9028(iVar1,param_3);
    if (*(int *)(**(int **)(_UNK_02fd951c + 0x2fd931c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd9520 + 0x2fd933c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_029b1058(iVar1,uVar2,0);
    iVar8 = 0;
    iVar5 = 0;
    if (iVar1 != 0) {
      iVar5 = *(int *)(iVar1 + 0xc);
      iVar8 = 0;
      if (0 < iVar5) {
        iVar8 = 0;
        iVar6 = 0;
        puVar10 = *(undefined4 **)(_UNK_02fd9524 + 0x2fd9398);
        puVar9 = *(undefined4 **)(_UNK_02fd9528 + 0x2fd93a0);
        do {
          if (*(int *)(**(int **)(_UNK_02fd952c + 0x2fd93a8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x04e4a028(*puVar10);
          iVar3 = func_0x04cfd760(iVar1,iVar6,*puVar9);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar3 + 8);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x02be153c(iVar5,uVar2,0);
          if (*(int *)(**(int **)(_UNK_02fd9530 + 0x2fd9414) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x04e4a028(*puVar10);
          iVar4 = func_0x04cfd760(iVar1,iVar6,*puVar9);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar4 + 8);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x02be1348(iVar5,uVar2,0);
          if (iVar5 == 0 && iVar3 == 1) {
            uVar2 = *puVar9;
            *(undefined1 *)(param_2 + 0x52) = 1;
            iVar5 = func_0x04cfd760(iVar1,iVar6,uVar2);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x02fd9538(param_2,*(undefined4 *)(iVar5 + 8));
          }
          iVar5 = *(int *)(iVar1 + 0xc);
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + iVar3;
        } while (iVar6 < iVar5);
      }
    }
    uVar2 = **(undefined4 **)(_UNK_02fd9534 + 0x2fd94d8);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x03fc9b24(param_1,iVar8,iVar5,uVar2);
  }
  else {
    iVar1 = func_0x029540a4(0x7114,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02913cb8(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

