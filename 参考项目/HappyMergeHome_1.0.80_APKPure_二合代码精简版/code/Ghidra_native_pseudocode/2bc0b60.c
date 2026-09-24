
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bd0b60(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  
  pcVar7 = (char *)(_UNK_02bd0e3c + 0x2bd0b80);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd0e40 + 0x2bd0b9c));
    func_0x01438628(*(undefined4 *)(_UNK_02bd0e44 + 0x2bd0ba8));
    func_0x01438628(*(undefined4 *)(_UNK_02bd0e48 + 0x2bd0bb4));
    func_0x01438628(*(undefined4 *)(_UNK_02bd0e4c + 0x2bd0bc0));
    func_0x01438628(*(undefined4 *)(_UNK_02bd0e50 + 0x2bd0bcc));
    func_0x01438628(*(undefined4 *)(_UNK_02bd0e54 + 0x2bd0bd8));
    func_0x01438628(*(undefined4 *)(_UNK_02bd0e58 + 0x2bd0be4));
    *pcVar7 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x1dd7,0);
  if (iVar3 == 0) {
    if (*(int *)(**(int **)(_UNK_02bd0e5c + 0x2bd0c4c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02bd0e60 + 0x2bd0c68));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x029a6fa8(iVar3,param_2,0);
    if ((iVar3 != 0) && (iVar4 = FUN_02bad204(param_1,param_3,param_4), iVar4 != 0)) {
      iVar5 = param_5;
      if (param_5 == 0) {
        iVar5 = *(int *)(iVar3 + 0xd4);
      }
      FUN_026f78e8(iVar4,iVar5,0);
      if (*(int *)(**(int **)(_UNK_02bd0e64 + 0x2bd0cd8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_02bd0e68 + 0x2bd0cf4));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x02c4baac(iVar5,iVar3,0);
      if ((-1 < param_3) && (iVar5 != 0)) {
        iVar5 = FUN_02bad050(param_1,param_4);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = *(int *)(iVar5 + 0x10);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        if (param_3 < *(int *)(iVar5 + 0xc)) {
          if (*(int *)(iVar3 + 0x1c) == 99) {
            FUN_026f6bf8(iVar4,3,0);
            pcVar7 = (char *)(_UNK_026f7200 + 0x26f7178);
            if (*pcVar7 == '\0') {
              func_0x01438628(*(undefined4 *)(_UNK_026f7204 + 0x26f718c),0,0);
              func_0x01438628(*(undefined4 *)(_UNK_026f7208 + 0x26f7198));
              *pcVar7 = '\x01';
            }
            if (*(int *)(iVar4 + 0x3c) == 0) {
              return;
            }
            piVar1 = *(int **)(_UNK_026f720c + 0x26f71b8);
            *(undefined4 *)(iVar4 + 0x3c) = 0;
            if (*(int *)(*piVar1 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_026f7210 + 0x26f71d8));
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(uint *)(iVar3 + 0x60);
            *(uint *)(iVar3 + 0x60) = uVar2 + 1;
            *(uint *)(iVar3 + 100) = *(int *)(iVar3 + 100) + (uint)(0xfffffffe < uVar2);
            return;
          }
          if (*(int *)(iVar4 + 0xc) == 1) {
            iVar5 = *(int *)(iVar3 + 0xe4);
            if (iVar5 < 1) {
              iVar5 = func_0x02bd7af0(param_1,iVar3);
            }
            FUN_026f7160(iVar4,iVar5 + param_5,0);
            if (*(int *)(**(int **)(_UNK_02bd0e6c + 0x2bd0dd4) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02bd0e70 + 0x2bd0df0));
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar8 = func_0x026ffbe0(iVar3,0);
            uVar8 = func_0x014e6e04((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
            uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
            FUN_026f72d8(iVar4,uVar6,(int)uVar8,uVar6,0);
          }
        }
      }
    }
  }
  else {
    iVar3 = func_0x029540a4(0x1dd7,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x028b55f4(iVar3,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}

