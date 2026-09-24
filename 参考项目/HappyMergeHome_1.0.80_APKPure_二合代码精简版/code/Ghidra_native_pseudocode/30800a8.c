
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030900a8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar5 = (char *)(_UNK_030901a8 + 0x30900bc);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030901ac + 0x30900d0));
    func_0x01438628(*(undefined4 *)(_UNK_030901b0 + 0x30900dc));
    func_0x01438628(*(undefined4 *)(_UNK_030901b4 + 0x30900e8));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_030901b8 + 0x30900fc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030901bc + 0x3090118));
  uVar2 = FUN_03086fc8(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02bb3638(iVar1,uVar2,0);
  iVar1 = func_0x02b1cc10(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b1ec60(iVar1,1,0);
  if (*(int *)(**(int **)(_UNK_030901c0 + 0x309017c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_0307cfc8();
  if (iVar1 != 0) {
    pcVar5 = (char *)(_UNK_030a80d8 + 0x30a7da0);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_030a80dc + 0x30a7db4),0);
      func_0x01438628(*(undefined4 *)(_UNK_030a80e0 + 0x30a7dc0));
      func_0x01438628(*(undefined4 *)(_UNK_030a80e4 + 0x30a7dcc));
      func_0x01438628(*(undefined4 *)(_UNK_030a80e8 + 0x30a7dd8));
      func_0x01438628(*(undefined4 *)(_UNK_030a80ec + 0x30a7de4));
      func_0x01438628(*(undefined4 *)(_UNK_030a80f0 + 0x30a7df0));
      func_0x01438628(*(undefined4 *)(_UNK_030a80f4 + 0x30a7dfc));
      func_0x01438628(*(undefined4 *)(_UNK_030a80f8 + 0x30a7e08));
      func_0x01438628(*(undefined4 *)(_UNK_030a80fc + 0x30a7e14));
      *pcVar5 = '\x01';
    }
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_40 = 0;
    uStack_30 = 0;
    iVar3 = func_0x02953fd4(0x7579,0);
    if (iVar3 == 0) {
      if ((*(int *)(iVar1 + 0x44) != 0) &&
         (iVar3 = func_0x046cc548(*(int *)(iVar1 + 0x44),
                                  **(undefined4 **)(_UNK_030a8100 + 0x30a7e98)), iVar3 != 0)) {
        iVar1 = *(int *)(iVar1 + 0x44);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x046ccdcc(&uStack_58,iVar1,**(undefined4 **)(_UNK_030a8104 + 0x30a7ec8));
        uStack_40 = uStack_58;
        uStack_3c = uStack_54;
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        puVar6 = *(undefined4 **)(_UNK_030a8108 + 0x30a7ef4);
        piVar7 = *(int **)(_UNK_030a810c + 0x30a7efc);
        piVar8 = *(int **)(_UNK_030a8110 + 0x30a7f04);
        while (iVar1 = func_0x048a60cc(&uStack_40,*puVar6), uVar2 = uStack_34, iVar1 != 0) {
          iVar1 = (int)uStack_30;
          if (*(int *)(*piVar7 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x024eec50(iVar1,0,0);
          if (iVar3 == 0) {
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar4 = func_0x014e94d8(iVar1,0);
            if (*(int *)(*piVar7 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar3 = func_0x024eec50(uVar4,0,0);
            if (iVar3 == 0) {
              if (*(int *)(*piVar8 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar3 = FUN_03078444(0);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              uVar2 = FUN_030871f0(iVar3,uVar2,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x014e94d8(iVar1,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              func_0x014e94e8(iVar1,uVar2,0);
            }
          }
        }
        func_0x048a6218(&uStack_40,**(undefined4 **)(_UNK_030a8118 + 0x30a8018));
      }
    }
    else {
      iVar3 = func_0x029540a4(0x7579,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x02868e1c(iVar3,iVar1,0);
    }
    return;
  }
  return;
}

