
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01843dfc(undefined4 *param_1,int param_2,undefined4 param_3)

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
  
  pcVar7 = (char *)(_UNK_01844110 + 0x1843e1c);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01844114 + 0x1843e30));
    func_0x01438628(*(undefined4 *)(_UNK_01844118 + 0x1843e3c));
    func_0x01438628(*(undefined4 *)(_UNK_0184411c + 0x1843e48));
    func_0x01438628(*(undefined4 *)(_UNK_01844120 + 0x1843e54));
    func_0x01438628(*(undefined4 *)(_UNK_01844124 + 0x1843e60));
    func_0x01438628(*(undefined4 *)(_UNK_01844128 + 0x1843e6c));
    func_0x01438628(*(undefined4 *)(_UNK_0184412c + 0x1843e78));
    func_0x01438628(*(undefined4 *)(_UNK_01844130 + 0x1843e84));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x9254,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01844134 + 0x1843ef4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_01833590();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_01843c44(iVar1,param_3);
    if (*(int *)(**(int **)(_UNK_01844138 + 0x1843f38) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0184413c + 0x1843f58));
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
        puVar10 = *(undefined4 **)(_UNK_01844140 + 0x1843fb4);
        puVar9 = *(undefined4 **)(_UNK_01844144 + 0x1843fbc);
        do {
          if (*(int *)(**(int **)(_UNK_01844148 + 0x1843fc4) + 0x74) == 0) {
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
          if (*(int *)(**(int **)(_UNK_0184414c + 0x1844030) + 0x74) == 0) {
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
            func_0x01844154(param_2,*(undefined4 *)(iVar5 + 8));
          }
          iVar5 = *(int *)(iVar1 + 0xc);
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + iVar3;
        } while (iVar6 < iVar5);
      }
    }
    uVar2 = **(undefined4 **)(_UNK_01844150 + 0x18440f4);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x024f1088(param_1,iVar8,iVar5,uVar2);
  }
  else {
    iVar1 = func_0x029540a4(0x9254,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02913cb8(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

