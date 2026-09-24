
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01757b48(undefined4 *param_1,int param_2,undefined4 param_3)

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
  
  pcVar7 = (char *)(_UNK_01757e5c + 0x1757b68);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01757e60 + 0x1757b7c));
    func_0x01438628(*(undefined4 *)(_UNK_01757e64 + 0x1757b88));
    func_0x01438628(*(undefined4 *)(_UNK_01757e68 + 0x1757b94));
    func_0x01438628(*(undefined4 *)(_UNK_01757e6c + 0x1757ba0));
    func_0x01438628(*(undefined4 *)(_UNK_01757e70 + 0x1757bac));
    func_0x01438628(*(undefined4 *)(_UNK_01757e74 + 0x1757bb8));
    func_0x01438628(*(undefined4 *)(_UNK_01757e78 + 0x1757bc4));
    func_0x01438628(*(undefined4 *)(_UNK_01757e7c + 0x1757bd0));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8d11,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01757e80 + 0x1757c40) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_01747688();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_01757990(iVar1,param_3);
    if (*(int *)(**(int **)(_UNK_01757e84 + 0x1757c84) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01757e88 + 0x1757ca4));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029b1058(iVar1,uVar2,0);
    iVar8 = 0;
    iVar5 = 0;
    if (iVar1 != 0) {
      iVar5 = *(int *)(iVar1 + 0xc);
      iVar8 = 0;
      if (0 < iVar5) {
        iVar8 = 0;
        iVar6 = 0;
        puVar10 = *(undefined4 **)(_UNK_01757e8c + 0x1757d00);
        puVar9 = *(undefined4 **)(_UNK_01757e90 + 0x1757d08);
        do {
          if (*(int *)(**(int **)(_UNK_01757e94 + 0x1757d10) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x014e9518(*puVar10);
          iVar3 = func_0x0152983c(iVar1,iVar6,*puVar9);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar3 + 8);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x02be153c(iVar5,uVar2,0);
          if (*(int *)(**(int **)(_UNK_01757e98 + 0x1757d7c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x014e9518(*puVar10);
          iVar4 = func_0x0152983c(iVar1,iVar6,*puVar9);
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
            iVar5 = func_0x0152983c(iVar1,iVar6,uVar2);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x01757ea0(param_2,*(undefined4 *)(iVar5 + 8));
          }
          iVar5 = *(int *)(iVar1 + 0xc);
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + iVar3;
        } while (iVar6 < iVar5);
      }
    }
    uVar2 = **(undefined4 **)(_UNK_01757e9c + 0x1757e40);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x024f1088(param_1,iVar8,iVar5,uVar2);
  }
  else {
    iVar1 = func_0x029540a4(0x8d11,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02913cb8(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

