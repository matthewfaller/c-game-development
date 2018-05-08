
# Chapter 2, Hello Data

There are many pre-defined data types in c, each one will be useful depending on your needs. 

For example, counting the number baddies left in your spawn wave would be best suited to an _integer_ type, rather than a _floating point_ type. It would not make much sense to spawn 3.7 enemies in the next wave. 

## Integer Types

Integers are quite good for counting, indexing, or enumerating. 

Counting: 
```c
    int ammoCount = 20;

    // later on...

    ammoCount += ammoClipPickup;
```
Indexing:
```c
    int weaponSelectionIndex = getLastSelectedWeaponFromMouseWheel();

    Weapon *currentWeapon = weaponArray[weaponSelectionIndex];

    if (currentWeapon->hasAmmo) {
        currentWeapon->fire();
    }
```

enumeration:
```c

    enum WeaponIds {
        fist = 0,
        kick = 1,
        pistol = 2,
        // ...
        antimatterParticleDisplacementCannon = 19
    };
```


## Floating Point Types

## Character Types

## Custom Types

### Quick Examples

## Practice Problems