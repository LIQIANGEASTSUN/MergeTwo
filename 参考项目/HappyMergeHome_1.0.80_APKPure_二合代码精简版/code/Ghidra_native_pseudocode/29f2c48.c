
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a02c48(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  
  pcVar4 = (char *)(_UNK_02a03028 + 0x2a02c60);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02a0302c + 0x2a02c74));
    func_0x01438628(*(undefined4 *)(_UNK_02a03030 + 0x2a02c80));
    func_0x01438628(*(undefined4 *)(_UNK_02a03034 + 0x2a02c8c));
    func_0x01438628(*(undefined4 *)(_UNK_02a03038 + 0x2a02c98));
    *pcVar4 = '\x01';
  }
  iVar5 = param_1[5];
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = FUN_029fd838(iVar5);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = func_0x03615c48(*(undefined4 *)(iVar5 + 0x20),**(undefined4 **)(_UNK_02a0303c + 0x2a02cd4)
                         );
  if (iVar5 == param_1[6]) {
    piVar8 = *(int **)(_UNK_02a03040 + 0x2a02cf4);
    iVar5 = **(int **)(*piVar8 + 0x5c);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x02b63a9c(iVar5,0x100a,0,0);
    if (iVar5 == 0) {
      piVar7 = *(int **)(_UNK_02a03044 + 0x2a02d34);
      iVar5 = **(int **)(*piVar8 + 0x5c);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_02a00b80();
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x30);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02be9134(iVar1,0);
      uVar6 = param_1[7];
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar6) {
        func_0x014388e8();
      }
      iVar1 = *(int *)(iVar1 + uVar6 * 4 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        piVar2 = (int *)0x0;
      }
      else {
        iVar1 = *(int *)(iVar1 + 0xa4);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        piVar2 = (int *)func_0x024eecb8(iVar1,0);
      }
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_02a00b80();
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x30);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02be9134(iVar1,0);
      uVar6 = param_1[7];
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar6) {
        func_0x014388e8();
      }
      iVar1 = *(int *)(iVar1 + uVar6 * 4 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0xa4);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = func_0x024eecb8(iVar1,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      piVar7 = (int *)0x0;
      if ((piVar2 != (int *)0x0) &&
         (piVar7 = piVar2, *piVar2 != **(int **)(_UNK_02a03048 + 0x2a02ebc))) {
        piVar7 = (int *)0x0;
      }
      func_0x02b63f30(iVar5,0x100a,piVar7,0,0,1,uVar3,0);
      iVar5 = **(int **)(*piVar8 + 0x5c);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x02b6127c(iVar5,0x100a,0,0,0);
    }
  }
  *param_1 = 0xfffffffe;
  (*(code *)&UNK_0505659c)(param_1 + 1,0);
  return;
}

