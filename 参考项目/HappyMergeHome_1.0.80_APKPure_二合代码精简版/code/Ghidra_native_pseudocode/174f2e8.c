
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0175f2e8(undefined4 param_1)

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
  
  pcVar5 = (char *)(_UNK_0175f3e8 + 0x175f2fc);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0175f3ec + 0x175f310));
    func_0x01438628(*(undefined4 *)(_UNK_0175f3f0 + 0x175f31c));
    func_0x01438628(*(undefined4 *)(_UNK_0175f3f4 + 0x175f328));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0175f3f8 + 0x175f33c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0175f3fc + 0x175f358));
  uVar2 = FUN_01756208(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02bb3638(iVar1,uVar2,0);
  iVar1 = func_0x02b1cc10(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b1ec60(iVar1,1,0);
  if (*(int *)(**(int **)(_UNK_0175f400 + 0x175f3bc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_0174c20c();
  if (iVar1 != 0) {
    pcVar5 = (char *)(_UNK_0179264c + 0x1792314);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_01792650 + 0x1792328),0);
      func_0x01438628(*(undefined4 *)(_UNK_01792654 + 0x1792334));
      func_0x01438628(*(undefined4 *)(_UNK_01792658 + 0x1792340));
      func_0x01438628(*(undefined4 *)(_UNK_0179265c + 0x179234c));
      func_0x01438628(*(undefined4 *)(_UNK_01792660 + 0x1792358));
      func_0x01438628(*(undefined4 *)(_UNK_01792664 + 0x1792364));
      func_0x01438628(*(undefined4 *)(_UNK_01792668 + 0x1792370));
      func_0x01438628(*(undefined4 *)(_UNK_0179266c + 0x179237c));
      func_0x01438628(*(undefined4 *)(_UNK_01792670 + 0x1792388));
      *pcVar5 = '\x01';
    }
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_40 = 0;
    uStack_30 = 0;
    iVar3 = func_0x02953fd4(0x8cde,0);
    if (iVar3 == 0) {
      if ((*(int *)(iVar1 + 0x44) != 0) &&
         (iVar3 = func_0x014e96b8(*(int *)(iVar1 + 0x44),
                                  **(undefined4 **)(_UNK_01792674 + 0x179240c)), iVar3 != 0)) {
        iVar1 = *(int *)(iVar1 + 0x44);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x024f05dc(&uStack_58,iVar1,**(undefined4 **)(_UNK_01792678 + 0x179243c));
        uStack_40 = uStack_58;
        uStack_3c = uStack_54;
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        puVar6 = *(undefined4 **)(_UNK_0179267c + 0x1792468);
        piVar7 = *(int **)(_UNK_01792680 + 0x1792470);
        piVar8 = *(int **)(_UNK_01792684 + 0x1792478);
        while (iVar1 = func_0x015147bc(&uStack_40,*puVar6), uVar2 = uStack_34, iVar1 != 0) {
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
              iVar3 = FUN_01747688(0);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              uVar2 = FUN_01756430(iVar3,uVar2,0);
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
        func_0x024f05ec(&uStack_40,**(undefined4 **)(_UNK_0179268c + 0x179258c));
      }
    }
    else {
      iVar3 = func_0x029540a4(0x8cde,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x02868e1c(iVar3,iVar1,0);
    }
    return;
  }
  return;
}

