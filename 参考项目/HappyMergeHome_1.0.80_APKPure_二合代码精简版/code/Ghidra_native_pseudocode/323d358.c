
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0324d358(undefined4 param_1)

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
  
  pcVar5 = (char *)(_UNK_0324d458 + 0x324d36c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0324d45c + 0x324d380));
    func_0x01438628(*(undefined4 *)(_UNK_0324d460 + 0x324d38c));
    func_0x01438628(*(undefined4 *)(_UNK_0324d464 + 0x324d398));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0324d468 + 0x324d3ac) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0324d46c + 0x324d3c8));
  uVar2 = FUN_03244250(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02bb3638(iVar1,uVar2,0);
  iVar1 = func_0x02b1cc10(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b1ec60(iVar1,1,0);
  if (*(int *)(**(int **)(_UNK_0324d470 + 0x324d42c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_0323a23c();
  if (iVar1 != 0) {
    pcVar5 = (char *)(_UNK_03264e9c + 0x3264b64);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_03264ea0 + 0x3264b78),0);
      func_0x01438628(*(undefined4 *)(_UNK_03264ea4 + 0x3264b84));
      func_0x01438628(*(undefined4 *)(_UNK_03264ea8 + 0x3264b90));
      func_0x01438628(*(undefined4 *)(_UNK_03264eac + 0x3264b9c));
      func_0x01438628(*(undefined4 *)(_UNK_03264eb0 + 0x3264ba8));
      func_0x01438628(*(undefined4 *)(_UNK_03264eb4 + 0x3264bb4));
      func_0x01438628(*(undefined4 *)(_UNK_03264eb8 + 0x3264bc0));
      func_0x01438628(*(undefined4 *)(_UNK_03264ebc + 0x3264bcc));
      func_0x01438628(*(undefined4 *)(_UNK_03264ec0 + 0x3264bd8));
      *pcVar5 = '\x01';
    }
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_40 = 0;
    uStack_30 = 0;
    iVar3 = func_0x02953fd4(0x7fb9,0);
    if (iVar3 == 0) {
      if ((*(int *)(iVar1 + 0x44) != 0) &&
         (iVar3 = func_0x046cc548(*(int *)(iVar1 + 0x44),
                                  **(undefined4 **)(_UNK_03264ec4 + 0x3264c5c)), iVar3 != 0)) {
        iVar1 = *(int *)(iVar1 + 0x44);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x046ccdcc(&uStack_58,iVar1,**(undefined4 **)(_UNK_03264ec8 + 0x3264c8c));
        uStack_40 = uStack_58;
        uStack_3c = uStack_54;
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        puVar6 = *(undefined4 **)(_UNK_03264ecc + 0x3264cb8);
        piVar7 = *(int **)(_UNK_03264ed0 + 0x3264cc0);
        piVar8 = *(int **)(_UNK_03264ed4 + 0x3264cc8);
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
              iVar3 = FUN_032356b8(0);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              uVar2 = FUN_03244478(iVar3,uVar2,0);
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
        func_0x048a6218(&uStack_40,**(undefined4 **)(_UNK_03264edc + 0x3264ddc));
      }
    }
    else {
      iVar3 = func_0x029540a4(0x7fb9,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x02868e1c(iVar3,iVar1,0);
    }
    return;
  }
  return;
}

